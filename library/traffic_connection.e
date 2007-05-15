indexing
	description: "Deferred connections for the graph"
	date: "$Date: 2006-03-27 19:42:12 +0200 (Mon, 27 Mar 2006) $"
	revision: "$Revision: 601 $"

deferred class
	TRAFFIC_CONNECTION

inherit
	LINKED_GRAPH_WEIGHTED_EDGE [TRAFFIC_NODE, REAL]
		rename
			make_directed as make_directed_old,
			make_undirected as make_undirected_old,
			internal_start_node as start_node,
			internal_end_node as end_node,
			make as make_old
		export {NONE}
			make_directed_old, make_undirected_old
		redefine
			out, is_equal, start_node, end_node
		end

	TRAFFIC_MAP_ITEM
		undefine
			out, is_equal
		end

feature -- Initialization

	make_directed (a_start_node, a_end_node: like start_node) is
		require
			nodes_not_void: a_start_node /= Void and a_end_node /= Void
		do
			start_node := a_start_node
			end_node := a_end_node
			is_directed := True
			create state.make
		ensure
			nodes_not_void: start_node /= Void and
							end_node /= Void
			is_directed: is_directed
		end

feature -- Element change

	set_state (a_state: TRAFFIC_CONNECTION_STATE ) is
			-- Change state to `a_state'.
		require
			a_state_exists: a_state /= Void
		do
			state := a_state
		ensure
			state_set: state = a_state
		end

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

feature -- Access

	state: TRAFFIC_CONNECTION_STATE
			-- State of connection

	type: TRAFFIC_TYPE
			-- Type of the line section

	origin: TRAFFIC_PLACE is
			-- Place of origin.
		do
			Result := start_node.place
		end

	destination: TRAFFIC_PLACE is
			-- Place of destination.
		do
			Result := end_node.place
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

feature -- Access

	weight_factor: DOUBLE is
			-- Factor with which the length of the connection is multiplied
		deferred
		ensure
			weight_factor_valid: Result > 0
		end

	start_node: TRAFFIC_NODE

	end_node: like start_node

feature -- Status report

	is_equal (other: like Current): BOOLEAN is
			-- Is `other' attached to an object considered
			-- equal to current object?
		do
			-- Start and end node must be equal.
			Result := start_node.is_equal (other.start_node) and
					  end_node.is_equal (other.end_node)
		end

feature -- Output

	out: STRING is
			-- Textual representation of the edge
		do
			Result := start_node.out
			if is_directed then
				Result.append (" -> ")
			else
				Result.append (" -- ")
			end
			Result.append (end_node.out)
		end

invariant

	polypoints_exist: polypoints /= Void
	nodes_exist: start_node /= Void and end_node /= Void
	is_directed: is_directed
	state_valid: state /= Void

end
