indexing
	description: "[
		Directed weighted graphs without commitment to a particular representation.
		Simple graphs, multigraphs, directed graphs and symmetric graphs
		are supported.
		]"
	author: "Olivier Jeger"
	license: "Eiffel Forum License v2 (see forum.txt)"
	date: "$Date$"
	revision: "$Revision$"

deferred class
	WEIGHTED_GRAPH [G -> HASHABLE, reference L]

inherit
	GRAPH [G, L]
		rename
			put_edge as put_unweighted_edge,
			put_unlabeled_edge as put_unweighted_unlabeled_edge,
			edge_from_values as unweighted_edge_from_values
		export {NONE}
			put_unweighted_unlabeled_edge,
			unweighted_edge_from_values
		redefine
			adopt_edge,
			edge_length
		end

feature -- Access

	edge_item: WEIGHTED_EDGE [like item, L] is
			-- Current edge
		deferred
		end

	edge_from_values (a_start_node, a_end_node: like item; a_label: L; a_weight: REAL): like edge_item is
			-- Edge that matches `a_start_node', `a_end_node', `a_label' and `a_weight'.
			-- Result is Void if there is no match.
			-- The cursor is not moved.
		deferred
		end

	shortest_path: like path is
			-- Shortest path, that has been found with `find_shortest_path'
		require
			path_found: path_found
		do
			-- Shortest path is the same as `path' (same algorithm is used).
			Result := path
		ensure
			path_not_void: Result /= Void
		end

feature -- Measurement

	weight_sum: REAL is
			-- Sum of all edge weights of the graph
		local
			lin_rep: LINEAR [like edge_item]
		do
			Result := 0
			from
				lin_rep := edges.linear_representation
				lin_rep.start
			until
				lin_rep.after
			loop
				Result := Result + lin_rep.item.weight
				lin_rep.forth
			end
		ensure
			cursor_not_moved: equal (cursor, old cursor)
		end

feature -- Status report

	all_weights_positive: BOOLEAN is
			-- Are all edge weights positive?
		local
			lin_rep: LINEAR [like edge_item]
		do
			Result := True
			from
				lin_rep := edges.linear_representation
				lin_rep.start
			until
				not Result or lin_rep.after
			loop
				if lin_rep.item.weight < 0 then
					Result := False
				end
				lin_rep.forth
			end
		end

feature -- Status setting

	enable_user_defined_weight_function (a_function: FUNCTION [ANY, TUPLE [WEIGHTED_EDGE [G, L]], REAL]) is
			-- Use `a_function' to compute edge weight instead of stored value.
		local
			edge_list: like edges
			edge: like edge_item
		do
			from
				edge_list := edges
				edge_list.start
			until
				edge_list.after
			loop
				edge := edge_list.item
				edge.enable_user_defined_weight_function (a_function)
				edge_list.forth
			end
		end

	restore_default_weights is
			-- Revert to stored edge weights.
		local
			edge_list: like edges
			edge: like edge_item
		do
			from
				edge_list := edges
				edge_list.start
			until
				edge_list.after
			loop
				edge := edge_list.item
				edge.restore_default_weight
				edge_list.forth
			end
		end

feature -- Cursor movement

feature -- Element change

	put_edge (a_start_node, a_end_node: like item; a_label: L; a_weight: REAL) is
			-- Create an edge with weight `a_weight' between `a_start_node' and `a_end_node'.
			-- The edge will be labeled `a_label'.
			-- For symmetric graphs, another edge is inserted in the opposite direction.
			-- The cursor is not moved.
		require
			nodes_exist: has_node (a_start_node) and has_node (a_end_node)
			simple_graph: is_simple_graph implies not has_edge_between (a_start_node, a_end_node)
			-- TO BE IMPROVED!!
		deferred
		ensure
			simple_graph_criterion: is_simple_graph implies has_edge_between (a_start_node, a_end_node)
			symmetric_graph_criterion: is_symmetric_graph implies has_edge_between (a_start_node, a_end_node) and
																  has_edge_between (a_end_node, a_start_node)
		end

	put_unlabeled_edge (a_start_node, a_end_node: like item; a_weight: REAL) is
			-- Create an edge with weight `a_weight' between `a_start_node' and `a_end_node'.
			-- For symmetric graphs, another edge is inserted in the opposite direction.
			-- The cursor is not moved.
		require
			nodes_exist: has_node (a_start_node) and has_node (a_end_node)
			simple_graph: is_simple_graph implies not has_edge_between (a_start_node, a_end_node)
			-- TO BE IMPROVED!!
		do
			put_edge (a_start_node, a_end_node, Void, a_weight)
		ensure
			simple_graph_criterion: is_simple_graph implies has_edge_between (a_start_node, a_end_node)
			symmetric_graph_criterion: is_symmetric_graph implies has_edge_between (a_start_node, a_end_node) and
																  has_edge_between (a_end_node, a_start_node)
		end

feature -- Removal

feature -- Resizing

feature -- Transformation

feature -- Conversion

feature -- Duplication

feature -- Miscellaneous

feature -- Basic operations

	find_shortest_path (a_start_node: like item; a_end_node: like item) is
			-- Shortest path from `a_start_node' to `a_end_node'
		do
			find_path (a_start_node, a_end_node)
		end

feature -- Obsolete

feature {NONE} -- Inapplicable

	put_unweighted_edge (a_start_node, a_end_node: like item; a_label: L) is
			-- Not applicable anymore. Edges must be weighted.
		do
			-- Workaround for catcalls: Put unweighted edge instead.
			put_edge (a_start_node, a_end_node, a_label, 0)
		end

	unweighted_edge_from_values (a_start_node, a_end_node: like item; a_label: L): EDGE [like item, L] is
			-- Edge that matches `a_start_node', `a_end_node' and `a_label'.
			-- Result is Void if there is no match.
			-- The cursor is not moved.
		do
			-- Workaround for catcalls: Get unweighted edge instead.
			Result ?= edge_from_values (a_start_node, a_end_node, a_label, 0)
		end

feature {NONE} -- Implementation

	edge_length (a_edge: like edge_item): REAL is
			-- Edge length, used in `find_path' and `shortest_path' algorithm
		do
			Result := a_edge.weight
		end

	adopt_edge (a_edge: WEIGHTED_EDGE [like item, L]) is
			-- Put `a_edge' into current graph.
		do
			put_edge (a_edge.start_node, a_edge.end_node, a_edge.label, a_edge.weight)
		end

end -- class WEIGHTED_GRAPH
