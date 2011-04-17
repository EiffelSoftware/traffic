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

	stations: V_TABLE [STRING, STATION]
			-- A table of stations indexed by name.
		do
			Result := internal_stations.twin
		ensure
			result_exists: Result /= Void
			-- stations and keys exist
			-- stations indexed by name
		end

	lines: V_TABLE [INTEGER, LINE]
			-- A table of lines indexed by name.
		do
			Result := internal_lines.twin
		ensure
			result_exists: Result /= Void
			-- lines and keys exist
			-- lines indexed by name			
		end

feature -- Construction

	add_station (a_name: STRING; a_position: VECTOR)
			-- Add station `a_name' at `a_position'.
		require
			unique_name: not stations.has_key (a_name)
		do
			internal_stations.extend (create {STATION}.make (a_name, a_position), a_name)
		ensure
			station_added: stations.has_key (a_name)
			correct_position: stations [a_name].position = a_position
			not_connected: stations [a_name].lines.is_empty
		end

	add_line (a_name: INTEGER; a_kind: TRANSPORT_KIND)
			-- Add a line `a_name' of kind `a_kind'.
		require
			unique_name: not lines.has_key (a_name)
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
			station := internal_stations [station_name]
			line := internal_lines [line_name]
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
			i: V_INPUT_ITERATOR [LINE]
			j: V_LIST_ITERATOR [STATION]
		do
			station := internal_stations [a_name]
			from
				i := station.internal_lines.at_first
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
			i: V_INPUT_ITERATOR [STATION]
			j: V_LIST_ITERATOR [LINE]
		do
			line := internal_lines [a_name]
			from
				i := line.internal_stations.at_first
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
	-- stations_indexed_by_name: stations.for_all_pairs (agent (k: STRING; v: STATION): BOOLEAN do Result := k ~ v.name end)
	-- lines_indexed_by_name: lines.for_all_pairs (agent (k: INTEGER; v: LINE): BOOLEAN do Result := k = v.name end)
end
