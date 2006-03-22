indexing
	description: "Object that represents traffic buildings"
	author: "Fabian Wüest"
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_BUILDING_REPRESENTATION

inherit
	EM_CONSTANTS
		 export {NONE} all end
	
	GL_FUNCTIONS
		export {NONE} all end	
		
	GLU_FUNCTIONS
		export {NONE} all end
	
	TRAFFIC_3D_CONSTANTS
		export {NONE} all end
	
	MATH_CONST
		export {NONE} all end
		
	DOUBLE_MATH
		export {NONE} all end

creation
	make

feature -- Initialization

	make is
			-- Create a new object and set the representation method for the factory
		do
			create centre.make_xyz (0,0,0)
--			create building_factory.make(agent representation)
			create building_factory.make
			create buildings.make (1)
			create wall_color.make_xyz (0.5,0.5,0.5)
			create roof_color.make_xyz (1.0,0,0)
			create randomizer.set_seed (42)
			create angle_randomizer.set_seed(45)
			create buildings_polygons.make (1)
			id_counter := 1
			building_factory.add_building_type (agent create_building_type, building_type)
			building_factory.add_gauger(agent decide_building_type, decision_type)
			building_factory.take_decision(decision_type)
		end
		
feature	-- Drawing

	draw is
			-- Draw all buildings.
		
		local				
			i:INTEGER
		do
			if not (buildings = void and number_of_buildings <= 0) then
				from
					i := 1
				until
					i > number_of_buildings
				loop
					buildings.i_th(i).draw
					i := i+1
				end
			end
		end
		
		
	highlight_building(a_building: TRAFFIC_BUILDING) is
			-- highlight `a_building'
		
		require
			building_valid: a_building /= void
		local
			temp: EM_3D_OBJECT
		do
			-- set color to highlighted values
			wall_color.set_xyz (1.0,1.0,0)
			roof_color.set_xyz (0,1.0,1.0)
			-- display list is changed
			building_factory.take_decision (decision_type)
			
			-- creat new temporary building with same attributes as a_building
			temp := building_factory.create_object
			temp.set_scale (a_building.width,a_building.height,a_building.breadth)
			temp.set_rotation (0,a_building.angle,0)
			temp.set_origin (a_building.center.x, 0, a_building.center.y)
			
			-- replace a_building with temporary building, so that this is drawn instead
			buildings.go_i_th (a_building.id)
			buildings.replace (temp)
			
			-- set color back to normal values
			wall_color.set_xyz (0.5,0.5,0.5)
			roof_color.set_xyz (1.0,0,0)
--			building_factory.changed
			building_factory.take_decision (decision_type)
		end
		
		
	un_highlight_building(a_building: TRAFFIC_BUILDING) is
			-- unhighlight `a_building'
		
		require
			building_valid: a_building /= void
		local
			temp: EM_3D_OBJECT
		do
			-- creat new temporary building with same attributes as a_building
			temp := building_factory.create_object
			temp.set_scale (a_building.width, a_building.height, a_building.breadth)
			temp.set_rotation (0, a_building.angle, 0)
			temp.set_origin (a_building.center.x, 0, a_building.center.y)
			
			-- replace a_building with temporary building, so that this is drawn instead
			buildings.go_i_th (a_building.id)
			buildings.replace (temp)
		end

		
