indexing
	description: "Representation for the traffic roads"

class
	TRAFFIC_3D_ROAD_REPRESENTATION

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

	EM_TIME_SINGLETON
		export {NONE} all end

create
	make

feature -- Initialization

	make (a_map: TRAFFIC_MAP) is
			-- Create a new object.
		require
			map_exists: a_map /= void
		do
			map := a_map
			create road_factory.make
			road_factory.add_road_type (agent create_road_normal, normal_type)
			road_factory.add_gauger(agent decide_road_type, decision_type)

			road_factory.add_road_type (agent create_street, street_type)
			road_factory.add_gauger(agent decide_street_type, street_decision_type)

			create road_lookup.make (map.roads.count)
			create road_3d_objects.make (map.roads.count)
			create collision_polygons.make (4)

			add_roads(map)

			map.road_inserted_event.subscribe (agent process_item_inserted)
			map.road_removed_event.subscribe (agent process_item_removed)
			height := 1
		ensure
			road_factory_created: road_factory /= Void
			road_objects_created: road_3d_objects /= Void
		end

feature {TRAFFIC_3D_MAP_WIDGET} -- Interface

	draw is
			-- Draw all roads onto the screen.
		do
			-- draw all the roads in the hashtable.	
			road_3d_objects.start
			from
				road_3d_objects.start
			until
				road_3d_objects.after
			loop
				if road_3d_objects.item_for_iteration /= Void then
					road_3d_objects.item_for_iteration.draw
				end
				road_3d_objects.forth
			end
		end


feature -- Event handling

	process_item_inserted (a_road: TRAFFIC_ROAD) is
			-- Add view for `a_road'.
		require
			a_road: a_road /= Void
		local
			c: GL_VECTOR_3D [DOUBLE]
		do
			c := create {GL_VECTOR_3D[DOUBLE]}.make_xyz (0.8, 0.6, 0.6)
			add_road (a_road)
		end

	process_item_removed (a_road: TRAFFIC_ROAD) is
			-- Remove view for `a_road'.
		require
			a_road_exists: a_road /= Void
		do
			if road_lookup.has (a_road) then
				road_3d_objects.replace (Void, road_lookup.item (a_road))
				road_lookup.remove (a_road)
			end
		end

feature {TRAFFIC_3D_MAP_WIDGET} -- Collision detection

	collision_polygons: ARRAYED_LIST[EM_POLYGON_CONVEX_COLLIDABLE]
			-- Collision polygons to check for collisions with traffic roads

feature {TRAFFIC_3D_MAP_WIDGET} -- Interface

	add_roads(a_map: TRAFFIC_MAP) is
			-- Add views for all roads of `a_map'.
		require
			map_valid: a_map /= Void
		local
			all_roads: HASH_TABLE [TRAFFIC_ROAD, INTEGER]
		do

			all_roads := map.roads
			from
				all_roads.start
			until
				all_roads.after
			loop
				add_road(all_roads.item_for_iteration)
				all_roads.forth
			end
		end



	add_road (a_road: TRAFFIC_ROAD) is
			-- Add view for `a_road'.
		require
			a_road_exists: a_road /= Void
		local
			road_view: EM_3D_OBJECT
			lightrail_type: TRAFFIC_TYPE_LIGHTRAIL
			railroad_type: TRAFFIC_TYPE_RAILROAD
			a_street_type: TRAFFIC_TYPE_STREET
		do
			-- TODO: add different views for the different types of roads
			lightrail_type?=a_road.type
			if lightrail_type/=Void then
				road := a_road
				road_factory.take_decision (street_decision_type)
				road_view := road_factory.create_object
				road_3d_objects.force_last (road_view)
				road_lookup.put (road_3d_objects.count, a_road)
			else
				a_street_type?=a_road.type
				if a_street_type/=Void then
					road := a_road
					road_factory.take_decision (street_decision_type)
					road_view := road_factory.create_object
					road_3d_objects.force_last (road_view)
					road_lookup.put (road_3d_objects.count, a_road)
				else
					railroad_type?=a_road.type
					if railroad_type/=Void then
						road_color:=create {GL_VECTOR_3D[DOUBLE]}.make_xyz (0,0,0)
						road := a_road
						road_factory.take_decision (decision_type)
						road_view := road_factory.create_object
						road_3d_objects.force_last (road_view)
						road_lookup.put (road_3d_objects.count, a_road)
					end
				end
			end

		ensure
			a_color_exists: road_color /= Void
		end



