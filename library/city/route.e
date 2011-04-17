note
	description: "Route that consists of zero or more nonempy segments of transportation lines."

class
	ROUTE

inherit
	ANY
		redefine
			is_equal,
			copy,
			out
		end

create
	make

feature {NONE} -- Initialization

	make (a_origin: STATION)
			-- Create route starting at station `a_origin'.
		do
			create {V_ARRAYED_LIST [STATION]} internal_stations
			create {V_ARRAYED_LIST [LINE]} internal_lines
			internal_stations.extend_back (a_origin)
		end

feature -- Initialization

	copy (other: like Current)
			-- Initialize by copying stations and lines from `other'.
		do
			if other /= Current then
				internal_stations := other.internal_stations.twin
				internal_lines := other.internal_lines.twin
			end
		end

feature -- Access

	origin: STATION
			-- First station of the route.
		do
			Result := internal_stations.first
		end

	destination: STATION
			-- Last station of the route.
		do
			Result := internal_stations.last
		end

	stations: V_LIST [STATION]
			-- A list of stations the route goes through.
		do
			Result := internal_stations.twin
		ensure
			result_exists: Result /= Void
		end

	lines: V_LIST [LINE]
			-- A list of lines taken along the route.
		do
			Result := internal_lines.twin
		ensure
			result_exists: Result /= Void
		end

	length: REAL_64
			-- Total length (meters).
		local
			i: INTEGER
		do
			from
				i := 1
			until
				i > internal_lines.count
			loop
				Result := Result + internal_lines [i].distance (internal_stations [i], internal_stations [i + 1])
				i := i + 1
			end
		end

feature -- Comparison

	is_equal (other: like Current): BOOLEAN
			-- Does `other' go through the same stations along the same lines?
		do
			Result := internal_stations ~ other.internal_stations and
				internal_lines ~ other.internal_lines
		end

feature -- Construction

	append_segment (line: LINE; new_destination: STATION)
			-- Add segment of line `line' from current destination to `new_destination'.
		require
			old_destination_on_line: line.stations.has (destination)
			new_destination_on_line: line.stations.has (new_destination)
			new: new_destination /= destination
		do
			if not internal_lines.is_empty and then internal_lines.last = line then
				internal_stations [internal_stations.count] := new_destination
			else
				internal_stations.extend_back (new_destination)
				internal_lines.extend_back (line)
			end
		ensure
			new_destination_set: destination = new_destination
			last_line_set: lines.last = line
		end

	prepend_segment (line: LINE; new_origin: STATION)
			-- Add segment of line `line' from `new_origin' to current origin.
		require
			old_origin_on_line: line.stations.has (origin)
			new_origin_on_line: line.stations.has (new_origin)
			new: new_origin /= origin
		do
			if not internal_lines.is_empty and then internal_lines.first = line then
				internal_stations [1] := new_origin
			else
				internal_stations.extend_front (new_origin)
				internal_lines.extend_front (line)
			end
		ensure
			new_origin_set: origin = new_origin
			first_line_set: lines.first = line
		end

feature -- Output

	out: STRING
			-- Textual representation.
		local
			i: INTEGER
		do
			Result := internal_stations.first.name
			from
				i := 1
			until
				i > internal_lines.count
			loop
				Result := Result + " -" + internal_lines [i].kind.name + " " + internal_lines [i].name.out
					+ "-> " + internal_stations [i + 1].name
				i := i + 1
			end
		end

feature {ROUTE} -- Implementation

	internal_stations: V_LIST [STATION]
			-- Stations the route goes through.

	internal_lines: V_LIST [LINE]
			-- Lines taken along the route.

invariant
	one_more_station: internal_stations.count = internal_lines.count + 1
end
