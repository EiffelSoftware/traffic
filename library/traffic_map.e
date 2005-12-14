indexing
	description: "Map representing a traffic system of a region."
	author: "Sibylle Aregger, ETH Zurich"
	date: "$Date: 2005/07/26 17:42:17 $"
	revision: "$Revision: 1.3 $"

class
	TRAFFIC_MAP 

inherit
	STORABLE
		undefine
			out
		end
	
	LINKED_WEIGHTED_GRAPH [TRAFFIC_PLACE, TRAFFIC_LINE_SECTION]
		rename
			item as graph_item
		export
			{NONE} all
			{ANY} find_shortest_path, shortest_path, path_found
		redefine
			out
		end

create
	make

feature {NONE} -- Initialization

	make (a_name: STRING) is
			-- Create an empty map with name `a_name'.
		require
			a_name_exists: a_name /= Void
			a_name_not_empty: not a_name.is_empty
		local
			default_size: INTEGER
		do
			create place_events.make;
			create line_section_events.make;
			default_size := 100
			name := a_name
			make_multi_graph
			create internal_places.make (default_size * default_size)
			create internal_lines.make (default_size)
			create internal_line_sections.make (default_size)
			create internal_place_array.make (200)
			internal_line_sections.compare_objects -- use equal for object comparision
		ensure
			name_set: equal (name, a_name)
			places_not_void: places /= Void
			lines_not_void: internal_lines /= Void
			line_sections_not_void: internal_line_sections /= Void
			line_section_events_not_void: line_section_events /= Void
			place_events_not_void: place_events /= Void
		end
		
feature -- Status report

	has_place (a_name: STRING): BOOLEAN is
			-- Has traffic map place called `a_name'?
		require
			a_name_exists: a_name /= Void
			a_name_not_empty: not a_name.is_empty
		do
			Result := places.has (a_name)
		end
		
	has_line_section_between (a_origin_name, a_destination_name: STRING): BOOLEAN is
			-- Has traffic map line section between places with given names?
		require
			a_origin_exists: a_origin_name /= Void and not a_origin_name.is_empty
			a_destination_exists: a_destination_name /= Void and not a_destination_name.is_empty
		local
			l_origin, l_destination: TRAFFIC_PLACE
		do
			l_origin := places.item (a_origin_name)
			l_destination := places.item (a_destination_name)
			if l_origin /= Void and then l_destination /= Void then
				Result := has_edge_between (l_origin, l_destination)
			end
		end

	has_line_section (a_origin_name, a_destination_name: STRING; a_traffic_type: TRAFFIC_TYPE; a_line: TRAFFIC_LINE): BOOLEAN is
			-- Has traffic map line section `a_line_section'?
		require
			a_origin_exists: a_origin_name /= Void and not a_origin_name.is_empty
			a_destination_exists: a_destination_name /= Void and not a_destination_name.is_empty
			a_traffic_type_exists: a_traffic_type /= Void
		local
			l_line_section: TRAFFIC_LINE_SECTION
			l_origin, l_destination: TRAFFIC_PLACE
			found: BOOLEAN
		do
			l_origin := places.item (a_origin_name)
			l_destination := places.item (a_destination_name)
			found := False
			from
				internal_line_sections.start
			until
				internal_line_sections.after or found
			loop
				l_line_section := internal_line_sections.item
				if equal (l_line_section.origin, l_origin) and
					equal (l_line_section.destination, l_destination) and
					l_line_section.line = a_line then
					found := True
				end
				internal_line_sections.forth
			end
			Result := found
		end

	has_line (a_name: STRING): BOOLEAN is
			-- Has traffic map line `a_name'?
		require
			a_name_exists: a_name /= Void
			a_name_not_empty: not a_name.is_empty
		do
			Result := internal_lines.has (a_name)
		end
		
feature -- Element change

	set_description (a_description: STRING) is
			-- Set map description.
		do
			description := a_description
		ensure
			description_set: description = a_description
		end
		

	add_place (a_place: TRAFFIC_PLACE) is
			-- Add place `a_place' to map.
		require
			a_place_exists: a_place /= Void
			no_place_with_same_name_in_map: not has_place (a_place.name)
		do
			internal_places.force (a_place, a_place.name)
			internal_place_array.extend (a_place)
			put_node (a_place)
			place_events.publish_item_inserted_event (place_position (a_place.name))
		ensure
			a_place_in_map: has_place (a_place.name)
		end
		
	add_line_section (a_line_section: TRAFFIC_LINE_SECTION) is
			-- Add line section `a_line_section' to map.
		require
			a_line_section_exists: a_line_section /= Void
			a_line_section_not_in_map: not has_line_section (a_line_section.origin.name, a_line_section.destination.name, a_line_section.type, a_line_section.line)
		do
			internal_line_sections.extend (a_line_section)
			put_edge (a_line_section.origin, a_line_section.destination, a_line_section, a_line_section.length)
			line_section_events.publish_item_inserted_event (internal_line_sections.count)
		ensure
			a_line_section_in_map: has_line_section (a_line_section.origin.name, a_line_section.destination.name, a_line_section.type, a_line_section.line)
		end
		
	add_line (a_line: TRAFFIC_LINE) is
			-- Add line `a_line' to map.
		require
			a_line_exists: a_line /= Void
			no_line_with_same_name_in_map: not has_line (a_line.name)
		do
			internal_lines.force (a_line, a_line.name)
		ensure
			a_line_in_map: has_line (a_line.name)
		end


	remove_line_section (a_line_section: TRAFFIC_LINE_SECTION) is
			-- Remove line_section `a_line_section' from map (bad implementation)
			require
				has_a_line_section: a_line_section /= Void and then line_sections.has (a_line_section)
			local 
				index: INTEGER
			do
				internal_line_sections.start
				internal_line_sections.search (a_line_section)
				index := internal_line_sections.index
				internal_line_sections.prune (a_line_section)
				line_section_events.publish_item_removed_event (index, a_line_section)
			ensure
				-- we can assume, that the line_section was only once inserted
				line_section_removed: not line_sections.has (a_line_section)
			end
		
