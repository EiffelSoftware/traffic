indexing
	description: "[
		Directed or undirected graph edges that consist of
		two node items and a label.
		]"
	author: "Olivier Jeger"
	license: "Eiffel Forum License v2 (see forum.txt)"
	date: "$Date$"
	revision: "$Revision$"

class
	EDGE [G -> HASHABLE, L]

inherit
	ANY
		redefine
			is_equal,
			out
		end

create
	make_directed, make_undirected

feature {NONE} -- Initialization

	make_directed (a_start_node, a_end_node: G; a_label: L) is
			-- Make a directed edge from `a_start_node' to `a_end_node' with label `a_label'.
		require
			nodes_not_void: a_start_node /= Void and a_end_node /= Void
		do
			start_node := a_start_node
			end_node := a_end_node
			label := a_label
			is_directed := True
		ensure
			nodes_not_void: start_node /= Void and
							end_node /= Void
			nodes_assigned: start_node = a_start_node and
							end_node = a_end_node
			label_set: label = a_label
			is_directed: is_directed
		end

	make_undirected (a_start_node, a_end_node: G; a_label: L) is
			-- Make an undirected edge from `a_start_node' to a_end_node' with label `a_label'.
		require
			nodes_not_void: a_start_node /= Void and a_end_node /= Void
		do
			start_node := a_start_node
			end_node := a_end_node
			label := a_label
			is_directed := False
		ensure
			nodes_not_void: start_node /= Void and
							end_node /= Void
			nodes_assigned: start_node = a_start_node and
							end_node = a_end_node
			label_set: label = a_label
			not_directed: not is_directed
		end

feature -- Access

	start_node: G
			-- Start node of the edge

	end_node: G
			-- End node of the edge

	label: L
			-- Label of the edge

	opposite_node (a_node: G): G is
			-- Node at the opposite end of `a_node'
			-- Only allowed for undirected edges.
		require
			undirected_edge: not is_directed
			node_not_void: a_node /= Void
			node_belongs_to_edge: a_node.is_equal (start_node) or a_node.is_equal (end_node)
		do
			if a_node.is_equal (start_node) then
				Result := end_node
			else
				Result := start_node
			end
		end

feature -- Measurement

feature -- Status report

	is_loop: BOOLEAN is
			-- Is the current edge a loop?
		do
			Result := start_node.is_equal (end_node)
		end

	is_directed: BOOLEAN
			-- Is the current edge directed?

feature -- Comparison

	is_equal (other: like Current): BOOLEAN is
			-- Is `other' attached to an object considered
			-- equal to current object?
		do
			-- Start and end node must be equal.
			Result := start_node.is_equal (other.start_node) and
					  end_node.is_equal (other.end_node)

			-- Consider also flipped edges in undirected graphs.
			if not is_directed then
				Result := Result or
						 (start_node.is_equal (other.end_node) and
						  end_node.is_equal (other.start_node))
			end
			-- Labels must be equal.
			Result := Result and equal (label, other.label)
		end

feature -- Status setting

	set_label (a_label: L) is
			-- Set the label of `Current'.
		do
			label := a_label
		ensure
			label_set: label = a_label
		end

feature -- Removal

feature -- Resizing

feature {GRAPH} -- Transformation

	flip is
			-- Flip the nodes of an undirected edge.
		require
			undirected_edge: not is_directed
		local
			tmp: like start_node
		do
			tmp := start_node
			start_node := end_node
			end_node := tmp
		ensure
			nodes_flipped: start_node.is_equal (old end_node) and end_node.is_equal (old start_node)
		end

feature -- Conversion

feature -- Duplication

feature -- Miscellaneous

feature -- Basic operations

feature -- Output

	out: !STRING is
			-- Textual representation of the edge
		do
			Result := start_node.out
			if is_directed then
				Result.append (" -> ")
			else
				Result.append (" -- ")
			end
			Result.append (end_node.out)
			if label /= Void and then not label.out.is_equal ("")  then
				Result.append ("  [label=%"")
				Result.append (label.out)
				Result.append ("%"]")
			end
		end

feature -- Obsolete

feature -- Inapplicable

feature {NONE} -- Implementation

invariant

	nodes_not_void: start_node /= Void and end_node /= Void

end -- class EDGE
