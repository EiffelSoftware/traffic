indexing
	description: "City with a traffic system of a region."
	date: "$Date: 2006/01/09 12:23:40 $"
	revision: "$Revision: 1.5 $"

class
	TRAFFIC_CITY

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
			-- Create an empty city with name `a_name'.
		require
			a_name_exists: a_name /= Void
			a_name_not_empty: not a_name.is_empty
		local
			default_size: INTEGER
		do
			default_size := 100
			name := a_name
			create graph.make
			create stations.make (default_size * default_size, Current)
			create lines.make (default_size, Current)
			create line_sections.make
			create roads.make (default_size, Current)
			create passengers.make (Current)
			create trams.make (Current)
			create busses.make (Current)
			create taxi_offices.make (Current)
			create routes.make (Current)
			create buildings.make (Current)
			create free_movings.make (Current)
		ensure
			name_set: equal (name, a_name)
			stations_not_void: stations /= Void
			lines_not_void: lines /= Void
			line_sections_not_void: line_sections /= Void
		end

feature -- TODO

	display is
			-- Just for the first example of touch of class.
		do
			-- Do nothing
		end

feature -- Status report

	station_at_position (a_point: TRAFFIC_COORDINATE): TRAFFIC_STATION	is
			-- Station that `a_point' is located on
			-- Returns Void if there is no station at this position
		require
			a_point_exists: a_point /= Void
		local
			tolerance: DOUBLE
		do
			tolerance := 2.0
			from
				stations.start
			until
				stations.after or Result /= Void
			loop
				if a_point.x > stations.item_for_iteration.position.x - stations.item_for_iteration.width/2 - tolerance and a_point.x < stations.item_for_iteration.position.x + stations.item_for_iteration.width/2 + tolerance and
					a_point.y > stations.item_for_iteration.position.y - stations.item_for_iteration.breadth/2 - tolerance and a_point.y < stations.item_for_iteration.position.y + stations.item_for_iteration.breadth/2 + tolerance then
					Result := stations.item_for_iteration
				end
				stations.forth
			end
		end

feature -- Element change

	set_center (a_center: TRAFFIC_COORDINATE) is
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
			-- Set city description.
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

	add_tram_per_line_with_schedule (a_map: TRAFFIC_CITY; number: INTEGER) is
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

	center: TRAFFIC_COORDINATE
			-- Position of the city center

	radius: DOUBLE
			-- Radius of the city

	graph: TRAFFIC_GRAPH
			-- Graph used for calculating shortest routes

	name: STRING
			-- Name of region this city represents

	description: STRING
			-- Textual description of the city

	scale_factor: DOUBLE
			-- Scale factor to reach real world distances
			-- Multiply with this to receive real-world distances

feature -- Access (city objects)

	stations: TRAFFIC_ITEM_HASH_TABLE [TRAFFIC_STATION, STRING]
			-- All stations in city

	line_sections: DS_LINKED_LIST [TRAFFIC_LINE_CONNECTION]
			-- All line sections in city

	lines: TRAFFIC_ITEM_HASH_TABLE [TRAFFIC_LINE, STRING]
			-- All lines in city

	roads: TRAFFIC_ITEM_HASH_TABLE [TRAFFIC_ROAD, INTEGER]
			-- All roads in city

	routes: TRAFFIC_ITEM_LINKED_LIST [TRAFFIC_ROUTE]
			-- All routes in the city

	buildings: TRAFFIC_ITEM_LINKED_LIST [TRAFFIC_BUILDING]
			-- Buildings of the city

	taxi_offices: TRAFFIC_ITEM_LINKED_LIST [TRAFFIC_TAXI_OFFICE]
			-- All taxi offices associated with this city

	passengers: TRAFFIC_ITEM_LINKED_LIST [TRAFFIC_PASSENGER]
			-- All passengers moving around the city

	trams: TRAFFIC_ITEM_LINKED_LIST [TRAFFIC_TRAM]
			-- All trams in the city

	busses: TRAFFIC_ITEM_LINKED_LIST [TRAFFIC_BUS]
			-- All busses in the city

	free_movings: TRAFFIC_ITEM_LINKED_LIST [TRAFFIC_FREE_MOVING]
			-- All free moving objects in the city

feature -- Access

	line_sections_of_stop (a_name: STRING; a_line: TRAFFIC_LINE): LIST [TRAFFIC_LINE_CONNECTION] is
			-- Line sections (2 or 1) of the stop specified by `a_name' for the line `a_line'
		require
			stations.has (a_name) and then stations.item (a_name).has_stop (a_line)
		local
			a_connections: LIST [TRAFFIC_CONNECTION]
			ls: TRAFFIC_LINE_CONNECTION
		do
			Result := create {ARRAYED_LIST [TRAFFIC_LINE_CONNECTION]}.make (2)
			graph.search (stations.item (a_name).stop (a_line))
			a_connections := graph.incident_edges
			from a_connections.start until a_connections.after loop
				ls ?= a_connections.item
				if ls /= Void then
					Result.extend (ls)
				end
				a_connections.forth
			end
		end

feature -- Output

	out: STRING is
			-- Textual representation.
		do
			Result := "Traffic city%Nnamed: " + name + "%Ndescription: " + description_out +
				"%N%Nstations:%N" + stations.out
		end

feature {TRAFFIC_MAP_LOADER}

	recalculate_weights_and_connect_stops is
			-- Due to an error in processing the weights need to be recalculated.
			-- In addition, the stops of different lines are connected at nodes.
		local
			the_edges: LIST[TRAFFIC_CONNECTION]
			total_weight: DOUBLE
			average_weight: DOUBLE
			w: DOUBLE
			edge_count: INTEGER
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
		end

feature {NONE}-- Implementation

	station_position (a_name: STRING): INTEGER is
			-- Position of station `a_name' in stations
		require
			a_name_exists: a_name /= Void
			a_name_not_exmpa: not a_name.is_empty
			a_name_in_stations: stations.has (a_name)
		local
			i: INTEGER
		do
			from
				i := 1
				stations.start
			until
				stations.item_for_iteration.name.is_equal (a_name)
			loop
				i := i + 1
				stations.forth
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

	position_from_connections (a_connections: LIST [TRAFFIC_CONNECTION]; a_node: TRAFFIC_NODE): TRAFFIC_COORDINATE is
			-- Position of `a_node'
		do

			if a_connections.first.start_node = a_node then
				Result := a_connections.first.polypoints.first
			else
				Result := a_connections.first.polypoints.last
			end
		end

invariant

	name_not_void: name /= Void
	name_not_empty: not name.is_empty
	stations_not_void: stations /= Void

end
