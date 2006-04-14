indexing
	description: "Loader for 3d-objects stored in a *.obj file format"
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_3D_OBJECT_LOADER

inherit
	EM_3D_OBJ_LOADER
	export {NONE}
		all
	{TRAFFIC_3D_TRAVELER_REPRESENTATION}
		create_object
	redefine
		make, specify_object, read_face, load_file 
	end
	
	
create	
	make, make_with_color 
	
feature -- Initialization
	
	make is
			-- 
		do
			create em_color.make_xyz (0, 0, 0)
		end
		

	make_with_color (a_r: DOUBLE; a_g: DOUBLE; a_b: DOUBLE) is
		do
			create em_color.make_xyz (a_r, a_g, a_b) 
		end	

feature -- Attribute Setting

	set_em_color (a_r: DOUBLE; a_g: DOUBLE; a_b: DOUBLE) is
			-- As we don't support the mtllib command, this command set's the color of the whole object
		do
			create em_color.make_xyz (a_r, a_g, a_b)
			-- we changed the color, so the model informations have changed
			unchanged := false
		ensure then
			changed: not unchanged
		end

	em_color: GL_VECTOR_3D [DOUBLE]
	
feature  -- Commands

	load_file (a_filename: STRING) is
			-- Load an object from 'a_filename'
		local
			obj_file: PLAIN_TEXT_FILE
		do
			-- initialize minimas and maximas
			-- TODO why doesn't this work?
--			min_x := min_x.Max_value
--			min_y := min_y.Max_value
--			min_z := min_z.Max_value
--			max_x := max_x.Min_value
--			max_y := max_y.Min_value
--			max_z := max_z.Min_value
			min_x := 100000
			min_y := 100000
			min_z := 100000
			max_x := -100000
			max_y := -100000
			max_z := -100000

			create vertices.make (0,2)
			create faces.make (0,0)
			file_loader.load_text_file_read (a_filename)
			obj_file := file_loader.last_text_file

			-- read line for line
			from
				vertex_count := 0
				face_count := 0
				obj_file.start
			until
				obj_file.after
			loop
				-- read first character and decide what to do
				obj_file.read_character
				inspect
					obj_file.last_character
				when '#' then
					-- comment => ignore line
					obj_file.read_line
				when 'v' then
					-- vertex data
					vertices.force (read_vertex (obj_file), vertex_count)
					vertex_count := vertex_count + 1
				when 'f' then
					-- face data
					faces.force (read_face (obj_file), face_count)
					face_count := face_count + 1
				else
					-- unknown => ignore line and print line as output
					if not obj_file.off then
						obj_file.read_line					
					end
--					print ("Unknown line:")
--					print (obj_file.last_string + "%N")	
				end
			end
			obj_file.close
			-- we loaded a new file, so the model informations have changed
			unchanged := false
		ensure then
			changed: not unchanged
		end

feature {EM_3D_OBJECT_FACTORY} -- Deferred features that should not be accessible from the outside

	

	specify_object is
			-- Specify an object that can be drawn in the origin
			-- (front, left, lower corner of bounding box = 0,0,0)
		local
			act_face: INTEGER
			cur_face: ARRAY[INTEGER]
			vert0,vert1,vert2: ARRAY[DOUBLE]
			p, q: ARRAY[DOUBLE]
			fnormal: ARRAY[DOUBLE]
--			tmp: ANY
		do
			-- TODO support other faces than triangles
			-- and also support other data, like texture coordinates
			-- vertex normals and material informations
			-- maybe also support computation of vertex normals if
			-- they aren't given in the file

			-- as we don't support textures yet, we save the flag and disable them
			gl_push_attrib ( Em_gl_enable_bit)
			gl_disable (Em_gl_texture_2d)

			-- Warning, the z axis is out of the screen,
			-- but we want our object into the screen
			-- so max and min are reversed for the z coordinate
			gl_begin ( Em_gl_triangles )
				gl_color3dv (em_color.pointer)
				gl_materialfv (Em_gl_front, Em_gl_ambient_and_diffuse, $default_pointer)
				from
					act_face := 0
				until
					act_face = face_count
				loop
					-- get vertices
					cur_face := faces @ act_face
					vert0 := vertices @ (cur_face @ 0)
					vert1 := vertices @ (cur_face @ 1)
					vert2 := vertices @ (cur_face @ 2)

					-- compute face normal
					create p.make (0, 2)
					create q.make (0, 2)
					p.put (vert0 @ 0 - vert1 @ 0, 0)
					p.put (vert0 @ 1 - vert1 @ 1, 1)
					p.put (vert0 @ 2 - vert1 @ 2, 2)
					q.put (vert2 @ 0 - vert1 @ 0, 0)
					q.put (vert2 @ 1 - vert1 @ 1, 1)
					q.put (vert2 @ 2 - vert1 @ 2, 2)
					fnormal := crossproduct(p, q)

					-- draw vertices
					gl_normal3d (fnormal @ 0, fnormal @ 1, fnormal @ 2)
					gl_vertex3d (vert0 @ 0 - min_x, vert0 @ 1 - min_y, vert0 @ 2 - max_z)
					gl_vertex3d (vert1 @ 0 - min_x, vert1 @ 1 - min_y, vert1 @ 2 - max_z)
					gl_vertex3d (vert2 @ 0 - min_x, vert2 @ 1 - min_y, vert2 @ 2 - max_z)

					act_face := act_face + 1
				end
			gl_end

			-- restore old attrib stack
			gl_pop_attrib

			-- set bounding box
			object_width := max_x - min_x
			object_height := max_y - min_y
			object_depth := max_z - min_z
		end


feature {NONE} -- implementation

	read_face (a_file: FILE): ARRAY[INTEGER] is
			-- Read the face data from the current position
		do
			create result.make(0,2)

			-- read face data (format integer//integer integer//integer integer//integer)
			-- TODO at the moment we only read the geometric vertices
			-- it would be possible to also read texture vertices or normal vertices
			-- we also only read 3 vertices, so only triangle faces are acceptable
			a_file.read_integer
			result.put (a_file.last_integer-1, 0)
			a_file.read_stream (2)
			a_file.read_integer
			a_file.read_integer
			result.put (a_file.last_integer-1, 1)
			a_file.read_stream (2)
			a_file.read_integer
			a_file.read_integer
			result.put (a_file.last_integer-1, 2)
			a_file.readline
		end
end
