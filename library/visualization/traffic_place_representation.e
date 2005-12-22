indexing
	description: "Representation for places, contains them and puts them on the map"
	author: "Florian Geldmacher"
	date: "15.12.2005"
	revision: "0.1"

class
	TRAFFIC_PLACE_REPRESENTATION

inherit
	
	SHARED_CONSTANTS
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
	
	make (map: TRAFFIC_MAP) is
			-- Create a new object.
		require
			map_exists: map /= void
		do
			create centre.make_xyz(0,0,0)
--			create centre.make_xyz (x+plane_size/2, 0, z+plane_size/2)
			create color.make_xyz(0,0,0)
				-- default color black
				
			create place_factory.make
	
				-- Could be extended, if desired.
			place_factory.add_place_type (agent create_tram_place, tram_type)
			place_factory.add_gauger(agent decide_place_type, decision_type)
			origin_index := 0
			destination_index := 0
			
			create places.make(1,1)
			add_places(map)
--			collision_polygons.make (1)	
		ensure
			place_factory_created: place_factory /= Void
			places_created: places /= Void
		end
		
feature{TRAFFIC_3D_MAP_WIDGET} -- Interface
	
	draw is
			-- draw all places
		local
			i: INTEGER
		do
			from
				i := places.lower
			until
				i > places.upper
			loop
				places.item(i).draw
				i := i+1
			end
		end

	highlight_place(place: TRAFFIC_PLACE; highlight_type: INTEGER) is
			-- highlight the marked place, highlight_type = 0 means origin, otherwise destination
			require
				place_valid: place /= Void
			local
				i: INTEGER
			do
				from
					i := places.lower
				until
					i > places.upper
				loop
					-- search for the place which should be shown
					if map_to_gl_coords(place.position).x = places.item (i).origin.x then
						if
							map_to_gl_coords(place.position).y = places.item (i).origin.z
						then						
							if highlight_type = 0 then
								color.set_xyz (0,255,0)
								place_factory.take_decision (decision_type)
								origin_place := place_factory.create_object
								origin_place.set_origin(places.item (i).origin.x, places.item (i).origin.y, places.item (i).origin.z)
								origin_index := i	
								origin_place.draw					
							else
								color.set_xyz (255,0,0)
								place_factory.take_decision (decision_type)
								destination_place := place_factory.create_object
								destination_place.set_origin(places.item (i).origin.x, places.item (i).origin.y, places.item (i).origin.z)
								destination_index := i
								destination_place.draw
							end						
						end
					end
					i := i+1
				end
			end
			
feature -- Collision detection

	collision_polygons: ARRAYED_LIST[EM_POLYGON_CONVEX_COLLIDABLE]
		-- Collision polygons to check for collisions with traffic lines
	
feature{NONE} -- Implemenation

	add_places(map: TRAFFIC_MAP) is
			-- add all places from the map to the places array
			require
				map_valid: map /= Void
			local
				x_coord, z_coord: DOUBLE
				i: INTEGER
				all_places: ARRAYED_LIST [TRAFFIC_LINE_SECTION] -- places are at beginning and end of linesections
				place: EM_3D_OBJECT
				collision_poly: EM_POLYGON_CONVEX_COLLIDABLE
				poly_points: DS_LINKED_LIST[EM_VECTOR_2D]
			do
				all_places := map.line_sections
				from
					all_places.start
					i := 0
				until
					all_places.after
				loop
					x_coord := centre.x + map_to_gl_coords(all_places.item.polypoints.first).x
					z_coord := centre.z + map_to_gl_coords(all_places.item.polypoints.first).y
					
					-- polypoints for the place
					create poly_points.make
					poly_points.force (create {EM_VECTOR_2D}.make (x_coord, z_coord), 1)	-- left bottom corner
					poly_points.force (create {EM_VECTOR_2D}.make (x_coord, z_coord-place_width), 2) -- left upper corner
					poly_points.force (create {EM_VECTOR_2D}.make (x_coord-place_width, z_coord-place_width), 3) -- right upper corner
					poly_points.force (create {EM_VECTOR_2D}.make (x_coord-place_width, z_coord), 4) -- right bottom corner
				
					create collision_poly.make_from_absolute_list (create {EM_VECTOR_2D}.make (x_coord-0.1,z_coord-0.1), poly_points)
					
					-- place creation
					place_factory.take_decision (decision_type)
					place := place_factory.create_object
					place.set_origin(x_coord, 0.1 ,z_coord)
					places.force(place, i)
					i := i+1
					all_places.forth
				end
				
			end
		


feature{NONE} -- Decision procedures

	decide_place_type: STRING is
			-- decide which type of place is chosen.
		do
			Result := tram_type
		end

	create_tram_place is
			-- create a tram place
		require
			color /= Void
		local
			place_radius: DOUBLE
				-- radius of a tram place
		do
			place_radius := 0.2
			gl_matrix_mode_external (Em_gl_modelview)
			gl_push_matrix_external
			gl_color3dv_external(color.pointer)
			-- a little bit higher than the line
			gl_translated_external (0, place_height, 0)
			gl_rotated_external (90, 1, 0, 0)
			gl_disable_external (em_gl_lighting)
			glu_disk_external (glu_new_quadric, 0, place_radius, 72, 1)
			gl_pop_matrix_external
			gl_flush_external
			
			gl_matrix_mode_external (Em_gl_modelview)
			gl_push_matrix_external
			gl_color3dv_external(color.pointer)
			-- a little bit higher than the plane
			gl_translated_external (0 , place_height, 0)
			gl_rotated_external (90, 1, 0, 0)
			gl_disable_external (em_gl_lighting)
			glu_cylinder_external (glu_new_quadric_external, place_radius, place_radius, line_depth, 8, 8)
			gl_pop_matrix_external
			gl_flush_external
			
			place_radius := 0.2
			gl_matrix_mode_external (Em_gl_modelview)
			gl_push_matrix_external
			gl_color3dv_external(color.pointer)
			-- on plane height
			gl_translated_external (0, 0, 0)
			gl_rotated_external (90, 1, 0, 0)
			gl_disable_external (em_gl_lighting)
			glu_disk_external (glu_new_quadric, 0, place_radius, 72, 1)
			gl_pop_matrix_external
			gl_flush_external
		end
		
feature{NONE} -- Decision attributes
	
	tram_type: STRING is "tram_place"
	 
	decision_type: STRING is "highlighted"
		
feature{NONE} -- Attributes

	places: ARRAY[EM_3D_OBJECT]
		-- Container for all places
	
	origin_place: EM_3D_OBJECT
		-- 3D Object for the origin place
	
	origin_index: INTEGER
		-- Index of the origin place in the places array
	
	destination_place: EM_3D_OBJECT
		-- 3D Object for the destination place
		
	destination_index: INTEGER
		-- Index of the destination place in the places array

	place_factory: TRAFFIC_PLACE_FACTORY
		-- factory for places

	color: GL_VECTOR_3D[DOUBLE]
		-- color of the place	
		
	centre: GL_VECTOR_3D[DOUBLE]
		-- Centre of the city
	
invariant
	origin_index_valid: origin_index >= places.lower and origin_index <= places.upper
	destination_index_valid: destination_index >= places.lower and destination_index <= places.upper

end -- class TRAFFIC_PLACE_REPRESENTATION
