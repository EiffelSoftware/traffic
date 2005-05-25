indexing
	description: "[
		Directed graphs, implemented on the basis
		of an adjacency matrix.
		Simple and symmetric graphs are supported.
		]"
	author: "Olivier Jeger"
	license: "Eiffel Forum License v2 (see forum.txt)"
	date: "$Date$"
	revision: "$Revision$"

class
	ADJACENCY_MATRIX_GRAPH [G -> HASHABLE, L]

inherit
	GRAPH [G, L]
		rename
			make_empty_graph as make_empty_adjacency_matrix_graph
		redefine
			node_count,
			edge_count,
			has_cycles,
			has_edge,
			has_links,
			target,
			out_degree,
			forth,
			out
		end

create
	make_simple_graph, make_symmetric_graph

feature {NONE} -- Initialization

	make_empty_adjacency_matrix_graph is
			-- Make an empty adjacency matrix graph.
		do
			-- Make empty node array and edge set.
			create node_array.make (1,0)
			create {ARRAYED_LIST [like edge_item]} internal_edges.make (0)
			-- Make an empty adjacency matrix.
			create adjacency_matrix.make (1,1)
			create inactive_nodes.make (0)
			create history_stack.make (0)
			create index_of_element.make (0)
			object_comparison := True
			node_array.compare_objects
			internal_edges.compare_objects
			invalidate_cursor
		ensure then
			node_array_not_void: node_array /= Void
			no_nodes: node_array.count = 0
			edges_not_void: edges /= Void
			no_edges: edges.count = 0
			inactive_nodes_not_void: inactive_nodes /= Void
			no_inactive_nodes: inactive_nodes.count = 0
			adjacency_matrix_not_void: adjacency_matrix /= Void
		end

feature -- Access

	nodes,vertices: SET [like item] is
			-- All nodes of the graph
		local
			i: INTEGER
		do
			create {ARRAYED_SET [like item]} Result.make (node_count)
			from
				i := 1
			until
				i > node_array.count
			loop
				if valid_index (i) then
					Result.put (node_array.item (i))
				end
				i := i + 1
			end
		end

	edges: LIST [like edge_item] is
			-- All edges of the graph
		do
			Result := internal_edges.twin
		end

	item: G is
			-- Value of the currently focused node
		do
			Result := node_array.item (current_node_index)
		end

	target: like item is
			-- Item at the target of the current edge
		do
			Result := node_array.item (current_target_node_index)
		end

	edge_item: EDGE [like item, L] is
			-- Current edge
		do
			if current_target_node_index /= -1 then
				Result := adjacency_matrix.item (current_node_index, current_target_node_index)
			else
				Result := Void
			end
		end
			
	incident_edges: LIST [like edge_item] is
			-- All incident edges of `item'
		local
			i: INTEGER
		do
----- DEBUG --- DEBUG --- DEBUG --- DEBUG --- DEBUG --- DEBUG -----
				debug ("incident_edges")
					print ("INCIDENT EDGES of `" + item.out + "':%N")
				end
----- DEBUG --- DEBUG --- DEBUG --- DEBUG --- DEBUG --- DEBUG -----
			create {ARRAYED_LIST [like edge_item]} Result.make (out_degree)
			from
				i := first_edge_index
			until
				(i = -1) or (i > last_edge_index)
			loop
----- DEBUG --- DEBUG --- DEBUG --- DEBUG --- DEBUG --- DEBUG -----
				debug ("incident_edges")
					print (adjacency_matrix.item (current_node_index, i).out + "%N")
				end
