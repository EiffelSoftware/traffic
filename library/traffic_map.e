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

	DOUBLE_MATH
		redefine out end

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
			create graph.make_multi_graph
			create internal_places.make (default_size * default_size)
			create internal_lines.make (default_size)
			create internal_line_sections.make (default_size)
			create internal_roads.make (default_size)
			create internal_place_array.make (200)
			create internal_travelers.make (1)
			create internal_taxi_offices.make(0)
			traveler_index := 1
			internal_line_sections.compare_objects -- use equal for object comparision
			internal_roads.compare_objects -- use equal for object comparision
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

			create unspecified_road_changed_event
			create road_changed_event
			create road_inserted_event
			create road_removed_event
		ensure
			name_set: equal (name, a_name)
			places_not_void: places /= Void
			lines_not_void: internal_lines /= Void
			line_sections_not_void: internal_line_sections /= Void
		end

feature -- Status report

	has_place (a_name: STRING): BOOLEAN is
			-- Does the traffic map have a place called `a_name'?
		require
			a_name_exists: a_name /= Void
			a_name_not_empty: not a_name.is_empty
		do
			Result := internal_places.has (a_name)
		end

	has_connection_between (a_origin_name, a_destination_name: STRING): BOOLEAN is
			-- Does the traffic map have a connection between places with given names?
		require
			a_origin_exists: a_origin_name /= Void and not a_origin_name.is_empty
			a_destination_exists: a_destination_name /= Void and not a_destination_name.is_empty
			has_place (a_origin_name)
			has_place (a_destination_name)
		local
			l_origin, l_destination: TRAFFIC_PLACE
			a_connections: LIST[TRAFFIC_CONNECTION]
		do
			l_origin := places.item (a_origin_name)
			l_destination := places.item (a_destination_name)

			a_connections := connections_of_place (a_origin_name)
			from
				a_connections.start
			until
				Result = True or else a_connections.after
			loop
				if a_connections.item.destination = l_destination then
					Result := True
				end
				a_connections.forth
			end
		end

	has_line_section_between (a_origin_name, a_destination_name: STRING): BOOLEAN is
			-- Does the traffic map have a line section between places with given names?
		require
			a_origin_exists: a_origin_name /= Void and not a_origin_name.is_empty
			a_destination_exists: a_destination_name /= Void and not a_destination_name.is_empty
		local
			l_origin, l_destination: TRAFFIC_PLACE
		do
			l_origin := places.item (a_origin_name)
			l_destination := places.item (a_destination_name)
			if l_origin /= Void and then l_destination /= Void then
				from internal_line_sections.start
				until internal_line_sections.after or else Result = True
				loop
					if internal_line_sections.item.origin = l_origin
					  and then internal_line_sections.item.destination = l_destination then
						Result := True
					end
					internal_line_sections.forth
				end
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
			l_origin := place (a_origin_name)
			l_destination := place (a_destination_name)
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
			-- Does the traffic map contain line `a_name'?
		require
			a_name_exists: a_name /= Void
			a_name_not_empty: not a_name.is_empty
		do
			Result := internal_lines.has (a_name)
		end

	path_found: BOOLEAN
			-- shortest path found on graph?

	shortest_path_mode: INTEGER


