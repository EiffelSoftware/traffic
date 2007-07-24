indexing
	description: "Objects that distribute buildings randomly over the city"
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_BUILDING_RANDOMIZER

inherit

	DOUBLE_MATH

create
	set_map

feature -- Element change

	set_map (a_map: TRAFFIC_MAP) is
			-- Initialize with `a_map'.
		require
			a_map_exists: a_map /= Void
		local
			t: TIME
			b: TRAFFIC_BUILDING
		do
			create t.make_now
			create random.set_seed (t.compact_time)
			random.start
			map := a_map
			create templates.make (1, 3)
			templates.force (create {TRAFFIC_VILLA}.make_default (create {TRAFFIC_COORDINATE}.make (0, 0)), 1)
			templates.force (create {TRAFFIC_APARTMENT_BUILDING}.make_default (create {TRAFFIC_COORDINATE}.make (0, 0)), 2)
			templates.force (create {TRAFFIC_SKYSCRAPER}.make_default (create {TRAFFIC_COORDINATE}.make (0, 0)), 3)
			create grid.make ((map.radius/templates.item (1).width).ceiling*8, map.center, map.radius)
			mark_occupied
		ensure
			map_set: map = a_map
			grid_exists: grid /= Void
		end

feature -- Basic operations

--	place_buildings_randomly (a_density:INTEGER) is
--			-- Place buildings randomly on map.
--			-- `a_density' is the building density on the map. 1 means weak, 2 meduim, and 3 strong building density.
--		require
--			map_loaded: map /= Void
--			a_density_not_1_2_or_3: a_density /= 1 or a_density /= 2 or a_density /= 3
--		do

--			io.putstring ("Randomly placing buildings: ")
--			io.new_line
--			create last_buildings.make_default

--			mark_occupied

--			place_buildings (a_density)
--			io.putstring ("- Done")
--			io.new_line
--		end
--	generate_buildings_along_lines is
--			-- Add buildings along all lines (except railway).
--		local
--			line_sections:DS_ARRAYED_LIST [TRAFFIC_LINE_CONNECTION]
--			line_section: TRAFFIC_LINE_CONNECTION
--			building: TRAFFIC_BUILDING
--			center,p1,p2,p3,p4: EM_VECTOR_2D
--			start_point, end_point, temp: EM_VECTOR_2D
--			temp_destination: EM_VECTOR_2D -- destination rotated by line angle
--			gl_origin: EM_VECTOR_2D -- origin in gl coordinates
--			angle, building_height, w, b: DOUBLE
--			collision_poly: EM_POLYGON_CONVEX_COLLIDABLE
--			poly_points: DS_LINKED_LIST[EM_VECTOR_2D]
----			random: RANDOM
--			template, i: INTEGER
--		do
--			create last_buildings.make_default
--			building_height := 0.5
--			create start_point.make(0,0)
--			create end_point.make(0,0)
--			line_sections:=map.line_sections
----			create random.make

--			-- add buildings along every line section
--			from
--				line_sections.start
--				--line_sections.forth
--			until
--				line_sections.after
--				--line_sections.index > line_sections.count
--			loop

--				line_section := line_sections.item_for_iteration
--				-- railways are not taken into account
--				if not line_section.type.name.is_equal ("rail") then
--					from
--						i := 1
--					until
--						i+1 > line_section.polypoints.count
--					loop
--						--check if linesection is vertical
--						if line_section.polypoints.item (i+1).x = line_section.polypoints.item (i).x then
----							temp_destination := map_to_gl_coords(line_section.polypoints.i_th(i+1))
--							temp_destination := line_section.polypoints.item(i+1)
----							gl_origin := map_to_gl_coords (line_section.polypoints.i_th (i))
--							gl_origin := line_section.polypoints.item (i)
--							from
--								start_point.set_y (gl_origin.y-0.5)
--								start_point.set_x (gl_origin.x)
--								if start_point.y < temp_destination.y then
--									temp:=start_point
--									start_point:=temp_destination
--									temp_destination:=temp
--								end
--								end_point.set_y (start_point.y-0.5)
--								end_point.set_x(start_point.x)
--							until
--								end_point.y<= temp_destination.y
--							loop
--								--buildings on the right hand side of the line
--								random.forth
----								template:= (random.double_item*(buildings_representation.building_factory.count-1).to_double).rounded +1
----								w:=buildings_representation.width_of_template (template)
----								b:=buildings_representation.breadth_of_template (template)

