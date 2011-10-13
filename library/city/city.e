note
	description : "City with a public transportation system."

class
	CITY

inherit
	ANY
		redefine
			out
		end

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
			create {V_ARRAYED_LIST [ROUTE]} internal_routes
			create {V_HASH_TABLE [STRING, BUILDING]} internal_buildings.with_object_equality
		ensure
			name_set: name = a_name
			no_stations: stations.is_empty
			no_lines: lines.is_empty
		end

feature -- Access

	name: STRING
			-- Name.

	buildings: V_MAP [STRING, BUILDING]
			-- Buildings indexed by address.
		do
			Result := internal_buildings
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

	size_ns: REAL_64
			-- City size from north to south.
		do
			Result := north - south
		end

	size_ew: REAL_64
			-- City size from east to west.
		do
			Result := east - west
		end

feature -- Public transportation

	stations: V_MAP [STRING, STATION]
			-- Stations indexed by name.
		do
			Result := internal_stations
		end

	station (a_name: STRING): STATION
			-- Station `a_name'.
		do
			if stations.has_key (a_name) then
				Result := stations [a_name]
			end
		end

	lines: V_MAP [INTEGER, LINE]
			-- Lines indexed by number.
		do
			Result := internal_lines
		end

	line (a_number: INTEGER): LINE
			-- Line number `a_number'.
		do
			if lines.has_key (a_number) then
				Result := lines [a_number]
			end
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
			l: LINE
		do
			create list
			across
				a_station_1.lines as i
			loop
				l := i.item
				if l.next_station (a_station_1, l.first) = a_station_2 or
					l.next_station (a_station_1, l.last) = a_station_2 then
					list.extend_back (l)
				end
			end
			list.sort (agent {LINE}.is_less_equal)
			Result := list
		ensure
			result_exists: Result /= Void
			connect_stations: across Result as i all i.item.stations.has (a_station_1) and i.item.stations.has (a_station_2) end
			sorted: across Result as i all not i.is_last implies i.target [i.index].name <= i.target [i.index + 1].name end
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

	add_building (a_building: BUILDING)
			-- Add `a_building' to `buildings'.
		require
			a_building_exists: a_building /= Void
		do
			internal_buildings [a_building.address] := a_building
		end

	add_station (a_name: STRING; a_x, a_y: REAL_64)
			-- Add station `a_name' at position [`a_x', `a_y'].
		require
			a_name_exists: a_name /= Void
			unique_name: not stations.has_key (a_name)
		do
			internal_stations.extend (create {STATION}.make (a_name, [a_x, a_y], Current), a_name)
			west := west.min (a_x)
			east := east.max (a_x)
			south := south.min (a_y)
			north := north.max (a_y)
		ensure
			station_added: stations.has_key (a_name)
			correct_position: stations [a_name].position ~ [a_x, a_y]
			not_connected: stations [a_name].lines.is_empty
		end

	add_line (a_name: INTEGER; a_kind: STRING)
			-- Add a line `a_name' of kind `a_kind'.
		require
			unique_name: not lines.has_key (a_name)
			a_kind_exists: transport_kinds.has_key (a_kind)
		do
			internal_lines.extend (create {LINE}.make (a_name, transport_kinds [a_kind], Current), a_name)
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

	append_station (line_name: INTEGER; station_name: STRING)
			-- Connect station `station_name' to the end of line `line_name'.
		require
			line_exists: lines.has_key (line_name)
			station_exists: stations.has_key (station_name)
			new_station: not lines [line_name].stations.has (stations [station_name])
		do
			lines [line_name].append (stations [station_name])
		ensure
			station_is_last: lines [line_name].last = stations [station_name]
		end

	prepend_station (line_name: INTEGER; station_name: STRING)
			-- Connect station `station_name' to the beginning of line `line_name'.
		require
			line_exists: lines.has_key (line_name)
			station_exists: stations.has_key (station_name)
			new_station: not lines [line_name].stations.has (stations [station_name])
		do
			lines [line_name].prepend (stations [station_name])
		ensure
			station_is_first: lines [line_name].first = stations [station_name]
		end

	connect_station (line_name: INTEGER; station_name: STRING)
			-- Connect station `station_name' to the closest end of line `line_name'.
		require
			line_exists: lines.has_key (line_name)
			stations_exists: stations.has_key (station_name)
			new_station: not lines [line_name].stations.has (stations [station_name])
		do
			lines [line_name].connect (stations [station_name])
		ensure
			station_is_terminal: lines [line_name].is_terminal (stations [station_name])
		end

	remove_station (a_name: STRING)
			-- Remove station `a_name'.
		require
			station_exists: stations.has_key (a_name)
		local
			s, a: STATION
			ti: V_LIST_ITERATOR [PUBLIC_TRANSPORT]
			t: PUBLIC_TRANSPORT
		do
			s := stations [a_name]
			from
				ti := internal_transports.new_cursor
			until
				ti.after
			loop
				t := ti.item
				a := t.arriving
				if ti.item.line.stations.count = 2 then
					ti.remove
				elseif ti.item.departed = s or ti.item.arriving = s then
					ti.item.reset_position
					ti.forth
				else
					ti.forth
				end
			end
			across
				s.lines as i
			loop
				i.item.internal_stations.remove (s)
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
			l: LINE
			ti: V_LIST_ITERATOR [PUBLIC_TRANSPORT]
		do
			l := lines [a_name]
			across
				l.stations as i
			loop
				i.item.internal_lines.remove (l)
			end
			from
				ti := internal_transports.new_cursor
			until
				ti.after
			loop
				if ti.item.line = l then
					ti.remove
				else
					ti.forth
				end
			end
			internal_lines.remove (a_name)
		ensure
			line_removed: not lines.has_key (a_name)
		end

	rename_station (a_old_name, a_new_name: STRING)
			-- Rename station `a_old_name' to `a_new_name'.
		require
			old_name_exists: stations.has_key (a_old_name)
			new_name_exists: a_new_name /= Void
			unique_name: not stations.has_key (a_new_name)
		do
			stations [a_old_name].change_name (a_new_name)
		ensure
			renamed: stations [a_new_name] = old stations [a_old_name]
		end

	rename_line (a_old_name, a_new_name: INTEGER)
			-- Rename line `a_old_name' to `a_new_name'.
		require
			old_name_exists: lines.has_key (a_old_name)
			unique_name: not lines.has_key (a_new_name)
		do
			lines [a_old_name].change_name (a_new_name)
		ensure
			renamed: lines [a_new_name] = old lines [a_old_name]
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