feature -- Options

	add_building (a_building: TRAFFIC_BUILDING) is
			-- add `a_building' to representation
		
		require
			building_valid: a_building /= Void
		local
			building: EM_3D_OBJECT
		do
			building := building_factory.create_object
			building.set_scale (a_building.width, a_building.height, a_building.breadth)
			building.set_rotation (0, a_building.angle, 0)
			building.set_origin (a_building.center.x, 0, a_building.center.y)
			
			a_building.set_id(id_counter)
			id_counter := id_counter + 1
			buildings.force (building)
			map.add_building (a_building)
			number_of_buildings := number_of_buildings + 1
			
		end
		
	add_randomly (n: INTEGER) is
			-- Randomly add buildings to the list of buildings.
		
		require
			n_not_negative: n >= 0
		local
			x_coord, y_coord: DOUBLE -- cooridnates of the building center 
			i, j: INTEGER
			angle: DOUBLE -- random number between -45 and 45
			stretch_factor_x, stretch_factor_y: DOUBLE
			building: TRAFFIC_BUILDING
			poly_points: DS_LINKED_LIST[EM_VECTOR_2D]
			old_number: INTEGER
			collision_poly: EM_POLYGON_CONVEX_COLLIDABLE
			p1,p2,p3,p4: EM_VECTOR_2D
			center: EM_VECTOR_2D
			taken: BOOLEAN
		do
			old_number := buildings.count
			
			-- set stretch factor
			stretch_factor_x := .25
			stretch_factor_y := .25
		
			taken:=false
			from
				i := buildings.count + 1
				j := 1
			until
				i > (n + old_number)
			loop
				-- calculate center of building
				x_coord := centre.x - (plane_size/2) + randomizer.double_i_th (j)*plane_size
				y_coord := centre.z - (plane_size/2) + randomizer.double_i_th (j+1)*plane_size
				create center.make (x_coord, y_coord)
				
				-- calculate angle of building
				angle := angle_randomizer.double_i_th(j)*-90+45
		
				-- create the four corners
				create p1.make (x_coord+0.5*stretch_factor_x, y_coord+0.5*stretch_factor_y)
				create p2.make (x_coord+0.5*stretch_factor_x, y_coord-0.5*stretch_factor_y)
				create p3.make (x_coord-0.5*stretch_factor_x, y_coord-0.5*stretch_factor_y)
				create p4.make (x_coord-0.5*stretch_factor_x, y_coord+0.5*stretch_factor_y)
				
				-- rotate the building
				p1:=p1.rotation (center,-angle*pi/180)
				p2:=p2.rotation (center,-angle*pi/180)
				p3:=p3.rotation (center,-angle*pi/180)
				p4:=p4.rotation (center,-angle*pi/180)
				
				-- Check for collision with lines and other buildings
				create poly_points.make
				poly_points.force (p1, 1)
				poly_points.force (p2, 2)
				poly_points.force (p3, 3)
				poly_points.force (p4, 4)
				create collision_poly.make_from_absolute_list (create {EM_VECTOR_2D}.make (x_coord, y_coord), poly_points)
				
				if not has_collision (collision_poly) then
										
					-- create traffic building and add it to map
					create building.make(p1, p2, p3, p4, 0.25, "building " + id_counter.out)
					building.set_angle (angle)
					add_building (building)
					i := i + 1
				end
				-- we need to random j's per round
				j := j + 2
			end
			
		end
		
	add_along_lines is
			-- Adds buildings along tram lines
		
		local
			line_sections:ARRAYED_LIST [TRAFFIC_LINE_SECTION]
			line_section: TRAFFIC_LINE_SECTION
			building: TRAFFIC_BUILDING
			temp_destination: EM_VECTOR_2D
			gl_origin: EM_VECTOR_2D
			p1,p2,p3,p4: EM_VECTOR_2D
			angle: DOUBLE
			building_height: DOUBLE
			collision_poly: EM_POLYGON_CONVEX_COLLIDABLE
			poly_points: DS_LINKED_LIST[EM_VECTOR_2D]
			i : INTEGER
			start_point, end_point: EM_VECTOR_2D
			temp: EM_VECTOR_2D
		do	
			building_height := 0.5
			create start_point.make(0,0)
			create end_point.make(0,0)
			line_sections:=map.line_sections
			
			-- add buildings along every line section
			from
				line_sections.start
				--line_sections.forth
			until
				line_sections.after
				--line_sections.index > line_sections.count
			loop
				line_section := line_sections.item
				-- railways are not taken into account
				if not line_section.type.name.is_equal ("rail") then
					from
						i := 1
					until
						i+1 > line_section.polypoints.count
					loop
						--check if linesection is vertical
						if line_section.polypoints.i_th(i+1).x = line_section.polypoints.i_th(i).x then
							temp_destination := map_to_gl_coords(line_section.polypoints.i_th(i+1))
							gl_origin := map_to_gl_coords (line_section.polypoints.i_th(i))
							from 
								start_point.set_y (gl_origin.y-0.5)
								start_point.set_x (gl_origin.x)
								if start_point.y < temp_destination.y then
									temp:=start_point
									start_point:=temp_destination
									temp_destination:=temp
								end
								end_point.set_y (start_point.y-0.5)
								end_point.set_x(start_point.x)
							until
								end_point.y<= temp_destination.y
							loop	
								--buildings on the right hand side of the line
								create p1.make (start_point.x-0.25, start_point.y)
								create p2.make (end_point.x-0.25, end_point.y)
								create p3.make (p2.x-0.5,p2.y)
								create p4.make (p1.x-0.5,p1.y)
								create building.make (p1,p2,p3,p4, building_height, "building " + id_counter.out)
								building.set_angle (0)
								create poly_points.make
								poly_points.force (p1, 1)
								poly_points.force (p2, 2)
								poly_points.force (p3, 3)
								poly_points.force (p4, 4)
								create collision_poly.make_from_absolute_list (building.center, poly_points)
								if not has_collision (collision_poly) then
									add_building (building)
									buildings_polygons.extend(collision_poly)
								end
								
								--builiding on the left hand sinde of the line
								create p4.make (start_point.x+0.25, start_point.y)
								create p3.make (end_point.x+0.25, end_point.y)
								create p2.make (p3.x+0.5,p3.y)
								create p1.make (p4.x+0.5,p4.y)
								create building.make (p1,p2,p3,p4, building_height, "building " + id_counter.out)
								building.set_angle (0)
								create poly_points.make
								poly_points.force (p1, 1)
								poly_points.force (p2, 2)
								poly_points.force (p3, 3)
								poly_points.force (p4, 4)
								create collision_poly.make_from_absolute_list (building.center, poly_points)
								if not has_collision (collision_poly) then
									add_building (building)
									buildings_polygons.extend(collision_poly)
								end
								start_point.set_y (end_point.y-0.01)
								end_point.set_y (end_point.y-0.51)
							end
						else
							-- linessection is not vertical
							angle:= arc_tangent((line_section.polypoints.i_th (i+1).y-line_section.polypoints.i_th (i).y)/(line_section.polypoints.i_th (i+1).x-line_section.polypoints.i_th (i).x))
							if angle*180/pi>-70 and angle*180/pi<70 then
								
								temp_destination:=map_to_gl_coords(line_section.polypoints.i_th(i+1).rotation (line_section.polypoints.i_th(i), -angle))
								gl_origin:=map_to_gl_coords (line_section.polypoints.i_th(i))
								
								from 
									start_point.set_y (gl_origin.y)
									start_point.set_x (gl_origin.x-0.5)
									if start_point.x < temp_destination.x then
										temp:=start_point
										start_point:=temp_destination
										temp_destination:=temp
									end
									end_point.set_y (start_point.y)
									end_point.set_x(start_point.x-0.5)
								until
									end_point.x<= temp_destination.x
								loop	
									--building above the line
									create p2.make (start_point.x,start_point.y+0.25)
									create p1.make (p2.x,p2.y+0.5)
									create p3.make (end_point.x,end_point.y+0.25)
									create p4.make (p3.x,p3.y+0.5)
									p1:= p1.rotation (gl_origin, -angle)
									p2:= p2.rotation (gl_origin, -angle)
									p3:= p3.rotation (gl_origin, -angle)
									p4:= p4.rotation (gl_origin, -angle)
									create building.make (p1,p2,p3,p4, building_height, "building " + id_counter.out)
									building.set_angle (angle*180/pi)
									create poly_points.make
									poly_points.force (p1, 1)
									poly_points.force (p2, 2)
									poly_points.force (p3, 3)
									poly_points.force (p4, 4)
									create collision_poly.make_from_absolute_list (building.center, poly_points)
									if not has_collision (collision_poly) then
										add_building (building)
										buildings_polygons.extend(collision_poly)
									end
									
									--builiding underneath the line
									create p1.make (start_point.x,start_point.y-0.25)
									create p2.make (p1.x,p1.y-0.5)
									create p4.make (end_point.x,end_point.y-0.25)
									create p3.make(p4.x,p4.y-0.5)
									p1:= p1.rotation (gl_origin, -angle)
									p2:= p2.rotation (gl_origin, -angle)
									p3:= p3.rotation (gl_origin, -angle)
									p4:= p4.rotation (gl_origin, -angle)
									create building.make (p1,p2,p3,p4, building_height, "building " + id_counter.out)
									building.set_angle (angle*180/pi)
									create poly_points.make
									poly_points.force (p1, 1)
									poly_points.force (p2, 2)
									poly_points.force (p3, 3)
									poly_points.force (p4, 4)
									create collision_poly.make_from_absolute_list (building.center, poly_points)
									if not has_collision (collision_poly) then
										add_building (building)
										buildings_polygons.extend(collision_poly)
									end
									start_point.set_x (end_point.x-0.01)
									end_point.set_x (end_point.x-0.51)
								end
							end
						end
						i:=i+1
					end		
				end	
				-- we need only every second section since there is one section for every direction
				line_sections.forth
				line_sections.forth				
			end
		end			
		
		
	delete_buildings is
			-- Delete buildings from representation.
		do
			buildings.wipe_out
			number_of_buildings:= 0
			buildings_polygons.wipe_out
			id_counter:=1
			if map /= void then
				map.delete_buildings
			end
		end
		
	set_building_number (n: INTEGER) is
			-- Set the number of buildings that are shown.
		require
			n_valid: n >= 0
		do
		if n > buildings.count then
			add_randomly (n - buildings.count)
			number_of_buildings := n
		else
			number_of_buildings := n
		end
		ensure
			number_of_buildings = n
			buildings.count >= number_of_buildings
		end
		
	set_map (a_map: TRAFFIC_MAP) is
			-- set map to `a_map'
		
		require 
			map_exists: a_map /= Void
		do
			map := a_map
		ensure
			map_set: map = a_map
		end		
		
		