--								create p1.make (start_point.x-0.5, start_point.y)
--								create p2.make (end_point.x-0.5, end_point.y)
--								create p3.make (p2.x-0.5,p2.y)
--								create p4.make (p1.x-0.5,p1.y)
--								create center.make ((p2.x+p4.x)/2,(p1.y+p3.y)/2)

--								-- Check for collision with lines and other buildings
--								if	not grid.has_rectangle_collision (center, w, b)	then
----									create building.make (p1,p2,p3,p4, building_height, "building " + building_id.out)
----									building_id := building_id + 1
--									building.set_angle (0)
--									create poly_points.make
--									poly_points.force (p1, 1)
--									poly_points.force (p2, 2)
--									poly_points.force (p3, 3)
--									poly_points.force (p4, 4)
--									create collision_poly.make_from_absolute_list (building.center, poly_points)
----									buildings_representation.add_building_with_template (building, template)
----									buildings_representation.collision_polygons.force_last (collision_poly)
--									grid.mark_rectangle (building.center, building.width, building.depth, True)
--								end

--								--builiding on the left hand sinde of the line
--								random.forth
----								template:= (random.double_item*(buildings_representation.building_factory.count-1).to_double).rounded +1
----								w:=buildings_representation.width_of_template (template)
----								b:=buildings_representation.breadth_of_template (template)

--								create p4.make (start_point.x+0.5, start_point.y)
--								create p3.make (end_point.x+0.5, end_point.y)
--								create p2.make (p3.x+0.5,p3.y)
--								create p1.make (p4.x+0.5,p4.y)
--								create center.make ((p2.x+p4.x)/2,(p1.y+p3.y)/2)

--								-- Check for collision with lines and other buildings
--								if	not grid.has_rectangle_collision(center, w, b)	then
----									create building.make (p1,p2,p3,p4, building_height, "building " + building_id.out)
----									building_id := building_id + 1
--									building.set_angle (0)
--									create poly_points.make
--									poly_points.force (p1, 1)
--									poly_points.force (p2, 2)
--									poly_points.force (p3, 3)
--									poly_points.force (p4, 4)
--									create collision_poly.make_from_absolute_list (building.center, poly_points)
----									buildings_representation.add_building_with_template (building, template)
----									buildings_representation.collision_polygons.force_last (collision_poly)
--									grid.mark_rectangle(center, w, b, True)
--								end
--								start_point.set_y (end_point.y-0.01)
--								end_point.set_y (end_point.y-0.51)
--							end
--						else
--							-- linessection is not vertical
--							angle:= arc_tangent((line_section.polypoints.item (i+1).y-line_section.polypoints.item (i).y)/(line_section.polypoints.item (i+1).x-line_section.polypoints.item (i).x))
--							if angle*180/pi>-70 and angle*180/pi<70 then

----								temp_destination:=map_to_gl_coords(line_section.polypoints.i_th(i+1).rotation (line_section.polypoints.i_th(i), -angle))
----								gl_origin:=map_to_gl_coords (line_section.polypoints.i_th(i))
--								temp_destination:=line_section.polypoints.item(i+1).rotation (line_section.polypoints.item(i), -angle)
--								gl_origin:=line_section.polypoints.item(i)
--								from
--									start_point.set_y (gl_origin.y)
--									start_point.set_x (gl_origin.x-0.5)
--									if start_point.x < temp_destination.x then
--										temp:=start_point
--										start_point:=temp_destination
--										temp_destination:=temp
--									end
--									end_point.set_y (start_point.y)
--									end_point.set_x(start_point.x-0.5)
--								until
--									end_point.x<= temp_destination.x
--								loop
--									--building above the line
--									random.forth
----									template:= (random.double_item*(buildings_representation.building_factory.count-1).to_double).rounded +1
----									w:=buildings_representation.width_of_template (template)
----									b:=buildings_representation.breadth_of_template (template)

