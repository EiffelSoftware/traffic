indexing
	description: "Objects that ..."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

deferred class
	TE_3D_MEMBER_FACTORY


feature --Access

	last_3d_member: TE_3D_MEMBER

feature {NONE} -- Implementation

	cluster_list: ARRAYED_LIST[TE_3D_CLUSTER]

	vertex_list: ARRAYED_LIST[EM_VECTOR3D]

	normal_list: ARRAYED_LIST[EM_VECTOR3D]

	face_list: ARRAYED_LIST[TE_3D_FACE]

	uvw_sets: ARRAYED_LIST[ARRAYED_LIST[EM_VECTOR3D]]

	ressource_list : ARRAYED_LIST[TE_3D_RESSOURCE]

	build_3d_member:TE_3D_MEMBER is
			-- builds the te_3d_member
		require
			ressource_list_not_void_and_not_empty: ressource_list /= Void and ressource_list.count > 0
		do
			create Result.make (ressource_list)
		end

	build_3d_member_as_child(a_parent: TE_3D_NODE): TE_3D_MEMBER is
			-- builds the te_3d_member as child of a te_3D_node
		require
			ressource_list_not_void_and_not_empty: ressource_list /= Void and ressource_list.count > 0
			parent_not_void: a_parent /= void
		do
			create Result.make_as_child(ressource_list, a_parent)
		end


feature -- Status report

feature -- Status setting

feature -- Cursor movement

feature -- Element change

feature -- Removal

feature -- Resizing

feature -- Transformation

feature -- Conversion

feature -- Duplication

feature -- Miscellaneous

feature -- Basic operations

feature -- Obsolete

feature -- Inapplicable

invariant
	invariant_clause: True -- Your invariant here

end
