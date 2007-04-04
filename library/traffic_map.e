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

	TRAFFIC_SHARED_TIME
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
			create graph.make_multi_graph
			create places.make (default_size * default_size)
			places.set_key_equality_tester (create {UC_STRING_EQUALITY_TESTER})
			create lines.make (default_size)
			lines.set_key_equality_tester (create {UC_STRING_EQUALITY_TESTER})
			create line_sections.make (default_size)
			create roads.make (default_size)
			create passengers.make
			create trams.make
			create busses.make
--			create internal_place_array.make (200)
--			create travelers.make (1)
			create internal_taxi_offices.make(0)
	--		line_sections. -- use equal for object comparision
			--internal_roads.compare_objects -- use equal for object comparision
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

--			create unspecified_line_section_changed_event
--			create line_section_changed_event
--			create line_section_inserted_event
--			create line_section_removed_event

--			create unspecified_line_changed_event
--			create line_changed_event
--			create line_inserted_event
--			create line_removed_event

--			create unspecified_place_changed_event
--			create place_changed_event
--			create place_inserted_event
--			create place_removed_event

--			create unspecified_road_changed_event
--			create road_changed_event
--			create road_inserted_event
--			create road_removed_event

--			create moving_inserted_event
--			create moving_removed_event

		ensure
			name_set: equal (name, a_name)
			places_not_void: places /= Void
			lines_not_void: lines /= Void
			line_sections_not_void: line_sections /= Void
		end

feature -- TODO

	display is
			--
		do
			-- TODO
		end

feature -- Status report

--	has_place (a_name: STRING): BOOLEAN is
--			-- Does the traffic map have a place called `a_name'?
--		require
--			a_name_exists: a_name /= Void
--			a_name_not_empty: not a_name.is_empty
--		do
--			Result := places.has (a_name)
--		end

--	has_connection_between (a_origin_name, a_destination_name: STRING): BOOLEAN is
--			-- Does the traffic map have a connection between places with given names?
--		require
--			a_origin_exists: a_origin_name /= Void and not a_origin_name.is_empty
--			a_destination_exists: a_destination_name /= Void and not a_destination_name.is_empty
--			places.has (a_origin_name)
--			places.has (a_destination_name)
--		local
--			l_origin, l_destination: TRAFFIC_PLACE
--			a_connections: LIST[TRAFFIC_CONNECTION]
--		do
--			l_origin := places.item (a_origin_name)
--			l_destination := places.item (a_destination_name)

--			a_connections := connections_of_place (a_origin_name)
--			from
--				a_connections.start
--			until
--				Result = True or else a_connections.after
--			loop
--				if a_connections.item.destination = l_destination then
--					Result := True
--				end
--				a_connections.forth
--			end
--		end



--	has_line (a_name: STRING): BOOLEAN is
--			-- Does the traffic map contain line `a_name'?
--		require
--			a_name_exists: a_name /= Void
--			a_name_not_empty: not a_name.is_empty
--		do
--			Result := lines.has (a_name)
--		end

--	has_road_with_id (an_id: INTEGER): BOOLEAN is
--			-- Has traffic map road with `an_id'?
--		require
--			valid_id: an_id>=0
--		do
--			Result := roads.has (an_id)
--		end

	is_valid_shortest_path_mode (a_mode: INTEGER): BOOLEAN is
			-- Is `a_mode' valid?
		do
			Result := a_mode = shortest_path_mode_minimal_switches or
					  a_mode = shortest_path_mode_normal_distance
		end

	path_found: BOOLEAN
			-- Was a shortest path found on graph?

feature -- Element change

	set_shortest_path_mode (a_mode: INTEGER) is
			-- set the shortest path mode
		require
			valide_mode: is_valid_shortest_path_mode (a_mode)
		do
			shortest_path_mode := a_mode
			graph.set_shortest_path_mode (a_mode)
		end

	set_description (a_description: STRING) is
			-- Set map description.
		do
			description := a_description
		ensure
			description_set: description = a_description
		end