--	has_road (a_origin_name, a_destination_name: STRING; an_id:INTEGER): BOOLEAN is
--			-- Does traffic the map contain road `a_road'?
--		require
--			a_origin_exists: a_origin_name /= Void and not a_origin_name.is_empty
--			a_destination_exists: a_destination_name /= Void and not a_destination_name.is_empty
--		local
--			l_road: TRAFFIC_ROAD
--			l_origin, l_destination: TRAFFIC_STOP
--			found: BOOLEAN
--		do
--			l_origin := stops.item (a_origin_name)
--			l_destination := stops.item (a_destination_name)
--			found := False
--			from
--				internal_roads.start
--			until
--				internal_roads.after or found
--			loop
--				l_road := internal_roads.item_for_iteration
--
--				if l_road.id=an_id and equal (l_road.origin, l_origin) and
--					equal (l_road.destination, l_destination) then
--					found := True
--				elseif l_road.id=an_id and equal (l_road.destination, l_origin) and
--					equal (l_road.origin, l_destination) then
--					found:=true
--				end
--				internal_roads.forth
--			end
--			Result := found
--		end

	has_road_with_id (an_id: INTEGER): BOOLEAN is
			-- Has traffic map road with `an_id'?
		require
			valid_id: an_id>=0
		do
			Result := internal_roads.has (an_id)
		end

	is_valid_shortest_path_mode (a_mode: INTEGER): BOOLEAN is
			-- is `a_mode' valid?
		do
			Result := a_mode = shortest_path_mode_minimal_switches or
					  a_mode = shortest_path_mode_normal_distance
		end


feature -- Status setting

	set_shortest_path_mode (a_mode: INTEGER) is
			-- set the shortest path mode
		require
			valide_mode: is_valid_shortest_path_mode (a_mode)
		do
			shortest_path_mode := a_mode
			graph.set_shortest_path_mode (a_mode)
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
			--put_node (a_place)
			place_inserted_event.publish ([a_place])
		ensure
			a_place_in_map: has_place (a_place.name)
		end

	add_line_section (a_line_section: TRAFFIC_LINE_SECTION) is
			-- Add line section `a_line_section' to map.
		require
			a_line_section_exists: a_line_section /= Void
			--a_line_section_not_in_map: not has_line_section (a_line_section.origin.name, a_line_section.destination.name, a_line_section.type, a_line_section.line)
		do
			internal_line_sections.extend (a_line_section)
			graph.put_edge (a_line_section.origin_impl, a_line_section.destination_impl, a_line_section, a_line_section.length)
			-- TODO: connect nodes at origin and destination with their peers (stops of other lines)
			line_section_inserted_event.publish ([a_line_section])
		ensure
			--a_line_section_in_map: has_line_section (a_line_section.origin.name, a_line_section.destination.name, a_line_section.type, a_line_section.line)
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


	add_road(a_road: TRAFFIC_ROAD) is
			-- Add road `a_road' to map.
		require
			a_road_exists: a_road /= Void
			no_road_with_same_id: not has_road_with_id(a_road.id)
		do
			internal_roads.force (a_road, a_road.id)
			--TODO: if a road is the only connection (has no line sections) it should be put in the graph.
			--graph.put_edge (a_road.origin_impl, a_road.destination_impl, a_road, a_road.length)
			road_inserted_event.publish ([a_road])
		ensure
			--a_road_in_map: has_road (a_road.origin.name, a_road.destination.name,a_road.id)
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

	remove_one_building (a_building: TRAFFIC_BUILDING) is
			-- Delete the 'a_building' from the internal_buildings array.
		local
			index_to_remove, index: INTEGER
		do
			if (a_building.corner1.x>=0 and a_building.corner1.y>=0) or
			   (a_building.corner2.x>=0 and a_building.corner2.y>=0) or
			   (a_building.corner3.x>=0 and a_building.corner3.y>=0) or
			   (a_building.corner4.x>=0 and a_building.corner4.y>=0)
			then
				from
					internal_buildings.item(1).start
					index := 1
				until
					internal_buildings.item(1).after
				loop
					if internal_buildings.item(1).item.center = a_building.center then
						index_to_remove := index
					end
					index := index + 1
					internal_buildings.item (1).forth
				end
				internal_buildings.item(1).go_i_th (index_to_remove)
				internal_buildings.item(1).remove
			end

			if (a_building.corner1.x<=0 and a_building.corner1.y>=0) or
			   (a_building.corner2.x<=0 and a_building.corner2.y>=0) or
			   (a_building.corner3.x<=0 and a_building.corner3.y>=0) or
			   (a_building.corner4.x<=0 and a_building.corner4.y>=0)
			then
				from
					internal_buildings.item(2).start
					index := 1
				until
					internal_buildings.item(2).after
				loop
					if internal_buildings.item(2).item.center = a_building.center then
						index_to_remove := index
					end
					index := index + 1
					internal_buildings.item (2).forth
				end
				internal_buildings.item(2).go_i_th (index_to_remove)
				internal_buildings.item(2).remove
			end

			if (a_building.corner1.x>=0 and a_building.corner1.y<=0) or
			   (a_building.corner2.x>=0 and a_building.corner2.y<=0) or
			   (a_building.corner3.x>=0 and a_building.corner3.y<=0) or
			   (a_building.corner4.x>=0 and a_building.corner4.y<=0)
			then
				from
					internal_buildings.item(3).start
					index := 1
				until
					internal_buildings.item(3).after
				loop
					if internal_buildings.item(3).item.center = a_building.center then
						index_to_remove := index
					end
					index := index + 1
					internal_buildings.item (3).forth
				end
				internal_buildings.item(3).go_i_th (index_to_remove)
				internal_buildings.item(3).remove
			end

			if (a_building.corner1.x<=0 and a_building.corner1.y<=0) or
			   (a_building.corner2.x<=0 and a_building.corner2.y<=0) or
			   (a_building.corner3.x<=0 and a_building.corner3.y<=0) or
			   (a_building.corner4.x<=0 and a_building.corner4.y<=0)
			then
				from
					internal_buildings.item(4).start
					index := 1
				until
					internal_buildings.item(4).after
				loop
					if internal_buildings.item(4).item.center = a_building.center then
						index_to_remove := index
					end
					index := index + 1
					internal_buildings.item (4).forth
				end

				internal_buildings.item(4).go_i_th (index_to_remove)
				internal_buildings.item(4).remove
			end
		end


	add_traveler (a_traveler: TRAFFIC_MOVING) is
			-- Add traveler 'a_traveler' to map.
			require
				a_traveler_exists: a_traveler /= Void
			do
				internal_travelers.force (a_traveler, a_traveler.index)
			end

	add_taxi_office( a_taxi_office: TRAFFIC_TAXI_OFFICE) is
			-- Add taxi office 'a_taxi_office' to map.
			require
				a_taxi_office_exists: a_taxi_office /= void
			do
				internal_taxi_offices.force(a_taxi_office)
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
				path_found := False
			ensure
				-- we can assume, that the line_section was only once inserted
				line_section_removed: not line_sections.has (a_line_section)
			end

		remove_road (a_road: TRAFFIC_ROAD) is
			-- Remove road `a_road' from map.
			require
				road_not_void: a_road /= Void
			do
				from
					internal_roads.start
				until
					internal_roads.after
				loop
					if equal(internal_roads.item_for_iteration,a_road) then
						internal_roads.remove (internal_roads.key_for_iteration)
					end
					internal_roads.forth
				end

				path_found := False
			ensure
				-- we can assume, that the line_section was only once inserted
				road_removed: not internal_roads.has_item (a_road)
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
			-- Divide the speed of each traveler by divisor.
			require
				divisor > 0
			local
				a_traveler: TRAFFIC_MOVING
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
			-- Increment the traveler index.
			do
				traveler_index := traveler_index+1
			ensure
				traveler_index = old traveler_index + 1
			end

	set_scale_factor (a_scale_factor: DOUBLE) is
				-- Set `a_factor'.
			do
				scale_factor_impl := a_scale_factor
			end

feature -- Element change

	add_stop (a_stop: TRAFFIC_STOP) is
			-- Add `a_stop' to map.
		require
			a_stop_exists: a_stop /= Void
		do
			graph.put_node (a_stop)
		end