feature -- Access

	road_factory: TRAFFIC_3D_ROAD_FACTORY
			-- Factory for road segments

	map: TRAFFIC_MAP
			-- Map where roads are stored

	road_3d_objects: DS_ARRAYED_LIST [EM_3D_OBJECT]
			-- Container for all line section representations

	road_lookup: DS_HASH_TABLE [INTEGER, TRAFFIC_ROAD]
			--  lookup for line_section_views


feature {NONE} -- Implementation

	road: TRAFFIC_ROAD
			-- Road for which a representation should  be created

	road_color: GL_VECTOR_3D[DOUBLE]
			-- Vector of RGB values for the road color

	height: INTEGER
			-- Level of highlighted road (starts with lowest at 1)

	decision_type: STRING is "road_type"
			-- Name of the decision function

	street_decision_type: STRING is "street_type"
			-- Name of the decision function	


	normal_type: STRING is "normal"
			-- Name of the type for normal road representations

	street_type: STRING is "street_type"
			-- Name of the type for street representations

feature {NONE} -- Implementation

	decide_road_type: STRING is
			-- Road type to be taken
		do
			Result := normal_type
		ensure
			Result_is_valid: Result = normal_type
		end


	create_road_normal is
			-- Create a representation for a normal `road'.
		do
			create_road_rep_normal (road)
		end

	decide_street_type: STRING is
			-- Road type to be taken
		do
			Result := street_type
		ensure
			Result_is_valid: Result = street_type
		end


	create_street is
			-- Create a representation for a street.
		do

			create_street_rep(road)
		end




	create_road_rep_normal (a_road: TRAFFIC_ROAD) is
			-- Create a representation for the road `a_road'.
		require
			road_exists: a_road /= Void
		local
			i: INTEGER
			org, dst: GL_VECTOR_3D[DOUBLE]
			delta_x, delta_y, delta_z, norm: DOUBLE
			start_point, end_point, a_point, c_point: EM_VECTOR_2D
			polygon_points: DS_LINKED_LIST [EM_VECTOR_2D]
			collidable: EM_POLYGON_CONVEX_COLLIDABLE
		do
			from
				i := 1
			until
				i >= a_road.polypoints.count
			loop
				org := create {GL_VECTOR_3D[DOUBLE]}.make_xyz (map_to_gl_coords (a_road.polypoints.i_th (i)).x, road_height, map_to_gl_coords (a_road.polypoints.i_th (i)).y)
				dst := create {GL_VECTOR_3D[DOUBLE]}.make_xyz (map_to_gl_coords (a_road.polypoints.i_th (i+1)).x, road_height, map_to_gl_coords (a_road.polypoints.i_th (i+1)).y)
				delta_x := dst.x - org.x
				delta_z := dst.z - org.z

				norm := sqrt (delta_x*delta_x + delta_z*delta_z)

				if norm = 0 then
					norm := 1
				end
				create_plane (create {GL_VECTOR_3D[DOUBLE]}.make_xyz (org.x-delta_z*road_width/norm, org.y, org.z+delta_x*road_width/norm), create {GL_VECTOR_3D[DOUBLE]}.make_xyz (org.x+delta_z*road_width/norm, org.y, org.z-delta_x*road_width/norm), create {GL_VECTOR_3D[DOUBLE]}.make_xyz (dst.x+delta_z*road_width/norm, dst.y, dst.z-delta_x*road_width/norm) ,create {GL_VECTOR_3D[DOUBLE]}.make_xyz (dst.x-delta_z*road_width/norm, dst.y, dst.z+delta_x*road_width/norm))

				create_circle (org, road_color, road_width, road_height)

				-- Collision polygon
				create start_point.make (a_road.polypoints.i_th (i).x, a_road.polypoints.i_th (i).y) 
				create end_point.make (a_road.polypoints.i_th (i+1).x, a_road.polypoints.i_th (i+1).y)

				start_point := map_to_gl_coords (start_point)
				end_point := map_to_gl_coords (end_point)

				delta_x := end_point.x - start_point.x
				delta_y := end_point.y - start_point.y

				norm := sqrt (delta_x*delta_x + delta_y*delta_y)

				if norm = 0 then
					norm := 1
				end

				create a_point.make (start_point.x-delta_y*1.5*road_width/norm, start_point.y+delta_x*1.5*road_width/norm)
				create c_point.make (end_point.x+delta_y*1.5*road_width/norm, end_point.y-delta_x*1.5*road_width/norm)

				create polygon_points.make
				polygon_points.force ((a_point),1)
				polygon_points.force (create {EM_VECTOR_2D}.make (start_point.x+delta_y*1.5*road_width/norm, start_point.y-delta_x*1.5*road_width/norm), 2)
				polygon_points.force ((c_point),3)
				polygon_points.force (create {EM_VECTOR_2D}.make (end_point.x-delta_y*1.5*road_width/norm, end_point.y+delta_x*1.5*road_width/norm), 4)
				create collidable.make_from_absolute_list ((a_point + (c_point - a_point)/2), polygon_points)
				collision_polygons.force (collidable)

				i := i + 1
			end
		end


	create_street_rep (a_road: TRAFFIC_ROAD) is
			-- Create a representation for the road `a_road'.
		require
			road_exists: a_road /= Void
		local
			i: INTEGER
			org, dst: GL_VECTOR_3D[DOUBLE]
			delta_x, delta_y, delta_z, norm: DOUBLE
			start_point, end_point, a_point, c_point: EM_VECTOR_2D
			polygon_points: DS_LINKED_LIST [EM_VECTOR_2D]
			collidable: EM_POLYGON_CONVEX_COLLIDABLE
			help_width: DOUBLE
		do
			from
				i := 1
			until
				i >= a_road.polypoints.count
			loop
				org := create {GL_VECTOR_3D[DOUBLE]}.make_xyz (map_to_gl_coords (a_road.polypoints.i_th (i)).x, road_height, map_to_gl_coords (a_road.polypoints.i_th (i)).y)
				dst := create {GL_VECTOR_3D[DOUBLE]}.make_xyz (map_to_gl_coords (a_road.polypoints.i_th (i+1)).x, road_height, map_to_gl_coords (a_road.polypoints.i_th (i+1)).y)
				delta_x := dst.x - org.x
				delta_z := dst.z - org.z

				norm := sqrt (delta_x*delta_x + delta_z*delta_z)

				if norm = 0 then
					norm := 1
				end

				road_color:=create {GL_VECTOR_3D[DOUBLE]}.make_xyz (0.4,0.4, 0.4)
				create_plane (create {GL_VECTOR_3D[DOUBLE]}.make_xyz (org.x-delta_z*road_width/norm, org.y, org.z+delta_x*road_width/norm), create {GL_VECTOR_3D[DOUBLE]}.make_xyz (org.x+delta_z*road_width/norm, org.y, org.z-delta_x*road_width/norm), create {GL_VECTOR_3D[DOUBLE]}.make_xyz (dst.x+delta_z*road_width/norm, dst.y, dst.z-delta_x*road_width/norm) ,create {GL_VECTOR_3D[DOUBLE]}.make_xyz (dst.x-delta_z*road_width/norm, dst.y, dst.z+delta_x*road_width/norm))







				create_circle (org, road_color, road_width, road_height)

				-- Collision polygon
				create start_point.make (a_road.polypoints.i_th (i).x, a_road.polypoints.i_th (i).y) 
				create end_point.make (a_road.polypoints.i_th (i+1).x, a_road.polypoints.i_th (i+1).y)

				start_point := map_to_gl_coords (start_point)
				end_point := map_to_gl_coords (end_point)

				delta_x := end_point.x - start_point.x
				delta_y := end_point.y - start_point.y

				norm := sqrt (delta_x*delta_x + delta_y*delta_y)

				if norm = 0 then
					norm := 1
				end

				create a_point.make (start_point.x-delta_y*1.5*road_width/norm, start_point.y+delta_x*1.5*road_width/norm)
				create c_point.make (end_point.x+delta_y*1.5*road_width/norm, end_point.y-delta_x*1.5*road_width/norm)

				create polygon_points.make
				polygon_points.force ((a_point),1)
				polygon_points.force (create {EM_VECTOR_2D}.make (start_point.x+delta_y*1.5*road_width/norm, start_point.y-delta_x*1.5*road_width/norm), 2)
				polygon_points.force ((c_point),3)
				polygon_points.force (create {EM_VECTOR_2D}.make (end_point.x-delta_y*1.5*road_width/norm, end_point.y+delta_x*1.5*road_width/norm), 4)
				create collidable.make_from_absolute_list ((a_point + (c_point - a_point)/2), polygon_points)
				collision_polygons.force (collidable)

				i := i + 1
			end
		end



	create_circle (p, rgb: GL_VECTOR_3D[DOUBLE]; r, h: DOUBLE) is
			-- Create a circle at point `p' with color `rgb' and radius `r' and height `h'.
		require
			p_exists: p /= Void
			rgb_exists: rgb /= Void
			r_greater_than_zero: r > 0
		do
			gl_matrix_mode_external (Em_gl_modelview)
			gl_push_matrix_external
			gl_color3dv_external(rgb.pointer)
			-- a little bit higher than the road
			gl_translated_external (p.x, h, p.z)
			gl_rotated_external (90, 1, 0, 0)
			gl_disable_external (em_gl_lighting)
			glu_disk_external (glu_new_quadric, 0, r, 72, 1)
			gl_pop_matrix_external
			gl_flush_external
		end

	create_cylinder (p, rgb: GL_VECTOR_3D[DOUBLE]; r, h: DOUBLE) is
			-- Create a cylinder at point `p' with color `rgb' and radius `r' and height `h'.
		require
			p_exists: p /= Void
			rgb_exists: rgb /= Void and then (rgb.x >= 0 and rgb.x <= 1 and rgb.y >= 0 and rgb.y <= 1 and rgb.z >= 0 and rgb.z <= 1)
			r_greater_than_zero: r > 0
		do
			gl_matrix_mode_external (Em_gl_modelview)
			gl_push_matrix_external
			gl_color3dv_external(rgb.pointer)
			-- a little bit higher than the road
			gl_translated_external (p.x, h, p.z)
			gl_rotated_external (90, 1, 0, 0)
			gl_disable_external (em_gl_lighting)
			glu_disk_external (glu_new_quadric, 0, r, 8, 1)
			gl_pop_matrix_external
			gl_flush_external

			gl_matrix_mode_external (Em_gl_modelview)
			gl_push_matrix_external
			gl_color3dv_external(rgb.pointer)
			-- a little bit higher than the road
			gl_translated_external (p.x, h, p.z)
			gl_rotated_external (90, 1, 0, 0)
			gl_disable_external (em_gl_lighting)
			glu_cylinder_external (glu_new_quadric_external, r, r, road_depth, 8, 8)
			gl_pop_matrix_external
			gl_flush_external

			gl_matrix_mode_external (Em_gl_modelview)
			gl_push_matrix_external
			gl_color3dv_external(rgb.pointer)
			-- a little bit higher than the road
			gl_translated_external (p.x, h - road_depth, p.z)
			gl_rotated_external (90, 1, 0, 0)
			gl_disable_external (em_gl_lighting)
			glu_disk_external (glu_new_quadric, 0, r, 8, 1)
			gl_pop_matrix_external
			gl_flush_external
		end

	create_cube (p1, p2, p3, p4: GL_VECTOR_3D[DOUBLE]) is
			-- Create a cube with four edges `p1', `p2', `p3', and `p4' and height `road_depth'.
		require
			p1_exists: p1 /= Void
			p2_exists: p2 /= Void
			p3_exists: p3 /= Void
			p4_exists: p4 /= Void
		do
			gl_begin_external (em_gl_quads)
				gl_color3dv_external (road_color.pointer)

				-- Front
				gl_normal3d_external (1, 0, 0)
				gl_vertex3d_external (p1.x, p1.y, p1.z)

				gl_normal3d_external (1, 0, 0)
				gl_vertex3d_external (p1.x, p1.y - road_depth, p1.z)

				gl_normal3d_external (1, 0, 0)
				gl_vertex3d_external (p2.x, p2.y - road_depth, p2.z)

				gl_normal3d_external (1, 0, 0)
				gl_vertex3d_external (p2.x, p2.y, p2.z)

				-- Back
				gl_normal3d_external (-1, 0, 0)
				gl_vertex3d_external (p3.x, p3.y, p3.z)

				gl_normal3d_external (-1, 0, 0)
				gl_vertex3d_external (p3.x, p3.y - road_depth, p3.z)

				gl_normal3d_external (-1, 0, 0)
				gl_vertex3d_external (p4.x, p4.y - road_depth, p4.z)

				gl_normal3d_external (-1, 0, 0)
				gl_vertex3d_external (p4.x, p4.y, p4.z)

				-- Left
				gl_normal3d_external (0, 0, 1)
				gl_vertex3d_external (p3.x, p3.y, p3.z)

				gl_normal3d_external (0, 0, 1)
				gl_vertex3d_external (p3.x, p3.y - road_depth, p3.z)

				gl_normal3d_external (0, 0, 1)
				gl_vertex3d_external (p1.x, p1.y - road_depth, p1.z)

				gl_normal3d_external (0, 0, 1)
				gl_vertex3d_external (p1.x, p1.y, p1.z)

				-- Right
				gl_normal3d_external (0, 0, -1)
				gl_vertex3d_external (p2.x, p2.y, p2.z)

				gl_normal3d_external (0, 0, -1)
				gl_vertex3d_external (p2.x, p2.y - road_depth, p2.z)

				gl_normal3d_external (0, 0, -1)
				gl_vertex3d_external (p4.x, p4.y - road_width, p4.z)

				gl_normal3d_external (0, 0, -1)
				gl_vertex3d_external (p4.x, p4.y, p4.z)

				-- Top
				gl_normal3d_external (0, 1, 0)
				gl_vertex3dv_external (p1.pointer)

				gl_normal3d_external (0, 1, 0)
				gl_vertex3dv_external (p2.pointer)

				gl_normal3d_external (0, 1, 0)
				gl_vertex3dv_external (p3.pointer)

				gl_normal3d_external (0, 1, 0)
				gl_vertex3dv_external (p4.pointer)

				-- Bottom
				gl_normal3d_external (0, 1, 0)
				gl_vertex3d_external (p1.x, p1.y - road_depth, p1.z)

				gl_normal3d_external (0, 1, 0)
				gl_vertex3d_external (p2.x, p2.y - road_depth, p2.z)

				gl_normal3d_external (0, 1, 0)
				gl_vertex3d_external (p3.x, p3.y - road_depth, p3.z)

				gl_normal3d_external (0, 1, 0)
				gl_vertex3d_external (p4.x, p4.y - road_depth, p4.z)
			gl_end_external
		end

	create_plane (p1, p2, p3, p4: GL_VECTOR_3D[DOUBLE]) is
			-- Draw a plane with vertices `p1', `p2', `p3' and `p4'.
		require
			p1_exists: p1 /= Void
			p2_exists: p2 /= Void
			p3_exists: p3 /= Void
			p4_exists: p4 /= Void
		do
			-- Normals all parallel to y axis
			gl_begin_external (em_gl_quads)
				gl_color3dv_external (road_color.pointer)
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
		end

end
