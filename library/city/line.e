note
	description: "[
		Public transportation line.
		The lines goes through the same stations in both directions
		and only once through each station.
		]"

class
	LINE

inherit
	CITY_ITEM
		redefine
			out
		end

	ITERABLE [STATION]
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
	make (a_number: INTEGER; a_kind: TRANSPORT_KIND; a_city: CITY)
			-- Create a line of kind `a_kind' with number `a_number' in `a_city'.
		require
			a_kind_exists: a_kind /= Void
		do
			number := a_number
			kind := a_kind
			city := a_city
			color := kind.default_color
			create {V_ARRAYED_LIST [STATION]} internal_stations
		ensure
			name_set: number = a_number
			kind_set: kind = a_kind
			city_set: city = a_city
			default_color: color = kind.default_color
			no_stations: is_empty
		end

feature -- Access

	number: INTEGER
			-- Identifier (unique within city).

	kind: TRANSPORT_KIND
			-- Transportation kind.

	color: COLOR
			-- Color.

	city: CITY
			-- City the line belongs to.

	speed: REAL_64
			-- Average speed of vehicles on this line (meters/second).
		do
			Result := kind.speed
		end

	stations: V_SEQUENCE [STATION]
			-- Stations the line goes through in default order.
			-- Default order corresponds to the order in which a transport goes through the stations
			-- and stays the same over time,
			-- but does not define which end of the line is first and which is last.
		do
			Result := internal_stations
		end

	new_cursor: V_ITERATOR [STATION]
			-- New cursor pointing at the first station.
		do
			Result := stations.new_cursor
		end

	i_th (i: INTEGER): STATION
			-- Station number `i' in default order.
		require
			i_in_bounds: 1 <= i and i <= count
		do
			Result := stations [i]
		end

	first: STATION
			-- First station in default order.
		require
			has_stations: not is_empty
		do
			Result := stations.first
		end

	last: STATION
			-- Last station in default order.
		require
			has_stations: not is_empty
		do
			Result := stations.last
		end

	north_terminal: STATION
			-- Terminal station at the north end of the line.
		require
			has_stations: not is_empty
		do
			if stations.first.position.y > stations.last.position.y then
				Result := stations.first
			else
				Result := stations.last
			end
		end

	south_terminal: STATION
			-- Terminal station at the south end of the line.
		require
			has_stations: not is_empty
		do
			if stations.first.position.y > stations.last.position.y then
				Result := stations.last
			else
				Result := stations.first
			end

		end

	west_terminal: STATION
			-- Terminal station at the west end of the line.
		require
			has_stations: not is_empty
		do
			if stations.first.position.x > stations.last.position.x then
				Result := stations.last
			else
				Result := stations.first
			end
		end

	east_terminal: STATION
			-- Terminal station at the east end of the line.
		require
			has_stations: not is_empty
		do
			if stations.first.position.x > stations.last.position.x then
				Result := stations.first
			else
				Result := stations.last
			end
		end

	other_terminal (a_station: STATION): STATION
			-- Opposite terminal from `a_station'.
		require
			is_terminal: is_terminal (a_station)
		do
			if a_station = first then
				Result := last
			else
				Result := first
			end
		ensure
			is_terminal: is_terminal (Result)
			different: count > 1 implies Result /= a_station
		end

	next_station (a_station, a_direction: STATION): STATION
			-- Next station after `a_station' in direction of terminal `a_direction'.
			-- Void if `a_station' is the last in this direction.
		require
			a_station_on_line: has_station (a_station)
			a_direction_is_terminal: a_direction = first or a_direction = last
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

feature -- Status report

	is_empty: BOOLEAN
			-- Are there no stations on this line?
		do
			Result := stations.is_empty
		end


	has_station (a_station: STATION): BOOLEAN
			-- Does this line go through `a_station'?
		do
			Result := stations.has (a_station)
		end

	is_terminal (a_station: STATION): BOOLEAN
			-- Is `a_station' a terminal station of this line?
		do
			Result := a_station = first or a_station = last
		ensure
			first_or_last: Result = (a_station = first or a_station = last)
		end

feature -- Measurement

	count: INTEGER
			-- Number of stations.
		do
			Result := stations.count
		end

	distance (s1, s2: STATION): REAL_64
			-- Distance between `s1' and `s2' along this line (meters).
		require
			s1_on_line: has_station (s1)
			s2_on_line: has_station (s2)
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
				Result := Result + stations [j].position.distance (stations [j + step].position)
				j := j + step
			end
		end

	time (s1, s2: STATION): REAL_64
			-- Time it takes to go from `s1' to `s2' along this line (seconds).
		require
			s1_on_line: has_station (s1)
			s2_on_line: has_station (s2)
		do
			Result := distance (s1, s2) / kind.speed
		end