--									create p2.make (start_point.x,start_point.y+0.5)
--									create p1.make (p2.x,p2.y+0.5)
--									create p3.make (end_point.x,end_point.y+0.5)
--									create p4.make (p3.x,p3.y+0.5)
--									p1:= p1.rotation (gl_origin, -angle)
--									p2:= p2.rotation (gl_origin, -angle)
--									p3:= p3.rotation (gl_origin, -angle)
--									p4:= p4.rotation (gl_origin, -angle)
--									create center.make ((p2.x+p4.x)/2,(p1.y+p3.y)/2)

--									-- Check for collision with lines and other buildings
--								if	not grid.has_square_collision(center, sqrt(w*w + b*b))	then
----										create building.make (p1,p2,p3,p4, building_height, "building " + building_id.out)
----										building_id := building_id + 1
--										building.set_angle (angle*180/pi)
--										create poly_points.make
--										poly_points.force (p1, 1)
--										poly_points.force (p2, 2)
--										poly_points.force (p3, 3)
--										poly_points.force (p4, 4)
--										create collision_poly.make_from_absolute_list (building.center, poly_points)
----										buildings_representation.add_building_with_template (building, template)
----										buildings_representation.collision_polygons.force_last(collision_poly)
--										grid.mark_rectangle(building.center,sqrt(w*w + b*b), sqrt(w*w + b*b), True)

--									end

--									--builiding underneath the line
--									random.forth
----									template:= (random.double_item*(buildings_representation.building_factory.count-1).to_double).rounded +1
----									w:=buildings_representation.width_of_template (template)
----									b:=buildings_representation.breadth_of_template (template)

--									create p1.make (start_point.x,start_point.y-0.5)
--									create p2.make (p1.x,p1.y-0.5)
--									create p4.make (end_point.x,end_point.y-0.5)
--									create p3.make(p4.x,p4.y-0.5)
--									p1:= p1.rotation (gl_origin, -angle)
--									p2:= p2.rotation (gl_origin, -angle)
--									p3:= p3.rotation (gl_origin, -angle)
--									p4:= p4.rotation (gl_origin, -angle)
--									create center.make ((p2.x+p4.x)/2,(p1.y+p3.y)/2)

--									-- Check for collision with lines and other buildings
--								if	not grid.has_square_collision(center, sqrt(w*w + b*b))	then
----										create building.make (p1,p2,p3,p4, building_height, "building " + building_id.out)
----										building_id := building_id + 1
--										building.set_angle (angle*180/pi)
--										create poly_points.make
--										poly_points.force (p1, 1)
--										poly_points.force (p2, 2)
--										poly_points.force (p3, 3)
--										poly_points.force (p4, 4)
--										create collision_poly.make_from_absolute_list (building.center, poly_points)
----										buildings_representation.add_building_with_template (building, template)
----										buildings_representation.collision_polygons.force_last (collision_poly)
--										grid.mark_rectangle(building.center,sqrt(w*w + b*b),sqrt(w*w + b*b), True)

