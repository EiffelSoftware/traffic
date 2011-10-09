note
	description: "A segment of a route that goes along a single transportation line."

class
	LEG

inherit
	ANY
		redefine
			copy,
			is_equal
		end

create
	make

feature {NONE} -- Initialization

	make (a_origin, a_destination: STATION; a_line: LINE)
			-- Set `origin' to `a_origin', `destination' to `a_destination' and `line' to `a_line'.
		require
			origin_exists: a_origin /= Void
			destination_exists: a_destination /= Void
			line_exists: a_line /= Void
			origin_on_line: a_line.stations.has (a_origin)
			destination_on_line: a_line.stations.has (a_destination)
		do
			origin := a_origin
			destination := a_destination
			line := a_line
		ensure
			origin_set: origin = a_origin
			destination_set: destination = a_destination
			line_set: line = a_line
			no_next: next = Void
		end

feature -- Initialization

	copy (other: like Current)
			-- Initialize by copying content from `other' including the `next' leg.
		do
			if other /= Current then
				origin := other.origin
				destination := other.destination
				line := other.line
				if other.next = Void then
					next := Void
				else
					next := other.next.twin
				end
			end
		end

feature -- Access

	origin: STATION
			-- Start station.

	destination: STATION
			-- End station.

	line: LINE
			-- Line that the leg goes along.

	direction: STATION
			-- Which direction does this leg go on `line'?
		require
			not_empty: origin /= destination
		do
			if line.stations.index_of (origin) < line.stations.index_of (destination) then
				Result := line.last
			else
				Result := line.first
			end
		end

	next: LEG
			-- Next leg in the route.

feature -- Measurement

	total_length: REAL_64
			-- Total length of this leg and the following ones (meters).
		do
			Result := line.distance (origin, destination)
			if next /= Void then
				Result := Result + next.total_length
			end
		end

feature -- Status report

	is_canonical: BOOLEAN
			-- Does it hold for this leg and the following ones
			-- that the lines of adjacent legs do not coincide?
		do
			Result := next = Void or else (next.line /= line and next.is_canonical)
		ensure
			different_lines: Result = (next = Void or else (next.line /= line and next.is_canonical))
		end

feature -- Comparison

	is_equal (other: like Current): BOOLEAN
			-- Does `other' start and end at the same stations, goes through the same line
			-- and has an equal `next' leg?
		do
			Result := origin = other.origin and destination = other.destination and line = other.line and
				next ~ other.next
		end

feature -- Modification

	link (other: LEG)
			-- Add `other' as the next leg in the route.
		require
			other_exists: other /= Void
			not_linked: next = Void
			connected: other.origin = destination
		do
			next := other
		ensure
			next_set: next = other
		end

	unlink
			-- Remove `next' leg.
		do
			next := Void
		ensure
			next_cleared: next = Void
		end

feature {LEG, ROUTE} -- Modification

	set_origin (a_origin: STATION)
			-- Set `origin' to `a_origin'.
		require
			origin_on_line: line.stations.has (a_origin)
		do
			origin := a_origin
		end

	set_destination (a_destination: STATION)
			-- Set `destination' to `a_destination'.
		require
			destination_on_line: line.stations.has (a_destination)
			unlinked: next = Void
		do
			destination := a_destination
		end

	reverse
			-- Switch `origin' and `destination'.
		require
			unlinked: next = Void
		local
			tmp: STATION
		do
			tmp := origin
			origin := destination
			destination := tmp
		ensure
			origin_set: origin = old destination
			destination_set: destination = old origin
		end

invariant
	origin_exists: origin /= Void
	destination_exists: destination /= Void
	line_exists: line /= Void
	origin_on_line: line.stations.has (origin)
	destination_on_line: line.stations.has (destination)
	linked_correctly: next /= Void implies next.origin = destination
end
