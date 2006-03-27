indexing
	description: "Map representing a traffic system of a region."
	date: "$Date: 2006/01/09 12:23:40 $"
	revision: "$Revision: 1.5 $"

class
	TRAFFIC_MAP 

inherit
	STORABLE
		export
			
			{TRAFFIC_MAP_LOADER} all 
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
	
	DOUBLE_MATH
		undefine out end
	
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
			i: INTEGER
			temp_list: LINKED_LIST[TRAFFIC_BUILDING]
		do
			default_size := 100
			name := a_name
			make_multi_graph
			create internal_places.make (default_size * default_size)
			create internal_lines.make (default_size)
			create internal_line_sections.make (default_size)
			create internal_place_array.make (200)
			create internal_travelers.make (1)
			traveler_index := 1
			internal_line_sections.compare_objects -- use equal for object comparision
			create internal_buildings.make (1,4)
			from
				i:=1
			until
				i>4
			loop
				create temp_list.make
				internal_buildings[i]:=temp_list
				i:=i+1
			end
			
			create unspecified_line_section_changed_event
			create line_section_changed_event
			create line_section_inserted_event
			create line_section_removed_event
			
			create unspecified_line_changed_event
			create line_changed_event
			create line_inserted_event
			create line_removed_event
			
			create unspecified_place_changed_event
			create place_changed_event
			create place_inserted_event
			create place_removed_event
		ensure
			name_set: equal (name, a_name)
			places_not_void: places /= Void
			lines_not_void: internal_lines /= Void
			line_sections_not_void: internal_line_sections /= Void
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
			place_inserted_event.publish ([a_place])
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
			line_section_inserted_event.publish ([a_line_section])
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
		
	add_building (a_building: TRAFFIC_BUILDING) is
			-- Add building `a_building' to map.
		require
			a_building_exists: a_building /= Void
		do
			if (a_building.corner1.x>=0 and a_building.corner1.y>=0) or
			   (a_building.corner2.x>=0 and a_building.corner2.y>=0) or
			   (a_building.corner3.x>=0 and a_building.corner3.y>=0) or
			   (a_building.corner4.x>=0 and a_building.corner4.y>=0)
			then
				internal_buildings.item(1).extend(a_building)	
			end
			if (a_building.corner1.x<=0 and a_building.corner1.y>=0) or
			   (a_building.corner2.x<=0 and a_building.corner2.y>=0) or
			   (a_building.corner3.x<=0 and a_building.corner3.y>=0) or
			   (a_building.corner4.x<=0 and a_building.corner4.y>=0)
			then
				internal_buildings.item(2).extend(a_building)	
			end
			if (a_building.corner1.x>=0 and a_building.corner1.y<=0) or
			   (a_building.corner2.x>=0 and a_building.corner2.y<=0) or
			   (a_building.corner3.x>=0 and a_building.corner3.y<=0) or
			   (a_building.corner4.x>=0 and a_building.corner4.y<=0)
			then
				internal_buildings.item(3).extend(a_building)	
			end
			if (a_building.corner1.x<=0 and a_building.corner1.y<=0) or
			   (a_building.corner2.x<=0 and a_building.corner2.y<=0) or
			   (a_building.corner3.x<=0 and a_building.corner3.y<=0) or
			   (a_building.corner4.x<=0 and a_building.corner4.y<=0)
			then
				internal_buildings.item(4).extend(a_building)	
			end
		
		end
		
	delete_buildings () is
			-- Delete all buildings from map.
		do
			internal_buildings.item (1).wipe_out
			internal_buildings.item (2).wipe_out
			internal_buildings.item (3).wipe_out
			internal_buildings.item (4).wipe_out
		end
		
		
	add_traveler (a_traveler: TRAFFIC_TRAVELER) is
			-- Add traveler 'a_traveler' to map.
			require
				a_traveler_exists: a_traveler /= Void
			do
				internal_travelers.force (a_traveler, a_traveler.index)
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
				line_section_removed_event.publish ([a_line_section])
			ensure
				-- we can assume, that the line_section was only once inserted
				line_section_removed: not line_sections.has (a_line_section)
			end
	
	remove_traveler (index: INTEGER) is
			-- -- Remove traveler at position index
			require
				index_valid: index >= 0
			do
				internal_travelers.remove (index)
			ensure
				not internal_travelers.has (index)
			end
	
	change_traveler_speed (divisor: DOUBLE) is	
			-- divise the speed of each traveler by divisor
			require
				divisor >= 2
			local
				a_traveler: TRAFFIC_TRAVELER
			do
				from
					internal_travelers.start
				until
					internal_travelers.after
				loop
					a_traveler := internal_travelers.item_for_iteration
--					if a_traveler /= Void then
						a_traveler.set_speed (a_traveler.virtual_speed / divisor)					
--					end
					internal_travelers.forth
				end
			end
	
	increment_index is
			-- increment the traveler index
			do
				traveler_index := traveler_index+1
			ensure
				traveler_index = old traveler_index + 1
			end
		
	
		
feature -- Access
	
	traveler_index: INTEGER
		-- index of travelers.
			
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
			Result := internal_places.item (a_name)
		ensure
			result_exists: Result /= Void
		end
		
	places: HASH_TABLE [TRAFFIC_PLACE, STRING] is
			-- All places in map.
		do
			Result := internal_places.twin
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
			Result := internal_line_sections.twin 
		end
		
	lines: HASH_TABLE [TRAFFIC_LINE, STRING] is
			-- All lines in map.
		do
			Result := internal_lines.twin
		end
		
	buildings: ARRAY[LINKED_LIST [TRAFFIC_BUILDING]] is
			-- All buildings on map.
		do
			Result := internal_buildings.twin
		end
		
	travelers: HASH_TABLE [TRAFFIC_TRAVELER, INTEGER] is
			-- All travelers on the map
		do
			Result := internal_travelers.twin
		end
		
	line_sections_of_place (a_name: STRING): LIST [TRAFFIC_LINE_SECTION] is
			-- Line sections with origin or destination place `a_name'
		require
			place_in_map: has_place (a_name)
		do
			search (place (a_name))
			Result := incident_edge_labels
		end