feature -- Comparison

	is_less alias "<" (other: like Current): BOOLEAN
			-- Is name of this line less than the name of `other'?
		do
			Result := number < other.number
		end

feature -- Modification

	set_color (a_color: COLOR)
			-- Set `color' to `a_color'.
		do
			color := a_color
		ensure
			color_set: color = a_color
		end

	change_number (a_new_number: INTEGER)
			-- Set `number' to `a_new_number' and notify `city'.
		require
			unique_number: not city.lines.has_key (a_new_number)
		do
			city.internal_lines.remove (number)
			number := a_new_number
			city.internal_lines.extend (Current, a_new_number)
		ensure
			renamed: number = a_new_number
			city_updated: city.lines [a_new_number] = Current
		end

	append (a_station: STATION)
			-- Connect `a_station' to the last station.
		require
			stations_exists: a_station /= Void
			same_city: a_station.city = city
			new_station: not has_station (a_station)
		do
			internal_stations.extend_back (a_station)
			a_station.internal_lines.extend_back (Current)
		ensure
			one_more_station: count = old count + 1
			station_is_last: last = a_station
		end

	prepend (a_station: STATION)
			-- Connect `a_station' to the first station.
		require
			stations_exists: a_station /= Void
			same_city: a_station.city = city
			new_station: not has_station (a_station)
		do
			internal_stations.extend_front (a_station)
			a_station.internal_lines.extend_back (Current)
		ensure
			one_more_station: count = old count + 1
			station_is_first: first = a_station
		end

	connect (a_station: STATION)
			-- Connect `a_station' to the closest terminal.
		require
			stations_exists: a_station /= Void
			same_city: a_station.city = city
			new_station: not has_station (a_station)
		do
			if a_station.position.distance (last.position) <= a_station.position.distance (first.position) then
				append (a_station)
			else
				prepend (a_station)
			end
		ensure
			one_more_station: count = old count + 1
			station_is_terminal: is_terminal (a_station)
		end

	remove (a_station: STATION)
			-- Remove `a_station' from the line.
		require
			has_station: has_station (a_station)
		local
			i: V_LIST_ITERATOR [STATION]
		do
			i := internal_stations.new_cursor
			i.search_forth (a_station)
			i.item.internal_lines.remove (Current)
			i.remove
		ensure
			one_less_station: count = old count - 1
			station_removed: not has_station (a_station)
		end

	remove_all
			-- Remove all stations from the line.
		do
			across
				internal_stations as i
			loop
				i.item.internal_lines.remove (Current)
			end
			internal_stations.wipe_out
		ensure
			no_stations: is_empty
		end

	add_transport
			-- Add a public transporation unit to the line.
		do
			city.add_public_transport (number)
		end

feature -- Output

	out: STRING
			-- Textual representation.
		do
			Result := kind.name + " line " + number.out
			if not stations.is_empty then
				Result.append (" (" + first.name + " -- " + last.name + ")")
			end
		end

feature {CITY, CITY_ITEM} -- Implementation

	internal_stations: V_LIST [STATION]
			-- Stations the line goes through.

	hash_code: INTEGER
			-- Hash code value.
		do
			Result := number.hash_code
		end

invariant
	kind_exists: kind /= Void
	stations_exists: stations /= Void
	color_exists: color /= Void
	city_exists: city /= Void
	all_stations_exist: across stations as i all i.item /= Void end
	all_stations_contain_current: across stations as i all i.item.lines.has (Current) end
	no_duplicates: across stations as i all stations.occurrences (i.item) = 1 end
	count_correct: count = stations.count
	count_non_negative: count >= 0
	zero_count_in_empty: is_empty = (count = 0)
	first: not is_empty implies first = i_th (1)
	last: not is_empty implies last = i_th (count)
	north_terminal_is_terminal: not is_empty implies is_terminal (north_terminal)
	south_terminal_is_terminal: not is_empty implies is_terminal (south_terminal)
	north_and_south: not is_empty implies north_terminal.position.y >= south_terminal.position.y
	north_is_not_south: count > 1 implies north_terminal /= south_terminal
	east_terminal_is_terminal: not is_empty implies is_terminal (east_terminal)
	west_terminal_is_terminal: not is_empty implies is_terminal (west_terminal)
	east_and_west: not is_empty implies east_terminal.position.x >= west_terminal.position.x
	east_is_not_west: count > 1 implies west_terminal /= east_terminal
	internal_stations_equal: internal_stations ~ stations
end
