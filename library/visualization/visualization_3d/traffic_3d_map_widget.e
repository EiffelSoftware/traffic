indexing
	description: "[
					map widget to display the map in 3D.
					Inherit from this class and add events to handle the map
					]"
	date: "$Date: 2006/03/02 18:57:05 $"
	revision: "$Revision: 1.26 $"

class TRAFFIC_3D_MAP_WIDGET

inherit
	
	TRAFFIC_MAP_WIDGET
	
	EM_3D_COMPONENT
		redefine
			prepare_drawing
		end
	
	TRAFFIC_3D_CONSTANTS
		export {NONE} all end
		
	MATH_CONST
		export {NONE} all end
		
	DOUBLE_MATH
		export {NONE} all end

	TRAFFIC_SHARED_TIME
	
create
	make
	
feature -- Initialisation
	make is
			-- create the map	
			do
				make_3d_component			
				
				set_keyboard_sensitive (True)
				set_field_of_view (60)
				set_width (600)
				set_height (600)
				set_min_view_distance (1.0)
				set_max_view_distance (10000)
				
				-- Variable initialization
				focus := 0.156*plane_size - 0.1875
				x_coord := 0
				y_coord := -1
				z_coord := -9
				y_rotation := 180
				x_rotation := 40
				
				-- Create the Sun Representation and Sun Light
				-- Sunlight will have em_gl_light0
				create traffic_sun_representation.make
					
				-- various creations
				create constant_light.make (em_gl_light1)
				
				plane := create_plane (create {GL_VECTOR_3D[DOUBLE]}.make_xyz (-plane_size/2,0,-plane_size/2), create {GL_VECTOR_3D[DOUBLE]}.make_xyz (plane_size/2,0,-plane_size/2), create {GL_VECTOR_3D[DOUBLE]}.make_xyz (plane_size/2,0,plane_size/2), create {GL_VECTOR_3D[DOUBLE]}.make_xyz (-plane_size/2,0,plane_size/2), create {GL_VECTOR_3D[DOUBLE]}.make_xyz (0.5,0.5,0.5))
				create_coord_system

				
				mouse_clicked_event.subscribe (agent publish_mouse_event (?))
				create building_clicked_event.default_create
				create place_clicked_event
				create traffic_buildings.make				

				create randomizer.set_seed (42) 
				create angle_randomizer.set_seed(45)
				create buildings_polygons.make (1)
				building_id:= 1				

			ensure
				sun_repr_created: traffic_sun_representation /= Void
				constant_light_created: constant_light /= Void
			end

feature -- Status report

	is_map_hidden: BOOLEAN
			-- Is the map currently hidden?
			
feature -- Status setting

	enable_map_hidden is			
			-- Set `is_map_hidden' to True.
		do
			is_map_hidden := True
		ensure
			map_hidden: is_map_hidden
		end

	disable_map_hidden is			
			-- Set `is_map_hidden' to False.
		do
			is_map_hidden := False
		ensure
			map_not_hidden: not is_map_hidden
		end
		
