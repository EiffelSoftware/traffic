indexing
	description: "Representation for the traffic roads"
	date: "$Date$"
	revision: "$Revision: 1.90 $"

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
			
			create road_views.make(1)
			create collision_polygons.make (4)

			add_roads(map)	

			map.road_inserted_event.subscribe (agent process_item_inserted)
			map.road_removed_event.subscribe (agent process_item_removed)

			height := 1
		ensure	
			road_factory_created: road_factory /= Void
			road_objects_created: road_views /= Void
		end
		
feature {TRAFFIC_3D_MAP_WIDGET} -- Interface

	draw is
			-- Draw all roads onto the screen.
		do
			-- draw all the roads in the hashtable.  					
			from 
				road_views.start
			until
				road_views.after
			loop
				road_views.item_for_iteration.draw
				road_views.forth
			end
		end


feature -- Event handling

	process_item_inserted (a_road: TRAFFIC_ROAD) is
			-- Add view for `a_road'.
		require
			a_road: a_road /= Void
		local
			c: GL_VECTOR_3D [DOUBLE]
			l: TRAFFIC_ROAD
		do
			l := a_road
--			if l /= Void then
--				c := create {GL_VECTOR_3D[DOUBLE]}.make_xyz (l.color.red/255, l.color.green/255, l.color.blue/255)			
--			else	
--				c := create {GL_VECTOR_3D[DOUBLE]}.make_xyz (0, 0, 0)
--			end
			-- color?
			c := create {GL_VECTOR_3D[DOUBLE]}.make_xyz (255, 0, 0)
			add_road (a_road, c)
		end
		
	process_item_removed (a_road: TRAFFIC_ROAD) is
			-- Remove view for `a_road'.
		require
			a_road_exists: a_road /= Void
		do
			if road_views.has (a_road) then
				road_views.remove (a_road)			
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
			c: GL_VECTOR_3D [DOUBLE]
		do
