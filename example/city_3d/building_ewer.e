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

	create_buildings (n: INTEGER; map: TRAFFIC_MAP) is
			-- Create `n' buildings randomly.
		require n_exists_and_positive: n /= void and then n > 0
				map_exists: map /= void
		local
			randomizer: RANDOM
			x_coord, z_coord: DOUBLE
			i, j: INTEGER
			outlying_building_factory: BUILDING_FACTORY
			central_building_factory: BUILDING_FACTORY
			building: EM_3D_OBJECT
			collision_poly: EM_POLYGON_CONVEX_COLLIDABLE
			max_distance,distance: DOUBLE
			poly_points: DS_LINKED_LIST[EM_VECTOR_2D]
		do
			create_collidable_pieces (map)
--			create_collision_polygons (map)
			create randomizer.set_seed (42)
			create central_building_factory.make_central
			create outlying_building_factory.make
			create buildings.make (1,n)
			
			create poly_points.make
			
			max_distance := sqrt(depth^2 + width^2)
			
			from i := 2; j := 1
			until i > n
			loop
				x_coord := centre.x - (width/2) +  randomizer.double_i_th (j)*width -- 3.6
				z_coord := centre.z - (depth/2) + randomizer.double_i_th (j+1)*depth -- -0.5

				-- ACHTUNG: Origin ist links unten!
--				create collision_rec.make_from_position_and_size (create {EM_VECTOR_2D}.make (x_coord+0.5, z_coord+0.5), 1,1)
				poly_points.force (create {EM_VECTOR_2D}.make (-0.2, -0.2),1)
				poly_points.force (create {EM_VECTOR_2D}.make (-0.2, 0.2),2)
				poly_points.force (create {EM_VECTOR_2D}.make (0.2, 0.2),3)
				poly_points.force (create {EM_VECTOR_2D}.make (0.2, -0.2),4)
				
				create collision_poly.make_from_relative_list (create {EM_VECTOR_2D}.make (x_coord+0.2, z_coord+0.2), poly_points)

				if not has_collision(collision_poly, collidable_pieces) then
					distance := distance_to_centre(create {GL_VECTOR_3D[DOUBLE]}.make_xyz (x_coord,0,z_coord))
					if distance < 3 then
						building := central_building_factory.create_object
					else
						building := outlying_building_factory.create_object
					end
					building.set_origin (x_coord, 0, z_coord)
					building.set_scale (0.2,(max_distance - 2*distance)*(max_height/max_distance),0.2)
					buildings.force (building,i)
					io.put_integer(i)
					io.put_new_line
					i := i + 1
				end
				j := j + 2
			end			
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
			i, j: INTEGER
			delta_x, delta_y: DOUBLE
			norm: DOUBLE
			start_point, end_point: EM_VECTOR_2D 
			polygon_points: DS_LINKED_LIST [EM_VECTOR_2D]
			a_point,b_point,c_point,d_point: EM_VECTOR_2D
		do
			lines := map.lines.linear_representation
			create collidable_pieces.make (0)
			create polygon_points.make
			
			from lines.start
			until lines.after
			loop
				line := lines.item
--				line := lines.first
				from line.start
				until line.after
				loop
				section := line.item

			
--			section := line.first
					from
						i := 1
						j := 2
					until
						i >= section.polypoints.count
					loop
						create start_point.make (section.polypoints.i_th (i).x, section.polypoints.i_th (i).y) 
						create end_point.make(section.polypoints.i_th (j).x, section.polypoints.i_th (j).y)
--						start_point :=  section.polypoints.i_th (i)
--						end_point := section.polypoints.i_th (j)
						
						
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
	planes: ARRAY[ARRAY[EM_VECTOR_2D]]
	
feature{NONE} -- Variables

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