--	change_traveler_speed (divisor: DOUBLE) is
--			-- Divide the speed of each traveler by divisor.
--		require
--			divisor > 0
--		local
--			a_traveler: TRAFFIC_MOVING
--		do
--			from
--				travelers.start
--			until
--				travelers.after
--			loop
--				a_traveler := travelers.item_for_iteration
----					if a_traveler /= Void then
--					a_traveler.set_speed (a_traveler.virtual_speed / divisor)
----					end
--				travelers.forth
--			end
--		end

	set_scale_factor (a_scale_factor: DOUBLE) is
			-- Set `a_scale_factor'.
		do
			scale_factor_impl := a_scale_factor
		end

feature -- Insertion

--	add_place (a_place: TRAFFIC_PLACE) is
--			-- Add place `a_place' to map.
--		require
--			a_place_exists: a_place /= Void
--			no_place_with_same_name_in_map: not places.has (a_place.name)
--		do
--			places.force (a_place, a_place.name)
----			internal_place_array.force_last (a_place)
--			--put_node (a_place)
----			place_inserted_event.publish ([a_place])
--		ensure
--			a_place_in_map: places.has (a_place.name)
--		end
	add_tram_per_line (number: INTEGER) is
			-- Add `number' trams per line to the map `a_map'.
		require
			number_valid: number > 0
		local
			a_tram: TRAFFIC_TRAM
			traveling_points: LINKED_LIST [EM_VECTOR_2D]
			i: INTEGER
		do
			create traveling_points.make
			from
				lines.start
			until
				lines.after
			loop
				if lines.item_for_iteration.type.name.is_equal ("tram") or lines.item_for_iteration.type.name.is_equal ("rail") or lines.item_for_iteration.type.name.is_equal ("bus") then
					create a_tram.make_default_with_line (lines.item_for_iteration)
					from
						i := 1
						create a_tram.make_default_with_line (lines.item_for_iteration)
					until
						i > number or i = a_tram.line_count
					loop
						create a_tram.make_default_with_line (lines.item_for_iteration)
						a_tram.set_to_place (a_tram.place (i))
						trams.put_last (a_tram)
						a_tram.start
						i := i + 1
					end
				end
				lines.forth
			end
		end

	add_tram_per_line_with_schedule (a_map: TRAFFIC_MAP; number: INTEGER) is
			-- Add `number' of trams per line with an automatically generated schedule.
		require
			a_map_exists: a_map /= Void
			number_valid: number > 0
		local
			a_tram: TRAFFIC_TRAM
			i: INTEGER
			schedule: TRAFFIC_LINE_SCHEDULE
			offset_step: INTEGER
			scheduler: TRAFFIC_SCHEDULE_LOADER
		do
			-- every tram has an offset which describes how many minutes it travels behind the schedule
			offset_step := (60 / number).rounded
			create scheduler.make ("timetable_tram.xml")
			scheduler.load_schedule
			from
				lines.start
			until
				lines.after
			loop
				if lines.item_for_iteration.type.name.is_equal ("tram") or lines.item_for_iteration.type.name.is_equal ("rail") or lines.item_for_iteration.type.name.is_equal ("bus") then
					-- create a schedule for the line
					create schedule.make_for_line (lines.item_for_iteration, scheduler)

					-- create the number of trams
					from
						i := 1
					until
						i > number
					loop
						create a_tram.make_with_schedule (lines.item_for_iteration, schedule, offset_step * (i - 1))
						trams.put_last (a_tram)
						i := i + 1
					end
				end
				lines.forth
			end
		end

	add_line_section (a_line_section: TRAFFIC_LINE_SECTION) is
			-- Add line section `a_line_section' to map.
		require
			a_line_section_exists: a_line_section /= Void
			--a_line_section_not_in_map: not has_line_section (a_line_section.origin.name, a_line_section.destination.name, a_line_section.type, a_line_section.line)
		do
			line_sections.force_last (a_line_section)
			graph.put_edge (a_line_section.origin_impl, a_line_section.destination_impl, a_line_section, a_line_section.length)
			-- TODO: connect nodes at origin and destination with their peers (stops of other lines)
--			line_section_inserted_event.publish ([a_line_section])
		ensure
			--a_line_section_in_map: has_line_section (a_line_section.origin.name, a_line_section.destination.name, a_line_section.type, a_line_section.line)
		end