feature -- Collsion setting		
			
	set_collision_polygons(some_polygons: ARRAYED_LIST[EM_POLYGON_CONVEX_COLLIDABLE]) is
			-- set the collision_polygons
		do
			traffic_lines_polygons := some_polygons
		ensure
			traffic_lines_polygons = some_polygons
		end
	
	traffic_lines_polygons: ARRAYED_LIST[EM_POLYGON_CONVEX_COLLIDABLE]
			-- Traffic lines collision polygons
	
	buildings_polygons: ARRAYED_LIST [EM_POLYGON_CONVEX_COLLIDABLE]
			-- Building collision polygons

feature {NONE} -- Decision features
	
	create_building_type is
		-- Create a building.
	
	do
		--Front			
		gl_begin(Em_gl_polygon)
			gl_color3dv(wall_color.pointer)
			gl_normal3b(0,0,1)
			gl_vertex3d(0.5,0,-0.5)
			gl_vertex3d(-0.5,0,-0.5)
			gl_vertex3d(-0.5,1,-0.5)
			gl_vertex3d(0,1.25,-0.5)
			gl_vertex3d(0.5,1,-0.5)
		gl_end
		
		--Back	
		gl_begin(Em_gl_polygon)
			gl_normal3b(0,0,-1)
			gl_vertex3d(0.5,0,0.5)
			gl_vertex3d(-0.5,0,0.5)
			gl_vertex3d(-0.5,1,0.5)
			gl_vertex3d(0,1.25,0.5)
			gl_vertex3d(0.5,1,0.5)
		gl_end
		
		gl_begin(Em_gl_quads)
			
			--Left	
			gl_normal3b(1,0,0)
			gl_vertex3d(0.5,0,-0.5)				
			gl_vertex3d(0.5,1,-0.5)
			gl_vertex3d(0.5,1,0.5)				
			gl_vertex3d(0.5,0,0.5)

			--Right
			gl_normal3b(-1,0,0)
			gl_vertex3d(-0.5,0,-0.5)				
			gl_vertex3d(-0.5,1,-0.5)
			gl_vertex3d(-0.5,1,0.5)				
			gl_vertex3d(-0.5,0,0.5)
			
			--Roof right
			gl_color3dv(roof_color.pointer)
			gl_normal3d(-0.5,1,0)
			gl_vertex3d(-0.5,1,-0.5)	
			gl_vertex3d(-0.5,1,0.5)
			gl_vertex3d(0,1.25,0.5)
			gl_vertex3d(0,1.25,-0.5)
			
			-- Roof left
			gl_normal3d(0.5,1,0)
			gl_vertex3d(0.5,1,-0.5)	
			gl_vertex3d(0,1.25,-0.5)
			gl_vertex3d(0,1.25,0.5)
			gl_vertex3d(0.5,1,0.5)
			
		gl_end		
		
	end 	
	
	decide_building_type: STRING is
			-- decide which type of place is chosen.
		do
			Result := building_type
		end