feature -- Drawing

	prepare_drawing is
			-- Prepare for drawing.
		do
			if Video_subsystem.video_surface.is_opengl_blitting_enabled then
				Video_subsystem.video_surface.disable_opengl_blitting
				gl_tex_envi (Em_gl_texture_env, Em_gl_texture_env_mode, Em_gl_modulate)
			end
			gl_viewport_external (x, Video_subsystem.video_surface.height - height - y, width, height)
			
			-- Reset depth buffer
			gl_clear_external (Em_gl_depth_buffer_bit)
			
			-- Opengl settings
			gl_enable_external (Em_gl_depth_test)
			
			-- Enable antialiasing
			gl_enable_external (Em_gl_line_smooth)
			gl_hint_external (Em_gl_line_smooth, Em_gl_nicest)
			
			-- Setup the projection matrix
			gl_matrix_mode_external (Em_gl_projection)
			gl_load_identity_external
			glu_perspective_external (field_of_view, width/height, 0.1, focus*max_view_distance)
			
			-- Setup the model view matrix
			gl_matrix_mode_external (Em_gl_modelview)
			gl_load_identity_external
			
			-- Clearing background color to a nice blue
			gl_clear_color_external (0.1, 0.4, 0.5,0)
			gl_clear_external (em_gl_color_buffer_bit)
			
			-- Do viewing transformations
			gl_matrix_mode_external (em_gl_modelview_matrix)
			gl_load_identity_external
			
			
			-- Light settings
			gl_enable_external (em_gl_lighting)
			gl_enable_external (em_gl_color_material)
			gl_color_material_external (Em_gl_front_and_back, Em_gl_ambient_and_diffuse)
			gl_depth_func_external (em_gl_lequal)
			gl_enable_external (em_gl_depth_test)
			
			constant_light.ambient.set_xyzt (0, 0, 0, 1)
			constant_light.specular.set_xyzt (0, 0, 0, 1)
			constant_light.diffuse.set_xyzt (1, 1, 1, 1) -- White
			constant_light.position.set_xyz (0, 1, 0)
			constant_light.apply_values
			
			gl_enable_external(Em_gl_normalize)
			
		end			
		
	draw is
			-- Draw the map.
		do
			if sun_shown then
				-- Enable Sunlight and draw Sun
				constant_light.disable
				traffic_sun_representation.enable_sunlight
				traffic_sun_representation.draw
			else
				-- Enable Constant Light
				traffic_sun_representation.disable_sunlight
				constant_light.enable
			end

			-- Draw plane
			plane.draw
			
			-- Show coordinate system
			if coordinates_shown then
				gl_call_list_external (2)
			end
			
			-- Display buildings and lines and places
			if is_map_displayed and then not is_map_hidden then
				if buildings_shown then
					if buildings_transparent then
						gl_polygon_mode_external (em_gl_front_and_back, em_gl_line)
						gl_flush_external
					end
					traffic_buildings.draw
					gl_polygon_mode_external (em_gl_front_and_back, em_gl_fill)
					gl_flush_external
				end
				traffic_lines.draw
				-- here could also be traffic_places.draw, which would show all places in black
				traffic_places.draw
				
				traffic_traveler.draw
			end
	end

feature{EM_3D_OBJECT} -- Collision
	
	collision_polygons: ARRAYED_LIST[EM_POLYGON_CONVEX_COLLIDABLE] is
			-- return all the collidables. 
			local
				all_polygons: ARRAYED_LIST[EM_POLYGON_CONVEX_COLLIDABLE]
			do
				create all_polygons.make_from_array (traffic_lines_polygons)
				all_polygons.append (traffic_places_polygons)
				Result := all_polygons
			end
		