--	add_line (a_line: TRAFFIC_LINE) is
--			-- Add line `a_line' to map.
--		require
--			a_line_exists: a_line /= Void
--			no_line_with_same_name_in_map: not lines.has (a_line.name)
--		do
--			lines.force (a_line, a_line.name)
--		ensure
--			a_line_in_map: lines.has (a_line.name)
--		end


--	add_road(a_road: TRAFFIC_ROAD) is
--			-- Add road `a_road' to map.
--		require
--			a_road_exists: a_road /= Void
--			no_road_with_same_id: not roads.has (a_road.id)
--		do
--			roads.force (a_road, a_road.id)
--			--TODO: if a road is the only connection (has no line sections) it should be put in the graph.
--			--graph.put_edge (a_road.origin_impl, a_road.destination_impl, a_road, a_road.length)
--			road_inserted_event.publish ([a_road])
--		ensure
--			--a_road_in_map: has_road (a_road.origin.name, a_road.destination.name,a_road.id)
--		end


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

--	add_traveler (a_traveler: TRAFFIC_MOVING) is
--			-- Add traveler 'a_traveler' to map.
--		require
--			a_traveler_exists: a_traveler /= Void
--		do
--			travelers.force (a_traveler, a_traveler.index)
--			moving_inserted_event.publish ([a_traveler])
--		end

	add_taxi_office( a_taxi_office: TRAFFIC_TAXI_OFFICE) is
			-- Add taxi office 'a_taxi_office' to map.
		require
			a_taxi_office_exists: a_taxi_office /= void
		do
			internal_taxi_offices.force(a_taxi_office)
		end

	add_stop (a_stop: TRAFFIC_STOP) is
			-- Add `a_stop' to map.
		require
			a_stop_exists: a_stop /= Void
		do
			graph.put_node (a_stop)
		end

	add_path (a_path: TRAFFIC_PATH) is
			-- Add `a_path' to map.
		require
			a_path_exists: a_path /= Void
		do
			a_path.set_scale_factor (scale_factor)
			internal_path := a_path
		end


feature -- Removal

	delete_buildings is
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

	remove_line_section (a_line_section: TRAFFIC_LINE_SECTION) is
			-- Remove line_section `a_line_section' from map (bad implementation).
		require
			has_a_line_section: a_line_section /= Void and then line_sections.has (a_line_section)
		local
			index: INTEGER
		do
			line_sections.start
			line_sections.search_forth (a_line_section)
			index := line_sections.index
			line_sections.remove_at
--			line_section_removed_event.publish ([a_line_section])
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
				roads.start
			until
				roads.after
			loop
				if equal(roads.item_for_iteration,a_road) then
					roads.remove (roads.key_for_iteration)
				end
				roads.forth
			end

			path_found := False
		ensure
			-- we can assume, that the line_section was only once inserted
	--		road_removed: not internal_roads.has_item (a_road)
		end


--	remove_traveler (index: INTEGER) is
--			-- Remove traveler at position index.
--		require
--			index_valid: index >= 0
--		do
--			travelers.remove (index)
--		ensure
--			not travelers.has (index)
--		end


feature -- Access

	area_width: DOUBLE is 1300.0
			-- Area that the city is located on (todo: calculate)

	shortest_path_mode: INTEGER
			-- Mode used for shortest path calculation (either normal or minimal switches)

	name: STRING
			-- Name of region this map represents

	description: STRING
			-- Textual description of the map

	shortest_path_mode_normal_distance: INTEGER is
			-- Number representing path calculation mode based on regular distance
		do
			Result := graph.normal_distance
		end

	shortest_path_mode_minimal_switches: INTEGER is
			-- Number representing path calculation mode based on regular distance
		do
			Result := graph.minimal_switches
		end

	taxi_offices: ARRAYED_LIST[TRAFFIC_TAXI_OFFICE] is
			-- All taxi offices associated with this map
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

--	place (a_name: STRING): TRAFFIC_PLACE is
--			-- Place named `a_name'
--		require
--			a_name_exists: a_name /= Void
--			place_in_map: places.has (a_name)
--		do
--			Result := places.item (a_name)
--		ensure
--			result_exists: Result /= Void
--		end

	places: TRAFFIC_EVENT_HASH_TABLE [TRAFFIC_PLACE, STRING]
			-- All places in map