feature -- Navigation

	routes: V_SEQUENCE [ROUTE]
			-- Known routes.
		do
			Result := internal_routes
		end

	add_route (a_route: ROUTE)
			-- Add `a_route' to `routes'.
		require
			a_route_exists: a_route /= Void
			origin_in_city: stations.has (a_route.origin)
			destination_in_city: stations.has (a_route.destination)
		do
			internal_routes.extend_back (a_route)
		ensure
			route_added: routes.has (a_route)
		end

feature -- Output

	out: STRING
			-- Textual representation.
		do
			Result := "city of " + name
		end


feature {CITY, STATION, LINE} -- Implementation
	internal_stations: V_TABLE [STRING, STATION]
			-- Stations indexed by name.

	internal_lines: V_TABLE [INTEGER, LINE]
			-- Lines indexed by name.

	internal_transport_kinds: V_TABLE [STRING, TRANSPORT_KIND]
			-- Transport kinds indexed by name.

	internal_transports: V_LIST [PUBLIC_TRANSPORT]
			-- Public transportation units.

	internal_routes: V_LIST [ROUTE]
			-- Routes.

	internal_buildings: V_TABLE [STRING, BUILDING]
			-- Buildings indexed by address.

invariant
	size_ns_non_negavive: size_ns >= 0.0
	size_ew_non_negavive: size_ew >= 0.0
	stations_exists: stations /= Void
	all_stations_exist: across stations as i all i.item /= Void end
	stations_indexed_by_name: across stations as i all i.key ~ i.item.name end
	all_stations_belong_to_city: across stations as i all i.item.city = Current end
	lines_exists: lines /= Void
	all_lines_exist: across lines as i all i.item /= Void end
	lines_indexed_by_name: across lines as i all i.key = i.item.name end
	all_lines_belong_to_city: across lines as i all i.item.city = Current end
	transport_kinds_exists: transport_kinds /= Void
	all_transport_kinds_exist: across transport_kinds as i all i.item /= Void end
	transport_kinds_indexed_by_name: across transport_kinds as i all i.key ~ i.item.name end
	transports_exists: transports /= Void
	all_transports_exist: across transports as i all i.item /= Void end
	internal_stations_equal: internal_stations ~ stations
	internal_lines_equal: internal_lines ~ lines
	internal_transport_kinds_equal: internal_transport_kinds ~ transport_kinds
end
