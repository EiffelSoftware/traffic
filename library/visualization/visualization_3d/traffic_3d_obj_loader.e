indexing
	description: "[
		An object loader for the wavefront obj 3d file format.
		This object loader acts as ESDL 3D object factory (see ESDL_3D_OBJECT_FACTORY).
		This loader supports vertex vectors, vertex normals, texture coordinates - multiple meshs not yet supported		
		For details about the obj file format see: http://www.robthebloke.org/source/obj.html.
	]"
	author: "Matthias Bühlmann"
	date: "$Date: 2006/09/10 15:16:28 $"
	revision: "$Revision: 1.4 $"

class 
	TRAFFIC_3D_OBJ_LOADER

inherit
	TRAFFIC_3D_LOADER

	Q_GL_3D_GEOMOBJ

	EM_CONSTANTS

	GL_FUNCTIONS
		export
			{NONE} all
		end

	GLU_FUNCTIONS
		export
			{NONE} all
		end

create 
	default_create

feature 

	load_file (a_filename: STRING) is
		local
			obj_file_: PLAIN_TEXT_FILE
			tokenizer_: Q_TEXT_SCANNER
		do
			unchanged := False
			create vectors.make (0, 2)
			create normals.make (0, 2)
			create texture_coordinates.make (0, 1)
			create faces.make (0, 0)
			create tokenizer_.make_from_string_with_delimiters ("", " %T")
			create obj_file_.make_open_read (a_filename)
			from
				vector_count := 0
				normal_count := 0
				texture_coordinate_count := 0
				face_count := 0
			until
				obj_file_.after
			loop
				obj_file_.read_line
				if not obj_file_.last_string.is_empty then
					tokenizer_.set_source_string (obj_file_.last_string)
					tokenizer_.read_token
					if tokenizer_.last_string.is_equal ("#") then
					elseif tokenizer_.last_string.is_equal ("v") then
						tokenizer_.read_token
						vectors.force (read_vector (tokenizer_), vector_count)
						vector_count := vector_count + 1
						has_vectors := True
					elseif tokenizer_.last_string.is_equal ("vn") then
						tokenizer_.read_token
						normals.force (read_vector (tokenizer_), normal_count)
						normal_count := normal_count + 1
						has_normals := True
					elseif tokenizer_.last_string.is_equal ("vt") then
						tokenizer_.read_token
						texture_coordinates.force (read_vector (tokenizer_), texture_coordinate_count)
						texture_coordinate_count := texture_coordinate_count + 1
						has_texture_cooridnates := True
					elseif tokenizer_.last_string.is_equal ("f") then
						tokenizer_.read_token
						faces.force (read_face (tokenizer_), face_count)
						face_count := face_count + 1
					end
				end
			end
		end

	set_texture_id (id: ARRAY[INTEGER]) is
		do
			texture_id := id
			unchanged := False
		ensure
			id_set: texture_id = id
		end

	specify_object is
		local
			i, j: INTEGER
			index: INTEGER
			current_face: TUPLE [ARRAY [INTEGER], ARRAY [INTEGER], ARRAY [INTEGER]]
			current_array: ARRAY [INTEGER]
			v1, v2, v3: DOUBLE
			vt1, vt2: DOUBLE
			vn1, vn2, vn3: DOUBLE
			no_more_vertex: BOOLEAN
			max_x, max_y, max_z: DOUBLE
			min_x, min_y, min_z: DOUBLE
		do
			max_x := i.min_value
			max_y := i.min_value
			max_z := i.min_value
			min_x := i.max_value
			min_y := i.max_value
			min_z := i.max_value
			gl_push_attrib (em_gl_enable_bit | em_gl_color_buffer_bit)
			from
				i := 0
			until
				i > face_count - 1
			loop
				current_face := faces @ i
				gl_begin (em_gl_polygon)
				gl_color3f (1, 1, 1)
				from
					j := 0
					no_more_vertex := False
				until
					no_more_vertex
				loop
					current_array ?= current_face @ 1
					index := current_array @ j
					v1 := (vectors @ (index - 1)) @ 0
					v2 := (vectors @ (index - 1)) @ 1
					v3 := (vectors @ (index - 1)) @ 2
					if v1 > max_x then
						max_x := v1
					end
					if v2 > max_y then
						max_y := v2
					end
					if v3 > max_z then
						max_z := v3
					end
					if v1 < min_x then
						min_x := v1
					end
					if v2 < min_y then
						min_y := v2
					end
					if v3 < min_z then
						min_z := v3
					end
					current_array ?= current_face @ 2
					index := current_array @ j
					vt1 := ((texture_coordinates @ (index - 1)) @ 0)
					vt2 := 1.0 - ((texture_coordinates @ (index - 1)) @ 1)
					current_array ?= current_face @ 3
					index := current_array @ j
					vn1 := (normals @ (index - 1)) @ 0
					vn2 := (normals @ (index - 1)) @ 1
					vn3 := (normals @ (index - 1)) @ 2
					gl_normal3d (- vn1, - vn2, - vn3)
					gl_tex_coord2d (vt1, vt2)
					gl_vertex3d (v1, v2, v3)
					if j >= current_array.count - 1 then
						no_more_vertex := True
					else
						j := j + 1
					end
				end
				gl_end
				i := i + 1
			end
			object_width := max_x - min_x
			object_height := max_y - min_y
			object_depth := max_z - min_z
			gl_pop_attrib
		end
	