--	line (a_name: STRING): TRAFFIC_LINE is
--			-- Line named `a_name'
--		require
--			a_name_exists: a_name /= Void
--			line_in_map: lines.has (a_name)
--		do
--			Result := lines.item (a_name)
--		end

	line_sections: TRAFFIC_LINE_SECTION_LIST
			-- All line sections in map

	lines: TRAFFIC_EVENT_HASH_TABLE [TRAFFIC_LINE, STRING]
			-- All lines in map

	roads: TRAFFIC_EVENT_HASH_TABLE [TRAFFIC_ROAD, INTEGER]
			-- All roads in map

	buildings: ARRAY[LINKED_LIST [TRAFFIC_BUILDING]] is
			-- All buildings on map
		do
			Result := internal_buildings.twin
		end

--	travelers: TRAFFIC_EVENT_HASH_TABLE [TRAFFIC_MOVING, INTEGER]
			-- All travelers on the map

	passengers: TRAFFIC_EVENT_LINKED_LIST [TRAFFIC_PASSENGER]
			-- All passengers moving around the city

	trams: TRAFFIC_EVENT_LINKED_LIST [TRAFFIC_TRAM]
			-- All trams in the city

	busses: TRAFFIC_EVENT_LINKED_LIST [TRAFFIC_BUS]

	line_sections_of_stop (a_name: STRING; a_line: TRAFFIC_LINE): LIST [TRAFFIC_LINE_SECTION] is
			-- Line sections (2 or 1) of the stop specified by `a_name' for the line `a_line'
		require
			places.has (a_name) and then places.item (a_name).has_stop (a_line)
		local
			a_connections: LIST [TRAFFIC_CONNECTION]
			ls: TRAFFIC_LINE_SECTION
		do
			Result := create {ARRAYED_LIST [TRAFFIC_LINE_SECTION]}.make (2)
			graph.search (places.item (a_name).stop (a_line))
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
			place_in_map: places.has (a_name)
		local
			nodes: LIST [TRAFFIC_NODE]
		do
			Result := create {ARRAYED_LIST [TRAFFIC_CONNECTION]}.make (8)
			nodes := places.item (a_name).nodes
			from nodes.start until nodes.after loop
				graph.search (nodes.item)
				Result.append (graph.incident_edge_labels)
				nodes.forth
			end
		end

	scale_factor: DOUBLE is
			-- Scale factor to reach real world distances
			-- Multiply with this to receive real-world distances
		do
			Result := scale_factor_impl
		end

--	retrieve_road (i: INTEGER): TRAFFIC_ROAD is
--			-- Road with given id `i'
--		do
--			Result:=roads.item (i)
--		end

	path: TRAFFIC_PATH is
			-- path in internal_path
		do
			Result := internal_path
		end



feature -- Events

--	unspecified_place_changed_event: EM_EVENT_CHANNEL [TUPLE []]
--			-- Event to inform views of `Current'
--			-- when `Current' changed such that
--			-- views need to re-render

--	place_changed_event: EM_EVENT_CHANNEL [TUPLE [TRAFFIC_PLACE]]
--			-- Event to inform views of `Current'
--			-- when item has been changed
--			-- at index passed as argument

--	place_inserted_event: EM_EVENT_CHANNEL [TUPLE [TRAFFIC_PLACE]]
--			-- Event to inform views of `Current'
--			-- when item has been inserted
--			-- at index passed as argument

--	place_removed_event: EM_EVENT_CHANNEL [TUPLE [TRAFFIC_PLACE]]
--			-- Event to inform views of `Current'
--			-- when item has been removed
--			-- at index passed as argument

--	unspecified_line_section_changed_event: EM_EVENT_CHANNEL [TUPLE []]
--			-- Event to inform views of `Current'
--			-- when `Current' changed such that
--			-- views need to re-render

--	line_section_changed_event: EM_EVENT_CHANNEL [TUPLE [TRAFFIC_LINE_SECTION]]
--			-- Event to inform views of `Current'
--			-- when item has been changed
--			-- at index passed as argument

--	line_section_inserted_event: EM_EVENT_CHANNEL [TUPLE [TRAFFIC_LINE_SECTION]]
--			-- Event to inform views of `Current'
--			-- when item has been inserted
--			-- at index passed as argument

--	line_section_removed_event: EM_EVENT_CHANNEL [TUPLE [TRAFFIC_LINE_SECTION]]
--			-- Event to inform views of `Current'
--			-- when item has been removed
--			-- at index passed as argument

--	unspecified_road_changed_event: EM_EVENT_CHANNEL [TUPLE []]
--			-- Event to inform views of `Current'
--			-- when `Current' changed such that
--			-- views need to re-render

--	road_changed_event: EM_EVENT_CHANNEL [TUPLE [TRAFFIC_ROAD]]
--			-- Event to inform views of `Current'
--			-- when item has been changed
--			-- at index passed as argument