--									end
--									start_point.set_x (end_point.x-0.01)
--									end_point.set_x (end_point.x-0.51)
--								end
--							end
--						end
--						i:=i+1
--					end
--				end
--				-- we need only every second section since there is one section for every direction
--				line_sections.forth
--				line_sections.forth
--			end
--		end

	generate_random_buildings (a_number: INTEGER; a_radius: DOUBLE; a_template: INTEGER) is
			-- Generate at most `a_number' buildings of same type as `a_template' in `a_radius' around the city center.
		require
			a_number_valid: a_number > 0
			a_radius_valid: a_radius > 0
			a_template_valid: a_template > 0 and a_template <= template_count
		local
			nr_buildings_placed, j: INTEGER
			w, b: DOUBLE
			point_randomizer: TRAFFIC_POINT_RANDOMIZER
			center: TRAFFIC_COORDINATE
			building: TRAFFIC_BUILDING
		do
			create last_buildings.make (a_number)
			-- set maximum number of iterations to ensure termination
			nr_buildings_placed := 0
			w := templates.item (a_template).width -- buildings_representation.width_of_template (a_template)
			b := templates.item (a_template).depth --buildings_representation.breadth_of_template (a_template)
			create point_randomizer.make (map.center, a_radius)

			-- iterate to get different random values of positions on map
			from
				j := 1
			until
				nr_buildings_placed > a_number  or  j > max_iterations
			loop
				point_randomizer.generate_point_array (1)
				center := point_randomizer.last_array.item (1)

				-- Check for collision with lines and other buildings
				if	not grid.has_rectangle_collision (center, w, b) then
					building := templates.item (a_template).twin
					building.set_center (center)
					last_buildings.force_last (building)
					grid.mark_rectangle (center, w, b, True)
					nr_buildings_placed := nr_buildings_placed + 1
				end
				-- we need two random j's per round
				j := j + 2
			end
		end


feature -- Access

	template_count: INTEGER is
			-- Number of templates
		do
			Result := templates.count
		end

	map: TRAFFIC_MAP
			-- Map used for placing buildings

	grid: TRAFFIC_GRID
			-- Grid used for marking occupied spaces

	last_buildings: DS_ARRAYED_LIST [TRAFFIC_BUILDING]
			-- Buildings generated by the last call to `generate_random_buildings'


feature {NONE} -- Implementation

	Max_iterations: INTEGER is 1000
			-- Maximal number of iterations to ensure termination of the algorithm

	Line_width: INTEGER is 10
			-- Line width used for marking line sections as occupied

	random: RANDOM
			-- Random number generator

	templates: ARRAY [TRAFFIC_BUILDING]
			-- Building templates

	mark_occupied is
			-- Mark all cells of the grid that are already occupied by a map item.
		local
			poly_points: DS_ARRAYED_LIST [TRAFFIC_COORDINATE]
			poly_point: TRAFFIC_COORDINATE
			i,j:INTEGER
			places: TRAFFIC_EVENT_HASH_TABLE[TRAFFIC_PLACE,STRING_8]
		do
			-- Mark cells for each of the line sections
			from
				i:=1
			until
				i > map.line_sections.count
			loop
				-- traverse each poly point of a line section
				poly_points := map.line_sections.item (i).polypoints
				from
					j:=2
					poly_point := poly_points.item (1)
				until
					j > poly_points.count
				loop
					grid.mark_line (poly_point, poly_points.item (j), line_width, True)
					poly_point := poly_points.item (j)
					j:=j+1
				end
				i :=i+1
			end
			-- Mark cells for each of the places
			places:=map.places
			from
				places.start
			until
				places.after
			loop
				if places.item_for_iteration.width > 0 and places.item_for_iteration.breadth > 0 then
					grid.mark_rectangle (places.item_for_iteration.position, places.item_for_iteration.width, places.item_for_iteration.breadth, True)
				end
				places.forth
			end
		end

--	place_buildings (a_density: INTEGER) is
--			-- place buildings on map. buildings are first placed along the lines on the map. Then they're placed randomly on the map.
--		require
--			a_density_not_1_2_or_3: a_density /= 1 or a_density /= 2 or a_density /= 3
--		local
--			i, nr_of_templates, buildings_nr:INTEGER
----			randomizer: RANDOM
--			t: C_DATE
--		do
--			--initialize locals
--			buildings_nr := 35
----			nr_of_templates := buildings_representation.building_factory.count

--			-- add buildings along all lines
--			io.putstring ("- Placing buildings along lines...")
--			io.new_line
----			add_buildings_along_lines


--			-- add buildings randomly on map
--			io.putstring ("- Placing buildings on random positions on map...")
--			io.new_line


--				-- add a few business skyskrapers (template 4) to center of map
--				add_buildings_randomly (a_density*buildings_nr, map.radius/2, 3)
--				add_buildings_randomly (a_density*buildings_nr, map.radius/2, 3)


--				-- add other types of buildings on random positions on map
--				-- template 1: housing skyskraper, template 2: brown house, template 3: blue house, template 4: business skyskraper.
--				from
--					i := 1
--				until
--					i > 3--buildings_representation.building_factory.count
--				loop
----					t.update
----					random.set_seed (t.millisecond_now)
--					add_buildings_randomly (a_density * buildings_nr, map.radius, i)
--					i := i + 1
--				end
--		end




--	add_buildings_randomly (n:INTEGER; size_of_plane:DOUBLE; a_template:INTEGER) is
--			-- Add `n' buildings of type a_template to map area defined by size_of_plane.
--		require
--			n_not_negative: n >= 0
----			size_of_plane <= Plane_size
--			n_smaller_max_iterations: n <=  1000
--		local
--			local_x_coord, local_y_coord: DOUBLE -- cooridnates of the building center
--			nr_buildings_placed, j: INTEGER
--			building: TRAFFIC_BUILDING
--			p1,p2,p3,p4,center: EM_VECTOR_2D
--			collision_poly: EM_POLYGON_CONVEX_COLLIDABLE
--			poly_points: DS_LINKED_LIST[EM_VECTOR_2D]
--			w,b: DOUBLE
--			point_randomizer: TRAFFIC_POINT_RANDOMIZER
--		do
--			-- set maximum number of iterations to ensure termination
--			nr_buildings_placed := 0
--			w := templates.item (a_template).width -- buildings_representation.width_of_template (a_template)
--			b := templates.item (a_template).depth --buildings_representation.breadth_of_template (a_template)
--			create point_randomizer.make (map.center, map.radius)

