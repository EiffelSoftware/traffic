note
	description: "[
		Public transportation line.
		The lines goes through the same stations in both directions
		and only once through each station.
		]"

class
	LINE

inherit
	HASHABLE
		redefine
			out
		end

	COMPARABLE
		undefine
			is_equal
		redefine
			out
		end

create {CITY}
	make

feature {NONE} -- Initialization
	make (a_name: INTEGER; a_kind: TRANSPORT_KIND)
			-- Create a line of kind `a_kind' with name `a_name'.
		do
			name := a_name
			kind := a_kind
			create {V_ARRAYED_LIST [STATION]} internal_stations
		ensure
			name_set: name = a_name
			kind_set: kind = a_kind
			no_stations: stations.is_empty
		end

feature -- Access

	name: INTEGER
			-- Identifier (unique within city).

	kind: TRANSPORT_KIND
			-- Transportation kind.

	stations: V_LIST [STATION]
			-- A list of stations the line goes through.
		do
			Result := internal_stations.twin
		ensure
			result_exists: Result /= Void
			all_stations_exist: Result.for_all (agent (s: STATION): BOOLEAN do Result := s /= Void end)
			all_stations_contain_current: Result.for_all (agent (s: STATION): BOOLEAN do Result := s.lines.has (Current) end)
--			no_duplicates:
		end

	north_terminal: STATION
			-- The first station of the line.
		require
			has_stations: not stations.is_empty
		do
			if internal_stations.first.position.y > internal_stations.last.position.y then
				Result := internal_stations.first
			else
				Result := internal_stations.last
			end
		end

	south_terminal: STATION
			-- The last stations of the line.
		require
			has_stations: not stations.is_empty
		do
			if internal_stations.first.position.y > internal_stations.last.position.y then
				Result := internal_stations.last
			else
				Result := internal_stations.first
			end
		end

	next_station (a_station, a_direction: STATION): STATION
			-- Next station after `a_station' in direction of terminal `a_direction'.
			-- Void if `a_station' is the last in this direction.
		require
			a_station_on_line: stations.has (a_station)
			a_direction_is_terminal: a_direction = north_terminal or a_direction = south_terminal
		local
			i: V_INPUT_ITERATOR [STATION]
		do
			i := internal_stations.at_first
			i.search_forth (a_station)
			if a_direction = internal_stations.first then
				i.back
			else
				i.forth
			end
			if not i.off then
				Result := i.item
			end
		ensure
			void_iff_last: (a_station = a_direction) = (Result = Void)
		end

	hash_code: INTEGER
			-- Hash code value.
		do
			Result := name.hash_code
		end

feature -- Measurement

	distance (s1, s2: STATION): REAL_64
			-- Distance between `s1' and `s2' along this line (meters).
		require
			s1_on_line: stations.has (s1)
			s2_on_line: stations.has (s2)
		local
			i1, i2, j, step: INTEGER
		do
			i1 := internal_stations.index_of (s1)
			i2 := internal_stations.index_of (s2)
			if i2 >= i1 then
				step := 1
			else
				step := -1
			end
			from
				j := i1
			until
				j = i2
			loop
				Result := Result + (internal_stations [j].position - internal_stations [j + step].position).length
				j := j + step
			end
		end

feature -- Comparison

	is_less alias "<" (other: like Current): BOOLEAN
			-- Is name of this line less than the name of `other'?
		do
			Result := name < other.name
		end

feature -- Output

	out: STRING
			-- Textual representation.
		do
			Result := name.out + " " + kind.name + " [" + stations.out + "]"
		end

feature {CITY} -- Implementation

	internal_stations: V_LIST [STATION]
			-- Stations the line goes through.

invariant
	internal_stations_exists: internal_stations /= Void
	all_stations_exist: internal_stations.for_all (agent (s: STATION): BOOLEAN do Result := s /= Void end)
	all_stations_contain_current: internal_stations.for_all (agent (s: STATION): BOOLEAN do Result := s.lines.has (Current) end)
	no_duplicates: internal_stations.for_all (agent (s: STATION): BOOLEAN do Result := internal_stations.occurrences (s) = 1 end)
end
