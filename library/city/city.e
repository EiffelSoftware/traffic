note
	description : "City with a public transportation system."

class
	CITY

create
	make

feature {NONE} -- Initialization

	make (a_name: STRING)
			-- Create city `a_name'.
		require
			a_name_exists: a_name /= Void
		do
			name := a_name
			create {V_HASH_TABLE [STRING, STATION]} internal_stations.with_object_equality
			create {V_HASH_TABLE [INTEGER, LINE]} internal_lines
			create {V_HASH_TABLE [STRING, TRANSPORT_KIND]} internal_transport_kinds.with_object_equality
			create {V_HASH_TABLE [STRING, MOBILE]} internal_movers.with_object_equality
		ensure
			name_set: name = a_name
			no_stations: stations.is_empty
			no_lines: lines.is_empty
		end

feature -- Access

	name: STRING
			-- Name.

feature -- Element change

	set_name (a_name: STRING)
			-- Set `name' to `a_name'.
		require
			a_name_exists: a_name /= Void
		do
			name := a_name
		ensure
			name_set: name = a_name
		end

feature -- Timed update

	update_movers (dt: INTEGER)
			-- Update the movers with dt-milliseconds.
		do
			across internal_movers as mi
			loop mi.value.update_with_dt (dt) end
		end

feature -- Public transportation

	stations: V_MAP [STRING, STATION]
			-- Stations indexed by name.
		do
			Result := internal_stations
		end

	lines: V_MAP [INTEGER, LINE]
			-- Lines indexed by name.
		do
			Result := internal_lines
		end

	movers: V_MAP [STRING, MOBILE]
		do
			Result := internal_movers
		end

	transport_kinds: V_MAP [STRING, TRANSPORT_KIND]
			-- Transportation kinds indexed by name.
		do
			Result := internal_transport_kinds
		end

	connecting_lines (a_station_1, a_station_2: STATION): V_SEQUENCE [LINE]
			-- Lines that directly connect `station_1' and `station_2'.
			-- (In accending order of names).
		require
			a_station_1_in_city: stations.has (a_station_1)
			a_station_2_in_city: stations.has (a_station_2)
		local
			list: V_ARRAYED_LIST [LINE]
			line: LINE
		do
			create list
			across
				a_station_1.lines as i
			loop
				line := i.item
				if line.next_station (a_station_1, line.north_terminal) = a_station_2 or
					line.next_station (a_station_1, line.south_terminal) = a_station_2 then
					list.extend_back (line)
				end
			end
			list.sort (agent {LINE}.is_less_equal)
			Result := list
		ensure
			result_exists: Result /= Void
			-- ToDo: result is sorted and all lines connect `a_station_1' and `a_station_2'
		end

feature -- Geography

	north: REAL_64
			-- Northmost coordinate.

	south: REAL_64
			-- Southmost coordinate.

	east: REAL_64
			-- Eastmost coordinate.	

	west: REAL_64
			-- Westmost coordinate.	