feature 

	object_width: DOUBLE

	object_height: DOUBLE

	object_depth: DOUBLE

	texture_id: ARRAY[INTEGER]
	
feature {NONE} 

	read_vector (input: Q_TEXT_SCANNER): ARRAY [DOUBLE] is
		local
			i: INTEGER
		do
			create Result.make (0, 2)
			from
				i := 0
			until
				input.last_string.is_equal ("")
			loop
				Result.force (input.last_string.to_double, i)
				input.read_token
				i := i + 1
			end
		end

	read_face (input: Q_TEXT_SCANNER): TUPLE [ARRAY [INTEGER], ARRAY [INTEGER], ARRAY [INTEGER]] is
		local
			tokenizer_: Q_TEXT_SCANNER
			vectors_: ARRAY [INTEGER]
			vectors_index_: INTEGER
			normals_: ARRAY [INTEGER]
			normals_index_: INTEGER
			tex_coords_: ARRAY [INTEGER]
			tex_coords_index: INTEGER
		do
			create Result
			create tokenizer_.make_from_string_with_delimiters ("", "/")
			create vectors_.make (0, 2)
			create normals_.make (0, 2)
			create tex_coords_.make (0, 1)
			from
			until
				input.last_string.is_equal ("")
			loop
				tokenizer_.set_source_string (input.last_string)
				tokenizer_.read_token
				if not tokenizer_.last_string.is_equal ("") and has_vectors then
					vectors_.force (tokenizer_.last_string.to_integer, vectors_index_)
					vectors_index_ := vectors_index_ + 1
					tokenizer_.read_token
				end
				if not tokenizer_.last_string.is_equal ("") and has_texture_cooridnates then
					tex_coords_.force (tokenizer_.last_string.to_integer, tex_coords_index)
					tex_coords_index := tex_coords_index + 1
					tokenizer_.read_token
				end
				if not tokenizer_.last_string.is_equal ("") and has_normals then
					normals_.force (tokenizer_.last_string.to_integer, normals_index_)
					normals_index_ := normals_index_ + 1
					tokenizer_.read_token
				end
				input.read_token
			end
			Result.put (vectors_, 1)
			Result.put (tex_coords_, 2)
			Result.put (normals_, 3)
		end
	
end -- class traffic_3D_OBJ_LOADER
