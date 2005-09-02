indexing
	description: "Places buildings randomly on a plane"
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	BUILDING_EWER

inherit
	MATH_CONST
	
	DOUBLE_MATH
	
	SHARED_CONSTANTS
	
	GL_FUNCTIONS
		export {NONE} all end
		
	GLU_FUNCTIONS
		export {NONE} all end
	
	EM_CONSTANTS
		export {NONE} all end

create
	make

feature -- Initialization
	
	make (x, z, d, w, max_h: DOUBLE) is
			-- create a new object
		require values_valid: x /= void and then z /= void and then d /= void and then w /= void and then max_h /= void
		do
			create centre.make_xyz (x+d/2,0,z+w/2)
			width := w
			depth := d
			max_height := max_h
			
		ensure 
			values_set_correctly: width = w and depth = d and max_height = max_h
			centre_set: centre.x = x + d/2 and centre.z = z + w/2
		end

feature -- Drawing	

	draw is
			-- Draw all houses
		local i: INTEGER
		do
			from i := buildings.lower
			until i > buildings.upper
			loop
				if buildings.item (i) /= void then
					buildings.item(i).draw	
				end
				i := i + 1
			end
		end
			
	draw_collision is
			-- Draw collision detection objects
		local i: INTEGER
				rec: ARRAY[EM_VECTOR_2D]
		do
			from i := polygon_list.lower
			until i > polygon_list.upper
			loop
				rec := polygon_list.item (i)
				if rec /= void then 
					draw_plane(rec)
				end
				i := i + 1
			end
			from i := rectangle_list.lower
			until i > rectangle_list.upper
			loop
				rec := rectangle_list.item (i)
				if rec /= void then 
					draw_plane(rec)
				end
				i := i + 1
			end
			from i := centre_list.lower
			until i > centre_list.upper
			loop
				gl_color3d (1,1,1)
				gl_matrix_mode(em_gl_modelview_matrix)
				gl_push_matrix
				gl_translated (centre_list.item(i).x,0.31,centre_list.item(i).y)
				gl_rotated (90, 1, 0,0)
				glu_disk (glu_new_quadric,0, 0.1, 72,72)
				gl_end
				gl_pop_matrix
				gl_flush
				i := i + 1
			end
			
		end
		
	draw_plane (p: ARRAY[EM_VECTOR_2D]) is
			-- draw a plane
		require
			p /= Void
		do
			gl_begin (em_gl_quads)
				gl_color3d (0.0,0.7,0.3)
				gl_vertex3d (p.item(1).x, 0.3, p.item(1).y)
				gl_vertex3d (p.item(2).x, 0.3, p.item(2).y)
				gl_vertex3d (p.item(3).x, 0.3, p.item(3).y)
				gl_vertex3d (p.item(4).x, 0.3, p.item(4).y)
			gl_end
		end
		
feature -- Implementation 	

	output_line(line: TRAFFIC_LINE) is
			-- Throw out all duplicated sections
		do
			from line.start
			until line.after
			loop
				io.put_string("Start: ")
				io.put_string(line.item.origin.name)
				io.put_string (" nach ")
				io.put_string(line.item.destination.name)
				io.put_new_line
				line.forth
			end
		end

