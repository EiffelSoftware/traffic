indexing
	description: "Objects that ..."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TE_3D_FACE

	create
		make

feature -- initialisation

	make(some_vertices, some_normals: ARRAYED_LIST[INTEGER];some_texture_coordinates: ARRAYED_LIST[ARRAYED_LIST[INTEGER]]) is
			-- creates the face
		require
			vertices_3: some_vertices.count = 3
		do
			vertices := some_vertices
			normals := some_normals
			texture_coordinates := some_texture_coordinates
		end


feature -- Access

	vertices: ARRAYED_LIST[INTEGER] -- must contain 3 elements

	normals: ARRAYED_LIST[INTEGER] -- must contain 3 elements

	texture_coordinates: ARRAYED_LIST[ARRAYED_LIST[INTEGER]] -- each element in Arrayed_list must contain 3 elements


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