--	road_inserted_event: EM_EVENT_CHANNEL [TUPLE [TRAFFIC_ROAD]]
--			-- Event to inform views of `Current'
--			-- when item has been inserted
--			-- at index passed as argument

--	road_removed_event: EM_EVENT_CHANNEL [TUPLE [TRAFFIC_ROAD]]
--			-- Event to inform views of `Current'
--			-- when item has been removed
--			-- at index passed as argument

--	unspecified_line_changed_event: EM_EVENT_CHANNEL [TUPLE []]
--			-- Event to inform views of `Current'
--			-- when `Current' changed such that
--			-- views need to re-render

--	line_changed_event: EM_EVENT_CHANNEL [TUPLE [TRAFFIC_LINE]]
--			-- Event to inform views of `Current'
--			-- when item has been changed
--			-- at index passed as argument

--	line_inserted_event: EM_EVENT_CHANNEL [TUPLE [TRAFFIC_LINE]]
--			-- Event to inform views of `Current'
--			-- when item has been inserted
--			-- at index passed as argument

--	line_removed_event: EM_EVENT_CHANNEL [TUPLE [TRAFFIC_LINE]]
--			-- Event to inform views of `Current'
--			-- when item has been removed
--			-- at index passed as argument

--	moving_inserted_event: EM_EVENT_CHANNEL [TUPLE [TRAFFIC_MOVING]]
--			-- Event to inform views of `Current'
--			-- when item has been inserted
--			-- at index passed as argument

--	moving_removed_event: EM_EVENT_CHANNEL [TUPLE [TRAFFIC_MOVING]]
--			-- Event to inform views of `Current'
--			-- when item has been removed
--			-- at index passed as argument

feature {TRAFFIC_MAP_MODEL} -- Access

--	map_places: TRAFFIC_EVENT_ARRAYED_LIST [TRAFFIC_PLACE] is
--			--
--		do
--			Result := internal_place_array
--		end

--	map_line_sections: ARRAYED_LIST [TRAFFIC_LINE_SECTION] is
--			--
--		do
--			Result := internal_line_sections
--		end

feature -- Output

	out: STRING is
			-- Textual representation.
		do
			Result := "Traffic map%Nnamed: " + name + "%Ndescription: " + description_out +
				"%N%Nplaces:%N" + places.out +
				"%N%Nlines:%N" + lines.out
		end

feature -- Basic operations

	find_shortest_path (a_origin: TRAFFIC_PLACE; a_destination: TRAFFIC_PLACE) is
			-- Find shortest path.
		local
			temp_path: LIST [LINKED_GRAPH_WEIGHTED_EDGE [TRAFFIC_NODE, TRAFFIC_CONNECTION]]
			a_road: TRAFFIC_ROAD
			a_type: TRAFFIC_TYPE_STREET
			road_id: INTEGER
			pp: ARRAYED_LIST [EM_VECTOR_2D]
			current_ps, next_ps: TRAFFIC_PATH_SECTION
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
				create shortest_path_impl.make
				shortest_path_impl.set_scale_factor (scale_factor)

				from temp_path.start until temp_path.after loop
					if (not (temp_path.item.label.origin = temp_path.item.label.destination)) and (shortest_path_impl.first = Void) then
							--don't make path_section for intra-place connections
						create current_ps.make (temp_path.item.label)
						shortest_path_impl.set_first (current_ps)
					else
						if not (temp_path.item.label.origin = temp_path.item.label.destination) then
								--don't make path_section for intra-place connections
							create next_ps.make(temp_path.item.label)
							if current_ps.is_insertable (next_ps) then
									--same type of line
								current_ps.extend (next_ps)
							else
									--different type of line
								current_ps.set_next (next_ps)
								current_ps := next_ps
							end
						end
					end
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

	find_shortest_path_of_a_list_of_places(places_to_visit: LINKED_LIST [TRAFFIC_PLACE]) is
			-- given a list of places `places_to_visit' finding shortest path visiting all these places
			require
				places_to_visit_exists: places_to_visit /= VOID
				min_two_places_to_visit: places_to_visit.count > 1
			local
				a_path: TRAFFIC_PATH
				current_place, next_place: TRAFFIC_PLACE
			do
				create a_path.make
				a_path.set_scale_factor (scale_factor)

				from
					places_to_visit.start
				until
					places_to_visit.after
				loop
					current_place := places_to_visit.item
					places_to_visit.forth
					if not places_to_visit.after then
						next_place := places_to_visit.item
						find_shortest_path(current_place, next_place)
						if path_found then
							a_path.append_a_path (shortest_path)
						end
					end
				end
				shortest_path_impl := a_path
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
			place_array: ARRAY [TRAFFIC_PLACE]
			i: INTEGER
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
				place_array := places.to_array
				i := 1
			until
				i > place_array.count
			loop
				from
					p := place_array.item (i)
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
				i := i + 1
			end
		end

