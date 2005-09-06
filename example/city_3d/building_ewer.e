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
	
	make (x, z: DOUBLE; no_buildings: INTEGER; map: TRAFFIC_MAP) is
			-- create a new object
		require values_valid: x /= void and then z /= void and then map /= void
				buildings_valid: no_buildings /= void and then no_buildings >= 0
		do
			create centre.make_xyz (x+plane_size/2,0,z+plane_size/2)
			create_metro_lines_polygons (map)
			create_buildings(no_buildings)
		ensure 
			centre_set: centre.x = x + plane_size/2 and centre.z = z + plane_size/2
		end

feature -- Interface

	set_building_number(n: INTEGER) is
			-- Set the number of buildings that are shown
		require n_valid: n /= void and then n >= 0
		do
			if n > buildings.count then
				add_buildings (n - buildings.count)
				number_of_buildings := n
			else
				number_of_buildings := n
			end
		end

	draw is
			-- Draw all houses
		local i: INTEGER
		do
			from i := buildings.lower
			until i > number_of_buildings
			loop
				buildings.item(i).draw	
				i := i + 1
			end
		end
		
feature {NONE} -- Collision detection
		
	has_collision(poly_a: EM_COLLIDABLE): BOOLEAN is
			-- Is there a collision
		do
			from metro_lines_polygons.start; Result := false
			until metro_lines_polygons.after or Result
			loop
				if poly_a.collides_with (metro_lines_polygons.item) then
					Result := true
				end
				metro_lines_polygons.forth
			end
		end
		
	metro_lines_polygons: ARRAYED_LIST[EM_POLYGON_CONVEX_COLLIDABLE]
	