feature{NONE}	-- Auxiliary drawing

	create_plane (p1, p2, p3, p4, rgb: GL_VECTOR_3D[DOUBLE]): EM_3D_OBJECT is
			-- OpenGL display list Nr. `1' for a plane.
		require
			p1 /= Void
			p2 /= Void
			p3 /= Void
			p4 /= Void
			rgb /= Void
		local
			displaylist: INTEGER
		do
			displaylist := gl_gen_lists (1)
			gl_new_list (displaylist, EM_GL_COMPILE)
				gl_begin_external (em_gl_quads)
					gl_color3dv_external (rgb.pointer)
					gl_normal3d_external (0,1,0)
					gl_vertex3dv_external (p1.pointer)
					gl_normal3d_external (0,1,0)
					gl_vertex3dv_external (p2.pointer)
					gl_normal3d_external (0,1,0)
					gl_vertex3dv_external (p3.pointer)
					gl_normal3d_external (0,1,0)
					gl_vertex3dv_external (p4.pointer)
				gl_flush_external
				gl_end_external
			gl_end_list
			create {EM_3D_OBJECT_DISPLAYLIST} Result.make (displaylist, (p3.x-p1.x).abs, (p3.y-p1.y).abs, (p3.z-p1.z).abs)
		end
		
	create_coord_system is
			-- OpenGL display list Nr `2' for coordinate system.
		do
			gl_new_list_external (2, em_gl_compile)
				gl_line_width_external (2)
				gl_begin_external (em_gl_lines)
					-- x axis
					gl_color3d_external (1,0,0)
					gl_vertex3d_external (0,0,0)
					gl_vertex3d_external (1,0,0)
				gl_end_external
				
				gl_begin_external (em_gl_lines)
					-- y axis
					gl_color3d_external (0,1,0)
					gl_vertex3d_external (0,0,0)
					gl_vertex3d_external (0,1,0)
				gl_end_external
				
				gl_begin_external (em_gl_lines)
					-- z axis
					gl_color3d_external (0,0,1)
					gl_vertex3d_external (0,0,0)
					gl_vertex3d_external (0,0,1)
				gl_end_external
			gl_end_list_external
		end
		
	transform_coords (screen_x, screen_y: INTEGER): GL_VECTOR_3D[DOUBLE] is
			-- Transform mouse coordinates with gl_un_project to 3D coordinates.
		local
			model_matrix, projection_matrix: ARRAY [DOUBLE]
			model_c, projection_c: ANY
			viewport: GL_VECTOR_4D [INTEGER]
			y_new: INTEGER
			result_x, result_y, result_z: DOUBLE
			temp: ANY
			window_z: REAL
		do
			if video_subsystem.video_surface.is_opengl_blitting_enabled then
				video_subsystem.video_surface.disable_opengl_blitting
			end
			
			create model_matrix.make (0, 15)
			create projection_matrix.make (0, 15)
			create viewport.make_xyzt (0, 0, 0, 0)
			model_c := model_matrix.to_c
			projection_c := projection_matrix.to_c
			
			gl_get_doublev_external (Em_gl_modelview_matrix, $model_c)
			gl_get_doublev_external (Em_gl_projection_matrix, $projection_c)
			gl_get_integerv_external (Em_gl_viewport, viewport.pointer)
			viewport.set_xyzt (x, y, width, height)
			y_new := video_subsystem.video_surface.height - screen_y -- OpenGL renders with (0,0) on bottom, mouse reports with (0,0) on top

			gl_read_pixels_external (screen_x, y_new, 1, 1, Em_gl_depth_component, Em_gl_float, $window_z)
			temp := glu_un_project_external (screen_x, y_new, window_z, $model_c, $projection_c, viewport.pointer, $result_x, $result_y, $result_z)
			
			create Result.make_xyz (result_x, result_y, result_z)
		ensure
			Result /= void
		end

