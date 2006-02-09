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
			
			create trams.make
			create passengers.make
			create travelers.make (1,1)
			number_of_passengers := 0
			number_of_trams := 0
--			add_random_passenger(100, 20)
--			add_random_passenger(50, 60)
			add_trams(map)
		ensure
			traveler_factory_created: traveler_factory /= Void
			travelers_created: travelers /= Void
			traffic_time = a_time
			map /= Void
		end
		
feature{TRAFFIC_3D_MAP_WIDGET} -- Interface
	
	draw is
			-- draw all places
		do
			from
				trams.start
			until
				trams.after
			loop
				if not (trams.item = Void) then
					trams.item.draw	
				end
				trams.forth
			end
			from
				passengers.start
			until
				passengers.after
			loop
				if not (passengers.item = Void) then
					passengers.item.draw	
				end
				passengers.forth
			end
		end
			
feature -- Collision detection

	collision_polygons: ARRAYED_LIST[EM_POLYGON_CONVEX_COLLIDABLE]
		-- Collision polygons to check for collisions with traffic lines
	
feature -- Implemenation

--	add_traveler(map: TRAFFIC_MAP) is
--			-- add all places from the map to the places array
--			require
--				map_valid: map /= Void
--			local
--				x_coord, z_coord: DOUBLE
--				i: INTEGER
--				all_places: ARRAYED_LIST [TRAFFIC_LINE_SECTION] -- places are at beginning and end of linesections
--				place: EM_3D_OBJECT
--				collision_poly: EM_POLYGON_CONVEX_COLLIDABLE
--				poly_points: DS_LINKED_LIST[EM_VECTOR_2D]
--			do
--				all_places := map.line_sections
--				from
--					all_places.start
--					i := 0
--				until
--					all_places.after
--				loop
--					x_coord := centre.x + map_to_gl_coords(all_places.item.polypoints.first).x
--					z_coord := centre.z + map_to_gl_coords(all_places.item.polypoints.first).y
--					
--					-- polypoints for the place
--					create poly_points.make
--					poly_points.force (create {EM_VECTOR_2D}.make (x_coord, z_coord), 1)	-- left bottom corner
--					poly_points.force (create {EM_VECTOR_2D}.make (x_coord, z_coord-place_width), 2) -- left upper corner
--					poly_points.force (create {EM_VECTOR_2D}.make (x_coord-place_width, z_coord-place_width), 3) -- right upper corner
--					poly_points.force (create {EM_VECTOR_2D}.make (x_coord-place_width, z_coord), 4) -- right bottom corner
--				
--					create collision_poly.make_from_absolute_list (create {EM_VECTOR_2D}.make (x_coord-(place_width/2),z_coord-(place_width/2)), poly_points)
--					collision_polygons.force (collision_poly)
--					
--					-- place creation
--					place_factory.take_decision (decision_type)
--					place := place_factory.create_object
--					place.set_origin(x_coord, 0.1 ,z_coord)
--					places.force(place, i)
--					i := i+1
--					all_places.forth
--				end
--				
--			end
		
		add_directed_passenger (origin: EM_VECTOR_2D; destination: EM_VECTOR_2D; speed: DOUBLE) is
				-- a passenger walks from origin to destination with 'speed'
				require
					origin /= Void
					destination /= Void
					speed >= 0 and speed <= 1
				local
					passenger: TRAFFIC_PASSENGER
				do
					traveler_factory.take_decision ("by_type", [1])
					passenger ?= traveler_factory.create_object ("passenger")
					passenger.initialize_directed (origin, destination, speed)
					traffic_time.add_callback_procedure (agent passenger.take_tour)
					passengers.force (passenger)					
				end
			
		
		add_random_passenger (origin: EM_VECTOR_2D) is
				-- add a traveler with random walk to the map at 'origin'
			require
				origin /= Void
			local
				passenger: TRAFFIC_PASSENGER
			do
				traveler_factory.take_decision ("by_type", [1])
				passenger ?= traveler_factory.create_object ("passenger")
				passenger.initialize_random (origin, traffic_time.time.ticks)
				traffic_time.add_callback_procedure (agent passenger.take_tour)
				passengers.force (passenger)
			end
		
		add_trams(a_map: TRAFFIC_MAP) is	
				-- add trams onto the map
			local
				tram: TRAFFIC_TRAM
--				collision_poly: EM_POLYGON_CONVEX_COLLIDABLE
--				poly_points: DS_LINKED_LIST[EM_VECTOR_2D]
				a_line: TRAFFIC_LINE
				all_lines: HASH_TABLE [TRAFFIC_LINE, STRING]
			do
				all_lines := a_map.lines
				from
					all_lines.start	
				until
					all_lines.after
				loop
					a_line := all_lines.item_for_iteration
					traveler_factory.take_decision ("by_type", [2])
					tram ?= traveler_factory.create_object("tram")
					-- here should other trams be entered
--					tram.prepare_for_tour (a_line)
--					tram.set_origin (a_line.terminal_1.position.x, 1, a_line.terminal_1.position.y)
--					tram.set_origin (a_line.item.origin.position.x, 1, a_line.item.origin.position.y)
					traffic_time.add_callback_procedure (agent tram.take_tour(a_line))
					trams.force (tram)
					all_lines.forth
				end
			end
			


feature{NONE} -- Decision procedures

--	decide_traveler_type (decision_type: STRING): STRING is
--			-- decide which type of place is chosen.
--		do
--			if decision_type.is_equal ("by path") then
--				Result := "tram"
--			elseif decision_type.is_equal ("by type") then
--				Result := "passenger"
--			end
--		end


	decide_traveler_type(i: INTEGER): STRING is
			-- decide which type of place is chosen.
		require
			i > 0
			i < 2
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
	
	fixed_path: STRING is "fixed_path"
	 	-- the traveler has a fixed path
	 
	random_path: STRING is "random_path"
		-- the traveler has a random path
		
	tram_type: STRING is "tram"
	
	passenger_type: STRING is "passenger"
	
feature{TRAFFIC_3D_MAP_WIDGET}

	travelers: ARRAY[TRAFFIC_TRAVELER_OBJECT]		
		-- Container for all traveler
--		local
--			container: ARRAY[TRAFFIC_TRAVELER_OBJECT]
--		do
--			create container.make_from_array (trams)
--			container.fill (passengers)
--			Result := container
--		end
		
	passengers: LINKED_LIST[TRAFFIC_PASSENGER]
	
	trams: LINKED_LIST[TRAFFIC_TRAM]
		
	number_of_trams: INTEGER
		-- number of the tram in the system	
	
	number_of_passengers: INTEGER	
		-- number of passengers in the system

		
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

invariant
	centre /= Void
	color /= Void			
	traveler_factory /= Void
	collision_polygons /= Void
	travelers /= Void
	

end -- class TRAFFIC_TRAVELER_REPRESENTATION	
