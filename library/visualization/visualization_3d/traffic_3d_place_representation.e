indexing
	description: "Representation for places, contains them and puts them on the map"
	date: "$Date: 2005/09/26 11:22:45 $"
	revision: "$Revision: 1.23 $"

class
	TRAFFIC_3D_PLACE_REPRESENTATION

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
	
	make (a_map: TRAFFIC_MAP) is
			-- Create a new object.
		require
			a_map_exists: a_map /= void
		do
			map := a_map
			create color.make_xyz(0,0,0)
				-- default color black
				
			create place_factory.make
			create collision_polygons.make (1)	
				-- Could be extended, if desired.
			place_factory.add_place_type (agent create_square_rep, "square")
			place_factory.add_place_type (agent create_circle_rep, "circle")
			place_factory.add_gauger(agent decide_place_type_normal, decision_type_normal)
			
			create place_views.make (1)
			add_places
			
			map.place_inserted_event.subscribe (agent process_item_inserted)
			map.place_removed_event.subscribe (agent process_item_removed)
			
		ensure
			place_factory_created: place_factory /= Void
			places_created: place_views /= Void
		end
		
feature -- Basic operations
	
	draw is
			-- draw all places
		do
			from
				place_views.start
			until
				place_views.off
			loop
				place_views.item_for_iteration.draw
				place_views.forth
			end
		end

	highlight_place (a_place: TRAFFIC_PLACE; a_color: GL_VECTOR_3D[DOUBLE]) is
			-- Highlight the marked place
		require
			place_valid: a_place /= Void
		local
			old_color: GL_VECTOR_3D [DOUBLE]
			place_view: EM_3D_OBJECT
		do
			old_color := color
			color := a_color

			place_bounding_box := update_place_bounding_box (a_place)
			current_place := a_place
				
			-- place creation
			place_factory.take_decision (decision_type_normal)
			place_view := place_factory.create_object			
			place_views.replace (place_view, a_place)
			
			color := old_color	
		end

	unhighlight_place (a_place: TRAFFIC_PLACE) is
			-- Unhighlight the marked place
		require
			place_valid: a_place /= Void
		local
			place_view: EM_3D_OBJECT
		do
			place_bounding_box := update_place_bounding_box (a_place)
			current_place := a_place
				
			-- place creation
			place_factory.take_decision (decision_type_normal)
			place_view := place_factory.create_object			
			place_views.replace (place_view, a_place)
		end
			
	add_places is
			-- add all places from the map to the places array
		local
			all_places: HASH_TABLE [TRAFFIC_PLACE, STRING] 
			place_view: EM_3D_OBJECT
		do
			all_places := map.places
			from
				all_places.start
			until
				all_places.off
			loop
				place_bounding_box := update_place_bounding_box (all_places.item_for_iteration)
				current_place := all_places.item_for_iteration
				
				-- place creation
				place_factory.take_decision (decision_type_normal)
				place_view := place_factory.create_object
				place_views.force(place_view, current_place)
				all_places.forth
			end
		end
			
	add_place (a_place: TRAFFIC_PLACE) is
			-- Add visualization for `a_place'.
		local
			place_view: EM_3D_OBJECT
		do
			place_bounding_box := update_place_bounding_box (a_place)
			current_place := a_place
				
			-- place creation
			place_factory.take_decision (decision_type_normal)
			place_view := place_factory.create_object
			place_views.force (place_view, a_place)
		end			

feature -- Access

	collision_polygons: ARRAYED_LIST[EM_POLYGON_CONVEX_COLLIDABLE]
		-- Collision polygons to check for collisions with traffic lines

feature -- Status report

	place_at_position (a_point: EM_VECTOR_2D): TRAFFIC_PLACE	is
			-- Place that `a_point' is located on
			-- Returns Void if there is no place at this position
		require
			a_point_exists: a_point /= Void
		local
			places: HASH_TABLE [TRAFFIC_PLACE, STRING]
			bb: EM_ORTHOGONAL_RECTANGLE
		do
			from
				places := map.places
				places.start
			until
				places.off or Result /= Void
			loop
				bb := update_place_bounding_box (places.item_for_iteration)
				if bb.has (a_point) then
					Result := places.item_for_iteration
				end
				places.forth
			end
		end
		
				
feature -- Event handling

	process_item_inserted (a_place: TRAFFIC_PLACE) is
			-- Update visualization to include new inserted place `a_place'.
		require
			a_place_exists: a_place /= Void
		do
			add_place (a_place)
		end
		
	process_item_removed (a_place: TRAFFIC_PLACE) is
			-- Update visualization to drop removed place `a_place'.
		require
			a_place_exists: a_place /= Void
		do
			place_views.remove (a_place)
		end		