--			-- iterate to get different random values of positions on map
--			from
--				j := 1
--			until
--				nr_buildings_placed > n  or  j > max_iterations
--			loop
--				point_randomizer.generate_point_array (1)
--				center := point_randomizer.last_array.item (1)

--				-- Check for collision with lines and other buildings
--				if	not grid.has_rectangle_collision (center, w, b) then
--					building := templates.item (a_template).twin
--					building.set_center (center)
--					last_buildings.force_last (building)
--					grid.mark_rectangle (center, w, b, True)
--					nr_buildings_placed := nr_buildings_placed + 1
--				end
--				-- we need two random j's per round
--				j := j + 2
--			end
--		end


--	mark_grid_cells_for_line_section (p0, p1: EM_VECTOR_2D; a_line_width: DOUBLE) is
--    		-- mark boolean_grid cells along the line from p0 to p1 to true using a standard line drawing Algorithm.
--    	local
--    	x0_local, y0_local, x1_local, y1_local: INTEGER
--        dx,dy: DOUBLE
--        m, b: DOUBLE
--		do
--			x0_local := grid_coordinate (p0.x)
--			y0_local := grid_coordinate (p0.y)
--			x1_local := grid_coordinate (p1.x)
--			y1_local := grid_coordinate (p1.y)
--			dy := p1.y - p0.y
--			dx := p1.x - p0.x
--			mark_grid_cells_for_quadratic_area (x0_local, y0_local, a_line_width)

--			if dx.abs > dy.abs then
--            	m := dy/dx					-- compute slope
--            	b := p0.y - m*p0.x
--	            	if dx < 0 then
--	            		dx := -1.0
--	            	else
--	            		dx := 1.0
--	            	end
--            	from
--            	until
--            		x0_local = x1_local
--            	loop
--            		x0_local := x0_local + dx.rounded
--            		y0_local := grid_coordinate (m*gl_coordinate(x0_local) + b)
--       				mark_grid_cells_for_quadratic_area (x0_local, y0_local,a_line_width)

