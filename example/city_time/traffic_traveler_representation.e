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
			create color.make_xyz(0,0,0)
				-- default color black
				
			create traveler_factory.make
			create collision_polygons.make (1)	
				-- Could be extended, if desired.
			traveler_factory.add_traveler_type (agent create_tram, "tram")
			traveler_factory.add_traveler_type (agent create_passenger, "passenger")
--			traveler_factory.add_gauger(agent decide_traveler_type(?), "by path")
--			traveler_factory.add_gauger(agent decide_traveler_type(?), "by type")
			traveler_factory.add_gauger(agent decide_traveler_type, "by type")
			
			create trams.make(1,1)
			create passengers.make(1,1)
			number_of_passengers := 0
			number_of_trams := 0
			add_random_passenger
			add_random_passenger
		ensure
			traveler_factory_created: traveler_factory /= Void
			travelers_created: travelers /= Void
			traffic_time = a_time
		end
		
feature{TRAFFIC_3D_MAP_WIDGET} -- Interface
	
	draw is
			-- draw all places
		local
			i: INTEGER
		do
			from
				i := travelers.lower
			until
				i > travelers.upper
			loop
				if not (travelers.item(i) = Void) then
					travelers.item(i).draw	
				end
				i := i+1
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
		
		add_random_passenger is
				-- add a traveler with random walk to the map at start position 'start_x' and 'start_y'
			local
				random: RANDOM
				start_x, start_y: DOUBLE
				passenger: TRAFFIC_PASSENGER
				collision_poly: EM_POLYGON_CONVEX_COLLIDABLE
				poly_points: DS_LINKED_LIST[EM_VECTOR_2D]
			do
				create random.set_seed (traffic_time.time.ticks)
				start_x := random.double_item
				random.forth
				start_y := random.double_item
				traveler_factory.take_decision ("by type")
				passenger ?= traveler_factory.create_object("passenger")
				passenger.set_origin(start_x*100, 0.2 ,start_y*100)
				traffic_time.add_callback_procedure (agent passenger.take_tour)
				if passengers.is_empty then
					passengers.force (passenger, 1)
				else
					passengers.force(passenger, travelers.upper+1)
				end
			end
		
		add_trams is	
				-- add trams onto the map
			local
				tram: TRAFFIC_TRAM
				collision_poly: EM_POLYGON_CONVEX_COLLIDABLE
				poly_points: DS_LINKED_LIST[EM_VECTOR_2D]
			do
--				from
--					
--				until
--					
--				loop
--					
--				end
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


	decide_traveler_type: STRING is
			-- decide which type of place is chosen.
		do
			Result := "passenger"
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
		require
			color /= Void
		local
			tram_length: DOUBLE
				-- tram length
			tram_width: DOUBLE
				-- tram width
		do
			tram_length := 1
			tram_width := 0.3
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
				gl_color3d_external (0, 0.15, 0.8) -- Blue
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
				gl_color3d_external (1, 0, 0) -- Red
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
				gl_color3d_external (1, 0, 0) -- Red
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
feature{NONE} -- Decision attributes
	
	fixed_path: STRING is "fixed_path"
	 	-- the traveler has a fixed path
	 
	random_path: STRING is "random_path"
		-- the traveler has a random path
		
	tram_type: STRING is "tram"
	
	passenger_type: STRING is "passenger"
	
feature{TRAFFIC_3D_MAP_WIDGET}

	travelers: ARRAY[TRAFFIC_TRAVELER_OBJECT] is		
		-- Container for all traveler
		local
			container: ARRAY[TRAFFIC_TRAVELER_OBJECT]
		do
			create container.make_from_array (trams)
			container.fill (passengers)
			Result := container
		end
		
	passengers: ARRAY[TRAFFIC_PASSENGER]
	
	trams: ARRAY[TRAFFIC_TRAM]
		
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
