indexing
	description: "Traffic graph containing nodes and connections"
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_GRAPH

inherit

	LINKED_WEIGHTED_GRAPH [TRAFFIC_NODE, REAL]
		rename
			put_edge as connect_nodes
		redefine
			current_node,
			edge_item,
			node_from_item,
			annotated_nodes,
			adopt_edge,
			has_edge,
			edge_occurences,
			put_node,
			connect_nodes,
			prune_node,
			prune_edge_impl,
			prune_edge,
			border_nodes,
			enable_user_defined_weight_function
		end

create
	make

feature {NONE} -- Initialization

	make is
			-- Initialize `Current'.
		local
			default_size: INTEGER
		do
			default_size := 100
			make_multi_graph
			shortest_path_mode := normal_distance
			enable_user_defined_weight_function (agent calculate_weight)
			create id_manager
		end

feature -- Insertion

	connect_nodes (a_start_node, a_end_node: like item; a_label: REAL; a_weight: REAL) is
			-- Redefined to record weight.
		local
			r: TRAFFIC_ROAD
			i: INTEGER
		do
			create r.make_insertable (a_start_node, a_end_node, create {TRAFFIC_TYPE_STREET}.make, id_manager.next_free_index, "undirected")
			a_start_node.put_connection (r)
			internal_edges.extend (r)
			id_manager.take (r.id)
			total_weight := total_weight + r.length
		end

--	put_connection (a_connection: like edge_item) is
--			-- Insert `a_connection' into the graph.
--		require
--			a_connection_exists: a_connection /= Void
--		local
--			r: TRAFFIC_ROAD
--		do
--			a_connection.origin_impl.put_connection (a_connection)
--			internal_edges.extend (a_connection)
--			r ?= a_connection
--			if r /= Void then
--				id_manager.take (r.id)
--			end
--			total_weight := total_weight + a_connection.length
--			if not a_connection.is_directed then
--				a_connection.destination_impl.put_connection (a_connection)
--			end
--		end

	put_road (a_road: TRAFFIC_ROAD) is
			-- Insert `a_road' into the graph.
		require
			a_road_exists: a_road /= Void
			not_has_id: not id_manager.is_taken (a_road.id)
			not_already_in_graph: not has_edge (a_road)
		do
			a_road.origin_impl.put_connection (a_road)
			internal_edges.extend (a_road)
			id_manager.take (a_road.id)
			total_weight := total_weight + a_road.length
			if not a_road.is_directed then
				a_road.destination_impl.put_connection (a_road)
			end
		end

	put_line_section (a_section: TRAFFIC_LINE_SECTION) is
			-- Insert `a_section' into the graph.
		require
			a_section_exists: a_section /= Void
			not_already_in_graph: not has_edge (a_section)
--			has_line: lines.has (a_section.line.name)
		do
			a_section.origin_impl.put_connection (a_section)
			internal_edges.extend (a_section)
			total_weight := total_weight + a_section.length
			if not a_section.is_directed then
				a_section.destination_impl.put_connection (a_section)
			end
--			line_sections.force_last (a_section)
		end

--	put_line (a_line: TRAFFIC_LINE) is
--			-- Insert `a_line' into the graph.
--		require
--			a_line_exists: a_line /= Void
----			not_already_in_map: not has
--		do
--			from
--				a_line.start
--			until
--				a_line.off
--			loop
--				put_line_section (a_line.item_for_iteration)
--				a_line.forth
--			end
--		end

	put_node (a_node: like item) is
			-- Insert a new node in the graph if it is not already present.
			-- The cursor is not moved.
		local
			index: INTEGER
			node: like current_node
		do
			if not index_of_element.has (a_node) then
				-- Compute item index of new element.
				if not inactive_nodes.is_empty then
					inactive_nodes.start
					index := inactive_nodes.item
					inactive_nodes.prune (index)
				else
					index := node_count + 1
				end

				-- Create new node object and put it
				-- into the list at appropriate position.
				node_list.force (a_node, index)
				index_of_element.force (index, a_node)
				node_count := node_count + 1
			end
		end

feature -- Removal

	prune_edge (a_edge: like edge_item)
			-- Remove `a_edge' from the graph.
			-- (from LINKED_GRAPH)
		local
			linked_edge, symmetric_edge: like edge_item
			start_node, end_node: like current_node
		do
			prune_edge_impl (a_edge)
			if is_symmetric_graph then
				linked_edge ?= a_edge
				if linked_edge /= Void then
					start_node := linked_edge.origin_impl
					end_node := linked_edge.destination_impl
				else
					start_node := linked_node_from_item (a_edge.origin_impl)
					end_node := linked_node_from_item (a_edge.destination_impl)
				end
				a_edge.flip
				prune_edge_impl (a_edge)
				a_edge.flip
			end
		end

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
					if edge.origin_impl.is_equal (a_item) then
						-- Remove edge starting in `a_item'.
						total_weight := total_weight - edge.length
						internal_edges.prune (edge)
					elseif edge.destination_impl.is_equal (a_item) then
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

feature -- Access

	id_manager: TRAFFIC_ID_MANAGER

	current_node: TRAFFIC_NODE
			-- Value of the currently focused node

	edge_item: TRAFFIC_CONNECTION is
			-- Current edge
		do
			if not current_node.connection_list.off then
				Result ?= current_node.connection_list.item
			else
				Result := Void
			end
		end

feature -- Constants

	normal_distance: INTEGER is 0
			-- Use normal path calculation

	minimal_switches: INTEGER is 1
			-- Use minimal switches path calculation

feature -- Status Setting

	set_shortest_path_mode (a_mode: INTEGER) is
			-- Set path mode to `a_mode'.
		require
			a_mode_valid: a_mode = normal_distance or a_mode = minimal_switches
		do
			shortest_path_mode := a_mode
		ensure
			path_mode_set: shortest_path_mode = a_mode
		end

	enable_user_defined_weight_function (a_function: FUNCTION [ANY, TUPLE [TRAFFIC_CONNECTION], REAL]) is
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
				if edge.origin = edge.destination then
					edge.enable_user_defined_weight_function (a_function)
				end
				edge_list.forth
			end
		end

