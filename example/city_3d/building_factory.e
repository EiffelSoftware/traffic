indexing
	description: "Factory for building"
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	BUILDING_FACTORY

inherit

	EM_3D_OBJECT_FACTORY

	EM_SHARED_BITMAP_FACTORY
		export {NONE} all end

	EM_CONSTANTS
		export {NONE} all end

	GL_FUNCTIONS
		export {NONE} all end

	GLU_FUNCTIONS
		export {NONE} all end	

creation

	make, make_central

feature -- Implementation

	make is
			-- Creation procedure
		do
			is_central := false
--			bitmap_factory.create_bitmap_from_image ("house3.gif")
--				check
--					todo_proper_error_handling: bitmap_factory.last_bitmap /= Void
--				end
--			bitmap_factory.last_bitmap.do_not_free_gl_textures
--			texture := bitmap_factory.last_bitmap.gl_texture_mipmap
		end

	make_central is
			-- Creation procedure
		do
--	   		bitmap_factory.create_bitmap_from_image ("hello_world.gif")
--				check
--					todo_proper_error_handling: bitmap_factory.last_bitmap /= Void
--				end
--			bitmap_factory.last_bitmap.do_not_free_gl_textures
--			texture := bitmap_factory.last_bitmap.gl_texture_mipmap
--			is_central := true
		end
	
	is_central: BOOLEAN
			-- Is this house in the centre of town
	
	object_width: DOUBLE is 2.0
			-- The size of the bounding box in x direction of created objects

	object_height: DOUBLE is 2.0
			-- The size of the bounding box in y direction of created objects

	object_depth: DOUBLE is 2.0
			-- The size of the bounding box in z direction of created objects.	
		
feature {NONE} -- Implementation

	texture: INTEGER
	
	specify_object is
			-- defining the object		
		do
			if is_central then
				
			-- Front
--			gl_enable (Em_gl_texture_2d)
			gl_begin (em_gl_quads)
				gl_bind_texture (Em_gl_texture_2d, texture)
				gl_color3f (0, 0.15, 0.8) -- Blue
				gl_tex_coord2f (0, 0)
				gl_vertex3d (0.0, 1.0, 0.0)
				gl_tex_coord2f (1, 1)
				gl_vertex3d (0.0, 0.0, 0.0)
				gl_tex_coord2f (0, 1)
				gl_vertex3d (0.0, 0.0, -1.0)
				gl_tex_coord2f (1, 0)
				gl_vertex3d (0.0, 1.0, -1.0)
			gl_end
			gl_disable (Em_gl_texture_2d)
			
			gl_begin(em_gl_quads)
				-- Back
				gl_color3f(1, 0, 0) -- Red
				gl_vertex3d (-1.0, 0.0, -1.0)
				gl_vertex3d (-1.0, 1.0, -1.0)
				gl_vertex3d (-1.0, 1.0, 0.0)
				gl_vertex3d (-1.0, 0.0, 0.0)

				-- Right
				gl_color3f(0, 1, 0) -- Green
				gl_vertex3d (-1.0, 1.0, 0.0)
				gl_vertex3d (-1.0, 0.0, 0.0)
				gl_vertex3d (0.0, 0.0, 0.0)
				gl_vertex3d (0.0, 1.0, 0.0)

				-- Left
				gl_color3f (1, 1, 0) -- Yellow
				gl_vertex3d (0.0, 1.0, -1.0)
				gl_vertex3d (0.0, 0.0, -1.0)
				gl_vertex3d (-1.0, 0.0, -1.0)
				gl_vertex3d (-1.0, 1.0, -1.0)
				
				-- Top
				gl_color3d (1,1,1) -- White
				gl_vertex3d (-1.0, 1.0, -1.0)
				gl_vertex3d (-1.0, 1.0, 0.0)
				gl_vertex3d (0.0, 1.0, 0.0)
				gl_vertex3d (0.0, 1.0, -1.0)
			gl_end
				