----- DEBUG --- DEBUG --- DEBUG --- DEBUG --- DEBUG --- DEBUG -----
				Result.extend (adjacency_matrix.item (current_node_index, i))
				-- Find next edge
				from
					i := i + 1
				until
					i > last_edge_index or else adjacency_matrix.item (current_node_index, i) /= Void
				loop
					i := i + 1
				end
			end
		end
	
	incident_edge_labels: LIST [L] is
			-- Labels of all incident edges of `item'
		local
			i: INTEGER
		do
			create {ARRAYED_LIST [L]} Result.make (out_degree)
			from
				i := first_edge_index
			until
				(i = -1) or (i > last_edge_index)
			loop
				Result.extend (adjacency_matrix.item (current_node_index, i).label)
				-- Find next edge
				from
					i := i + 1
				until
					i > last_edge_index or else adjacency_matrix.item (current_node_index, i) /= Void
				loop
					i := i + 1
				end
			end
		end
	
	edge_from_values (a_start_node, a_end_node: like item; a_label: L): like edge_item is
			-- Edge that matches `a_start_node', `a_end_node' and `a_label'.
			-- Result is Void if there is no match.
			-- The cursor is not moved.
		local
			start_index, end_index: INTEGER
			edge: like edge_item
		do
			if has_node (a_start_node) and has_node (a_end_node) then
				start_index := index_of_element.item (a_start_node)
				end_index := index_of_element.item (a_end_node)
				edge := adjacency_matrix.item (start_index, end_index)
				if edge /= Void and then equal (edge.label, a_label) then
					Result := edge
				else
					Result := Void
				end
			else
				Result := Void
			end
		end
	
	node_identity: HASHABLE is
			-- Object that identifies the current item
		do
			Result := current_node_index
----- DEBUG --- DEBUG --- DEBUG --- DEBUG --- DEBUG --- DEBUG -----
			debug ("node_identity")
				print ("node_identity = `")
				print (Result)
				print ("'%N")
			end
----- DEBUG --- DEBUG --- DEBUG --- DEBUG --- DEBUG --- DEBUG -----
		end

feature -- Measurement

	node_count: INTEGER is
			-- Number of nodes in the graph
		do
			Result := node_array.count - inactive_nodes.count
		end

	edge_count: INTEGER is
			-- Number of edges in the graph
		local
			i, j: INTEGER
		do
			from
				i := 1
				Result := 0
			until
				i > node_array.count
			loop
				from
					j := 1
				until
					j > node_array.count
				loop
					if valid_index (i) and valid_index (j) and then (adjacency_matrix.item (i, j) /= Void) then
						Result := Result + 1
					end
					j := j + 1
				end
				i := i + 1
			end
		end

	in_degree: INTEGER is
			-- Number of incoming edges of `item'
		local
			i: INTEGER
		do
			from
				i := 1
				Result := 0
			until
				i > node_count
			loop
				if adjacency_matrix.item (i, current_node_index) /= Void then
					Result := Result + 1
				end
				i := i + 1
			end
		end

	out_degree: INTEGER is
			-- Number of outgoing edges of `item'
		local
			i: INTEGER
		do
			if not has_links then
				Result := 0
			else
				from
					Result := 0
					i := first_edge_index
				until
					i > last_edge_index
				loop
					if adjacency_matrix.item (current_node_index, i) /= Void then
						Result := Result + 1
					end
					i := i + 1
				end
			end
		end

feature -- Status report

	has_multi_graph_support: BOOLEAN is
			-- Are multigraphs supported by the current implementation?
		do
			Result := False
		end

	has_edge (a_edge: EDGE [like item, L]): BOOLEAN is
			-- Is `a_edge' part of the graph?
		local
			start_index, end_index: INTEGER
		do
			start_index := index_of_element.item (a_edge.start_node)
			end_index := index_of_element.item (a_edge.end_node)
			Result := a_edge.is_equal (adjacency_matrix.item (start_index, end_index))
		end

	has_edge_between (a_start_node, a_end_node: like item): BOOLEAN is
			-- Are `a_start_node' and `a_end_node' directly connected?
			-- Note: Edges are directed.
		local
			start_index, end_index: INTEGER
		do
			start_index := index_of_element.item (a_start_node)
			end_index := index_of_element.item (a_end_node)
			Result := adjacency_matrix.item (start_index, end_index) /= Void
		end

	has_cycles: BOOLEAN is
			-- Does the graph contain cyclic (directed) paths?
		local
			i: INTEGER
		do
			compact_adjacency_matrix
			-- Search for loops in the graph (nodes connected to themselves).
			from
				i := 1
			until
				Result or i > node_count
			loop
				if adjacency_matrix.item (i, i) /= Void then
					Result := True
				end
				i := i + 1
			end

			if not Result then
				Result := Precursor
			end
		end
	
	off: BOOLEAN is
			-- Does `cursor' currently denote a valid graph position?
		do
			Result := current_node_index = -1
		end

	Full: BOOLEAN is False
			-- Is the maximum number of nodes reached?

	is_first_edge: BOOLEAN is
			-- Is the focused edge the first one?
		do
			Result := current_target_node_index = first_edge_index
		end

	is_last_edge: BOOLEAN is
			-- Is the focused edge the last one?
		do
			Result := current_target_node_index = last_edge_index
		end

	exhausted: BOOLEAN
			-- Has `left' or `right' turned to the first link?
		
	has_links: BOOLEAN is
			-- Does the current node have outgoing edges (links)?
		do
			Result := current_target_node_index /= -1
		end

	path_found: BOOLEAN 
			-- Has a path been found in `find_path'?

	is_simple_graph: BOOLEAN
			-- Is the graph a simple graph?
			-- (i.e. at most one edge between two nodes)

	is_symmetric_graph: BOOLEAN
			-- Is the graph symmetric?

	merge_succeeded: BOOLEAN
			-- Was the invocation of `merge_with' successful?