feature {NONE} -- Decision attributes

	building_type: STRING is "building_place"
	 
	decision_type: STRING is "standard"
			
feature {NONE} -- Attributes

	number_of_buildings: INTEGER
			-- Count of buildings in the representation
	
	randomizer: RANDOM
			-- Randomizer for building center
	
	angle_randomizer: RANDOM
			-- Randomizer for angle

	buildings: ARRAYED_LIST [EM_3D_OBJECT]
			-- Buildings in the representation
	
	building_factory: TRAFFIC_BUILDING_FACTORY
			-- Factory for buildings

	wall_color: GL_VECTOR_3D[DOUBLE]
			-- Color of the walls
	
	roof_color: GL_VECTOR_3D[DOUBLE]
			-- Color of the roof	
		
	centre: GL_VECTOR_3D[DOUBLE]
			-- Centre of the city
	
	map: TRAFFIC_MAP
			-- Map to which the representation belongs

	id_counter: INTEGER
			-- Counter for the ids
	
feature {NONE} -- Internal methods
	
	has_collision (a_poly: EM_COLLIDABLE): BOOLEAN is
			-- Is there a collision?
		require
			a_poly /= void
		do
			-- Check if there is a collision with a line
			from
				traffic_lines_polygons.start
				Result := False
			until
				traffic_lines_polygons.after or Result
			loop
				if a_poly.collides_with (traffic_lines_polygons.item) then
					Result := True
				end
				traffic_lines_polygons.forth
			end
			
			-- Check if there is a collsion with a building
			from 
				buildings_polygons.start
			until
				buildings_polygons.after or Result
			loop
				if a_poly.collides_with (buildings_polygons.item) then
					Result := True
				end
				buildings_polygons.forth
			end
		end	
end