feature -- Construction

	add_station (a_name: STRING; a_position: VECTOR)
			-- Add station `a_name' at `a_position'.
		require
			a_name_exists: a_name /= Void
			unique_name: not stations.has_key (a_name)
			a_position_exists: a_position /= Void
		do
			internal_stations.extend (create {STATION}.make (a_name, a_position), a_name)
			west := west.min (a_position.x)
			east := east.max (a_position.x)
			south := south.min (a_position.y)
			north := north.max (a_position.y)
		ensure
			station_added: stations.has_key (a_name)
			correct_position: stations [a_name].position = a_position
			not_connected: stations [a_name].lines.is_empty
		end

	add_line (a_name: INTEGER; a_kind: STRING)
			-- Add a line `a_name' of kind `a_kind'.
		require
			unique_name: not lines.has_key (a_name)
			a_kind_exists: transport_kinds.has_key (a_kind)
		do
			internal_lines.extend (create {LINE}.make (a_name, transport_kinds [a_kind]), a_name)
		ensure
			line_added: lines.has_key (a_name)
			correct_kind: lines [a_name].kind = transport_kinds [a_kind]
			no_stations: lines [a_name].stations.is_empty
		end

	add_transport_kind (a_name: STRING; a_default_color: COLOR)
			-- Add transportation kind `a_name' with default line color `a_color'.
		require
			a_name_exists: a_name /= Void
			unique_name: not transport_kinds.has_key (a_name)
			a_default_color_exists: a_default_color /= Void
		do
			internal_transport_kinds.extend (create {TRANSPORT_KIND}.make (a_name, a_default_color), a_name)
		ensure
			kind_added: transport_kinds.has_key (a_name)
			correct_color: transport_kinds [a_name].default_color ~ a_default_color
		end

	add_tram (a_name: INTEGER)
		require
			has_line: lines.has_key (a_name)
		local
			tram: TRAM
		do
			create tram.make_for_line (lines [a_name])
			add_mover (tram.name, tram)
		end

	add_mover (a_name: STRING; a_mover: MOBILE)
		require
			name_non_void: a_name /= Void
			mover_non_void: a_mover /= Void
			name_is_new: not movers.has_key (a_name)
		do
			internal_movers.extend (a_mover, a_name)
		ensure
			mover_added: movers.has_key (a_name) and
			             movers [a_name] = a_mover
		end

	connect_station (line_name: INTEGER; station_name: STRING)
			-- Connect station `station_name' to the end of line `line_name'.
		require
			line_exists: lines.has_key (line_name)
			stations_exists: stations.has_key (station_name)
			new_station: not lines [line_name].stations.has (stations [station_name])
		local
			station: STATION
			line: LINE
		do
			station := stations [station_name]
			line := lines [line_name]
			line.internal_stations.extend_back (station)
			station.internal_lines.extend_back (line)
		ensure
			line_extended: lines [line_name].stations.last = stations [station_name]
		end

	remove_station (a_name: STRING)
			-- Remove station `a_name'.
		require
			station_exists: stations.has_key (a_name)
		local
			station: STATION
			j: V_LIST_ITERATOR [STATION]
		do
			station := stations [a_name]
			across
				station.lines as i
			loop
				j := i.item.internal_stations.new_cursor
				j.search_forth (station)
				j.remove
			end
			internal_stations.remove (a_name)
		ensure
			station_removed: not stations.has_key (a_name)
		end

	remove_line (a_name: INTEGER)
			-- Remove line `a_name'.
		require
			line_exists: lines.has_key (a_name)
		local
			line: LINE
			j: V_LIST_ITERATOR [LINE]
		do
			line := lines [a_name]
			across
				line.stations as i
			loop
				j := i.item.internal_lines.new_cursor
				j.search_forth (line)
				j.remove
			end
			internal_lines.remove (a_name)
		ensure
			line_removed: not lines.has_key (a_name)
		end

	remove_mover (a_name: STRING)
		require
			mover_exists: movers.has_key (a_name)
		do
			internal_movers.remove (a_name)
		ensure
			mover_removed: not movers.has_key (a_name)
		end

	rename_station (a_station: STATION; a_new_name: STRING)
			-- Rename `a_station' to `a_new_name'.
		require
			a_new_name_exists: a_new_name /= Void
			unique_name: not stations.has_key (a_new_name)
		do
			internal_stations.remove (a_station.name)
			a_station.set_name (a_new_name)
			internal_stations.extend (a_station, a_new_name)
		ensure
			renamed: a_station.name ~ a_new_name
			station_added: stations.item (a_new_name) = a_station
		end

	rename_line (a_line: LINE; a_new_name: INTEGER)
			-- Rename `a_line' to `a_new_name'.
		require
			unique_name: not lines.has_key (a_new_name)
		do
			internal_lines.remove (a_line.name)
			a_line.set_name (a_new_name)
			internal_lines.extend (a_line, a_new_name)
		ensure
			renamed: a_line.name = a_new_name
			line_added: lines.item (a_new_name) = a_line
		end

feature {NONE} -- Implementation
	internal_stations: V_TABLE [STRING, STATION]
			-- Stations indexed by name.

	internal_lines: V_TABLE [INTEGER, LINE]
			-- Lines indexed by name.

	internal_transport_kinds: V_TABLE [STRING, TRANSPORT_KIND]
			-- Transport kinds indexed by name.

	internal_movers: V_TABLE [STRING, MOBILE]
			-- Movers indexed by name.

invariant
	stations_exists: stations /= Void
--	all_stations_exist: stations.for_all (agent (s: STATION): BOOLEAN do Result := s /= Void end)
--	stations_indexed_by_name: stations.for_all_keys (agent (n: STRING): BOOLEAN do Result := n ~ stations [n].name end)
	lines_exists: lines /= Void
--	all_lines_exist: lines.for_all (agent (l: LINE): BOOLEAN do Result := l /= Void end)
--	lines_indexed_by_name: lines.for_all_keys (agent (n: INTEGER): BOOLEAN do Result := n = lines [n].name end)
	transport_kinds_exists: transport_kinds /= Void
--	all_transport_kinds_exist: transport_kinds.for_all (agent (t: TRANSPORT_KIND): BOOLEAN do Result := t /= Void end)
--	transport_kinds_indexed_by_name: transport_kinds.for_all_keys (agent (n: STRING): BOOLEAN do Result := n ~ transport_kinds [n].name end)
	internal_stations_equal: internal_stations ~ stations
	internal_lines_equal: internal_lines ~ lines
	internal_transport_kinds_equal: internal_transport_kinds ~ transport_kinds
end