feature -- Traffic map loading

	set_map (a_map: TRAFFIC_MAP) is
			-- Use `a_map' to be displayed.
		do	
			map := a_map
			if map /= Void then
				is_map_displayed := True
				number_of_buildings := 0
				traffic_buildings.delete_buildings
				create traffic_places.make (map)
				traffic_places_polygons := traffic_places.collision_polygons
				create traffic_lines.make (map)
				traffic_lines_polygons := traffic_lines.collision_polygons
				create traffic_traveler.make (map)
				number_of_passengers := 0
			
				traffic_buildings.set_map(a_map)
--				traffic_buildings.set_collision_polygons(collision_polygons)
				marked_station_changed := True	
			else				
				-- Todo remove everything
			end
		end
		
	is_map_displayed: BOOLEAN
			-- Is there a loaded map?
			
	last_loading_successful: BOOLEAN
			-- Was last map loading successful?
			
	number_of_buildings: INTEGER
			-- How many buildings should be displayed?
			
	marked_station_changed: BOOLEAN
			-- Has the marked station changed?

		
feature -- Options

	set_zoom (d: DOUBLE) is
			-- Set the focus.
		require
			d > 0
		do
			focus := d
		ensure
			focus = d
		end
		
	set_coordinates_shown (b: BOOLEAN) is
			-- Set `coordinates_shown'.
		do
			coordinates_shown := b
		ensure
			coordinates_shown = b
		end

	set_sun_shown (b: BOOLEAN) is
			-- Set `sun_shown'.
		do
			sun_shown := b
		ensure
			sun_shown = b
		end
		
	set_buildings_shown (b: BOOLEAN) is
			-- Set `buildings_shown'.
		do
			buildings_shown := b
		ensure
			buildings_shown = b
		end
	
	set_number_of_buildings (n: INTEGER) is
			-- Set `n' buildings and add them randomly to the map.
		require
			n >= 0
		do
			
			if is_map_displayed then
				if n > number_of_buildings then
					add_buildings_randomly (n - number_of_buildings)
					number_of_buildings := n
				else
					number_of_buildings := n
				end
				traffic_buildings.set_building_number (number_of_buildings)
			end
		ensure 
			number_of_buildings = n
		end
		
	set_buildings_transparent (b: BOOLEAN) is
			-- Set `buildings_transparent'.
		do
			buildings_transparent := b
		ensure
			buildings_transparent = b
		end
		
	set_lines_highlighted (b: BOOLEAN) is
			-- If `b' then all traffic lines are highlighted.
		do
			if b = True then
				traffic_lines.highlight_all_lines
			else			
				traffic_lines.unhighlight_all_lines
			end

		end
		
	set_single_line_highlighted(a_line: TRAFFIC_LINE) is
			-- a_line is highlighted
		do
			traffic_lines.highlight_single_line (a_line)
		end
		
	set_single_line_unhighlighted(a_line: TRAFFIC_LINE) is
			-- a_line is unhighlighted
		do
			traffic_lines.unhighlight_single_line (a_line)
		end		
	
	set_show_shortest_path (b: BOOLEAN) is
			-- Set `show_shortest_path'.
		do
			show_shortest_path := b
			marked_station_changed := True
		ensure
			show_shortest_path = b
		end
		
	add_buildings_randomly(n: INTEGER) is
			-- Adds randomly `n' buildings to map.		
		require
			n_not_negative: n >= 0
		local
			local_x_coord, local_y_coord: DOUBLE -- cooridnates of the building center 
			i, j: INTEGER
			angle: DOUBLE -- random number between -45 and 45
			stretch_factor_x, stretch_factor_y: DOUBLE
			building: TRAFFIC_BUILDING
			poly_points: DS_LINKED_LIST[EM_VECTOR_2D]
			old_number: INTEGER
			collision_poly: EM_POLYGON_CONVEX_COLLIDABLE
			p1,p2,p3,p4: EM_VECTOR_2D
			center: EM_VECTOR_2D
		do
			old_number := number_of_buildings
			
			-- set stretch factor
			stretch_factor_x := .25
			stretch_factor_y := .25
		
			from
				i := number_of_buildings + 1
				j := 1
			until
				i > (n + old_number)
			loop
				-- calculate center of building
				local_x_coord := - (plane_size/2) + randomizer.double_i_th (j)*plane_size
				local_y_coord := - (plane_size/2) + randomizer.double_i_th (j+1)*plane_size
				create center.make (local_x_coord, local_y_coord)
				
				-- calculate angle of building
				angle := angle_randomizer.double_i_th(j)*-90+45
		
				-- create the four corners
				create p1.make (local_x_coord+0.5*stretch_factor_x, local_y_coord+0.5*stretch_factor_y)
				create p2.make (local_x_coord+0.5*stretch_factor_x, local_y_coord-0.5*stretch_factor_y)
				create p3.make (local_x_coord-0.5*stretch_factor_x, local_y_coord-0.5*stretch_factor_y)
				create p4.make (local_x_coord-0.5*stretch_factor_x, local_y_coord+0.5*stretch_factor_y)
				
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
					create building.make(p1, p2, p3, p4, 0.25, "building " + building_id.out)
					building_id := building_id + 1
					building.set_angle (angle)
					traffic_buildings.add_building (building)
					i := i + 1
		end
				-- we need to random j's per round
				j := j + 2
			end
	
		end
	
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

	
	add_building(a_building: TRAFFIC_BUILDING) is
			-- Add `a_building' to map.
		do
			traffic_buildings.add_building (a_building)
		end
		
	delete_one_building(a_building: TRAFFIC_BUILDING) is
			-- Delete 'a_building' from map.
		do
			traffic_buildings.delete_one_building (a_building)
		end
				
	add_buildings_along_lines is	
			-- Add buildings along all lines (expect railway).

		local
			line_sections:ARRAYED_LIST [TRAFFIC_LINE_SECTION]
			line_section: TRAFFIC_LINE_SECTION
			building: TRAFFIC_BUILDING
			temp_destination: EM_VECTOR_2D -- destination rotated by line angle
			gl_origin: EM_VECTOR_2D -- origin in gl coordinates
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
								create building.make (p1,p2,p3,p4, building_height, "building " + building_id.out)
								building_id := building_id + 1
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
								create building.make (p1,p2,p3,p4, building_height, "building " + building_id.out)
								building_id := building_id + 1
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
									create building.make (p1,p2,p3,p4, building_height, "building " + building_id.out)
									building_id := building_id + 1
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
									create building.make (p1,p2,p3,p4, building_height, "building " + building_id.out)
									building_id := building_id + 1
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
			-- Delete all buildings from representation.
		do
			traffic_buildings.delete_buildings
			buildings_polygons.wipe_out
			number_of_buildings := 0
			building_id:= 1
		end
		
	
	add_traveler (a_traveler: TRAFFIC_TRAVELER) is
			-- Add a traveler to the map.
			do
				traffic_traveler.add_traveler (a_traveler, map)
			end
	
	delete_traveler (a_traveler: TRAFFIC_TRAVELER) is
			-- Remove 'a_traveler' form the map. 
			do 
				traffic_traveler.remove_specific_traveler (a_traveler)
			end
		
	
	sun_shown: BOOLEAN
			-- Should sun be displayed?
			
	coordinates_shown: BOOLEAN
			-- Should the coordinate system be displayed?
			
	buildings_shown: BOOLEAN
			-- Should the buildings be displayed?
			
	buildings_transparent: BOOLEAN
			-- Should the buildings be transparent?
			
	show_shortest_path: BOOLEAN
			-- Should the shortest path be displayed?
			
	traffic_line_ride: BOOLEAN
			-- Are you just taking a traffic line ride?
			