--			gl_color3d (1,1,1) -- White
--			gl_matrix_mode (Em_gl_modelview)
--			gl_push_matrix
--			gl_translated (0, 0.6, 0)
--			glu_sphere (glu_new_quadric, 0.2, 72, 72)
--			gl_pop_matrix
--
--			gl_color3d (0.1,0.6,0.7) -- White
--			gl_matrix_mode (Em_gl_modelview)
--			gl_push_matrix
--			gl_rotated (90, 1, 0,0)
--			glu_disk (glu_new_quadric, 0, 0.2,72,72)
--			gl_pop_matrix
--						
--			gl_push_matrix
--			gl_translated (0,0.6,0)
--			gl_rotated (90, 1, 0,0)
--			glu_cylinder (glu_new_quadric, 0.2, 0.2, 0.8, 72,72)
--			gl_end
--			gl_pop_matrix
--			gl_flush
			
			else
--				gl_enable (Em_gl_texture_2d)
--				gl_begin (em_gl_quads)
--					-- Front
--					gl_bind_texture (Em_gl_texture_2d, texture)
--					gl_color3f (1, 1, 1) -- White
--					
--					gl_normal3d (1,0,0)
--					gl_tex_coord2f (0, 0)
--					gl_vertex3d (0.0, 1.0, 0.0)
--					gl_normal3d (1,0,0)
--					gl_tex_coord2f (0, 1)
--					gl_vertex3d (0.0, 0.0, 0.0)
--					gl_normal3d (1,0,0)
--					gl_tex_coord2f (1, 1)
--					gl_vertex3d (0.0, 0.0, -1.0)
--					gl_normal3d (1,0,0)
--					gl_tex_coord2f (1, 0)
--					gl_vertex3d (0.0, 1.0, -1.0)
--	
--					-- Back
--					gl_color3f(1, 1, 1) -- White
--					gl_normal3d (-1,0,0)
--					gl_tex_coord2f (0, 0)
--					gl_vertex3d (-1.0, 0.0, -1.0)
--					gl_normal3d (-1,0,0)
--					gl_tex_coord2f (0, 1)
--					gl_vertex3d (-1.0, 1.0, -1.0)
--					gl_normal3d (-1,0,0)
--					gl_tex_coord2f (1, 1)
--					gl_vertex3d (-1.0, 1.0, 0.0)
--					gl_normal3d (-1,0,0)
--					gl_tex_coord2f (1, 0)
--					gl_vertex3d (-1.0, 0.0, 0.0)
--	
--					-- Left
--					gl_color3f(1, 1, 1) -- White
--					gl_normal3d (0,0,1)
--					gl_tex_coord2f (0, 0)
--					gl_vertex3d (-1.0, 1.0, 0.0)
--					gl_normal3d (0,0,1)
--					gl_tex_coord2f (0, 1)
--					gl_vertex3d (-1.0, 0.0, 0.0)
--					gl_normal3d (0,0,1)
--					gl_tex_coord2f (1, 1)
--					gl_vertex3d (0.0, 0.0, 0.0)
--					gl_normal3d (0,0,1)
--					gl_tex_coord2f (1, 0)
--					gl_vertex3d (0.0, 1.0, 0.0)
--	
--					-- Right
--					gl_color3f(1, 1, 1) -- White
--					gl_normal3d (0,0,-1)
--					gl_tex_coord2f (0, 0)
--					gl_vertex3d (0.0, 1.0, -1.0)
--					gl_normal3d (0,0,-1)
--					gl_tex_coord2f (0, 1)
--					gl_vertex3d (0.0, 0.0, -1.0)
--					gl_normal3d (0,0,-1)
--					gl_tex_coord2f (1, 1)
--					gl_vertex3d (-1.0, 0.0, -1.0)
--					gl_normal3d (0,0,-1)
--					gl_tex_coord2f (1, 0)
--					gl_vertex3d (-1.0, 1.0, -1.0)
--					
--					-- Top
--					gl_color3f(1, 1, 1) -- White
--					gl_normal3d (0,1,0)
--					gl_tex_coord2f (0, 0)
--					gl_vertex3d (-1.0, 1.0, -1.0)
--					
--					gl_normal3d (0,1,0)
--					gl_tex_coord2f (0, 1)
--					gl_vertex3d (-1.0, 1.0, 0.0)
--					
--					gl_normal3d (0,1,0)
--					gl_tex_coord2f (1,1)
--					gl_vertex3d (0.0, 1.0, 0.0)
--					
--					gl_normal3d (0,1,0)
--					gl_tex_coord2f (1, 0)
--					gl_vertex3d (0.0, 1.0, -1.0)
--				gl_end
				gl_disable (Em_gl_texture_2d)
				-- Front
