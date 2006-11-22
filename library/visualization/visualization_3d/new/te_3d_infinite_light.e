indexing
	description: "Objects that ..."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TE_3D_INFINITE_LIGHT inherit

		TE_3D_LIGHT_SOURCE

	create
		make, make_as_child

feature -- Access

	light_position: GL_VECTOR_4D[REAL] is
			-- returns the position of the node as GL_VECTOR_4D with the last component either 0.0 or 1.0 - 0.0 being an infinite (direct) light and 1.0 a position light
		local
			position:EM_VECTOR3D
		do
			position := world_transform.position
			create Result.make_xyzt(position.x, position.y, position.z, 0.0)
		end

feature -- Measurement

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

feature {NONE} -- Implementation

invariant
	invariant_clause: True -- Your invariant here

end