feature -- Status setting

feature -- Cursor movement

	start is
			-- Turn to the first link.
		do
			find_first_edge_index
			find_last_edge_index
----- DEBUG --- DEBUG --- DEBUG --- DEBUG --- DEBUG --- DEBUG -----
			debug ("start")
				print ("START first edge index = ")
				print (first_edge_index)
				print ("%N      last edge index  = ")
				print (last_edge_index)
				print ("%N")
			end
----- DEBUG --- DEBUG --- DEBUG --- DEBUG --- DEBUG --- DEBUG -----
			current_target_node_index := first_edge_index
			exhausted := current_target_node_index = -1
		end

	left is
			-- Turn one edge to the left.
		local
			i: INTEGER
		do
			if
				is_first_edge
			then
				current_target_node_index := last_edge_index
			else
				-- Since `is_first_edge' is false, there must be another edge.
				-- Hence the following code must not produce an access violation.
				from
					i := current_target_node_index - 1
				until
					adjacency_matrix.item (current_node_index, i) /= Void
				loop
					i := i - 1
				end
				current_target_node_index := i
			end

			-- Check if we went around.
			if is_first_edge then
				exhausted := True
			end
		end

	right is
			-- Turn one edge to the right.
		local
			i: INTEGER
		do
			-- Check if we went around.
			if
				is_last_edge
			then
				current_target_node_index := first_edge_index
				exhausted := True
			else
				-- Since `is_last_edge' is false, there must be another edge.
				-- Hence the following code must not produce an access violation.
				from
					i := current_target_node_index + 1
				until
					adjacency_matrix.item (current_node_index, i) /= Void
				loop
					i := i + 1
				end
				current_target_node_index := i
			end
		end

	forth is
			-- Walk along the currently focused edge.
		do
			history_stack.put (cursor)
			current_node_index := current_target_node_index
			start
		end

	search (a_item: like item) is
			-- Move to `a_item'. If no such position exists, `off' will be true.
		local
			i: INTEGER
			found: BOOLEAN
		do
			from
				i := 1
				found := False
			until
				found or i > node_count
			loop
				if valid_index (i) and (node_array.item (i).is_equal (a_item)) then
					found := True
				end
				i := i + 1
			end
			if found then
				current_node_index := i - 1
				start
			else
				current_node_index := -1
			end
		end