feature -- Access

	traveler_index: INTEGER
		-- index of travelers.

	name: STRING
			-- Name of region this map represents.

	description: STRING
			-- Textual description.

	shortest_path_mode_normal_distance: INTEGER is
			-- calculate shortest path based on regular distance
		do
			Result := graph.normal_distance
		end

	shortest_path_mode_minimal_switches: INTEGER is
			-- calculate shortest path based on minimal number of switches
		do
			Result := graph.minimal_switches
		end

	taxi_offices: ARRAYED_LIST[TRAFFIC_TAXI_OFFICE] is
			-- All taxi offices associated with this map.
			do
				Result := internal_taxi_offices.twin
			end

	shortest_path: TRAFFIC_PATH is
			-- Shortest path, that has been found with `find_shortest_path'
		require
			path_found: path_found
		do
			Result := shortest_path_impl.twin
		ensure
			path_not_void: Result /= Void
		end

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

	roads: HASH_TABLE [TRAFFIC_ROAD, INTEGER] is
			-- All lines in map.
		do
			Result := internal_roads.twin
		end

	buildings: ARRAY[LINKED_LIST [TRAFFIC_BUILDING]] is
			-- All buildings on map.
		do
			Result := internal_buildings.twin
		end

	travelers: HASH_TABLE [TRAFFIC_MOVING, INTEGER] is
			-- All travelers on the map
		do
			Result := internal_travelers.twin
		end

	line_sections_of_stop (a_name: STRING; a_line: TRAFFIC_LINE): LIST [TRAFFIC_LINE_SECTION] is
			-- get the sections (2 or 1) of the stop specified by `a_name' for the line `a_line'
		require
			has_place (a_name) and then place (a_name).has_stop (a_line)
		local
			a_connections: LIST [TRAFFIC_CONNECTION]
			ls: TRAFFIC_LINE_SECTION
		do
			Result := create {ARRAYED_LIST [TRAFFIC_LINE_SECTION]}.make (2)
			graph.search (place (a_name).stop (a_line))
			a_connections := graph.incident_edge_labels
			from a_connections.start until a_connections.after loop
				ls ?= a_connections.item
				if ls /= Void then
					Result.extend (ls)
				end
				a_connections.forth
			end
		end

	connections_of_place (a_name: STRING): LIST [TRAFFIC_CONNECTION] is
			-- Connections with origin or destination place `a_name'
		require
			place_in_map: has_place (a_name)
		local
			nodes: LIST [TRAFFIC_NODE]
		do
			Result := create {ARRAYED_LIST [TRAFFIC_CONNECTION]}.make (8)
			nodes := place (a_name).nodes
			from nodes.start until nodes.after loop
				graph.search (nodes.item)
				Result.append (graph.incident_edge_labels)
				nodes.forth
			end
		end

	line_sections_of_place (a_name: STRING): LIST[TRAFFIC_LINE_SECTION] is
			-- Line sections with origin or destination place `a_name'
		require
			place_in_map: has_place (a_name)
		local
			a_stops: LIST [TRAFFIC_STOP]
			connections: LIST [TRAFFIC_CONNECTION]
			ls: TRAFFIC_LINE_SECTION
		do
			Result := create {ARRAYED_LIST [TRAFFIC_LINE_SECTION]}.make (8)
			a_stops := place (a_name).stops
			from a_stops.start until a_stops.after loop
				graph.search (a_stops.item)
				connections := graph.incident_edge_labels

				from connections.start until connections.after loop
					ls ?= connections.item
					if ls /= Void then
						Result.extend (ls)
					end
					connections.forth
				end
				a_stops.forth
			end
		end

		scale_factor: DOUBLE is
				-- multiply with this to receive real-world distances
			do
				Result := scale_factor_impl
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


	unspecified_road_changed_event: EM_EVENT_CHANNEL [TUPLE []]
			-- Event to inform views of `Current'
			-- when `Current' changed such that
			-- views need to re-render

	road_changed_event: EM_EVENT_CHANNEL [TUPLE [TRAFFIC_ROAD]]
			-- Event to inform views of `Current'
			-- when item has been changed
			-- at index passed as argument

	road_inserted_event: EM_EVENT_CHANNEL [TUPLE [TRAFFIC_ROAD]]
			-- Event to inform views of `Current'
			-- when item has been inserted
			-- at index passed as argument

	road_removed_event: EM_EVENT_CHANNEL [TUPLE [TRAFFIC_ROAD]]
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


	retrieve_road(i: INTEGER): TRAFFIC_ROAD is
			-- retrieve road with given id
			do
				Result:=internal_roads.item (i)
			end


	find_shortest_path (a_origin: TRAFFIC_PLACE; a_destination: TRAFFIC_PLACE) is
			-- Find shortest path.
		local
			temp_path: LIST [LINKED_GRAPH_WEIGHTED_EDGE [TRAFFIC_NODE, TRAFFIC_CONNECTION]]
			a_road: TRAFFIC_ROAD
			a_type: TRAFFIC_TYPE_STREET
			road_id: INTEGER
			pp: ARRAYED_LIST [EM_VECTOR_2D]
		do
			create pp.make (2)
			road_id := road_id.max_value
			path_found := False
			create a_type.make
			graph.put_node (a_origin.dummy_node)
			-- Connect the dummy node of the origin with the stops.
			pp.extend (a_origin.position)
			pp.extend (Void)
			from a_origin.stops.start until a_origin.stops.after loop
				create a_road.make (a_origin.dummy_node, a_origin.stops.item,
				  a_type, road_id, "undirected")
				graph.search (a_origin.stops.item)
				pp.put_i_th (graph.incident_edge_labels.first.polypoints.first, 2)
				a_road.set_polypoints (pp)
				graph.put_edge (a_origin.dummy_node, a_origin.stops.item, a_road, 0)
				a_origin.stops.forth
			end

			-- Connect the stops with the dummy node of the destination
			graph.put_node (a_destination.dummy_node)
			pp.put_i_th (a_destination.position, 1)
			from a_destination.stops.start until a_destination.stops.after loop
				create a_road.make (a_destination.stops.item, a_destination.dummy_node,
				    a_type, road_id, "undirected")
				graph.search (a_destination.stops.item)
				pp.put_i_th (graph.incident_edge_labels.first.polypoints.first, 2)
				a_road.set_polypoints (pp)
				graph.put_edge (a_destination.stops.item, a_destination.dummy_node, a_road , 0)
				a_destination.stops.forth
			end
			graph.find_shortest_path (a_origin.dummy_node, a_destination.dummy_node)

			if graph.path_found then
				path_found := True
				temp_path := graph.shortest_path
				create shortest_path_impl.make (scale_factor)

				from temp_path.start until temp_path.after loop
					shortest_path_impl.extend (temp_path.item.label)
					temp_path.forth
				end
			end
			graph.search (a_origin.dummy_node)
			if graph.off then
				raise ("This shouldn't happen: dummy node not found")
			end
			-- Remove the dummy connections again.