feature -- Status Report

	edge_occurences (a_edge: like edge_item): INTEGER_32
			-- Number of times `a_edge' appears in the graph (object equality)
		local
			c: like cursor
		do
			if not off then
				c := cursor
			end
			search (a_edge.origin_impl)
			if off then
				Result := 0
			else
				from
					start
				until
					exhausted
				loop
					if edge_item.is_equal (a_edge) then
						Result := Result + 1
					end
					left
				end
			end
			if c /= Void then
				go_to (c)
			else
				invalidate_cursor
			end
		end

	has_edge (a_edge: like edge_item): BOOLEAN
			-- Is `a_edge' part of the graph?
		local
			linked_graph_edge: like edge_item
			node: like current_node
			index: INTEGER_32
		do
			linked_graph_edge ?= a_edge
			if linked_graph_edge /= Void then
				node := linked_graph_edge.origin_impl
			else
				node := linked_node_from_item (a_edge.origin_impl)
			end
			from
				index := node.connection_list.index
				node.connection_list.start
			until
				node.connection_list.exhausted or else a_edge.is_equal (node.connection_list.item)
			loop
				node.connection_list.forth
			end
			Result := not node.connection_list.exhausted
			node.connection_list.go_i_th (index)
		end

feature {NONE} -- Implementation

	adopt_edge (a_edge: like edge_item)
			-- Put `a_edge' into current graph.
		do
			connect_nodes (a_edge.origin_impl, a_edge.destination_impl, a_edge.label, a_edge.weight)
		end

	annotated_nodes: ARRAY [like item]
			-- All graph nodes annotated with additional information
			-- for the path finding algorithm
			-- (from GRAPH)
	border_nodes: INVERSE_HEAP_PRIORITY_QUEUE [like item]
			-- Nodes which are part of the border set in the path finding algorithm
			-- (from GRAPH)

	weight_function: FUNCTION [ANY, TUPLE [TRAFFIC_CONNECTION], REAL]
			-- Weight function for edges, if Void, no weight function is used.

	prune_edge_impl (a_edge: like edge_item) is
			-- Redefined to subtract the length of the connection from the total.
		do
			total_weight := total_weight - a_edge.length
			Precursor (a_edge)
		end

	calculate_weight (a_edge: TRAFFIC_CONNECTION): REAL is
			-- Calculate the edge based on the current status.
			-- This is only used for "dummy" connections.
		do
			inspect shortest_path_mode
			when normal_distance then
				Result := a_edge.length
			when minimal_switches then
				Result := total_weight
			else
				(create {EXCEPTIONS}).raise ("Unknown path mode in TRAFFIC_GRAPH")
			end
		end

	shortest_path_mode: INTEGER

	total_weight: DOUBLE
		-- Total length of all TRAFFIC_CONNECTIONs added.
		-- Usually less then the total weight of the edges because
		-- the "dummy" connections have a higher weight than their length.

	average_weight: DOUBLE is
			-- Average weight of an edge used for "dummy" connections
			-- between nodes of the same place.
		do
			Result := total_weight / internal_edges.count
		end

	node_from_item (a_item: like item): like item
			-- Node object from item value
			-- (from GRAPH)
		local
			index: INTEGER_32
		do
			index := index_of_element.item (a_item)
			Result := annotated_nodes.item (index)
		end

end