feature -- Element change

	put_node (a_item: like item) is
			-- Insert a new node in the graph if it is not already present.
			-- The cursor is not moved.
		local
			i, item_index: INTEGER
		do
			if not has_node (a_item) then
				if not inactive_nodes.is_empty then
					-- Recycle inactive node if possible.
					inactive_nodes.start
					item_index := inactive_nodes.item
					inactive_nodes.prune (item_index)
				else
					-- Item index is `count'+1.
					item_index := node_array.count + 1
					adjacency_matrix.resize (item_index, item_index)
				end
				
				-- Put node into array and hash table.
				node_array.force (a_item, item_index)
				index_of_element.extend (item_index, a_item)
				
				-- Empty the adjacency matrix cells.
				from
					i := 1
				until
					i > node_array.count
				loop
					adjacency_matrix.put (Void, i, item_index)
					adjacency_matrix.put (Void, item_index, i)
					i := i + 1
				end
			end
		end

	put_edge (a_start_node, a_end_node: like item; a_label: L) is
			-- Create an edge between `a_start_node' and `a_end_node'
			-- and set its label to `a_label'.
			-- For symmetric graphs, another edge is inserted in the opposite direction.
			-- The cursor is not moved.
		local
			edge: like edge_item
			start_index, end_index: INTEGER
		do
			start_index := index_of_element.item (a_start_node)
			end_index := index_of_element.item (a_end_node)
			create edge.make_directed (a_start_node, a_end_node, a_label)
			adjacency_matrix.put (edge, start_index, end_index)
			internal_edges.extend (edge)
			if is_symmetric_graph and not a_start_node.is_equal (a_end_node) then
				create edge.make_directed (a_end_node, a_start_node, a_label)
				adjacency_matrix.put (edge, start_index, end_index)
				internal_edges.extend (edge)
			end

			-- Update index bounds if necessary.
			if end_index < first_edge_index then
				first_edge_index := end_index
			elseif end_index > last_edge_index then
				last_edge_index := end_index
			end
		end

feature -- Removal

	prune_node (a_item: like item) is
			-- Remove `a_item' and all of its incident edges from the graph.
			-- `off' will be set when `item' is removed.
			-- The cursor will turn right if `target' is removed.
		local
			i, item_index: INTEGER
		do
			item_index := index_of_element.item (a_item)
			if item_index > 0 then
				-- Continue only if `a_item' has been found.
				if current_node_index = item_index then
					-- Set `off' if `item' is pruned.
					current_node_index := -1
				elseif current_target_node_index = item_index then
					if out_degree > 1 then
						-- Turn right if `target' is removed.
						right
					else
						current_target_node_index := -1
						exhausted := True
					end
				end
	
				if item_index = node_array.count then
					-- Shrink the adjacency matrix if possible.
					node_array.conservative_resize (1, item_index - 1)
					adjacency_matrix.resize (item_index - 1, item_index - 1)
				else
					-- Otherwise remove `item' and all incident edges.
					inactive_nodes.put (item_index)
					from
						i := 1
					until
						i > node_array.count
					loop
						adjacency_matrix.put (Void, i, item_index)
						adjacency_matrix.put (Void, item_index, i)
					end
				end			
			end
		end

	prune_edge (a_edge: EDGE [like item, L]) is
			-- Remove `a_edge' from the graph.
			-- The cursor will turn right if `current_egde' is removed.
		do
			-- This will work, since we only have a simple graph.
			prune_edge_between (a_edge.start_node, a_edge.end_node)
		end

	prune_edge_between (a_start_node, a_end_node: like item) is
			-- Remove the edge connecting `a_start_node' and `a_end_node'.
			-- This operation is only permitted on simple graphs because of ambiguity.
			-- The cursor will turn right if `edge_item' is removed.
		local
			start_index, end_index: INTEGER
		do
			start_index := index_of_element.item (a_start_node)
			end_index := index_of_element.item (a_end_node)

			if current_target_node_index = end_index then
				if out_degree > 1 then
					-- Turn right if `target' is removed.
					right
				else
					current_target_node_index := -1
					exhausted := True
				end
			end

			-- Remove the edge from the edge list.
			internal_edges.prune (adjacency_matrix.item (start_index, end_index))

			adjacency_matrix.put (Void, start_index, end_index)
			-- Perform symmetric operation graph is symmetric.
			if is_symmetric_graph then
				internal_edges.prune (adjacency_matrix.item (end_index, start_index))
				adjacency_matrix.put (Void, end_index, start_index)
			end
			
			-- Adjust node indices if necessary.
			if end_index = first_edge_index then
				find_first_edge_index
			elseif end_index = last_edge_index then
				find_last_edge_index
			end
		end

feature -- Resizing

feature -- Transformation

feature -- Conversion

feature -- Duplication

feature -- Miscellaneous

	compact_adjacency_matrix is
			-- Shrink adjacency to minimal size.
			-- The matrix is not resized when a node is removed for performance reasons.
			-- This routine resizes the matrix to node_count*node_count.
		local
			i, j, new_i, new_j: INTEGER
			new_matrix: like adjacency_matrix
			new_node_array: like node_array
		do
			if not inactive_nodes.is_empty then
				-- Make new adjacency matrix and node array.
				create new_matrix.make (node_count, node_count)
				create new_node_array.make (1, node_count)
				from
					i := 1
					new_i := i
				until
					i > node_array.count
				loop
					-- Copy only rows with a valid node index.
					if not inactive_nodes.has (i) then
						from
							j :=1
							new_j := 1
						until
							j > node_array.count
						loop
							if not inactive_nodes.has (j) then
								new_matrix.put (adjacency_matrix.item (i, j), new_i, new_j)
								new_j := new_j + 1
							end
							j := j + 1
						end
						new_i := new_i + 1
					end
					i := i + 1
				end
			end
		end

feature -- Basic operations