--				gl_enable (Em_gl_texture_2d)
				gl_begin (em_gl_quads)
					gl_bind_texture (Em_gl_texture_2d, texture)
					gl_color3f (0, 0.15, 0.8) -- Blue
					gl_normal3d (1,0,0)
					gl_tex_coord2f (0, 0)
					gl_vertex3d (0.0, 1.0, 0.0)
					gl_normal3d (1,0,0)
					gl_tex_coord2f (1, 1)
					gl_vertex3d (0.0, 0.0, 0.0)
					gl_normal3d (1,0,0)
					gl_tex_coord2f (0, 1)
					gl_vertex3d (0.0, 0.0, -1.0)
					gl_normal3d (1,0,0)
					gl_tex_coord2f (1, 0)
					gl_vertex3d (0.0, 1.0, -1.0)
				gl_end
				gl_disable (Em_gl_texture_2d)
				
				gl_begin(em_gl_quads)
					-- Back
					gl_color3f(1, 0, 0) -- Red
					gl_normal3d (-1,0,0)
					gl_vertex3d (-1.0, 0.0, -1.0)
					gl_normal3d (-1,0,0)
					gl_vertex3d (-1.0, 1.0, -1.0)
					gl_normal3d (-1,0,0)
					gl_vertex3d (-1.0, 1.0, 0.0)
					gl_normal3d (-1,0,0)
					gl_vertex3d (-1.0, 0.0, 0.0)
	
					-- Left
					gl_color3f(0, 1, 0) -- Green
					gl_normal3d (0,0,1)
					gl_vertex3d (-1.0, 1.0, 0.0)
					gl_normal3d (0,0,1)
					gl_vertex3d (-1.0, 0.0, 0.0)
					gl_normal3d (0,0,1)
					gl_vertex3d (0.0, 0.0, 0.0)
					gl_normal3d (0,0,1)
					gl_vertex3d (0.0, 1.0, 0.0)
	
					-- Right
					gl_color3f (1, 1, 0) -- Yellow
					gl_normal3d (0,0,-1)
					gl_vertex3d (0.0, 1.0, -1.0)
					gl_normal3d (0,0,-1)
					gl_vertex3d (0.0, 0.0, -1.0)
					gl_normal3d (0,0,-1)
					gl_vertex3d (-1.0, 0.0, -1.0)
					gl_normal3d (0,0,-1)
					gl_vertex3d (-1.0, 1.0, -1.0)
					
					-- Top
					gl_color3d (1,1,1) -- White
					gl_normal3d (0,1,0)
					gl_vertex3d (-1.0, 1.0, -1.0)
					gl_normal3d (0,1,0)
					gl_vertex3d (-1.0, 1.0, 0.0)
					gl_normal3d (0,1,0)
					gl_vertex3d (0.0, 1.0, 0.0)
					gl_normal3d (0,1,0)
					gl_vertex3d (0.0, 1.0, -1.0)
				gl_end
			end
		end

end -- class BUILDING_FACTORY
