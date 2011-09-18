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
			create {V_ARRAYED_LIST [PUBLIC_TRANSPORT]} internal_transports
		ensure
			name_set: name = a_name
			no_stations: stations.is_empty
			no_lines: lines.is_empty
		end

feature -- Access

	name: STRING
			-- Name.

feature -- Geography

	north: REAL_64
			-- Northmost coordinate.

	south: REAL_64
			-- Southmost coordinate.

	east: REAL_64
			-- Eastmost coordinate.	

	west: REAL_64
			-- Westmost coordinate.	

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

	transports: V_SEQUENCE [PUBLIC_TRANSPORT]
			-- Public transportation units.
		do
			Result := internal_transports
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

feature -- City construction

	set_name (a_name: STRING)
			-- Set `name' to `a_name'.
		require
			a_name_exists: a_name /= Void
		do
			name := a_name
		ensure
			name_set: name = a_name
		end

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

	add_transport_kind (a_name: STRING; a_default_color: COLOR; a_icon_file: STRING)
			-- Add transportation kind `a_name' with default line color `a_color'
			-- and associated icon file `a_icon_file' (Void if no icon associated).
		require
			a_name_exists: a_name /= Void
			unique_name: not transport_kinds.has_key (a_name)
			a_default_color_exists: a_default_color /= Void
		do
			internal_transport_kinds.extend (create {TRANSPORT_KIND}.make (a_name, a_default_color, a_icon_file), a_name)
		ensure
			kind_added: transport_kinds.has_key (a_name)
			correct_color: transport_kinds [a_name].default_color ~ a_default_color
			correct_icon: transport_kinds [a_name].icon_file = a_icon_file
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
			station, a: STATION
			j: V_LIST_ITERATOR [STATION]
			ti: V_LIST_ITERATOR [PUBLIC_TRANSPORT]
			t: PUBLIC_TRANSPORT
		do
			station := stations [a_name]
			from
				ti := internal_transports.new_cursor
			until
				ti.after
			loop
				t := ti.item
				a := t.arriving
				if ti.item.line.stations.count = 2 then
					ti.remove
				elseif ti.item.departed = station or ti.item.arriving = station then
					ti.item.reset_position
					ti.forth
				else
					ti.forth
				end
			end
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
			ti: V_LIST_ITERATOR [PUBLIC_TRANSPORT]
		do
			line := lines [a_name]
			across
				line.stations as i
			loop
				j := i.item.internal_lines.new_cursor
				j.search_forth (line)
				j.remove
			end
			from
				ti := internal_transports.new_cursor
			until
				ti.after
			loop
				if ti.item.line = line then
					ti.remove
				else
					ti.forth
				end
			end
			internal_lines.remove (a_name)
		ensure
			line_removed: not lines.has_key (a_name)
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
			station_added: stations [a_new_name] = a_station
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
			line_added: lines [a_new_name] = a_line
		end

feature -- Mobile

	move_all (dt: INTEGER)
			-- Update position of all public transportation units as if `dt' milliseconds passed.
		require
			dt_non_negative: dt >= 0
		do
			across
				transports as ti
			loop
				ti.item.move (dt)
			end
		end

	add_public_transport (a_line_name: INTEGER)
			-- Add a vehicle moving along line `a_line_name'.
		require
			has_line: lines.has_key (a_line_name)
		do
			internal_transports.extend_back (create {PUBLIC_TRANSPORT}.make (lines [a_line_name]))
		end

	remove_transport (a_transport: PUBLIC_TRANSPORT)
			-- Remove `a_transport'.
		require
			a_transport_exists: transports.has (a_transport)
		do
			internal_transports.remove_at (internal_transports.index_of (a_transport))
		ensure
			a_transport_removed: not transports.has (a_transport)
		end

feature {NONE} -- Implementation
	internal_stations: V_TABLE [STRING, STATION]
			-- Stations indexed by name.

	internal_lines: V_TABLE [INTEGER, LINE]
			-- Lines indexed by name.

	internal_transport_kinds: V_TABLE [STRING, TRANSPORT_KIND]
			-- Transport kinds indexed by name.

	internal_transports: V_LIST [PUBLIC_TRANSPORT]
			-- Public transportation units.

invariant
	stations_exists: stations /= Void
	all_stations_exist: across stations as i all i.value /= Void end
	stations_indexed_by_name: across stations as i all i.key ~ i.value.name end
	lines_exists: lines /= Void
	all_lines_exist: across lines as i all i.value /= Void end
	lines_indexed_by_name: across lines as i all i.key = i.value.name end
	transport_kinds_exists: transport_kinds /= Void
	all_transport_kinds_exist: across transport_kinds as i all i.value /= Void end
	transport_kinds_indexed_by_name: across transport_kinds as i all i.key ~ i.value.name end
	transports_exists: transports /= Void
	all_transports_exist: across transports as i all i.item /= Void end
	internal_stations_equal: internal_stations ~ stations
	internal_lines_equal: internal_lines ~ lines
	internal_transport_kinds_equal: internal_transport_kinds ~ transport_kinds
end