feature -- Access
			
	name: STRING
			-- Name of region this map represents.
			
	description: STRING
			-- Textual description.
			
	place (a_name: STRING): TRAFFIC_PLACE is
			-- Place named `a_name'.
		require
			a_name_exists: a_name /= Void
			place_in_map: has_place (a_name)
		do
			Result := places.item (a_name)
		ensure
			result_exists: Result /= Void
		end
		
	places: HASH_TABLE [TRAFFIC_PLACE, STRING] is
			-- All places in map.
		do
			Result := clone (internal_places)
		end
		
	line (a_name: STRING): TRAFFIC_LINE is
			-- Line named `a_name'.
		require
			a_name_exists: a_name /= Void
			line_in_map: has_line (a_name)
		do
			Result := internal_lines.item (a_name)
		end
		
	line_sections: ARRAYED_LIST [TRAFFIC_LINE_SECTION] is
			-- All line sections in map.
		do
			Result := clone (internal_line_sections)
		end
		
	lines: HASH_TABLE [TRAFFIC_LINE, STRING] is
			-- All lines in map.
		do
			Result := clone (internal_lines)
		end
		
		
	line_sections_of_place (a_name: STRING): LIST [TRAFFIC_LINE_SECTION] is
			-- Line sections with origin or destination place `a_name'.
		require
			place_in_map: has_place (a_name)
		do
			search (place (a_name))
			Result := incident_edge_labels
		end

	place_events: TRAFFIC_ITEM_EVENTS  [TRAFFIC_PLACE]
	
	line_section_events: TRAFFIC_ITEM_EVENTS [TRAFFIC_LINE_SECTION]

feature {TRAFFIC_MAP_MODEL} -- Access
	map_places: ARRAYED_LIST [TRAFFIC_PLACE] is
			-- 
		do
			Result := internal_place_array
		end
		
	map_line_sections: ARRAYED_LIST [TRAFFIC_LINE_SECTION] is
			-- 
		do
			Result := internal_line_sections
		end
	
feature -- Basic operation

	out: STRING is
			-- Textual representation.
		do
			Result := "Traffic map%Nnamed: " + name + "%Ndescription: " + description_out +
				"%N%Nplaces:%N" + places_out + 
				"%N%Nlines:%N" + lines_out
		end
			
feature {NONE} -- Implementation

	internal_places: HASH_TABLE [TRAFFIC_PLACE, STRING]
			-- Places on map.
			
	internal_place_array: ARRAYED_LIST [TRAFFIC_PLACE]
			-- Array with all places for performant map model implementation.
			
	internal_lines: HASH_TABLE [TRAFFIC_LINE, STRING]
			-- Lines on map.
			
	internal_line_sections: ARRAYED_LIST [TRAFFIC_LINE_SECTION]
			--	Line sections on map.
			
	place_position (a_name: STRING): INTEGER is
			-- Position of place `a_name' in places.
		require
			a_name_exists: a_name /= Void
			a_name_not_exmpa: not a_name.is_empty
			a_name_in_places: internal_places.has (a_name)
		local
			i: INTEGER
		do
			from
				i := 1
				internal_places.start
			until
				internal_places.item_for_iteration.name.is_equal (a_name)
			loop
				i := i + 1
				internal_places.forth
			end
			Result := i
		end
		
			
	description_out: STRING is
			-- Textual representation of description.
		do
			if description = Void then
				Result := ""
			else
				Result := description
			end
		ensure
			Result_exists: Result /= Void
		end
		

	places_out: STRING is
			-- Textual representation of places.
		local
			current_place: TRAFFIC_PLACE
		do
			Result := ""
			if not internal_places.is_empty then
				from
					internal_places.start	
				until
					internal_places.after
				loop
					current_place := internal_places.item_for_iteration
					Result := Result + current_place.out
					internal_places.forth
					if not internal_places.after then
						Result := Result + "%N"
					end
				end
			end
		end
		
	lines_out: STRING is
			-- Textual representation of places.
		local
			current_line: TRAFFIC_LINE
		do
			Result := ""
			if not internal_lines.is_empty then
				from
					internal_lines.start	
				until
					internal_lines.after
				loop
					current_line := internal_lines.item_for_iteration
					Result := Result + current_line.out + "%N"
					internal_lines.forth
					if not internal_lines.after then
						Result := Result + "%N"
					end
				end
			end
		end
			
	line_sections_out: STRING is
			-- Textual representation of line sections.
		local
			current_line_section: TRAFFIC_LINE_SECTION
		do
			Result := ""
			if not internal_line_sections.is_empty then
				from
					internal_line_sections.start	
				until
					internal_line_sections.after
				loop
					current_line_section := internal_line_sections.item
					Result := Result + current_line_section.out
					internal_line_sections.forth
					if not internal_line_sections.after then
						Result := Result + "%N"
					end
				end
			end
		end

invariant
	name_not_void: name /= Void -- Map name exists.
	name_not_empty: not name.is_empty -- Map name not empty.
	places_not_void: internal_places /= Void -- Places exist.
	lines_not_void: internal_lines /= Void -- Lines exist.
	line_sections_not_void: internal_line_sections /= Void -- Line sections exist.

end -- class TRAFFIC_MAP
