indexing
	description: "Invisible connections for the graph"
	date: "$Date: 2006-03-27 19:42:12 +0200 (Mon, 27 Mar 2006) $"
	revision: "$Revision: 601 $"

deferred class
	TRAFFIC_CONNECTION

inherit
	LINKED_GRAPH_WEIGHTED_EDGE [TRAFFIC_NODE, REAL]
		rename
			make_directed as make_directed_old,
			make_undirected as make_undirected_old,
			internal_start_node as origin_impl,
			internal_end_node as destination_impl,
			start_node as origin_impl,
			end_node as destination_impl
		redefine
			out, is_equal, origin_impl, destination_impl
		end

	TRAFFIC_MAP_ITEM
		undefine
			out, is_equal
		end

feature -- Initialization

	make_directed (a_start_node, a_end_node: like origin_impl) is
		require
			nodes_not_void: a_start_node /= Void and a_end_node /= Void
		do
			origin_impl := a_start_node
			destination_impl := a_end_node
			is_directed := True
		ensure
			nodes_not_void: origin_impl /= Void and
							destination_impl /= Void
			nodes_not_void: origin_impl /= Void and
							destination_impl /= Void
			is_directed: is_directed
--			weight_set: weight = a_weight
--			default_weight_function: not user_defined_weight_function
		end

	make_undirected (a_start_node, a_end_node: like origin_impl) is
		require
			nodes_not_void: a_start_node /= Void and a_end_node /= Void
		do
			origin_impl := a_start_node
			destination_impl := a_end_node
			is_directed := False
		ensure
			nodes_not_void: origin_impl /= Void and
							destination_impl /= Void
			not_directed: not is_directed
--			weight_set: weight = a_weight
--			default_weight_function: not user_defined_weight_function
		end

feature -- Element change

	set_polypoints (a_polypoints: DS_ARRAYED_LIST [EM_VECTOR_2D]) is
			-- Set polypoints to `a_polypoints'.
		require
			a_polypoints_exist: a_polypoints /= Void
		do
			polypoints.copy (a_polypoints)
		ensure
			polypoints_exists: polypoints /= Void
		end

	remove_polypoints is
			-- Remove polypoints.
		do
			polypoints.wipe_out
		end

--feature -- Basic operations

--	add_to_map (a_map: TRAFFIC_MAP) is
--			-- Add `Current' and all nodes to `a_map'.
--		do
--			a_map.graph.put_connection (Current)
--			is_in_map := True
--			map := a_map
--		ensure then
--			graph_has: a_map.graph.has_edge (Current)
--		end

--	remove_from_map is
--			-- Remove all nodes from `a_map'.
--		do
--			is_in_map := False
--			map := Void

--		end

feature -- Access

	type: TRAFFIC_TYPE
			-- Type of the line section

	origin: TRAFFIC_PLACE is
			-- Place of origin.
		do
			Result := origin_impl.place
		end

	destination: TRAFFIC_PLACE is
			-- Place of destination.
		do
			Result := destination_impl.place
		end

	polypoints: DS_ARRAYED_LIST [EM_VECTOR_2D]
			-- Position representation of the connection.

	length: DOUBLE is
			-- Length from start of polypoints to end.
			-- If no polypoints exists, distance between origin and destination.
		local
			i: INTEGER
		do
			if polypoints = Void or polypoints.count < 1 then
				Result := origin.position.distance (destination.position)
			else
				Result := 0.0
				from
					i := 1
				until
					i = polypoints.count
				loop
					Result := Result + polypoints.item (i).distance (polypoints.item (i + 1))
					i := i + 1
				end
			end
		end

feature -- Element change


--	is_directed: BOOLEAN
			-- Is the road directed?

feature -- Access

	origin_impl: TRAFFIC_NODE

	destination_impl: like origin_impl

--	opposite (a_node: like origin_impl): like origin_impl is
--			-- Opposite node of `a_linked_node' in an undirected graph
--		require
--			undirected: not is_directed
--			incident_node: a_node = origin_impl or a_node = destination_impl
--		do
--			if a_node = origin_impl then
--				Result := destination_impl
--			else
--				Result := origin_impl
--			end
--		end

--feature -- Status report

--	is_loop: BOOLEAN is
--			-- Is the current edge a loop?
--		do
--			Result := origin_impl.is_equal (destination_impl)
--		end

--	is_directed: BOOLEAN
--			-- Is the current edge directed?

feature -- Comparison

feature -- Status report

--	is_insertable (a_map: TRAFFIC_MAP): BOOLEAN is
--			-- Is `Current' insertable into `a_map'?
--			-- E.g. are all needed elements already inserted in the map?
--		do
--			Result := 	origin_impl.is_in_map and destination_impl.is_in_map and
--						origin.is_in_map and destination.is_in_map
--		end

	is_equal (other: like Current): BOOLEAN is
			-- Is `other' attached to an object considered
			-- equal to current object?
		do
			-- Start and end node must be equal.
			Result := origin_impl.is_equal (other.origin_impl) and
					  destination_impl.is_equal (other.destination_impl)

			-- Consider also flipped edges in undirected graphs.
			if not is_directed then
				Result := Result or
						 (origin_impl.is_equal (other.destination_impl) and
						  destination_impl.is_equal (other.origin_impl))
			end
			-- Labels must be equal.
--			Result := Result and equal (label, other.label)
		end

feature -- Output

	out: STRING is
			-- Textual representation of the edge
		do
			Result := origin_impl.out
			if is_directed then
				Result.append (" -> ")
			else
				Result.append (" -- ")
			end
			Result.append (destination_impl.out)
		end

invariant

	polypoints_exist: polypoints /= Void
	nodes_exist: origin_impl /= Void and destination_impl /= Void

end
