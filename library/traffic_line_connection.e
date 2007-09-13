indexing
	description: "Line section of line from one place to another."
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_LINE_CONNECTION

inherit

	TRAFFIC_CONNECTION
		redefine
			out,
			start_node,
			end_node,
			type,
			add_to_map,
			remove_from_map
		end


	HASHABLE
		undefine
			is_equal,
			out
		end


create
	make

feature {NONE} -- Initialization

	make (a_origin, a_destination: TRAFFIC_STOP; a_type: TRAFFIC_TYPE_LINE; a_list: DS_ARRAYED_LIST [TRAFFIC_COORDINATE] ) is
			-- Initialize `Current'.
			-- If `a_list' is Void, a list of polypoints with the coordinate of `a_origin' and
			-- `a_destination' are generated.
		require
			a_origin_exists: a_origin /= Void
			a_destination_exists: a_destination /= Void
			a_type_exists: a_type /= Void
			a_list_exists: a_list /= Void and then a_list.count >= 2 and then not a_list.has (Void)
		do
			make_directed (a_origin, a_destination)
			create state.make
			type := a_type
			create polypoints.make (2)
			set_polypoints (a_list)
			create roads.make (1)
			is_directed := True
		ensure
			origin_set: start_node = a_origin
			destination_set: end_node = a_destination
			state_exists: state /= Void
			has_type: type /=Void
			type_set: type = a_type
			polypoints_exists: polypoints /= Void
			roads_created: roads/=Void
		end

feature -- Access

	type: TRAFFIC_TYPE_LINE
			-- Type of the line section

	line: TRAFFIC_LINE
			-- Line this line section belongs to

	roads: ARRAYED_LIST [TRAFFIC_ROAD_CONNECTION]
			-- Roads on which the line section lies

	hash_code: INTEGER is
			-- Hash code value
		local
			line_name: STRING
		do
			if line = Void then
				line_name := ""
			else
				line_name := line.name
			end
			Result := ([origin, destination, type.name, line_name]).hash_code
		end

feature -- Element change



	set_roads (a_roads: ARRAYED_LIST [TRAFFIC_ROAD_CONNECTION]) is
			-- Set roads to `a_roads'.
		require
			a_roads_exist: a_roads /= Void
		do
			roads.copy (a_roads)
			changed_event.publish ([])
		ensure
			equal (roads, a_roads)
			roads_exists: roads /= Void
			roads_equal: roads.count > 0 implies equal (roads, a_roads)
		end

feature -- Basic operations

	remove_roads is
			-- Remove roads.
		do
			roads.wipe_out
			changed_event.publish ([])
		ensure
			roads_empty: roads.is_empty
		end

feature -- Status report

	is_insertable (a_map: TRAFFIC_MAP): BOOLEAN is
			-- Is `Current' insertable into `a_map'?
			-- (All places, stops, and the line need to be in the map already)
		do
			Result := 	start_node.is_in_map and end_node.is_in_map and
						origin.is_in_map and destination.is_in_map

			if line /= Void then
				Result := Result and line.is_in_map
			end

		end

	is_removable: BOOLEAN is
			-- Is `Current' removable from `a_map'?
			-- In general yes. The line needs to make sure that there is no problem...
		do
			Result := True
		end

feature -- Access

	weight_factor: DOUBLE is
			-- Factor with which the length of the connection is multiplied
		do
			if type.is_equal (create {TRAFFIC_TYPE_TRAM}.make) then
				Result := 5
			elseif type.is_equal (create {TRAFFIC_TYPE_BUS}.make) then
				Result := 7
			elseif type.is_equal (create {TRAFFIC_TYPE_RAIL}.make) then
				Result := 1
			else
				Result := 10
			end
		end

	start_node: TRAFFIC_STOP

	end_node: TRAFFIC_STOP

feature -- Output

	out: STRING is
			-- Textual representation
		local
			line_name: STRING
		do
			if line /= Void then
				line_name := " belonging to line " + line.name
			else
				line_name := ""
			end
			Result := "Traffic " + type.out + " line section, " +
				state.out +
				", from " + origin.name + " to " + destination.name +
				line_name
		end

feature {TRAFFIC_LINE} -- Status setting

	set_line (a_line: TRAFFIC_LINE) is
			-- Set line this line section belongs to.
		require
			a_line_exists: a_line /= Void
			line_not_set: line = Void
		do
			line := a_line
			changed_event.publish ([])
		ensure
			line_set: line = a_line
		end

	remove_line is
			-- Remove line section from line.
		require
			line_set: line /= Void
		do
			line := Void
			changed_event.publish ([])
		ensure
			line_void: line = Void
		end

feature {TRAFFIC_LINE} -- Basic operations (map)

	add_to_map (a_map: TRAFFIC_MAP) is
			-- Add `Current' and all nodes to `a_map'.
		do
			a_map.graph.put_line_section (Current)
			a_map.line_sections.put_last (Current)
			is_in_map := True
			map := a_map
		ensure then
			graph_has: a_map.graph.has_edge (Current)
		end

	remove_from_map is
			-- Remove all nodes from `a_map'.
		do
			map.graph.prune_edge (Current)
			map.line_sections.delete (Current)
			is_in_map := False
			map := Void
		end

invariant

	line_has_same_type: line /= Void implies equal (line.type, type) -- Only line with same type can be assigned.
	origin_set: origin /= Void -- Origin place exists.
	destination_set: origin /= Void -- Destination place exists.
	polypoints_valid: polypoints /= Void and then polypoints.count >= 2
	state_set: state /= Void -- State exists.
	type_set: type /= Void -- Type exists.

end