feature {NONE}-- Implementation

	graph: TRAFFIC_GRAPH
			-- used for path finding

--	internal_places: TRAFFIC_EVENT_HASH_TABLE [TRAFFIC_PLACE, STRING]
			-- Places on map.

--	internal_place_array: TRAFFIC_EVENT_ARRAYED_LIST [TRAFFIC_PLACE]
			-- Array with all places for performant map model implementation.

--	internal_lines: HASH_TABLE [TRAFFIC_LINE, STRING]
--			-- Lines on map.

--	internal_roads: HASH_TABLE [TRAFFIC_ROAD, INTEGER]
--			--	Roads on map.

--	internal_line_sections: ARRAYED_LIST [TRAFFIC_LINE_SECTION]
--			--	Line sections on map.

	internal_buildings: ARRAY[LINKED_LIST [TRAFFIC_BUILDING]]
			-- Buildings on map.

--	internal_travelers: HASH_TABLE [TRAFFIC_MOVING, INTEGER]
--			-- Travelers on map.

	internal_taxi_offices: ARRAYED_LIST[TRAFFIC_TAXI_OFFICE]
			-- Taxi offices associated with this map

	shortest_path_impl: TRAFFIC_PATH
			-- Traffic path last calculated

	scale_factor_impl: DOUBLE
			-- Scale factor used to get real world distances

	internal_path: TRAFFIC_PATH
			-- path added to map

	place_position (a_name: STRING): INTEGER is
			-- Position of place `a_name' in places
		require
			a_name_exists: a_name /= Void
			a_name_not_exmpa: not a_name.is_empty
			a_name_in_places: places.has (a_name)
		local
			i: INTEGER
		do
			from
				i := 1
				places.start
			until
				places.item_for_iteration.name.is_equal (a_name)
			loop
				i := i + 1
				places.forth
			end
			Result := i
		end


	description_out: STRING is
			-- Textual representation of description
		do
			if description = Void then
				Result := ""
			else
				Result := description
			end
		ensure
			Result_exists: Result /= Void
		end

--	places_out: STRING is
--			-- Textual representation of places
--		local
--			current_place: TRAFFIC_PLACE
--		do
--			Result := ""
--			if not places.is_empty then
--				from
--					places.start
--				until
--					places.after
--				loop
--					current_place := places.item_for_iteration
--					Result := Result + current_place.out
--					places.forth
--					if not places.after then
--						Result := Result + "%N"
--					end
--				end
--			end
--		end

--	lines_out: STRING is
--			-- Textual representation of places
--		local
--			current_line: TRAFFIC_LINE
--		do
--			Result := ""
--			if not lines.is_empty then
--				from
--					lines.start
--				until
--					lines.after
--				loop
--					current_line := lines.item_for_iteration
--					Result := Result + current_line.out + "%N"
--					lines.forth
--					if not lines.after then
--						Result := Result + "%N"
--					end
--				end
--			end
--		end

--	line_sections_out: STRING is
--			-- Textual representation of line sections
--		local
--			current_line_section: TRAFFIC_LINE_SECTION
--		do
--			Result := ""
--			if not line_sections.is_empty then
--				from
--					line_sections.start
--				until
--					line_sections.after
--				loop
--					current_line_section := line_sections.item_for_iteration
--					Result := Result + current_line_section.out
--					line_sections.forth
--					if not line_sections.after then
--						Result := Result + "%N"
--					end
--				end
--			end
--		end

	position_from_connections (a_connections: LIST [TRAFFIC_CONNECTION]; a_node: TRAFFIC_NODE): EM_VECTOR_2D is
			-- Position of `a_node'
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
	places_not_void: places /= Void -- Places exist.
	lines_not_void: lines /= Void -- Lines exist.
	line_sections_not_void: line_sections /= Void -- Line sections exist
--	travelers_not_void: travelers /= Void -- Travelers exist
	internal_taxi_offices_not_void: internal_taxi_offices /= Void
end