--			graph.remove_node
--			graph.search (a_destination.dummy_node)
--			graph.remove_node
		end


feature {TRAFFIC_MAP_LOADER}

	recalculate_weights_and_connect_stops is
			-- Due to an error in processing the weights need to be recalculated.
			-- In addition, the stops of different lines are connected at nodes.
		local
			the_edges: LIST[WEIGHTED_EDGE[TRAFFIC_NODE, TRAFFIC_CONNECTION]]
			p: TRAFFIC_PLACE
			s: TRAFFIC_STOP
			a_edge: TRAFFIC_ROAD
			total_weight: DOUBLE
			average_weight: DOUBLE
			w: DOUBLE
			edge_count: INTEGER
			type: TRAFFIC_TYPE_STREET
			pp: ARRAYED_LIST [EM_VECTOR_2D]
			a: EM_VECTOR_2D
			b: EM_VECTOR_2D
		do
			-- Recalculate edge weights.
			the_edges := graph.edges
			from
				the_edges.start
			until
				the_edges.after
			loop
				w := the_edges.item.label.length
				the_edges.item.set_weight (w)
				total_weight := total_weight + w
				edge_count := edge_count + 1
				the_edges.forth
			end

			if edge_count > 0 then
				average_weight := total_weight / edge_count
			end

			create type.make
			-- Connect stops.
			-- TODO: If the roads should be used for transport, the nodes must be connected as well.
			create pp.make (2)
			pp.extend (Void)
			pp.extend (Void)

			from
				internal_place_array.start
			until
				internal_place_array.after
			loop
				from
					p := internal_place_array.item
					p.stops.start
				until
					p.stops.after
				loop
					s := p.stops.item
					graph.search (s)
					pp.put_i_th (position_from_connections(graph.incident_edge_labels, s), 1)
					p.stops.forth
					if not p.stops.after then
						graph.search (p.stops.item)
						pp.put_i_th (position_from_connections (graph.incident_edge_labels, p.stops.item), 2)
						create a_edge.make (s, p.stops.item, type, (create {INTEGER}).max_value, "undirected")
						a_edge.set_polypoints (pp)
						graph.put_edge (s, p.stops.item, a_edge, a_edge.length)

						a := pp.first
						pp.put_i_th (pp.last, 1)
						pp.put_i_th (a, 2)
						a_edge.set_polypoints (pp)
						graph.put_edge (p.stops.item, s, a_edge , a_edge.length)
					end
				end
				internal_place_array.forth
			end
		end

