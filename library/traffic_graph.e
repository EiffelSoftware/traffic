indexing
	description: "Objects that represent the graph for the map"
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_GRAPH

inherit
	LINKED_WEIGHTED_GRAPH [TRAFFIC_NODE, TRAFFIC_CONNECTION]
	redefine
		find_shortest_path,
		writable,
		put_edge,
		prune_node,
		prune_edge_impl,
		make_multi_graph,
		enable_user_defined_weight_function
	end

create {TRAFFIC_MAP}
	make_multi_graph

feature {NONE} -- Creation

	make_multi_graph is
			-- Initialize `Current'
		do
			Precursor
			shortest_path_mode := normal_distance
			enable_user_defined_weight_function (agent calculate_weight)
		end

feature -- Basic operations

	find_shortest_path (a_start_node, a_end_node: like item) is
			-- Remember start and end
		do
			sp_origin := a_start_node
			sp_destination := a_end_node
			Precursor (a_start_node, a_end_node)
		end

	put_edge (a_start_node, a_end_node: like item; a_label: TRAFFIC_CONNECTION; a_weight: REAL) is
			-- redefined to record weight
		do
			total_weight := total_weight + a_label.length
			Precursor (a_start_node, a_end_node, a_label, a_weight)
			if a_label.origin = a_label.destination and then weight_function /= Void then
				internal_edges.last.enable_user_defined_weight_function (weight_function)
			end
		end

feature {TRAFFIC_MAP} -- Access

	normal_distance: INTEGER is 0
	minimal_switches: INTEGER is 1

feature {TRAFFIC_MAP} -- Status Setting

	set_shortest_path_mode (a_mode: INTEGER) is
			-- set path mode a_mode
		do
			shortest_path_mode := a_mode
		end

feature -- Status Setting

	enable_user_defined_weight_function (a_function: FUNCTION [ANY, TUPLE [WEIGHTED_EDGE [TRAFFIC_NODE, TRAFFIC_CONNECTION]], REAL_32]) is
			-- Use `a_function' to compute edge weight instead of stored value.
		local
			edge_list: like edges
			edge: like edge_item
		do
			weight_function := a_function
			from
				edge_list := edges
				edge_list.start
			until
				edge_list.after
			loop
				edge := edge_list.item
				if edge.label.origin = edge.label.destination then
					edge.enable_user_defined_weight_function (a_function)
				end
				edge_list.forth
			end
		end


feature -- Status Report

	writable: BOOLEAN is
			-- Is there a current item that may be modified?
		do
			Result := not off
		end

	is_normal_distance: BOOLEAN is
			-- is the shortest path calculated for normal distance (false for minimum stops)
		do
			Result := shortest_path_mode = normal_distance
		end

feature -- Removal

	prune_node (a_item: like item) is
			-- Remove `a_item' and all of its incident edges from the graph.
			-- `off' will be set when `item' is removed.
			-- The cursor will turn right if `target' is removed.
		local
			index: INTEGER
			edge: like edge_item
			dangling_edges: LINEAR [like edge_item]
		do
			-- Graph becomes `off' when current node is removed.
			if (not off) and equal (item, a_item) then
				current_node := Void
			elseif (not off) and equal (target, a_item) then
				if out_degree > 1 then
					-- Turn right if `target' is removed.
					right
				else
					exhausted := True
				end
			end

			-- Get index of `a_item'.
			index := index_of_element.item (a_item)

			if index > 0 then
				-- Node found: remove `a_item' from node list.
				node_list.put (Void, index)
				inactive_nodes.extend (index)
				index_of_element.remove (a_item)

				-- Remove all incident edges of `a_item'.
				from
					dangling_edges := internal_edges.linear_representation
					dangling_edges.start
				until
					dangling_edges.after
				loop
					edge := dangling_edges.item
					if edge.start_node.is_equal (a_item) then
						-- Remove edge starting in `a_item'.
						total_weight := total_weight - edge.label.length
						internal_edges.prune (edge)
					elseif edge.end_node.is_equal (a_item) then
						-- Remove edge ending in `a_item'.
						prune_edge_impl (edge)
					else
						dangling_edges.forth
					end
				end

				-- Adjust node counter.
				node_count := node_count - 1
			end
		end


feature {NONE} -- Implementation

	weight_function: FUNCTION [ANY, TUPLE [WEIGHTED_EDGE [TRAFFIC_NODE, TRAFFIC_CONNECTION]], REAL_32]
		-- holds the weight function, if Void, no weight function is used.

	prune_edge_impl (a_edge: EDGE [like item, TRAFFIC_CONNECTION]) is
			-- Redefined to subtract the length of the connection from the total
		do
			total_weight := total_weight - a_edge.label.length
			Precursor (a_edge)
		end


	calculate_weight (a_edge: WEIGHTED_EDGE [TRAFFIC_NODE, TRAFFIC_CONNECTION]): REAL is
			-- calculate the edge based on the current status
			-- this is only used for "dummy" connections
		local
			section: TRAFFIC_CONNECTION
		do
			inspect shortest_path_mode
			when normal_distance then
				Result := average_weight / 2
			when minimal_switches then
				Result := total_weight
			else
				(create {EXCEPTIONS}).raise ("Unknown path mode in TRAFFIC_GRAPH")
			end
		end

	shortest_path_mode: INTEGER

	sp_origin: TRAFFIC_NODE
	sp_destination: TRAFFIC_NODE

	total_weight: DOUBLE
		-- this is the total length of all TRAFFIC_CONNECTIONs added
		-- it is usually less then the total weight of the edges because
		-- the "dummy" connections have a higher weight than their length

	average_weight: DOUBLE is
			-- average weight of an edge used for "dummy" connections
			-- between nodes of the same place
		do
			Result := total_weight / internal_edges.count
		end

end
