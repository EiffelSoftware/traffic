indexing
	description: "Factory for building"
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

	make

feature -- Implementation

	make is
			-- Creation procedure
		do
--			is_central := False
--			is_city_centre := false
--			bitmap_factory.create_bitmap_from_image ("building.gif")
--				check
--					todo_proper_error_handling: bitmap_factory.last_bitmap /= Void
--				end
--			bitmap_factory.last_bitmap.do_not_free_gl_textures
--			texture := bitmap_factory.last_bitmap.gl_texture_mipmap
			create building_drafts.make (1,1)
			building_drafts.force (agent create_city_central, 1)
			building_drafts.force (agent create_central_building, 2)
			building_drafts.force (agent create_outlying, 3)
			gauger := agent choose_building_type
		end
		
--	set_central is
--		 	-- Set building to be in the centre.
--		do
--			is_central := True
--			is_city_centre := False
--			unchanged := False
--		end
--	
--	set_city_centre is
--			-- Set building to be in the city centre.
--		do
--			is_city_centre := True
--			is_central := False
--			unchanged := False
--		end
--
--	set_outlying is
--			-- Set building to be outlying.
--		do
--			is_central := False
--			is_city_centre := False
--			unchanged := False
--		end
--	
--	is_central: BOOLEAN
--			-- Is this building in the centre of town?
--			
--	is_city_centre: BOOLEAN
--			-- Is the building even closer than centre?
			
	object_width: DOUBLE is 2.0
			-- The size of the bounding box in x direction of created objects
			
	object_height: DOUBLE is 2.0
			-- The size of the bounding box in y direction of created objects
			
	object_depth: DOUBLE is 2.0
			-- The size of the bounding box in z direction of created objects
			
			
	building_drafts: ARRAY[PROCEDURE[ANY,TUPLE]]
	
	set_distance(d: DOUBLE) is
			-- set the distance of the building that should be created.
		require d > 0
		do
			distance := d
			unchanged := false
		ensure distance = d
		end
		
	set_max_distance(d: DOUBLE) is
			-- set the distance of the building that should be created.
		require d > 0
		do
			max_distance := d
			unchanged := false
		ensure max_distance = d
		end
		
	
	
	distance: DOUBLE
	
	max_distance: DOUBLE
	
	
	choose_building_type: INTEGER is     --(max_distance,distance: DOUBLE): INTEGER is
			-- Choose which type of builing is chosen
		do
			if distance < 5 then
				Result := 1
			elseif distance < 10 then
				Result := 2
			elseif distance < 20 then
				Result := 2
			else
				Result := 3
			end
		ensure Result <= building_drafts.count
		end

	create_central_building is
			-- create a central building
		do
			-- Pyramid
			-- Front
			gl_color3d_external (0.65, 0.65, 0.65)
			gl_begin_external (Em_gl_triangles)
				-- Front
				gl_normal3d_external (-0.5, 1.5, -0.5)
				gl_vertex3d_external (-0.5, 1.5, -0.5)
				gl_normal3d_external (0, 1, 0)
				gl_vertex3d_external (0, 1, 0)
				gl_normal3d_external (0, 1, -1)
				gl_vertex3d_external (0, 1, -1)
				
				-- Right
				gl_normal3d_external (-0.5, 1.5, -0.5)
				gl_vertex3d_external (-0.5, 1.5, -0.5)
				gl_normal3d_external (0, 1, -1)
				gl_vertex3d_external (0, 1, -1)
				gl_normal3d_external (-1, 1, -1)
				gl_vertex3d_external (-1, 1, -1)
				
				-- Back
				gl_normal3d_external (-0.5, 1.5, -0.5)
				gl_vertex3d_external (-0.5, 1.5, -0.5)
				gl_normal3d_external (-1, 1, -1)
				gl_vertex3d_external (-1, 1, -1)
				gl_normal3d_external (-1, 1, 0)
				gl_vertex3d_external (-1, 1, 0)
				
				-- Left
				gl_normal3d_external (-0.5, 1.5, -0.5)
				gl_vertex3d_external (-0.5, 1.5, -0.5)
				gl_normal3d_external (-1, 1, 0)
				gl_vertex3d_external (-1, 1, 0)
				gl_normal3d_external (0, 1, 0)
				gl_vertex3d_external (0, 1, 0)
			gl_end_external
			-- Cube