feature {NONE} -- Implementation

	graph: TRAFFIC_GRAPH
			-- used for path finding

	internal_places: HASH_TABLE [TRAFFIC_PLACE, STRING]
			-- Places on map.

	internal_place_array: ARRAYED_LIST [TRAFFIC_PLACE]
			-- Array with all places for performant map model implementation.

	internal_lines: HASH_TABLE [TRAFFIC_LINE, STRING]
			-- Lines on map.

	internal_roads: HASH_TABLE [TRAFFIC_ROAD, INTEGER]
			--	Roads on map.

	internal_line_sections: ARRAYED_LIST [TRAFFIC_LINE_SECTION]
			--	Line sections on map.

	internal_buildings: ARRAY[LINKED_LIST [TRAFFIC_BUILDING]]
			-- Buildings on map.

	internal_travelers: HASH_TABLE [TRAFFIC_MOVING, INTEGER]
			-- Travelers on map.

	internal_taxi_offices: ARRAYED_LIST[TRAFFIC_TAXI_OFFICE]
			-- Taxi offices associated with this map

	shortest_path_impl: TRAFFIC_PATH

	scale_factor_impl: DOUBLE

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

	position_from_connections (a_connections: LIST [TRAFFIC_CONNECTION]; a_node: TRAFFIC_NODE): EM_VECTOR_2D is
			-- get the position of `a_node'
		do

			if a_connections.first.origin_impl = a_node then
				Result := a_connections.first.polypoints.first
			else
				Result := a_connections.first.polypoints.last
			end
		end


invariant
	name_not_void: name /= Void -- Map name exists.
	name_not_empty: not name.is_empty -- Map name not empty.
	places_not_void: internal_places /= Void -- Places exist.
	lines_not_void: internal_lines /= Void -- Lines exist.
	line_sections_not_void: internal_line_sections /= Void -- Line sections exist
	travelers_not_void: internal_travelers /= Void -- Travelers exist
	internal_taxi_offices_not_void: internal_taxi_offices /= Void
end