--		        end
--            else
--            	if not (dy = 0) then
--	            	m := dx/dy					-- compute slope
--	            	b := p0.x - m*p0.y
--		            	if dy < 0 then
--		            		dy := -1.0
--		            	else
--		            		dy := 1.0
--		            	end
--	            	from
--	            	until
--	            		y0_local = y1_local
--	            	loop
--	            		y0_local := y0_local + dy.rounded
--	            		x0_local := grid_coordinate (m*gl_coordinate(y0_local) + b)
--	            		mark_grid_cells_for_quadratic_area (x0_local, y0_local,a_line_width)
--	            	end
--				end
--        	end
--   		 end


--	mark_grid_cells_for_rectangular_area (a_center:EM_VECTOR_2D; a_width, a_breadth:DOUBLE) is
--			-- mark boolean_grid cells within rectangular area to true.
--		local
--			nr_cells_in_x_direction:INTEGER
--			nr_cells_in_y_direction:INTEGER
--			i,j,k,l: INTEGER
--		do
----			nr_cells_in_x_direction := (a_width/(Plane_size/Grid_size)).ceiling
----			nr_cells_in_y_direction := (a_breadth/(Plane_size/Grid_size)).ceiling
--			boolean_grid.put (True, grid_coordinate (a_center.x), grid_coordinate (a_center.y))
--			from
--				i := grid_coordinate (a_center.x) - (nr_cells_in_x_direction/2).floor
--				j := grid_coordinate (a_center.x) + (nr_cells_in_x_direction/2).floor
--			until
--				i > j
--			loop
--				from
--					k := grid_coordinate (a_center.y) - (nr_cells_in_y_direction/2).floor
--					l := grid_coordinate (a_center.y) + (nr_cells_in_y_direction/2).floor
--				until
--					k > l
--				loop
--					if 1 <= i and then i <= Grid_size and then 1 <= k and then k <= Grid_size then
--						boolean_grid.put (True, i , k)
--					end
--					k := k + 1
--				end
--				i := i + 1
--			end
--		end

--	rectangular_area_has_collision_with_grid (a_center:EM_VECTOR_2D; a_width, a_breadth:DOUBLE):BOOLEAN is
--			-- mark boolean_grid cells within rectangular area to true.
--		local
--			nr_cells_in_x_direction:INTEGER
--			nr_cells_in_y_direction:INTEGER
--			i,j,k,l: INTEGER
--			res: BOOLEAN
--		do
--			res:= False
----			nr_cells_in_x_direction := (a_width/(Plane_size/Grid_size)).ceiling
----			nr_cells_in_y_direction := (a_breadth/(Plane_size/Grid_size)).ceiling
--			if boolean_grid[grid_coordinate (a_center.x), grid_coordinate (a_center.y)] then
--				res:= True
--			end
--			from
--				i := grid_coordinate (a_center.x) - (nr_cells_in_x_direction/2).floor
--				j := grid_coordinate (a_center.x) + (nr_cells_in_x_direction/2).floor
--			until
--				i > j or res
--			loop
--				from
--					k := grid_coordinate (a_center.y) - (nr_cells_in_y_direction/2).floor
--					l := grid_coordinate (a_center.y) + (nr_cells_in_y_direction/2).floor
--				until
--					k > l or res
--				loop
--					if 1 <= i and then i <= Grid_size and then 1 <= k and then k <= Grid_size then
--						if boolean_grid [i, k] then
--							res := True
--						end
--					else
--						res:= True   -- building not completely on plane
--					end
--					k := k + 1
--				end
--				i := i + 1
--			end
--			Result := res
--		end


