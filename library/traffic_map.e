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
			villa: TRAFFIC_VILLA
		do
			default_size := 100
			name := a_name
			create graph.make
			create places.make (default_size * default_size)
			places.set_key_equality_tester (create {UC_STRING_EQUALITY_TESTER})
			create lines.make (default_size)
			lines.set_key_equality_tester (create {UC_STRING_EQUALITY_TESTER})
			create line_sections.make (default_size)
			create roads.make (default_size)
			create passengers.make
			create trams.make
			create busses.make
			create taxi_offices.make
			create paths.make
			create buildings.make
			create free_movings.make

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

	place_at_position (a_point: EM_VECTOR_2D): TRAFFIC_PLACE	is
			-- Place that `a_point' is located on
			-- Returns Void if there is no place at this position
		require
			a_point_exists: a_point /= Void
		local
			tolerance: DOUBLE
		do
			tolerance := 2.0
			from
				places.start
			until
				places.off or Result /= Void
			loop
				if a_point.x > places.item_for_iteration.position.x - places.item_for_iteration.width/2 - tolerance and a_point.x < places.item_for_iteration.position.x + places.item_for_iteration.width/2 + tolerance and
					a_point.y > places.item_for_iteration.position.y - places.item_for_iteration.breadth/2 - tolerance and a_point.y < places.item_for_iteration.position.y + places.item_for_iteration.breadth/2 + tolerance then
					Result := places.item_for_iteration
				end
				places.forth
			end
		end

feature -- Element change

	set_center (a_center: EM_VECTOR_2D) is
			-- Set city center to `a_center'.
		require
			a_center_exists: a_center /= Void
		do
			center := a_center
		ensure
			center_set: center = a_center
		end

	set_radius (a_radius: DOUBLE) is
			-- Set city radius to `a_radius'.
		require
			a_radius_exists: a_radius /= Void
		do
			radius := a_radius
		ensure
			radius_set: radius = a_radius
		end

	set_description (a_description: STRING) is
			-- Set map description.
		do
			description := a_description
		ensure
			description_set: description = a_description
		end

	set_scale_factor (a_scale_factor: DOUBLE) is
			-- Set `a_scale_factor'.
		require
			a_scale_factor_valid: a_scale_factor > 0
		do
			scale_factor := a_scale_factor
		ensure
			scale_factor_set: scale_factor = a_scale_factor
		end

feature -- Insertion

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

feature -- Access

	center: EM_VECTOR_2D
			-- Position of the city center

	radius: DOUBLE
			-- Radius of the city

	graph: TRAFFIC_GRAPH
			-- Graph used for calculating shortest paths

	name: STRING
			-- Name of region this map represents

	description: STRING
			-- Textual description of the map

	scale_factor: DOUBLE
			-- Scale factor to reach real world distances
			-- Multiply with this to receive real-world distances

feature -- Access (map objects)

	places: TRAFFIC_EVENT_HASH_TABLE [TRAFFIC_PLACE, STRING]
			-- All places in map

	line_sections: TRAFFIC_EVENT_ARRAYED_LIST [TRAFFIC_LINE_CONNECTION]
			-- All line sections in map

	lines: TRAFFIC_EVENT_META_HASH_TABLE [TRAFFIC_LINE_CONNECTION, TRAFFIC_LINE, STRING]
			-- All lines in map

	roads: TRAFFIC_EVENT_HASH_TABLE [TRAFFIC_ROAD, INTEGER]
			-- All roads in map

	paths: TRAFFIC_EVENT_LINKED_LIST [TRAFFIC_PATH]
			-- Paths of the map

	buildings: TRAFFIC_EVENT_LINKED_LIST [TRAFFIC_BUILDING]
			-- Buildings of the map

	taxi_offices: TRAFFIC_EVENT_LINKED_LIST [TRAFFIC_TAXI_OFFICE]
			-- All taxi offices associated with this map

	passengers: TRAFFIC_EVENT_LINKED_LIST [TRAFFIC_PASSENGER]
			-- All passengers moving around the city

	trams: TRAFFIC_EVENT_LINKED_LIST [TRAFFIC_TRAM]
			-- All trams in the city

	busses: TRAFFIC_EVENT_LINKED_LIST [TRAFFIC_BUS]
			-- All busses in the city

	free_movings: TRAFFIC_EVENT_LINKED_LIST [TRAFFIC_FREE_MOVING]
			-- All free moving objects in the city