--			gl_enable_external (Em_gl_texture_2d)
			gl_begin_external (em_gl_quads)
				-- Front
--				gl_bind_texture (Em_gl_texture_2d, texture)
				gl_color3d_external (0, 0.15, 0.8) -- Blue
				gl_normal3d_external (1, 0, 0)
				gl_tex_coord2f_external (0, 0)
				gl_vertex3d_external (0.0, 1.0, 0.0)
				gl_normal3d_external (1, 0, 0)
				gl_tex_coord2f_external (0, 1)
				gl_vertex3d_external (0.0, 0.0, 0.0)
				gl_normal3d_external (1, 0, 0)
				gl_tex_coord2f_external (1, 1)
				gl_vertex3d_external (0.0, 0.0, -1.0)
				gl_normal3d_external (1, 0, 0)
				gl_tex_coord2f_external (1, 0)
				gl_vertex3d_external (0.0, 1.0, -1.0)

				-- Back
				gl_color3f(1, 0, 0) -- Red
				gl_normal3d_external (-1, 0, 0)
				gl_tex_coord2f_external (0, 0)
				gl_vertex3d_external (-1.0, 0.0, -1.0)
				gl_normal3d_external (-1, 0, 0)
				gl_tex_coord2f_external (0, 1)
				gl_vertex3d_external (-1.0, 1.0, -1.0)
				gl_normal3d_external (-1, 0, 0)
				gl_tex_coord2f_external (1, 1)
				gl_vertex3d_external (-1.0, 1.0, 0.0)
				gl_normal3d_external (-1, 0, 0)
				gl_tex_coord2f_external (1, 0)
				gl_vertex3d_external (-1.0, 0.0, 0.0)

				-- Left
				gl_color3d_external (0, 1, 0) -- Green
				gl_normal3d_external (0, 0, 1)
				gl_tex_coord2f_external (0, 0)
				gl_vertex3d_external (-1.0, 1.0, 0.0)
				gl_normal3d_external (0, 0, 1)
				gl_tex_coord2f_external (0, 1)
				gl_vertex3d_external (-1.0, 0.0, 0.0)
				gl_normal3d_external (0, 0, 1)
				gl_tex_coord2f_external (1, 1)
				gl_vertex3d_external (0.0, 0.0, 0.0)
				gl_normal3d_external (0, 0, 1)
				gl_tex_coord2f_external (1, 0)
				gl_vertex3d_external (0.0, 1.0, 0.0)

				-- Right
				gl_color3d_external (1, 1, 0) -- Yellow
				gl_normal3d_external (0, 0, -1)
				gl_tex_coord2f_external (0, 0)
				gl_vertex3d_external (0.0, 1.0, -1.0)
				gl_normal3d_external (0, 0, -1)
				gl_tex_coord2f_external (0, 1)
				gl_vertex3d_external (0.0, 0.0, -1.0)
				gl_normal3d_external (0, 0, -1)
				gl_tex_coord2f_external (1, 1)
				gl_vertex3d_external (-1.0, 0.0, -1.0)
				gl_normal3d_external (0, 0, -1)
				gl_tex_coord2f_external (1, 0)
				gl_vertex3d_external (-1.0, 1.0, -1.0)
			gl_end_external
		end
		
	create_city_central is 
			-- create a building in the city centre
		do
			gl_matrix_mode_external (em_gl_modelview)
--				gl_push_matrix_external
--				gl_translated_external (-0.5, 0, -0.5)		
--				
			gl_color3d_external (0.65, 0.65, 0.65) -- White
			gl_matrix_mode_external (Em_gl_modelview)
			gl_push_matrix_external
			gl_translated_external (0, 1, 0)
			glu_sphere_external (glu_new_quadric, 0.5, 8, 8)
			gl_pop_matrix_external
			
			gl_push_matrix_external
			gl_translated_external (0,1,0)
			gl_rotated_external (90, 1, 0,0)
			glu_cylinder_external (glu_new_quadric, 0.5, 0.5, 1, 8, 8)
			gl_end_external
			gl_pop_matrix_external
			gl_pop_matrix_external
			gl_flush_external
		end
		
		
		create_outlying is
				-- create a outlying building
			do
				gl_disable_external (Em_gl_texture_2d)
				-- Front