--			if a_road.color /= Void then
--				c := create {GL_VECTOR_3D[DOUBLE]}.make_xyz (a_road.color.red/255, a_road.color.green/255, a_road.color.blue/255)
--			else	
--				c := create {GL_VECTOR_3D[DOUBLE]}.make_xyz (0, 0, 0)				
--			end
			c := create {GL_VECTOR_3D[DOUBLE]}.make_xyz (255, 0, 0)	
			road_color:=c
			all_roads := map.roads
			from
				all_roads.start
			until
				all_roads.after
			loop
				add_road (all_roads.item_for_iteration,c)
				all_roads.forth
			end
		end
			

		
	add_road (a_road: TRAFFIC_ROAD; a_color: GL_VECTOR_3D[DOUBLE]) is
			-- Add view for `a_road'.
		require
			a_color_exists: a_color /= Void
			a_road_exists: a_road /= Void
		local
			road_view: EM_3D_OBJECT
		do
			road_color := a_color		
			road := a_road
			road_factory.take_decision (decision_type)
			road_view := road_factory.create_object			
			road_views.force (road_view, road)			
		end



		
feature -- Basic operations

--	highlight_path (a_route: TRAFFIC_ROUTE) is
--			-- Highlight `a_route' on the map.
--		require
--			a_route_exists: a_route /= Void
--		local 
--			road_view: EM_3D_OBJECT
--			roads: LINKED_LIST [TRAFFIC_ROAD]
--			old_is_highlighted: BOOLEAN
--		do
--			old_is_highlighted := is_highlighted
--			is_highlighted := False
--			from
--				roads := a_route.roads
--				roads.start
--			until
--				roads.off
--			loop
--				road_color := create {GL_VECTOR_3D[DOUBLE]}.make_xyz (1, 1, 1)
--
--				road := roads.item
--					
--				road_factory.take_decision (decision_type)
--				road_view := road_factory.create_object
--				
--				road_views.replace (road_view, road)			
--				roads.forth
--			end
--			is_highlighted := old_is_highlighted
--			
--		end
--
--	unhighlight_path (a_route: TRAFFIC_ROUTE) is
--			-- Unhighlight `a_route' on the map.
--		require
--			a_route_exists: a_route /= Void
--		local 
--			road_view: EM_3D_OBJECT
--			roads: LINKED_LIST [TRAFFIC_ROAD]
--			old_is_highlighted: BOOLEAN
--		do
--			old_is_highlighted := is_highlighted
--			is_highlighted := False
--			from
--				roads := a_route.roads
--				roads.start
--			until
--				roads.off
--			loop
--				road_color := create {GL_VECTOR_3D[DOUBLE]}.make_xyz (roads.item.road.color.red/255, roads.item.road.color.green/255, roads.item.road.color.blue/255)
--
--				road := roads.item
--					
--				-- road creation
--				road_factory.take_decision (decision_type)
--				road_view := road_factory.create_object
--				
--				road_views.replace (road_view, road)			
--				roads.forth
--			end
--			is_highlighted := old_is_highlighted			
--		end
--
--	highlight_single_road(a_road: TRAFFIC_ROAD) is	
--			-- Highlight the road `a_road'. 
--		require
--			a_road_valid: a_road /= Void
--		local 
--			road_view: EM_3D_OBJECT
--			old_is_highlighted: BOOLEAN
--		do 
--			old_is_highlighted := is_highlighted
--			is_highlighted := True
--			from
--				a_road.start
--			until
--				a_road.off
--			loop
--				road_color := create {GL_VECTOR_3D[DOUBLE]}.make_xyz (a_road.color.red/255, a_road.color.green/255, a_road.color.blue/255)
--
--				road := a_road.item
--					
--				-- road creation
--				road_factory.take_decision (decision_type)
--				road_view := road_factory.create_object
--				
--				road_views.replace (road_view, road)			
--				road_view := road_views.item (a_road.item)
--				a_road.forth
--			end
--			is_highlighted := old_is_highlighted
--		end				
--	
--	unhighlight_single_road(a_road:TRAFFIC_ROAD) is
--			-- Highlight the road `a_road'.
--		require 
--				a_road_valid: a_road /= Void
--		local 
--			road_view: EM_3D_OBJECT
--			old_is_highlighted: BOOLEAN
--		do 
--			old_is_highlighted := is_highlighted
--			is_highlighted := False
--			from
--				a_road.start
--			until
--				a_road.off
--			loop
--				road_color := create {GL_VECTOR_3D[DOUBLE]}.make_xyz (a_road.color.red/255, a_road.color.green/255, a_road.color.blue/255)
--
--				road := a_road.item
--					
--				-- road creation
--				road_factory.take_decision (decision_type)
--				road_view := road_factory.create_object
--				
--				road_views.replace (road_view, road)			
--				road_view := road_views.item (a_road.item)
--				a_road.forth
--			end
--			is_highlighted := old_is_highlighted
--		end				
--				
--	unhighlight_all_roads is
--			-- Unhighlight all the roads.
--		local 
--			roads: HASH_TABLE [TRAFFIC_ROAD , STRING]
--		do 
--			from
--				roads := map.roads
--				roads.start
--			until
--				roads.off
--			loop
--				unhighlight_single_road (roads.item_for_iteration)
--				roads.forth
--			end
--			height := 1			
--		end
--		
--	highlight_all_roads is 
--			-- Highlight all the roads.
--		local 
--			roads: HASH_TABLE [TRAFFIC_ROAD , STRING]
--			i: INTEGER
--		do 
--			from
--				roads := map.roads
--				roads.start
--				i := 1
--			until
--				roads.off
--			loop
--				height := i
--				highlight_single_road (roads.item_for_iteration)
--				roads.forth
--				i := i + 1
--			end
--			height := 1
--		 end		

feature -- Access

	road_views: DS_HASH_TABLE [ EM_3D_OBJECT, TRAFFIC_ROAD]
			--  Container for all road section representations

	shortest_road: ARRAYED_LIST [EM_3D_OBJECT]
			-- Container for shortest path road
	
	road_factory: TRAFFIC_3D_ROAD_FACTORY
			-- Factory for road segments
		
	map: TRAFFIC_MAP
			-- Map where roads are stored
				
feature {NONE} -- Implementation

	road: TRAFFIC_ROAD	
			-- Line section for which a representation should  be created
		
	road_color: GL_VECTOR_3D[DOUBLE]
			-- Vector of RGB values for the road color 
			
	height: INTEGER
			-- Level of highlighted road (starts with lowest at 1)
			
	is_highlighted: BOOLEAN
			-- Is the road section highlighted?
		
	wait_time: INTEGER is 5000
			-- Wait time before a highlighted road is reset when calling `highlight_single_road_for_5sec'
		
	highlighting_delta: DOUBLE is 2.0
			-- Height difference between highlighted road representations

	decision_type: STRING is "road_type"
			-- Name of the decision function
	
	normal_type: STRING is "normal"
			-- Name of the type for normal road representations
	
	highlighted_type: STRING is "highlighted"
			-- Name of the type for highlighted road representations
	 
feature {NONE} -- Implementation

	decide_road_type: STRING is
			-- Line type to be taken
		do
			if is_highlighted then
				Result := highlighted_type
			else
				Result := normal_type
			end
		ensure
			Result_is_valid: Result = highlighted_type or Result = normal_type
		end

	create_road_normal is
			-- Create a representation for a normal `road'.
		do
			create_road_rep_normal (road)
		end
		
--	create_road_highlighted is
--			-- Create a representation for a highlighted `road'.
--		do
--			create_road_rep_highlighted (road)
--		end
		