--	clean_line(line: TRAFFIC_LINE): ARRAY[EM_VECTOR_2D] is
--			-- Throw out all duplicated sections
--		local i,j: INTEGER
--			done: BOOLEAN
--		do
--			i := 1
--			create Result.make(1,2)
--			from line.start
--			until line.after
--			loop
--				from line.item.polypoints.start
--				until line.item.polypoints.after
--				loop
--					from j := Result.lower; done := false
--					until j > Result.upper or done
--					loop
--						if Result.item(j) /= void and then Result.item(j).x = line.item.polypoints.item.x and then Result.item(j).y = line.item.polypoints.item.y then
--							done := true
--					end
--					if not done then
--						Result.force (line.item.polypoints.item,i)
--						i := i + 1
--					end
--						
--						j := j + 1
--					end
--					line.item.polypoints.forth
--				end
--				line.forth
--			end
--		end
		
	create_buildings (n: INTEGER; map: TRAFFIC_MAP) is
			-- Create `n' buildings randomly.
		require n_exists_and_positive: n /= void and then n > 0
				map_exists: map /= void
		local
			randomizer: RANDOM
			x_coord, z_coord: DOUBLE
			i, j, k: INTEGER
			outlying_building_factory: BUILDING_FACTORY
			central_building_factory: BUILDING_FACTORY
			building: EM_3D_OBJECT
			collision_poly: EM_POLYGON_CONVEX_COLLIDABLE
			max_distance,distance: DOUBLE
			poly_points: DS_LINKED_LIST[EM_VECTOR_2D]
		do
			create_collidable_pieces (map)
			create randomizer.set_seed (42)
			create central_building_factory.make_central
			create outlying_building_factory.make
			create buildings.make (1,n)
			
			-- Collision detector
			create collision_detector.make (2)
			from collidable_pieces.start
			until collidable_pieces.after
			loop
				collision_detector.add (collidable_pieces.item,1)
				collidable_pieces.forth
			end

			-- Delete me
			create rectangle_list.make (1,2)
			k := 1

			max_distance := sqrt(depth^2 + width^2)
			
			from i := 2; j := 1
			until i > n
			loop
				x_coord := centre.x - (width/2) +  randomizer.double_i_th (j)*width -- 3.6
				z_coord := centre.z - (depth/2) + randomizer.double_i_th (j+1)*depth -- -0.5

				-- Delete me
				create rectangle.make(1,4)

				-- ACHTUNG: Origin ist links unten!
--				poly_points.force (create {EM_VECTOR_2D}.make (-0.2, -0.2),1)
--				poly_points.force (create {EM_VECTOR_2D}.make (-0.2, 0.2),2)
--				poly_points.force (create {EM_VECTOR_2D}.make (0.2, 0.2),3)
--				poly_points.force (create {EM_VECTOR_2D}.make (0.2, -0.2),4)

				create poly_points.make
				poly_points.force (create {EM_VECTOR_2D}.make (x_coord, z_coord),1)
				poly_points.force (create {EM_VECTOR_2D}.make (x_coord, z_coord - 0.2),2)
				poly_points.force (create {EM_VECTOR_2D}.make (x_coord - 0.2, z_coord - 0.2),3)
				poly_points.force (create {EM_VECTOR_2D}.make (x_coord - 0.2, z_coord),4)
				create collision_poly.make_from_absolute_list (create {EM_VECTOR_2D}.make (x_coord-0.1, z_coord-0.1), poly_points)

					
				rectangle.force (create {EM_VECTOR_2D}.make (x_coord, z_coord),1)
				rectangle.force (create {EM_VECTOR_2D}.make (x_coord, z_coord - 0.2),2)
				rectangle.force (create {EM_VECTOR_2D}.make (x_coord - 0.2, z_coord - 0.2),3)
				rectangle.force (create {EM_VECTOR_2D}.make (x_coord - 0.2, z_coord),4)
				rectangle_list.force (rectangle,k)
				k := k + 1
				
				if not has_collision(collision_poly) then

--				rectangle.force (create {EM_VECTOR_2D}.make (x_coord, z_coord),1)
--				rectangle.force (create {EM_VECTOR_2D}.make (x_coord, z_coord - 0.2),2)
--				rectangle.force (create {EM_VECTOR_2D}.make (x_coord - 0.2, z_coord - 0.2),3)
--				rectangle.force (create {EM_VECTOR_2D}.make (x_coord - 0.2, z_coord),4)
--				rectangle_list.force (rectangle,k)
--				k := k + 1
					
					
					distance := distance_to_centre(create {GL_VECTOR_3D[DOUBLE]}.make_xyz (x_coord,0,z_coord))
--					if distance < 3 then
--						building := central_building_factory.create_object
--					else
						building := outlying_building_factory.create_object
--					end
					building.set_origin (x_coord, 0, z_coord)
					building.set_scale (0.2,(max_distance - 2*distance)*(max_height/max_distance),0.2)
					buildings.force (building,i)
--					io.put_integer(i)
--					io.put_new_line
					i := i + 1
				end
--				io.put_string("j: ")
--				io.put_integer(j)
--				io.put_new_line
				j := j + 2
			end			
		end
		
	has_collision(poly_a: EM_COLLIDABLE): BOOLEAN is
			-- Is there a collision
		local collisions: DS_LINKED_LIST [EM_COLLISION_COMPOSITION]
		do
			collision_detector.add (poly_a,2)
			collision_detector.check_for_collision
			collisions := collision_detector.last_collisions
			if not collisions.is_empty then
				from collisions.start
				until collisions.after or Result
				loop
					if collisions.item_for_iteration.has_collidable (poly_a) then
						Result := true
					end
				end
			end
			collision_detector.empty_set(2)
			
--			create collision_detector.make (2)
--			collision_detector.add (poly_a,1)
--			from list.start
--			until list.after
--			loop
--				collision_detector.add (list.item,2)
--				list.forth
--			end
--			collision_detector.check_for_collision
--			collisions := collision_detector.last_collisions
--			if not collisions.is_empty then
----				Result := true
--				from collisions.start
--				until collisions.after or Result
--				loop
--					if collisions.item_for_iteration.has_collidable (poly_a) then
--						Result := true
--					end
--				end
--			end
			
			
--			collision_detector.remove_from_set(list.item,2)
--			collision_detector.empty_set(1)
		end
		
	
		
	collidable_pieces: ARRAYED_LIST[EM_POLYGON_CONVEX_COLLIDABLE]
	
	create_collidable_pieces (map: TRAFFIC_MAP) is
			-- Create a list of collidable pieces.
		require
			map_exists: map /= Void
		local
			lines: ARRAYED_LIST[TRAFFIC_LINE]
			line: TRAFFIC_LINE
			section: TRAFFIC_LINE_SECTION
			collidable: EM_POLYGON_CONVEX_COLLIDABLE
			i,j,k,l,m: INTEGER
			delta_x, delta_y: DOUBLE
			norm: DOUBLE
			start_point, end_point: EM_VECTOR_2D 
			polygon_points: DS_LINKED_LIST [EM_VECTOR_2D]
			a_point,b_point,c_point,d_point: EM_VECTOR_2D
			list_of_sections: ARRAY [EM_VECTOR_2D]
		do
			lines := map.lines.linear_representation
			create collidable_pieces.make (0)
			create polygon_points.make
			
			-- Delete me
			create polygon_list.make (1,2)
			create centre_list.make (1,2)
			k := 1
			l := 1
			
			from lines.start
			until lines.after
			loop
				line := lines.item
				output_line(lines.item)
--				list_of_sections := clean_line(lines.item)
				
				from line.start; m := 1
				until m > line.count//2 --line.after
				loop
				section := line.item
				m := m + 1
					from
						i := 1
						j := 2
					until
						i >= section.polypoints.count
					loop
						create start_point.make (section.polypoints.i_th (i).x, section.polypoints.i_th (i).y) 
						create end_point.make(section.polypoints.i_th (j).x, section.polypoints.i_th (j).y)
						
						-- Delete me
						create polygon.make (1,4)
						
						-- TRANSFORMATION -> BUILD IN LIMITS
						start_point.set_x ((start_point.x / 50) - 14)
						start_point.set_y ((start_point.y / 50) - 14)	
						end_point.set_x ((end_point.x / 50) - 14)
						end_point.set_y ((end_point.y / 50) - 14)
						
						
						delta_x := end_point.x - start_point.x
						delta_y := end_point.y - start_point.y
			
						norm := sqrt (delta_x*delta_x + delta_y*delta_y)
			
						create a_point.make(start_point.x-delta_y*line_width/norm,start_point.y+delta_x*line_width/norm)
						create b_point.make(start_point.x+delta_y*line_width/norm,start_point.y-delta_x*line_width/norm) 
						create c_point.make(end_point.x+delta_y*line_width/norm,end_point.y-delta_x*line_width/norm) 
						create d_point.make(end_point.x-delta_y*line_width/norm,end_point.y+delta_x*line_width/norm)

						polygon_points.force ((a_point),1)
						polygon_points.force ((b_point),2)
						polygon_points.force ((c_point),3)
						polygon_points.force ((d_point),4)
						
						-- Delete me
						polygon.force (a_point,1)
						polygon.force (b_point,2)
						polygon.force (c_point,3)
						polygon.force (d_point,4)
						centre_list.force ((a_point + (create {EM_VECTOR_2D}.make(line_width,line_width)) + (d_point - a_point)/2),l)
--						centre_list.force(a_point,l+1)
--						centre_list.force(a_point,l+2)
--						centre_list.force(a_point,l+3)
--						centre_list.force(a_point,l+4)
						l := l + 1
						
						polygon_list.force (polygon,k)
						
						k := k + 1

						create collidable.make_from_absolute_list (a_point + (d_point - a_point)/2,polygon_points)
						collidable_pieces.force (collidable)

						i := i + 1
						j := j + 1
					end				
					line.forth
				end
				lines.forth
			end
		end
		
	distance_to_centre (p: GL_VECTOR_3D[DOUBLE]): DOUBLE is
				-- Calculates the distance to the centre.
		do
			Result := (sqrt((p.x-centre.x)^2 + (p.z-centre.z)^2))
		end
	
	-- Delete me
	polygon: ARRAY[EM_VECTOR_2D]
	polygon_list: ARRAY[ARRAY[EM_VECTOR_2D]]
	rectangle_list: ARRAY[ARRAY[EM_VECTOR_2D]]
	rectangle: ARRAY[EM_VECTOR_2D]
	centre_list: ARRAY[EM_VECTOR_2D]
	
feature{NONE} -- Variables

 	collision_detector: EM_COLLISION_DETECTOR
 		-- Detector for collisions between lines and buildings
	buildings: ARRAY[EM_3D_OBJECT]
		-- Array of all buildings
	centre: GL_VECTOR_3D[DOUBLE]
		-- Centre of town
	coords: GL_VECTOR_3D[DOUBLE]
		-- Edge coordinates of plane
	width: DOUBLE
		-- width of plane
	depth: DOUBLE
		-- depth of plane
	max_height: DOUBLE
		-- Maximum height of buildings
		
end -- class BUILDING_EWER