feature {NONE} -- Implementation

	decide_place_type_normal: STRING is
			-- decide which type of place is chosen.
		do
			if place_bounding_box.width.max (place_bounding_box.height) > 0.2*30 then --map.line_sections_of_place (current_place.name).count > 4 then
				Result := "square"
			else
				Result := "circle"
			end			
		end

	create_square_rep is
			-- Create square representation for a place.
		local
			p1, p2, p3, p4: GL_VECTOR_3D[DOUBLE]
			poly_points: DS_LINKED_LIST[EM_VECTOR_2D]
			collision_poly: EM_POLYGON_CONVEX_COLLIDABLE
		do
			-- Normals all parallel to y axis
			p1 := create {GL_VECTOR_3D[DOUBLE]}.make_xyz (map_to_gl_coords (place_bounding_box.lower_left).x, place_height, map_to_gl_coords (place_bounding_box.lower_left).y)
			p2 := create {GL_VECTOR_3D[DOUBLE]}.make_xyz (map_to_gl_coords (place_bounding_box.upper_left).x, place_height, map_to_gl_coords (place_bounding_box.upper_left).y)
			p3 := create {GL_VECTOR_3D[DOUBLE]}.make_xyz (map_to_gl_coords (place_bounding_box.upper_right).x, place_height, map_to_gl_coords (place_bounding_box.upper_right).y)
			p4 := create {GL_VECTOR_3D[DOUBLE]}.make_xyz (map_to_gl_coords (place_bounding_box.lower_right).x, place_height, map_to_gl_coords (place_bounding_box.lower_right).y)
			gl_begin_external (em_gl_quads)
				gl_color3dv_external (color.pointer)
				gl_normal3d_external (0,1,0)
				gl_vertex3d_external (p1.x, p1.y, p1.z)
				gl_normal3d_external (0,1,0)
				gl_vertex3d_external (p2.x, p2.y, p2.z)
				gl_normal3d_external (0,1,0)
				gl_vertex3d_external (p3.x, p3.y, p3.z)
				gl_normal3d_external (0,1,0)
				gl_vertex3d_external (p4.x, p4.y, p4.z)
			gl_end
			gl_flush_external

			create poly_points.make
			poly_points.force (create {EM_VECTOR_2D}.make (p1.x, p1.z), 1) -- left bottom corner
			poly_points.force (create {EM_VECTOR_2D}.make (p2.x, p2.z), 2) -- left upper corner
			poly_points.force (create {EM_VECTOR_2D}.make (p3.x, p3.z), 3) -- right upper corner
			poly_points.force (create {EM_VECTOR_2D}.make (p4.x, p4.z), 4) -- right bottom corner

			create collision_poly.make_from_absolute_list (create {EM_VECTOR_2D}.make (p3.x-(p3.x-p1.x)/2, p1.z-(p3.z-p1.z)/2), poly_points)
			collision_polygons.force (collision_poly)
		end
		
	create_circle_rep is
			-- Create circle representation for place.
		require
			color /= Void
		local
			place_radius: DOUBLE
				-- radius of a tram place
			p1, p2: EM_VECTOR_2D
			p: GL_VECTOR_3D [DOUBLE]
			poly_points: DS_LINKED_LIST[EM_VECTOR_2D]
			collision_poly: EM_POLYGON_CONVEX_COLLIDABLE
		do
			p1 := map_to_gl_coords (place_bounding_box.upper_left)
			p2 := map_to_gl_coords (place_bounding_box.lower_right)
			place_radius := 	(p1.distance (p2)/2).max (0.1)
			
			p := create {GL_VECTOR_3D[DOUBLE]}.make_xyz (map_to_gl_coords (place_bounding_box.center).x, place_height, map_to_gl_coords (place_bounding_box.center).y)

				gl_matrix_mode_external (Em_gl_modelview)
				gl_push_matrix_external
				gl_color3dv_external(color.pointer)
				-- a little bit higher than the line
				gl_translated_external (p.x, p.y, p.z)
				gl_rotated_external (90, 1, 0, 0)
				gl_disable_external (em_gl_lighting)
				glu_disk_external (glu_new_quadric, 0, place_radius, 72, 1)
				gl_pop_matrix_external
				gl_flush_external

			create poly_points.make
			poly_points.force (create {EM_VECTOR_2D}.make (p.x, p.z), 1)	-- left bottom corner
			poly_points.force (create {EM_VECTOR_2D}.make (p.x, p.z-place_width), 2) -- left upper corner
			poly_points.force (create {EM_VECTOR_2D}.make (p.x-place_width, p.z-place_width), 3) -- right upper corner
			poly_points.force (create {EM_VECTOR_2D}.make (p.x-place_width, p.z), 4) -- right bottom corner

			create collision_poly.make_from_absolute_list (create {EM_VECTOR_2D}.make (p.x-(place_width/2),p.z-(place_width/2)), poly_points)
			collision_polygons.force (collision_poly)
		end

	update_place_bounding_box (a_place: TRAFFIC_PLACE): EM_ORTHOGONAL_RECTANGLE is
			-- Bounding box of `a_place' in map coordinates
		local
			links: LIST [TRAFFIC_LINE_SECTION]
			p: EM_VECTOR_2D
		do
			-- Calculate rectangle to include all outgoing links of `a_place'.
			links := map.line_sections_of_place (a_place.name)			
			from			
				links.start
			until
				links.after
			loop
				if links.item.polypoints /= Void and then links.item.polypoints.count > 0 then   
				-- TODO: this check is only necessary because currently LINE_SECTION seems to be wrong --> see invariant of LINE_SECTION
					p := links.item.polypoints.first
					if Result = Void then
						create Result.make (p.twin, p.twin)
					else
						Result.extend (p)	
					end
				end
				links.forth
			end			
			if Result = Void then
				create Result.make_from_position_and_size (a_place.position.x, a_place.position.y, 0.1, 0.1)
			else
				Result.set_size_centered (Result.width + 5.0, Result.height + 5.0)
			end
		end
		
	tram_type: STRING is "tram_place"
	 
	decision_type_normal: STRING is "normal"
		
	place_views: HASH_TABLE [EM_3D_OBJECT, TRAFFIC_PLACE]
		-- Container for all places
	
	place_factory: TRAFFIC_3D_PLACE_FACTORY
		-- factory for places

	color: GL_VECTOR_3D[DOUBLE]
		-- color of the place	
		
	map: TRAFFIC_MAP
	
	place_bounding_box: EM_ORTHOGONAL_RECTANGLE
			-- Bounding box of current place
			
	current_place: TRAFFIC_PLACE
			-- Place currently being rendered

end
