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
		ensure
			name_set: name = a_name
			no_stations: stations.is_empty
			no_lines: lines.is_empty
		end

feature -- Access

	name: STRING
			-- Name.

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

	transport_kind (a_name: STRING): TRANSPORT_KIND
			-- Transport kinds with name `a_name'.
			-- Void if transport with this name does not exist.
		do
			if a_name ~ {TRAM_TRANSPORT}.name then
				create {TRAM_TRANSPORT} Result
			elseif a_name ~ {BUS_TRANSPORT}.name then
				create {BUS_TRANSPORT} Result
			elseif a_name ~ {CABLE_TRANSPORT}.name then
				create {CABLE_TRANSPORT} Result
			end
		end

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

	add_line (a_name: INTEGER; a_kind: TRANSPORT_KIND)
			-- Add a line `a_name' of kind `a_kind'.
		require
			unique_name: not lines.has_key (a_name)
			a_kind_exists: a_kind /= Void
		do
			internal_lines.extend (create {LINE}.make (a_name, a_kind), a_name)
		ensure
			line_added: lines.has_key (a_name)
			correct_kind: lines [a_name].kind = a_kind
			no_stations: lines [a_name].stations.is_empty
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
			i: V_ITERATOR [LINE]
			j: V_LIST_ITERATOR [STATION]
		do
			station := stations [a_name]
			from
				i := station.lines.at_first
			until
				i.after
			loop
				j := i.item.internal_stations.at_first
				j.search_forth (station)
				j.remove
				i.forth
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
			i: V_ITERATOR [STATION]
			j: V_LIST_ITERATOR [LINE]
		do
			line := lines [a_name]
			from
				i := line.stations.at_first
			until
				i.after
			loop
				j := i.item.internal_lines.at_first
				j.search_forth (line)
				j.remove
				i.forth
			end
			internal_lines.remove (a_name)
		ensure
			line_removed: not lines.has_key (a_name)
		end

feature {NONE} -- Implementation
	internal_stations: V_TABLE [STRING, STATION]
			-- Stations indexed by name.

	internal_lines: V_TABLE [INTEGER, LINE]
			-- Lines indexed by name.

invariant
	stations_exists: stations /= Void
--	all_stations_exist: stations.for_all (agent (s: STATION): BOOLEAN do Result := s /= Void end)
--	stations_indexed_by_name: stations.for_all_keys (agent (n: STRING): BOOLEAN do Result := n ~ stations [n].name end)
	lines_exists: lines /= Void
--	all_lines_exist: lines.for_all (agent (l: LINE): BOOLEAN do Result := l /= Void end)
--	lines_indexed_by_name: lines.for_all_keys (agent (n: INTEGER): BOOLEAN do Result := n = lines [n].name end)
	internal_stations_equal: internal_stations ~ stations
	internal_lines_equal: internal_lines ~ lines
end