--	mark_grid_cells_for_quadratic_area (grid_x, grid_y:INTEGER; a_width:DOUBLE) is
--			-- mark boolean_grid cells within quadratic area with center at (grid_x, grid_y) to true.
--		local
--			nr_cells_to_cover_area: INTEGER
--			start_x, end_x,start_y,end_y:INTEGER
--		do
--			if 1 <= grid_x and grid_x <= Grid_size and 1 <= grid_y and grid_y <= Grid_size then
--				boolean_grid.put (True, grid_x, grid_y)
--			end
--			if  a_width > 0 then
----				nr_cells_to_cover_area := (a_width/(Plane_size/Grid_size)).ceiling
--				from
--					start_x := grid_x - (nr_cells_to_cover_area/2).floor
--					end_x := grid_x + (nr_cells_to_cover_area/2).floor
--				until
--					start_x > end_x
--				loop
--					from
--						start_y := grid_y - (nr_cells_to_cover_area/2).floor
--						end_y := grid_y + (nr_cells_to_cover_area/2).floor
--					until
--						start_y > end_y
--					loop
--						if 1 <= start_x and start_x <= Grid_size and 1 <= start_y and start_y <= Grid_size then
--							boolean_grid.put (True, start_x , start_y)
--						end
--						start_y := start_y + 1
--					end
--					start_x := start_x + 1
--				end
--			end
--		end




--	quadratic_area_has_collision_with_grid (a_center: EM_VECTOR_2D; a_diagonal:DOUBLE): BOOLEAN is
--			-- is a part of the quadratic area described by a_center and a_diagonal on an occupied grid cell?
--		local
--			nr_cells_to_cover_diagonal:INTEGER
--			i,j,k,l: INTEGER
--			res: BOOLEAN
--		do
--			res := False
----			nr_cells_to_cover_diagonal := (a_diagonal/(Plane_size/Grid_size)).ceiling
--			if boolean_grid [grid_coordinate (a_center.x), grid_coordinate (a_center.y)] then
--				res := True
--			end
--			from
--				i := grid_coordinate (a_center.x) - (nr_cells_to_cover_diagonal/2).floor
--				j := grid_coordinate (a_center.x) + (nr_cells_to_cover_diagonal/2).floor
--			until
--				i > j or res
--			loop
--				from
--					k := grid_coordinate (a_center.y) - (nr_cells_to_cover_diagonal/2).floor
--					l := grid_coordinate (a_center.y) + (nr_cells_to_cover_diagonal/2).floor
--				until
--					k > l or res
--				loop
--					if 1 <= i and i <= Grid_size and 1 <= k and k <= Grid_size then
--						if boolean_grid [i, k] then
--							res := True
--						end
--					else
--						res := True  -- building not completely on plane
--					end
--					k := k + 1
--				end
--				i := i + 1
--			end
--			Result := res
--		end



--	grid_coordinate (a_gl_coord: DOUBLE):INTEGER is
--			-- upper edge of the grid cell in x or y direction, in which a_gl_coord lies. depends on Grid_size.
--		do
----			Result := ((a_gl_coord + Plane_size/2)/ (Plane_size / Grid_size)).ceiling
--			-- if a_coord_value is not on the plane return closest grid value
----			if a_gl_coord >= Plane_size/2 then
----				Result := Grid_size
----			end
----			if a_gl_coord <= -Plane_size/2 then
----				Result := 1
----			end
--			ensure
--				grid_coord_valid: Result >= 1 and Result <= Grid_size
--		end

--	gl_coordinate (a_grid_coord: INTEGER): DOUBLE is
--			-- gl coordinate of the center of the cell's x or y component, which is described by a_grid_coord.
--		require
--			grid_coord_valid: a_grid_coord >= 1 and a_grid_coord <= Grid_size
--		do
----			Result := a_grid_coord * Plane_size / Grid_size - Plane_size/2 - (Plane_size/Grid_size)/2
--		ensure
----			gl_coord_valid: Result >= -Plane_size/2 and Result <= Plane_size/2
--		end

invariant

	map_exists: map /= Void
	random_exists: random /= Void

end
