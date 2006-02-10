indexing
	description: "Objects that ..."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_TRAVELER_REPRESENTATION
inherit
	
	TRAFFIC_3D_CONSTANTS
		export {NONE} all end
		
	DOUBLE_MATH
		export {NONE} all end
		
	EM_CONSTANTS
		export {NONE} all end

	GL_FUNCTIONS
		export {NONE} all end

	GLU_FUNCTIONS
		export {NONE} all end

create
	make

feature -- Initialization
	
	make (a_map: TRAFFIC_MAP; a_time: TRAFFIC_TIME) is
			-- Create a new object.
		require
			map_exists: a_map /= Void
			a_time /= Void
		do
			traffic_time := a_time
			map := a_map
			create centre.make_xyz(0,0,0)
			create color.make_xyz(0,0,255)
				-- default color black
				
			create traveler_factory.make
			create collision_polygons.make (1)	
				-- Could be extended, if desired.
			traveler_factory.add_traveler_type (agent create_tram, "tram")
			traveler_factory.add_traveler_type (agent create_passenger, "passenger")
--			traveler_factory.add_gauger(agent decide_traveler_type(?), "by path")
--			traveler_factory.add_gauger(agent decide_traveler_type(?), "by type")
			traveler_factory.add_gauger(agent decide_traveler_type, "by_type")
			
			create travelers.make (1) 
		ensure
			traveler_factory_created: traveler_factory /= Void
			travelers_created: travelers /= Void
			traffic_time = a_time
			map /= Void
		end
		
feature{TRAFFIC_3D_MAP_WIDGET} -- Interface
	
	draw is
			-- draw all places
		local
			a_traveler: TRAFFIC_TRAVELER
			i : INTEGER
		do
			from
				travelers.start
			until
				travelers.after
			loop
				if not (travelers.item_for_iteration = Void) then
					i := travelers.key_for_iteration
					a_traveler := map.travelers.item (i)
					travelers.item_for_iteration.set_origin(a_traveler.position.x, traveler_offset, a_traveler.position.y)
					travelers.item_for_iteration.draw	
				end
				travelers.forth
			end
		end
			
feature -- Collision detection

	collision_polygons: ARRAYED_LIST[EM_POLYGON_CONVEX_COLLIDABLE]
		-- Collision polygons to check for collisions with traffic lines
	
feature -- Implemenation
		
		add_traveler (a_traveler: TRAFFIC_TRAVELER) is
				-- a passenger walks from origin to destination with 'speed'
				local
					traveler: EM_3D_OBJECT
				do
					if a_traveler.traffic_info.is_equal ("passenger") then
						traveler_factory.take_decision ("by_type", [1])	
					elseif a_traveler.traffic_info.is_equal ("tram") then
						traveler_factory.take_decision ("by_type", [2])
					end		
					traveler := traveler_factory.create_object
					traveler.set_origin (a_traveler.position.x, traveler_offset, a_traveler.position.y)
					traffic_time.add_callback_procedure (agent a_traveler.take_tour)
					travelers.force (traveler, a_traveler.index)					
				end
			


feature{NONE} -- Decision procedures

	decide_traveler_type(i: INTEGER): STRING is
			-- decide which type of place is chosen.
		require
			i > 0
			i <= 2
			-- 1 for passenger, 2 for tram
		do
			if i = 1 then
				Result := "passenger"
			else
				Result := "tram"
			end
		end

	create_passenger is
			-- create a passenger representation
		require
			color /= Void
		local
			traveler_radius: DOUBLE
				-- radius of a tram place
		do
			traveler_radius := 0.2
			gl_matrix_mode_external (Em_gl_modelview)
			gl_push_matrix_external
			gl_color3dv_external(color.pointer)
			-- a little bit higher than the line
			gl_translated_external (0, place_height, 0)
			gl_rotated_external (90, 1, 0, 0)
			gl_disable_external (em_gl_lighting)
			glu_disk_external (glu_new_quadric, 0, traveler_radius, 72, 1)
			gl_pop_matrix_external
			gl_flush_external
			
			gl_matrix_mode_external (Em_gl_modelview)
			gl_push_matrix_external
			gl_color3dv_external(color.pointer)
			-- a little bit higher than the plane
			gl_translated_external (0 , place_height, 0)
			gl_rotated_external (90, 1, 0, 0)
			gl_disable_external (em_gl_lighting)
			glu_cylinder_external (glu_new_quadric_external, traveler_radius, traveler_radius, line_depth, 8, 8)
			gl_pop_matrix_external
			gl_flush_external
			
			traveler_radius := 0.2
			gl_matrix_mode_external (Em_gl_modelview)
			gl_push_matrix_external
			gl_color3dv_external(color.pointer)
			-- on plane height
			gl_translated_external (0, 0, 0)
			gl_rotated_external (90, 1, 0, 0)
			gl_disable_external (em_gl_lighting)
			glu_disk_external (glu_new_quadric, 0, traveler_radius, 72, 1)
			gl_pop_matrix_external
			gl_flush_external
		end
		
	create_tram is
			-- create a tram representation