feature -- Mousevents

	publish_mouse_event (event: EM_MOUSEBUTTON_EVENT) is
			-- 	Event queue for clicked event.
		local
			result_vec: GL_VECTOR_3D[DOUBLE]
			clicked_point: GL_VECTOR_3D[DOUBLE]		
		do
			if map /= Void then
				result_vec := transform_coords(event.screen_x, event.screen_y)				
				create clicked_point.make_xyz (result_vec.x, result_vec.y, result_vec.z) 
				publish_building_events (clicked_point, event)
				publish_place_events (clicked_point, event)				
			end
		end
		
	publish_building_events (a_point: GL_VECTOR_3D[DOUBLE]; event: EM_MOUSEBUTTON_EVENT) is
			-- Publish mouse event if a building was clicked.
		local
			buildings: LINKED_LIST[TRAFFIC_BUILDING]
			found: BOOLEAN			
		do
			if a_point.x >=0 and a_point.z>=0 then
				buildings:= map.buildings[1]	
			elseif a_point.x<=0 and a_point.z>=0 then
				buildings:= map.buildings[2]
			elseif a_point.x>=0 and a_point.z<=0 then
				buildings:= map.buildings[3]
			else
				buildings:= map.buildings[4]
			end
			from 
				buildings.start
				found:= false
			until 
				buildings.after or found
			loop
				if buildings.item.contains_point(a_point.x, a_point.z) then
					building_clicked_event.publish([buildings.item,event])
					found:= true
				end
				buildings.forth
			end			
		end
		
	publish_place_events (a_point: GL_VECTOR_3D[DOUBLE]; event: EM_MOUSEBUTTON_EVENT) is
			-- Publish mouse event if a place was clicked.
		local
			place: TRAFFIC_PLACE
		do
			place := traffic_places.place_at_position (gl_to_map_coords (create {EM_VECTOR_2D}.make (a_point.x, a_point.z))) 
			if place /= Void then
					place_clicked_event.publish([place,event])
			end
		end
			
	building_clicked_event: EM_EVENT_CHANNEL [TUPLE [TRAFFIC_BUILDING,EM_MOUSEBUTTON_EVENT]]
			-- Event for click on building
			
	place_clicked_event: EM_EVENT_CHANNEL [TUPLE [TRAFFIC_PLACE, EM_MOUSEBUTTON_EVENT]]
			-- Event for click on place

