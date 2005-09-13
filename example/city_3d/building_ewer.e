indexing
	description: "Places buildings randomly on a plane"
	date: "$Date$"
	revision: "$Revision$"

class
	BUILDING_EWER

inherit
	
	SHARED_CONSTANTS
		export {NONE} all end
		
	DOUBLE_MATH
		export {NONE} all end

create
	make

feature -- Initialization
	
	make (x, z: DOUBLE; no_buildings: INTEGER; map: TRAFFIC_MAP) is
			-- Create a new object.
		require
			values_valid: x /= void and then z /= void and then map /= void
			buildings_valid: no_buildings /= void and then no_buildings >= 0
		do
			create centre.make_xyz (x+plane_size/2, 0, z+plane_size/2)
			create_metro_lines_polygons (map)
			create randomizer.set_seed (42)
			create building_factory.make
			create buildings.make (1,no_buildings)
			add_buildings (no_buildings)
		ensure 
			centre_set: centre.x = x + plane_size/2 and centre.z = z + plane_size/2
		end

feature {MAP} -- Interface

	set_building_number (n: INTEGER) is
			-- Set the number of buildings that are shown.
		require
			n_valid: n /= void and then n >= 0
		do
			if n > buildings.count then
				add_buildings (n - buildings.count)
				number_of_buildings := n
			else
				number_of_buildings := n
			end
		ensure
			number_of_buildings = n
			buildings.count >= number_of_buildings
		end
	
	draw is
			-- Draw all buildings.
		local
			i: INTEGER
		do
			from i := buildings.lower
			until i > number_of_buildings
			loop
				buildings.item(i).draw	
				i := i + 1
			end
		end
		
feature {NONE} -- Collision detection

	has_collision (poly_a: EM_COLLIDABLE): BOOLEAN is
			-- Is there a collision?
		do
			from
				traffic_lines_polygons.start
				Result := false
			until
				traffic_lines_polygons.after or Result
			loop
				if poly_a.collides_with (traffic_lines_polygons.item) then
					Result := true
				end
				traffic_lines_polygons.forth
			end
		end
		
	traffic_lines_polygons: ARRAYED_LIST[EM_POLYGON_CONVEX_COLLIDABLE]
			-- Collision polygons to check for collisions with traffic lines
	
feature {NONE} -- Implementation
	
	add_buildings (n: INTEGER) is
			-- adds buildings to list
		require n_exists_and_is_not_negative: n /= void and then n >= 0
		local
			x_coord, z_coord, max_distance, distance: DOUBLE
			i, j, sign: INTEGER
			building: EM_3D_OBJECT
			collision_poly: EM_POLYGON_CONVEX_COLLIDABLE
			poly_points: DS_LINKED_LIST[EM_VECTOR_2D]
			old_number: INTEGER
		do
			old_number := buildings.count
			max_distance := sqrt((plane_size^2)*2)
			from
				i := buildings.count + 1
				j := 1
			until
				i > (n + old_number)
			loop
				x_coord := centre.x - (plane_size/2) +  randomizer.double_i_th (j)*plane_size -- 1.7
				z_coord := centre.z - (plane_size/2) + randomizer.double_i_th (j+1)*plane_size -- -0.3

				-- ACHTUNG: Origin ist links unten! building_width ev. ändern!
				create poly_points.make
				poly_points.force (create {EM_VECTOR_2D}.make (x_coord, z_coord),1)
				poly_points.force (create {EM_VECTOR_2D}.make (x_coord, z_coord - building_width),2)
				poly_points.force (create {EM_VECTOR_2D}.make (x_coord - building_width, z_coord - building_width),3)
				poly_points.force (create {EM_VECTOR_2D}.make (x_coord - building_width, z_coord),4)
				create collision_poly.make_from_absolute_list (create {EM_VECTOR_2D}.make (x_coord-0.1, z_coord-0.1), poly_points)
	
				if not has_collision(collision_poly) then					
					distance := distance_to_centre(create {GL_VECTOR_3D[DOUBLE]}.make_xyz (x_coord, 0, z_coord))
					if distance < 5 then
						building_factory.set_city_centre
						building := building_factory.create_object
						building.set_scale (building_width, calculate_building_height (max_distance, distance)-0.2, building_width)
					elseif distance < 10 then
						building_factory.set_central
						building := building_factory.create_object
						building.set_scale (building_width, calculate_building_height (max_distance, distance)-0.2, building_width)
					elseif distance < 20 then
						if sign > 0 then
							building_factory.set_central
						else
							building_factory.set_outlying
						end
						building := building_factory.create_object
						building.set_scale (building_width, calculate_building_height (max_distance, distance)-0.2, building_width)
						sign := sign * (-1)
					else
						building_factory.set_outlying
						building := building_factory.create_object
						building.set_scale (building_width, calculate_building_height (max_distance, distance), building_width)
					end
					building.set_origin (x_coord, 0, z_coord)
					buildings.force (building,i)
					i := i + 1
				end
				j := j + 2
			end
			number_of_buildings := n
		ensure
			number_of_buildings = n
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
			i, j: INTEGER
			delta_x, delta_y, norm: DOUBLE
			start_point, end_point, a_point, c_point: EM_VECTOR_2D 
			polygon_points: DS_LINKED_LIST [EM_VECTOR_2D]
		do
			lines := map.lines.linear_representation
			create traffic_lines_polygons.make (4)
			
			from lines.start
			until lines.after
			loop
				line := lines.item
				from
					line.start
					j := 1
				until j > line.count//2 -- line.after
				loop
					section := line.i_th (j)
					from i := 1; section.polypoints.start
					until i >= section.polypoints.count
					loop
						create start_point.make (section.polypoints.i_th (i).x, section.polypoints.i_th (i).y) 
						create end_point.make (section.polypoints.i_th (i+1).x, section.polypoints.i_th (i+1).y)
						
						-- Transformation
						start_point := map_to_gl_coords (start_point)
						end_point := map_to_gl_coords (end_point)
						
						delta_x := end_point.x - start_point.x
						delta_y := end_point.y - start_point.y
						
						norm := sqrt (delta_x*delta_x + delta_y*delta_y)
						
						create a_point.make (start_point.x-delta_y*1.5*line_width/norm, start_point.y+delta_x*1.5*line_width/norm)
						create c_point.make (end_point.x+delta_y*1.5*line_width/norm, end_point.y-delta_x*1.5*line_width/norm) 
						
						create polygon_points.make
						polygon_points.force ((a_point),1)
						polygon_points.force (create {EM_VECTOR_2D}.make (start_point.x+delta_y*line_width/norm, start_point.y-delta_x*1.5*line_width/norm), 2)
						polygon_points.force ((c_point),3)
						polygon_points.force (create {EM_VECTOR_2D}.make (end_point.x-delta_y*line_width/norm, end_point.y+delta_x*1.5*line_width/norm), 4)
						create collidable.make_from_absolute_list ((a_point + (c_point - a_point)/2), polygon_points)
						traffic_lines_polygons.force (collidable)
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

feature {NONE} -- Attributes

	randomizer: RANDOM
			-- Random number generator for the building distribution
	building_factory: BUILDING_FACTORY
			-- Factory for the buildings
	number_of_buildings: INTEGER
			-- Number of buildings that should be shown
	buildings: ARRAY[EM_3D_OBJECT]
			-- Array of all buildings
	centre: GL_VECTOR_3D[DOUBLE]
			-- Centre of the city
		
end -- class BUILDING_EWER
