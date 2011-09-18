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
		require
			a_kind_exists: a_kind /= Void
		do
			name := a_name
			kind := a_kind
			color := kind.default_color
			create {V_ARRAYED_LIST [STATION]} internal_stations
		ensure
			name_set: name = a_name
			kind_set: kind = a_kind
			default_color: color = kind.default_color
			no_stations: stations.is_empty
		end

feature -- Access

	name: INTEGER
			-- Identifier (unique within city).

	kind: TRANSPORT_KIND
			-- Transportation kind.

	color: COLOR
			-- Color.

	stations: V_SEQUENCE [STATION]
			-- Stations the line goes through.
		do
			Result := internal_stations
		end

	north_terminal: STATION
			-- The first station of the line.
		require
			has_stations: not stations.is_empty
		do
			if stations.first.position.y > stations.last.position.y then
				Result := stations.first
			else
				Result := stations.last
			end
		end

	south_terminal: STATION
			-- The last stations of the line.
		require
			has_stations: not stations.is_empty
		do
			if stations.first.position.y > stations.last.position.y then
				Result := stations.last
			else
				Result := stations.first
			end
		end

	next_station (a_station, a_direction: STATION): STATION
			-- Next station after `a_station' in direction of terminal `a_direction'.
			-- Void if `a_station' is the last in this direction.
		require
			a_station_on_line: stations.has (a_station)
			a_direction_is_terminal: a_direction = north_terminal or a_direction = south_terminal
		local
			i: V_ITERATOR [STATION]
		do
			i := stations.new_cursor
			i.search_forth (a_station)
			if a_direction = stations.first then
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
			i1 := stations.index_of (s1)
			i2 := stations.index_of (s2)
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
				Result := Result + (stations [j].position - stations [j + step].position).length
				j := j + step
			end
		end

feature -- Comparison

	is_less alias "<" (other: like Current): BOOLEAN
			-- Is name of this line less than the name of `other'?
		do
			Result := name < other.name
		end

feature -- Property setting

	set_color (a_color: COLOR)
			-- Set `color' to `a_color'.
		do
			color := a_color
		ensure
			color_set: color = a_color
		end

feature {CITY} -- Property setting

	set_name (a_name: INTEGER)
			-- Set `name' to `a_name'.
		do
			name := a_name
		ensure
			name_set: name = a_name
		end

feature -- Output

	out: STRING
			-- Textual representation.
		do
			Result := kind.name + " line " + name.out
			if not stations.is_empty then
				Result.append (" (" + north_terminal.name + " -- " + south_terminal.name + ")")
			end
		end

feature {CITY} -- Implementation

	internal_stations: V_LIST [STATION]
			-- Stations the line goes through.

invariant
	kind_exists: kind /= Void
	stations_exists: stations /= Void
	color_exists: color /= Void
	all_stations_exist: across stations as i all i.item /= Void end
	all_stations_contain_current: across stations as i all i.item.lines.has (Current) end
	no_duplicates: across stations as i all stations.occurrences (i.item) = 1 end
	terminals: not stations.is_empty implies
		(north_terminal = stations.first and south_terminal = stations.last) or
		(north_terminal = stations.last and south_terminal = stations.first)
	north_and_south: not stations.is_empty implies north_terminal.position.y >= south_terminal.position.y
	internal_stations_equal: internal_stations ~ stations
end