feature -- Access

	traffic_time: TRAFFIC_TIME is
			-- Return the current simulated time object
			-- Only here for compatibility Reasons!
			-- For access to time inherit TRAFFIC_SHARED_TIME.
		obsolete
			"Inherit TRAFFIC_SHARED_TIME instead."
		do
			Result := time
		ensure
			time_set: Result = time
		end

feature {NONE} -- Attributes

	number_of_passengers: INTEGER
			-- number of passengers on the map.
	
	traveler_index: INTEGER
			-- Index such that it is unique.
	
	focus: DOUBLE
			-- Used to zoom in or out.
			
	x_coord: DOUBLE
			-- X coordinate of the viewer.
			
	y_coord: DOUBLE
			-- Y coordinate of the viewer.
			
	z_coord: DOUBLE
			-- Z coordinate of the viewer.
			
	x_rotation: DOUBLE
			-- Rotation around the x axis.
			
	y_rotation: DOUBLE
			-- Rotation around the y axis.
			
	x_translation: DOUBLE
			-- Translation of the map's origin in x direction.
			
	y_translation: DOUBLE
			-- Translation of the map's origin in y direction.
			
	highlighting_delta: DOUBLE
			-- Height difference between highlighted and normal line representation.

	building_id: INTEGER
			-- Number to specify the building name.
	
	randomizer: RANDOM
			-- Randomizer for building center
	
	angle_randomizer: RANDOM
			-- Randomizer for angle

feature -- Representations

	traffic_traveler: TRAFFIC_3D_TRAVELER_REPRESENTATION
		-- container for all travelers.
	
	traffic_lines: TRAFFIC_3D_LINE_REPRESENTATION
		-- container for the lines
		
	traffic_places: TRAFFIC_3D_PLACE_REPRESENTATION
		-- container for the places.
		
	traffic_buildings: TRAFFIC_3D_BUILDING_REPRESENTATION
		-- container for the buildings.				
			
	traffic_sun_representation: TRAFFIC_3D_SUN_REPRESENTATION
		-- The Sun & Sunlight Representation

feature {NONE} -- Implementation

	traffic_lines_polygons: ARRAYED_LIST[EM_POLYGON_CONVEX_COLLIDABLE]
		-- Collision polygons to check for collisions with traffic lines.

	traffic_places_polygons: ARRAYED_LIST[EM_POLYGON_CONVEX_COLLIDABLE]
		-- Collision polygons to check for collisions with traffic places.
		
	buildings_polygons: ARRAYED_LIST [EM_POLYGON_CONVEX_COLLIDABLE]
			-- Building collision polygons
		
	constant_light: GL_LIGHT
			-- Constant white light from one direction.
			
	plane: EM_3D_OBJECT


invariant
	number_of_buildings_valid: number_of_buildings >= 0

end