--				gl_enable_external (Em_gl_texture_2d)
				gl_begin_external (em_gl_quads)
--					gl_bind_texture (Em_gl_texture_2d, texture)
					gl_color3d_external (0, 0.15, 0.8) -- Blue
					gl_normal3d_external (1, 0, 0)
					gl_tex_coord2f_external (0, 0)
					gl_vertex3d_external (0.0, 1.0, 0.0)
					gl_normal3d_external (1, 0, 0)
					gl_tex_coord2f_external (1, 1)
					gl_vertex3d_external (0.0, 0.0, 0.0)
					gl_normal3d_external (1, 0, 0)
					gl_tex_coord2f_external (0, 1)
					gl_vertex3d_external (0.0, 0.0, -1.0)
					gl_normal3d_external (1, 0, 0)
					gl_tex_coord2f_external (1, 0)
					gl_vertex3d_external (0.0, 1.0, -1.0)
				gl_end_external
				gl_disable_external (Em_gl_texture_2d)
				
				gl_begin_external(em_gl_quads)
					-- Back
					gl_color3d_external (1, 0, 0) -- Red
					gl_normal3d_external (-1, 0, 0)
					gl_vertex3d_external (-1.0, 0.0, -1.0)
					gl_normal3d_external (-1, 0, 0)
					gl_vertex3d_external (-1.0, 1.0, -1.0)
					gl_normal3d_external (-1, 0, 0)
					gl_vertex3d_external (-1.0, 1.0, 0.0)
					gl_normal3d_external (-1, 0, 0)
					gl_vertex3d_external (-1.0, 0.0, 0.0)
					
					-- Left
					gl_color3d_external (0, 1, 0) -- Green
					gl_normal3d_external (0, 0, 1)
					gl_vertex3d_external (-1.0, 1.0, 0.0)
					gl_normal3d_external (0, 0, 1)
					gl_vertex3d_external (-1.0, 0.0, 0.0)
					gl_normal3d_external (0, 0, 1)
					gl_vertex3d_external (0.0, 0.0, 0.0)
					gl_normal3d_external (0, 0, 1)
					gl_vertex3d_external (0.0, 1.0, 0.0)
					
					-- Right
					gl_color3d_external (1, 1, 0) -- Yellow
					gl_normal3d_external (0, 0, -1)
					gl_vertex3d_external (0.0, 1.0, -1.0)
					gl_normal3d_external (0, 0, -1)
					gl_vertex3d_external (0.0, 0.0, -1.0)
					gl_normal3d_external (0, 0, -1)
					gl_vertex3d_external (-1.0, 0.0, -1.0)
					gl_normal3d_external (0, 0, -1)
					gl_vertex3d_external (-1.0, 1.0, -1.0)
					
					-- Top
					gl_color3d_external (1,1,1) -- White
					gl_normal3d_external (0, 1, 0)
					gl_vertex3d_external (-1.0, 1.0, -1.0)
					gl_normal3d_external (0, 1, 0)
					gl_vertex3d_external (-1.0, 1.0, 0.0)
					gl_normal3d_external (0, 1, 0)
					gl_vertex3d_external (0.0, 1.0, 0.0)
					gl_normal3d_external (0, 1, 0)
					gl_vertex3d_external (0.0, 1.0, -1.0)
				gl_end_external	
			end
			
		gauger: FUNCTION [ANY, TUPLE, INTEGER]
feature {NONE} -- Implementation

	texture: INTEGER
			-- Texture of the buildings
	
	specify_object is
			-- Defines the object.		
		do
			building_drafts.item (gauger.item ([])).apply
		end

end -- class BUILDING_FACTORY