feature -- Access

	line_sections_of_stop (a_name: STRING; a_line: TRAFFIC_LINE): LIST [TRAFFIC_LINE_CONNECTION] is
			-- Line sections (2 or 1) of the stop specified by `a_name' for the line `a_line'
		require
			places.has (a_name) and then places.item (a_name).has_stop (a_line)
		local
			a_connections: LIST [TRAFFIC_CONNECTION]
			ls: TRAFFIC_LINE_CONNECTION
		do
			Result := create {ARRAYED_LIST [TRAFFIC_LINE_CONNECTION]}.make (2)
			graph.search (places.item (a_name).stop (a_line))
			a_connections := graph.incident_edges
			from a_connections.start until a_connections.after loop
				ls ?= a_connections.item
				if ls /= Void then
					Result.extend (ls)
				end
				a_connections.forth
			end
		end

--	connections_of_place (a_name: STRING): LIST [TRAFFIC_CONNECTION] is
--			-- Connections with origin or destination place `a_name'
--		require
--			place_in_map: places.has (a_name)
--		local
--			nodes: LIST [TRAFFIC_NODE]
--		do
--			Result := create {ARRAYED_LIST [TRAFFIC_CONNECTION]}.make (8)
--			nodes := places.item (a_name).nodes
--			from nodes.start until nodes.after loop
--				graph.search (nodes.item)
--				Result.append (graph.incident_edges)
--				nodes.forth
--			end
--		end

feature -- Output

	out: STRING is
			-- Textual representation.
		do
			Result := "Traffic map%Nnamed: " + name + "%Ndescription: " + description_out +
				"%N%Nplaces:%N" + places.out --+
--				"%N%Nlines:%N" + lines.out
		end

feature {TRAFFIC_MAP_LOADER}

	recalculate_weights_and_connect_stops is
			-- Due to an error in processing the weights need to be recalculated.
			-- In addition, the stops of different lines are connected at nodes.
		local
			the_edges: LIST[TRAFFIC_CONNECTION]
			p: TRAFFIC_PLACE
			s: TRAFFIC_STOP
			a_edge: TRAFFIC_ROAD_CONNECTION
			total_weight: DOUBLE
			average_weight: DOUBLE
			w: DOUBLE
			edge_count: INTEGER
			type: TRAFFIC_TYPE_STREET
			pp: DS_ARRAYED_LIST [EM_VECTOR_2D]
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
				w := the_edges.item.length
				the_edges.item.set_weight (w)
				total_weight := total_weight + w
				edge_count := edge_count + 1
				the_edges.forth
			end

			if edge_count > 0 then
				average_weight := total_weight / edge_count
			end

--			create type.make
--			-- Connect stops.
--			-- TODO: If the roads should be used for transport, the nodes must be connected as well.
--			create pp.make (2)
----			pp.force_last (Void)
----			pp.force_last (Void)

--			from
--				places.start
--			until
--				places.off
--			loop
--				from
--					p := place_array.item (i)
--					p.stops.start
--				until
--					p.stops.after
--				loop
--					s := p.stops.item
--					graph.search (s)
--					pp.force (position_from_connections (p.stops.item.connection_list, s), 1)
--					p.stops.forth
--					if not p.stops.after then
--						graph.search (p.stops.item)
--						pp.force (p.position, 2)
--						create a_edge.make_invisible (s, p.dummy_node, type, graph.id_manager.next_free_index, "undirected")
--						a_edge.set_polypoints (pp)
--						a_edge.add_to_map (Current)

----						a := pp.first
----						pp.force (pp.last, 1)
----						pp.force (a, 2)
----						a_edge.set_polypoints (pp)
----						a_edge.add_to_map (Current)
--					end
--				end
--				i := i + 1
--			end
		end

feature {NONE}-- Implementation

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

	position_from_connections (a_connections: LIST [TRAFFIC_CONNECTION]; a_node: TRAFFIC_NODE): EM_VECTOR_2D is
			-- Position of `a_node'
		do

			if a_connections.first.start_node = a_node then
				Result := a_connections.first.polypoints.first
			else
				Result := a_connections.first.polypoints.last
			end
		end

invariant
	name_not_void: name /= Void -- Map name exists.
	name_not_empty: not name.is_empty -- Map name not empty.
	places_not_void: places /= Void -- Places exist.
--	lines_not_void: lines /= Void -- Lines exist.
--	line_sections_not_void: line_sections /= Void -- Line sections exist
--	travelers_not_void: travelers /= Void -- Travelers exist
--	internal_taxi_offices_not_void: internal_taxi_offices /= Void
end