--		require
--			color /= Void
--		local
--			tram_length: DOUBLE
--				-- tram length
--			tram_width: DOUBLE
--				-- tram width
--		do
--			tram_length := 1
--			tram_width := 0.3
--			gl_begin_external (em_gl_quads)
--				-- Front
--				gl_bind_texture (Em_gl_texture_2d, 1)
--				gl_color3d_external (0, 0.15, 0.8) -- Blue
--				gl_normal3d_external (1, 0, 0)
--				gl_tex_coord2f_external (0, 0)
--				gl_vertex3d_external (0.0, 1.0, 0.0)
--				gl_normal3d_external (1, 0, 0)
--				gl_tex_coord2f_external (0, 1)
--				gl_vertex3d_external (0.0, 0.0, 0.0)
--				gl_normal3d_external (1, 0, 0)
--				gl_tex_coord2f_external (1, 1)
--				gl_vertex3d_external (0.0, 0.0, -1.0)
--				gl_normal3d_external (1, 0, 0)
--				gl_tex_coord2f_external (1, 0)
--				gl_vertex3d_external (0.0, 1.0, -1.0)
--
--				-- Back
--				gl_color3d_external (0, 0.15, 0.8) -- Blue
--				gl_normal3d_external (-1, 0, 0)
--				gl_tex_coord2f_external (0, 0)
--				gl_vertex3d_external (-1.0, 0.0, -1.0)
--				gl_normal3d_external (-1, 0, 0)
--				gl_tex_coord2f_external (0, 1)
--				gl_vertex3d_external (-1.0, 1.0, -1.0)
--				gl_normal3d_external (-1, 0, 0)
--				gl_tex_coord2f_external (1, 1)
--				gl_vertex3d_external (-1.0, 1.0, 0.0)
--				gl_normal3d_external (-1, 0, 0)
--				gl_tex_coord2f_external (1, 0)
--				gl_vertex3d_external (-1.0, 0.0, 0.0)
--
--				-- Left
--				gl_color3d_external (1, 0, 0) -- Red
--				gl_normal3d_external (0, 0, 1)
--				gl_tex_coord2f_external (0, 0)
--				gl_vertex3d_external (-1.0, 1.0, 0.0)
--				gl_normal3d_external (0, 0, 1)
--				gl_tex_coord2f_external (0, 1)
--				gl_vertex3d_external (-1.0, 0.0, 0.0)
--				gl_normal3d_external (0, 0, 1)
--				gl_tex_coord2f_external (1, 1)
--				gl_vertex3d_external (0.0, 0.0, 0.0)
--				gl_normal3d_external (0, 0, 1)
--				gl_tex_coord2f_external (1, 0)
--				gl_vertex3d_external (0.0, 1.0, 0.0)
--
--				-- Right
--				gl_color3d_external (1, 0, 0) -- Red
--				gl_normal3d_external (0, 0, -1)
--				gl_tex_coord2f_external (0, 0)
--				gl_vertex3d_external (0.0, 1.0, -1.0)
--				gl_normal3d_external (0, 0, -1)
--				gl_tex_coord2f_external (0, 1)
--				gl_vertex3d_external (0.0, 0.0, -1.0)
--				gl_normal3d_external (0, 0, -1)
--				gl_tex_coord2f_external (1, 1)
--				gl_vertex3d_external (-1.0, 0.0, -1.0)
--				gl_normal3d_external (0, 0, -1)
--				gl_tex_coord2f_external (1, 0)
--				gl_vertex3d_external (-1.0, 1.0, -1.0)
--			gl_end_external
				require
			color /= Void
		local
			traveler_radius: DOUBLE
				-- radius of a tram place
		do
			traveler_radius := 0.2
			gl_matrix_mode_external (Em_gl_modelview)
			gl_push_matrix_external
			gl_color3dv_external(color.pointer)
			-- a little bit higher than the line
			gl_translated_external (0, place_height, 0)
			gl_rotated_external (90, 1, 0, 0)
			gl_disable_external (em_gl_lighting)
--			glu_quadric_normals_external (glu_new_quadric, 0)
			glu_disk_external (glu_new_quadric, 0, traveler_radius, 72, 1)
			gl_pop_matrix_external
			gl_flush_external
			
			gl_matrix_mode_external (Em_gl_modelview)
			gl_push_matrix_external
			gl_color3dv_external(color.pointer)
			-- a little bit higher than the plane
			gl_translated_external (0 , place_height, 0)
			gl_rotated_external (90, 1, 0, 0)
			gl_disable_external (em_gl_lighting)
--			glu_q
			glu_cylinder_external (glu_new_quadric_external, traveler_radius, traveler_radius, line_depth, 8, 8)
			gl_pop_matrix_external
			gl_flush_external
			
			traveler_radius := 0.2
			gl_matrix_mode_external (Em_gl_modelview)
			gl_push_matrix_external
			gl_color3dv_external(color.pointer)
			-- on plane height
			gl_translated_external (0, 0, 0)
			gl_rotated_external (90, 1, 0, 0)
			gl_disable_external (em_gl_lighting)
			glu_disk_external (glu_new_quadric, 0, traveler_radius, 72, 1)
			gl_pop_matrix_external
			gl_flush_external
		end	
		
		
feature{NONE} -- Decision attributes
		
	tram_type: STRING is "tram"
	
	passenger_type: STRING is "passenger"
	
	
feature{TRAFFIC_3D_MAP_WIDGET}

	travelers: HASH_TABLE [EM_3D_OBJECT, INTEGER]		
		-- Container for all traveler
		
feature{NONE} -- Attributes

	traveler_factory: TRAFFIC_TRAVELER_FACTORY
		-- factory for places

	color: GL_VECTOR_3D[DOUBLE]
		-- color of the place	
		
	centre: GL_VECTOR_3D[DOUBLE]
		-- Centre of the city
		
	traffic_time: TRAFFIC_TIME
		-- time where to put the travelers
		
	map: TRAFFIC_MAP
		-- city map

	traveler_offset: DOUBLE is 0.2
		-- offset of the traveler objects over map.

invariant
	centre /= Void
	color /= Void			
	traveler_factory /= Void
	collision_polygons /= Void
	travelers /= Void
	

end -- class TRAFFIC_TRAVELER_REPRESENTATION	