--	create_road_rep_highlighted (section: TRAFFIC_ROAD) is
--			-- Create a representation for a highlighted section `section'.
--		require
--			section_exists: section /= Void
--		local
--			i: INTEGER
--			org, dst: GL_VECTOR_3D[DOUBLE]
--			delta_x, delta_z, norm: DOUBLE
--		do
--			from
--				i := 1
--			until
--				i >= section.polypoints.count
--			loop
--				org := create {GL_VECTOR_3D[DOUBLE]}.make_xyz (map_to_gl_coords (section.polypoints.i_th (i)).x, road_height, map_to_gl_coords (section.polypoints.i_th (i)).y)
--				dst := create {GL_VECTOR_3D[DOUBLE]}.make_xyz (map_to_gl_coords (section.polypoints.i_th (i+1)).x, road_height, map_to_gl_coords (section.polypoints.i_th (i+1)).y)
--				delta_x := dst.x - org.x
--				delta_z := dst.z - org.z
--				
--				norm := sqrt (delta_x*delta_x + delta_z*delta_z)
--				
--				if norm = 0 then
--					norm := 1
--				end
--				create_plane (create {GL_VECTOR_3D[DOUBLE]}.make_xyz (org.x-delta_z*road_width/norm, org.y, org.z+delta_x*road_width/norm), create {GL_VECTOR_3D[DOUBLE]}.make_xyz (org.x+delta_z*road_width/norm, org.y, org.z-delta_x*road_width/norm), create {GL_VECTOR_3D[DOUBLE]}.make_xyz (dst.x+delta_z*road_width/norm, dst.y, dst.z-delta_x*road_width/norm) ,create {GL_VECTOR_3D[DOUBLE]}.make_xyz (dst.x-delta_z*road_width/norm, dst.y, dst.z+delta_x*road_width/norm))
--				create_circle (org, road_color, road_width, road_height)
--				create_cube (create {GL_VECTOR_3D[DOUBLE]}.make_xyz (org.x-delta_z*road_width/norm, org.y + road_height + 0.4*height + highlighting_delta, org.z+delta_x*road_width/norm), create {GL_VECTOR_3D[DOUBLE]}.make_xyz (org.x+delta_z*road_width/norm, org.y + road_height + 0.4*height + highlighting_delta, org.z-delta_x*road_width/norm), create {GL_VECTOR_3D[DOUBLE]}.make_xyz (dst.x+delta_z*road_width/norm, dst.y + road_height + 0.4*height + highlighting_delta, dst.z-delta_x*road_width/norm) ,create {GL_VECTOR_3D[DOUBLE]}.make_xyz (dst.x-delta_z*road_width/norm, dst.y + road_height + 0.4*height + highlighting_delta, dst.z+delta_x*road_width/norm))
--				create_cylinder (org, road_color, road_width, road_height + road_height + 0.4*height + highlighting_delta)
--
--				i := i + 1
--			end			
--		end		

	create_road_rep_normal (section: TRAFFIC_ROAD) is
			-- Create a representation for the road section `section'.
		require
			section_exists: section /= Void
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
				i >= section.polypoints.count
			loop
				org := create {GL_VECTOR_3D[DOUBLE]}.make_xyz (map_to_gl_coords (section.polypoints.i_th (i)).x, road_height, map_to_gl_coords (section.polypoints.i_th (i)).y)
				dst := create {GL_VECTOR_3D[DOUBLE]}.make_xyz (map_to_gl_coords (section.polypoints.i_th (i+1)).x, road_height, map_to_gl_coords (section.polypoints.i_th (i+1)).y)
				delta_x := dst.x - org.x
				delta_z := dst.z - org.z
				
				norm := sqrt (delta_x*delta_x + delta_z*delta_z)

				if norm = 0 then
					norm := 1
				end
				
				create_plane (create {GL_VECTOR_3D[DOUBLE]}.make_xyz (org.x-delta_z*road_width/norm, org.y, org.z+delta_x*road_width/norm), create {GL_VECTOR_3D[DOUBLE]}.make_xyz (org.x+delta_z*road_width/norm, org.y, org.z-delta_x*road_width/norm), create {GL_VECTOR_3D[DOUBLE]}.make_xyz (dst.x+delta_z*road_width/norm, dst.y, dst.z-delta_x*road_width/norm) ,create {GL_VECTOR_3D[DOUBLE]}.make_xyz (dst.x-delta_z*road_width/norm, dst.y, dst.z+delta_x*road_width/norm))
				create_circle (org, road_color, road_width, road_height)
				
				-- Collision polygon
				create start_point.make (section.polypoints.i_th (i).x, section.polypoints.i_th (i).y) 
				create end_point.make (section.polypoints.i_th (i+1).x, section.polypoints.i_th (i+1).y)
				
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
