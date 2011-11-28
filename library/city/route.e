note
	description: "Route that consists of zero or more nonempy segments of transportation lines."

class
	ROUTE

inherit
	CITY_ITEM
		redefine
			is_equal,
			copy,
			out
		end

create
	make_empty

feature {NONE} -- Initialization

	make_empty (a_origin: STATION)
			-- Create route starting at station `a_origin'.
		require
			origin_exists: a_origin /= Void
		do
			create {V_ARRAYED_LIST [STATION]} internal_stations
			create {V_ARRAYED_LIST [LINE]} internal_lines
			internal_stations.extend_back (a_origin)
		ensure
			correct_origin: origin = a_origin
		end

	make (a_first_leg: LEG)
			-- Create route that follows legs starting with `a_first_leg'.
		require
			leg_exists: a_first_leg /= Void
		local
			l: LEG
		do
			create {V_ARRAYED_LIST [STATION]} internal_stations
			create {V_ARRAYED_LIST [LINE]} internal_lines
			internal_stations.extend_back (a_first_leg.origin)
			from
				l := a_first_leg
			until
				l = Void
			loop
				append_segment (l.line, l.destination)
				l := l.next
			end
		ensure
			correct_origin: origin = a_first_leg.origin
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
			Result := stations.first
		end

	destination: STATION
			-- Last station of the route.
		do
			Result := stations.last
		end

	stations: V_SEQUENCE [STATION]
			-- Stations the route goes through.
		do
			Result := internal_stations
		end

	lines: V_SEQUENCE [LINE]
			-- Lines taken along the route.
		do
			Result := internal_lines
		end

	length: REAL_64
			-- Total length (meters).
		local
			i: INTEGER
		do
			from
				i := 1
			until
				i > lines.count
			loop
				Result := Result + lines [i].distance (stations [i], stations [i + 1])
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

	minimize_lines
			-- Remove unnecessary line changes.
		local
			i: INTEGER
			li: V_ITERATOR [LINE]
		do
			from
				i := 1
			until
				i > internal_stations.count - 2
			loop
				from
					li := internal_stations [i].lines.new_cursor
				until
					li.after or else (internal_stations [i + 2].lines.has (li.item)
						and li.item.follows (internal_lines [i], internal_stations [i], internal_stations [i + 1])
						and li.item.follows (internal_lines [i + 1], internal_stations [i + 1], internal_stations [i + 2]))
				loop
					li.forth
				end
				if li.after then
					i := i + 1
				else
					internal_lines.remove_at (i + 1)
					internal_stations.remove_at (i + 1)
					internal_lines [i] := li.item
					if i > 1 then
						i := i - 1
					end
				end
			end
		ensure
			same_origin: origin = old origin
			same_destination: destination = old destination
			possible_less_changes: lines.count <= old lines.count
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
				Result := Result + " -" + internal_lines [i].kind.name + " " + internal_lines [i].number.out
					+ "-> " + internal_stations [i + 1].name
				i := i + 1
			end
		end

feature {CITY, CITY_ITEM} -- Implementation

	internal_stations: V_LIST [STATION]
			-- Stations the route goes through.

	internal_lines: V_LIST [LINE]
			-- Lines taken along the route.

	hash_code: INTEGER
			-- Hash code value.
		do
			Result := origin.name.hash_code
		end

invariant
	stations_exists: stations /= Void
	lines_exists: lines /= Void
	one_more_station: stations.count = lines.count + 1
	all_stations_on_lines: lines.for_all_indexes (agent (i: INTEGER): BOOLEAN
		do
			Result := lines [i].stations.has (stations [i]) and lines [i].stations.has (stations [i + 1])
		end)
	each_station_different_from_next: stations.for_all_indexes (agent (i: INTEGER): BOOLEAN
		do
			Result := i < stations.count implies stations [i] /= stations [i + 1]
		end)
	each_line_different_from_next: lines.for_all_indexes (agent (i: INTEGER): BOOLEAN
		do
			Result := i < lines.count implies lines [i] /= lines [i + 1]
		end)
	internal_stations_equal: internal_stations ~ stations
	internal_lines_equal: internal_lines ~ lines
end
