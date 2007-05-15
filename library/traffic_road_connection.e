indexing
	description: "Directed road connections that connect two places"
	date: "$Date: 2006-03-27 19:42:12 +0200 (Mon, 27 Mar 2006) $"
	revision: "$Revision: 601 $"

class
	TRAFFIC_ROAD_CONNECTION

inherit

	TRAFFIC_CONNECTION
		redefine
			type
		end

create
	make

feature {NONE} -- Creation

	make (a_origin, a_destination: TRAFFIC_NODE; a_type: TRAFFIC_TYPE_ROAD; an_id: INTEGER) is
			-- Initialize `Current'.
		require
			a_origin_exists: a_origin /= Void
			a_destination_exists: a_destination /= Void
			a_type_exists: a_type /= Void
		do
			start_node := a_origin
			end_node := a_destination
			make_directed (start_node, end_node)
			type := a_type
			is_directed:=true
			create polypoints.make (0)
			polypoints.force_last (a_origin.place.position)
			polypoints.force_last (a_destination.place.position)
			id := an_id
		ensure
			origin_set: start_node = a_origin
			destination_set: end_node = a_destination
			type_set: type = a_type
			polypoints_exists: polypoints /= Void
			id_set: id = an_id
		end

feature -- Access

	weight_factor: DOUBLE is
			-- Factor with which the length of the connection is multiplied
		do
			Result := 10
		end

	hash_code: INTEGER is
			-- Hash code value
		do
			Result := ([origin, destination, id]).hash_code
		end

	type: TRAFFIC_TYPE_ROAD
			-- Road type

	id: INTEGER
			-- Id of road

feature -- Basic operations

	add_to_map (a_map: TRAFFIC_MAP) is
			-- Add `Current' and all nodes to `a_map'.
		do
			a_map.graph.put_road (Current)
			is_in_map := True
			map := a_map
		ensure then
			graph_has: a_map.graph.has_edge (Current)
		end

	remove_from_map is
			-- Remove all nodes from `a_map'.
		do
			is_in_map := False
			map := Void
		end

feature -- Status report

	is_insertable (a_map: TRAFFIC_MAP): BOOLEAN is
			-- Is `Current' insertable into `a_map'?
			-- E.g. are all needed elements already inserted in the map?
		do
			Result := 	start_node.is_in_map and end_node.is_in_map and
						origin.is_in_map and destination.is_in_map
		end

invariant

	id_set: id > 0
	type_exists: type /= Void

end