feature -- Output

	out: STRING is
			-- Textual representation of the graph
		local
			i, j: INTEGER
			node: like item
			label: ANY
		do
			Result := "digraph adjacency_matrix_graph%N"
			Result.append ("{%N")
			from
				i := 1
			until
				i > node_array.count
			loop
				if valid_index (i) then
					node := node_array.item (i)
					Result.append ("%"")
					Result.append (node.out)
					Result.append ("%";%N")
					from
						j := 1
					until
						j > node_array.count
					loop
						if
							adjacency_matrix.item (i, j) /= Void
						then
							Result.append ("  %"")
							Result.append (node.out)
							Result.append ("%" -> %"")
							Result.append (node_array.item (j).out)
							Result.append ("%"")
							label := adjacency_matrix.item (i, j).label
							if label /= Void and then not label.out.is_equal ("") then
								Result.append (" [label=%"")
								Result.append (label.out)
								Result.append ("%"]")
							end
							Result.append (";%N")
						end
						j := j + 1
					end
				end
				i := i + 1
			end
			Result.append ("}%N")
		end

feature -- Obsolete

feature -- Inapplicable

feature {NONE} -- Implementation

	adjacency_matrix: ARRAY2 [like edge_item]
			-- Adjacency matrix

	node_array: ARRAY [like item]
			-- All nodes of the graph
	
	inactive_nodes: ARRAYED_SET [INTEGER]
			-- Array indices for nodes that are not present in the graph anymore
	
	internal_edges: LIST [like edge_item]
			-- All edges of the graph

	current_node_index: INTEGER
			-- Current cursor position
			-- Has value -1 when undefined.
	
	current_target_node_index: INTEGER
			-- Current "edge" represented by target node
			-- Has value -1 when undefined.
	
	first_edge_index: INTEGER
			-- Index of the first edge
	
	last_edge_index: INTEGER
			-- Index of the last edge



	empty_graph: like Current is
			-- Empty graph with the same actual type than `Current'
		do
			if is_simple_graph then
				create Result.make_simple_graph
			else
				create Result.make_symmetric_graph
			end
		end


	find_first_edge_index is
			-- Find the first edge for the current node.
		require
			not_off: not off
		local
			i: INTEGER
			found: BOOLEAN
		do
			from
				found := False
				i := 1
			until
				found or i > node_count
			loop
				found := adjacency_matrix.item (current_node_index, i) /= Void
				i := i + 1
			end
			if found then
				first_edge_index := i-1
			else
				first_edge_index := -1
			end
		end

	find_last_edge_index is
			-- Find the last edge for the current node.
		require
			not_off: not off
		local
			i: INTEGER
			found: BOOLEAN
		do
			from
				found := False
				i := node_count
			until
				found or i < 1
			loop
				found := adjacency_matrix.item (current_node_index, i) /= Void
				i := i - 1
			end
			if found then
				last_edge_index := i + 1
			else
				last_edge_index := -1
			end
		end

	valid_index (i: INTEGER): BOOLEAN is
			-- Is `i' a valid index for `node_array'?
		require
			positive: i > 0
		do
			Result := (i <= node_array.count) and not inactive_nodes.has (i)
		end

	invalidate_cursor is
			-- Invalidate cursor. `off' will be set to true.
		do
			current_node_index := -1
			current_target_node_index := -1
		end

	set_path_found (a_value: BOOLEAN) is
			-- Set `path_found' to `a_value'.
		do
			path_found := a_value
		end

	set_merge_succeeded (a_value: BOOLEAN) is
			-- Set `merge_succeeded' to `a_value'.
		do
			merge_succeeded := a_value
		end

	set_is_simple_graph (a_value: BOOLEAN) is
			-- Set `is_simple_graph' to `a_value'.
		do
			is_simple_graph := a_value
		end

	set_is_symmetric_graph (a_value: BOOLEAN) is
			-- Set `is_symmetric_graph' to `a_value'.
		do
			is_symmetric_graph := a_value
		end

invariant

	square_matrix: adjacency_matrix.width = adjacency_matrix.height
	
	node_array_not_void: node_array /= Void

	same_node_amount: (node_array.count > 0) implies
		(node_array.count = adjacency_matrix.width)
		-- The amount of nodes in the adjacency matrix is the same
		-- as the amount of nodes in the node array.

	inactive_nodes_not_void: inactive_nodes /= Void

	node_sum: nodes.count = node_array.count - inactive_nodes.count

end -- class ADJACENCY_MATRIX_GRAPH
