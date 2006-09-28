indexing
	description: "[
		Auxiliary class for the object loader (C_ESDL_3D_OBJ_LOADER). Declares all containers and status attributes
		of an imported object.
	]"
	author: "Basil Fierz"
	date: "$Date: 2005/06/21 15:16:28 $"
	revision: "$Revision: 1.4 $"

class 
	Q_GL_3D_GEOMOBJ

create 
	default_create

feature 

	frame_count: INTEGER

	vector_count: INTEGER

	normal_count: INTEGER

	texture_coordinate_count: INTEGER

	has_vectors: BOOLEAN

	has_normals: BOOLEAN

	has_texture_cooridnates: BOOLEAN

	face_count: INTEGER

	vectors: ARRAY [ARRAY [DOUBLE]]

	normals: ARRAY [ARRAY [DOUBLE]]

	frame_vectors: ARRAY [ARRAY [ARRAY [DOUBLE]]]

	frame_normals: ARRAY [ARRAY [ARRAY [DOUBLE]]]

	texture_coordinates: ARRAY [ARRAY [DOUBLE]]

	faces: ARRAY [TUPLE [ARRAY [INTEGER], ARRAY [INTEGER], ARRAY [INTEGER]]]
	
end -- class Q_GL_3D_GEOMOBJ