feature{NONE} -- Implementation 	
		
	create_buildings (n: INTEGER) is
			-- Create `n' buildings randomly.
		require n_exists_and_positive: n /= void and then n >= 0
		local
			x_coord, z_coord, max_distance,distance: DOUBLE
			i, j: INTEGER
			building: EM_3D_OBJECT
			collision_poly: EM_POLYGON_CONVEX_COLLIDABLE
			poly_points: DS_LINKED_LIST[EM_VECTOR_2D]
		do
			create randomizer.set_seed (42)
			create central_building_factory.make_central
			create outlying_building_factory.make
			create buildings.make (1,n)
			
			max_distance := sqrt(plane_size^2 + plane_size^2)
			from i := 1; j := 1
			until i > n
			loop
				x_coord := centre.x - (plane_size/2) +  randomizer.double_i_th (j)*plane_size -- 1.7
				z_coord := centre.z - (plane_size/2) + randomizer.double_i_th (j+1)*plane_size -- -0.3

				-- ACHTUNG: Origin ist links unten!
				create poly_points.make
				poly_points.force (create {EM_VECTOR_2D}.make (x_coord, z_coord),1)
				poly_points.force (create {EM_VECTOR_2D}.make (x_coord, z_coord - building_width),2)
				poly_points.force (create {EM_VECTOR_2D}.make (x_coord - building_width, z_coord - building_width),3)
				poly_points.force (create {EM_VECTOR_2D}.make (x_coord - building_width, z_coord),4)
				create collision_poly.make_from_absolute_list (create {EM_VECTOR_2D}.make (x_coord-0.1, z_coord-0.1), poly_points)
	
				if not has_collision(collision_poly) then					
					distance := distance_to_centre(create {GL_VECTOR_3D[DOUBLE]}.make_xyz (x_coord,0,z_coord))
					if distance < 3 then
						building := central_building_factory.create_object
					else
						building := outlying_building_factory.create_object
					end
					building.set_origin (x_coord, 0, z_coord)
					building.set_scale (building_width , calculate_building_height (max_distance ,distance), building_width)
					buildings.force (building,i)
					i := i + 1
				end
				j := j + 2
			end
			number_of_buildings := n
		ensure number_of_buildings = n
		end
	
	add_buildings (n: INTEGER) is
			-- adds buildings to list
		require n_exists_and_positive: n /= void and then n >= 0
		local
			x_coord, z_coord, max_distance,distance: DOUBLE
			i, j: INTEGER
			building: EM_3D_OBJECT
			collision_poly: EM_POLYGON_CONVEX_COLLIDABLE
			poly_points: DS_LINKED_LIST[EM_VECTOR_2D]
			old_number: INTEGER
		do
			old_number := buildings.count
			max_distance := sqrt((plane_size^2)*2)
			from i := buildings.count + 1 ; j := 1
			until i > (n + old_number)
			loop
				x_coord := centre.x - (plane_size/2) +  randomizer.double_i_th (j)*plane_size -- 1.7
				z_coord := centre.z - (plane_size/2) + randomizer.double_i_th (j+1)*plane_size -- -0.3

				-- ACHTUNG: Origin ist links unten! building_widht ev. �ndern!
				create poly_points.make
				poly_points.force (create {EM_VECTOR_2D}.make (x_coord, z_coord),1)
				poly_points.force (create {EM_VECTOR_2D}.make (x_coord, z_coord - building_width),2)
				poly_points.force (create {EM_VECTOR_2D}.make (x_coord - building_width, z_coord - building_width),3)
				poly_points.force (create {EM_VECTOR_2D}.make (x_coord - building_width, z_coord),4)
				create collision_poly.make_from_absolute_list (create {EM_VECTOR_2D}.make (x_coord-0.1, z_coord-0.1), poly_points)
	
				if not has_collision(collision_poly) then					
					distance := distance_to_centre(create {GL_VECTOR_3D[DOUBLE]}.make_xyz (x_coord,0,z_coord))
					if distance < 3 then
						building := central_building_factory.create_object
					else
						building := outlying_building_factory.create_object
					end
					building.set_origin (x_coord, 0, z_coord)
					building.set_scale (building_width , calculate_building_height (max_distance ,distance), building_width)
					buildings.force (building,i)
					i := i + 1
					io.put_integer (i)
					io.put_new_line
				end
				j := j + 2
			end
			number_of_buildings := n
		ensure number_of_buildings = n
		end

	create_metro_lines_polygons (map: TRAFFIC_MAP) is
			-- Create a list of collidable pieces.
		require
			map_exists: map /= Void
		local
			lines: ARRAYED_LIST[TRAFFIC_LINE]
			line: TRAFFIC_LINE
			section: TRAFFIC_LINE_SECTION
			collidable: EM_POLYGON_CONVEX_COLLIDABLE
			i,j: INTEGER
			delta_x, delta_y, norm: DOUBLE
			start_point, end_point, a_point,c_point: EM_VECTOR_2D 
			polygon_points: DS_LINKED_LIST [EM_VECTOR_2D]
		do			
			lines := map.lines.linear_representation
			create metro_lines_polygons.make (4)
			
			from lines.start
			until lines.after
			loop
				line := lines.item
				from line.start
					j := 1
				until j > line.count//2 --line.after
				loop
					section := line.i_th (j)
					from i := 1; section.polypoints.start
					until i >= section.polypoints.count
					loop
						create start_point.make (section.polypoints.i_th (i).x, section.polypoints.i_th (i).y) 
						create end_point.make(section.polypoints.i_th (i+1).x, section.polypoints.i_th (i+1).y)

						-- Transformation
						start_point := map_to_gl_coords (start_point)
						end_point := map_to_gl_coords (end_point)
						
						delta_x := end_point.x - start_point.x
						delta_y := end_point.y - start_point.y
						
						norm := sqrt (delta_x*delta_x + delta_y*delta_y)
						
						create a_point.make(start_point.x-delta_y*line_width/norm,start_point.y+delta_x*1.5*line_width/norm)
						create c_point.make(end_point.x+delta_y*line_width/norm,end_point.y-delta_x*1.5*line_width/norm) 
						
						create polygon_points.make
						polygon_points.force ((a_point),1)
						polygon_points.force (create {EM_VECTOR_2D}.make(start_point.x+delta_y*line_width/norm,start_point.y-delta_x*1.5*line_width/norm),2)
						polygon_points.force ((c_point),3)
						polygon_points.force (create {EM_VECTOR_2D}.make(end_point.x-delta_y*line_width/norm,end_point.y+delta_x*1.5*line_width/norm) ,4)
						create collidable.make_from_absolute_list ((a_point + (c_point - a_point)/2),polygon_points)
						metro_lines_polygons.force (collidable)
						i := i + 1
					end
					j := j + 1				
				end
				lines.forth
			end
		end
	
	distance_to_centre (p: GL_VECTOR_3D[DOUBLE]): DOUBLE is
			-- Calculates the distance to the centre.
		do
			Result := (sqrt((p.x-centre.x)^2 + (p.z-centre.z)^2))
		end
		

feature {NONE} -- Variables

	randomizer: RANDOM
		-- Random number generator for building distribution
	outlying_building_factory: BUILDING_FACTORY
		-- Factory for outlying buildings
	central_building_factory: BUILDING_FACTORY
		-- Factory for central buildings
	number_of_buildings: INTEGER
		-- Number of buildings that should be shown.
	buildings: ARRAY[EM_3D_OBJECT]
		-- Array of all buildings
	centre: GL_VECTOR_3D[DOUBLE]
		-- Centre of town
	coords: GL_VECTOR_3D[DOUBLE]
		-- Edge coordinates of plane
		
end -- class BUILDING_EWER