--	place_events: TRAFFIC_ITEM_EVENTS  [TRAFFIC_PLACE]
--	
--	line_section_events: TRAFFIC_ITEM_EVENTS [TRAFFIC_LINE_SECTION]
--
feature -- Events

	unspecified_place_changed_event: EM_EVENT_CHANNEL [TUPLE []]
			-- Event to inform views of `Current'
			-- when `Current' changed such that
			-- views need to re-render
	
	place_changed_event: EM_EVENT_CHANNEL [TUPLE [TRAFFIC_PLACE]]
			-- Event to inform views of `Current' 
			-- when item has been changed
			-- at index passed as argument
			
	place_inserted_event: EM_EVENT_CHANNEL [TUPLE [TRAFFIC_PLACE]]
			-- Event to inform views of `Current' 
			-- when item has been inserted
			-- at index passed as argument
			
	place_removed_event: EM_EVENT_CHANNEL [TUPLE [TRAFFIC_PLACE]]
			-- Event to inform views of `Current' 
			-- when item has been removed 
			-- at index passed as argument

	unspecified_line_section_changed_event: EM_EVENT_CHANNEL [TUPLE []]
			-- Event to inform views of `Current'
			-- when `Current' changed such that
			-- views need to re-render
	
	line_section_changed_event: EM_EVENT_CHANNEL [TUPLE [TRAFFIC_LINE_SECTION]]
			-- Event to inform views of `Current' 
			-- when item has been changed
			-- at index passed as argument
			
	line_section_inserted_event: EM_EVENT_CHANNEL [TUPLE [TRAFFIC_LINE_SECTION]]
			-- Event to inform views of `Current' 
			-- when item has been inserted
			-- at index passed as argument
			
	line_section_removed_event: EM_EVENT_CHANNEL [TUPLE [TRAFFIC_LINE_SECTION]]
			-- Event to inform views of `Current' 
			-- when item has been removed 
			-- at index passed as argument

	unspecified_line_changed_event: EM_EVENT_CHANNEL [TUPLE []]
			-- Event to inform views of `Current'
			-- when `Current' changed such that
			-- views need to re-render
	
	line_changed_event: EM_EVENT_CHANNEL [TUPLE [TRAFFIC_LINE]]
			-- Event to inform views of `Current' 
			-- when item has been changed
			-- at index passed as argument
			
	line_inserted_event: EM_EVENT_CHANNEL [TUPLE [TRAFFIC_LINE]]
			-- Event to inform views of `Current' 
			-- when item has been inserted
			-- at index passed as argument
			
	line_removed_event: EM_EVENT_CHANNEL [TUPLE [TRAFFIC_LINE]]
			-- Event to inform views of `Current' 
			-- when item has been removed 
			-- at index passed as argument

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
			
	internal_buildings: ARRAY[LINKED_LIST [TRAFFIC_BUILDING]]
			-- Buildings on map.
			
	internal_travelers: HASH_TABLE [TRAFFIC_TRAVELER, INTEGER]
			-- Travelers on map.
			
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
	line_sections_not_void: internal_line_sections /= Void -- Line sections exist
	travelers_not_void: internal_travelers /= Void -- Travelers exist

end
