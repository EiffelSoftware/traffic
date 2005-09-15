indexing
	description: "3 dimensional map of a city"
	date: "$Date$"
	revision: "$Revision$"

class
	MAP

inherit
	
	EM_3D_COMPONENT
		redefine
			prepare_drawing
		end
		
	SHARED_CONSTANTS
		export {NONE} all end
		
	MATH_CONST
		export {NONE} all end
		
	DOUBLE_MATH
		export {NONE} all end
		
creation
	
	make
	
feature -- Initialization

	make is
			-- Creation procedure
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
			y_rotation := 180  -- -35
			x_rotation := 40  -- -80
			sun_angle := 0
			
			-- Various creations
			create traffic_line_factory
			create_plane (create {GL_VECTOR_3D[DOUBLE]}.make_xyz (-plane_size/2,0,-plane_size/2), create {GL_VECTOR_3D[DOUBLE]}.make_xyz (plane_size/2,0,-plane_size/2), create {GL_VECTOR_3D[DOUBLE]}.make_xyz (plane_size/2,0,plane_size/2), create {GL_VECTOR_3D[DOUBLE]}.make_xyz (-plane_size/2,0,plane_size/2), create {GL_VECTOR_3D[DOUBLE]}.make_xyz (0.5,0.5,0.5))
			create_coord_system
			create sun_light.make (em_gl_light0)
			create constant_light.make (em_gl_light1)
			
			-- User Interaction
			mouse_dragged_event.subscribe (agent mouse_drag (?))
			mouse_wheel_down_event.subscribe (agent wheel_down)
			mouse_wheel_up_event.subscribe (agent wheel_up)
			key_down_event.subscribe (agent key_down (?))
			mouse_clicked_event.subscribe (agent mouse_click)
		ensure
			traffic_line_factory /= void 
			sun_light /= void
			constant_light /= void
		end
		
feature -- Drawing
	
	prepare_drawing is
			-- Prepare for drawing.
		local
			direction: EM_VECTOR_2D
			f, t: EM_VECTOR_2D
		do
			if Video_subsystem.video_surface.gl_2d_mode then
				Video_subsystem.video_surface.gl_leave_2d
				gl_tex_envi (Em_gl_texture_env, Em_gl_texture_env_mode, Em_gl_modulate)
			end
			gl_viewport (x, Video_subsystem.video_surface.height - height - y, width, height)
			
			-- Reset depth buffer
			gl_clear (Em_gl_depth_buffer_bit)
			
			-- Opengl settings
			gl_enable (Em_gl_depth_test)
			
			-- Enable antialiasing
			gl_enable (Em_gl_line_smooth)
			gl_hint (Em_gl_line_smooth, Em_gl_nicest)
			
			-- Setup the projection matrix
			gl_matrix_mode (Em_gl_projection)
			gl_load_identity
--			glu_perspective (field_of_view, width/height, focus*min_view_distance, focus*max_view_distance)
			glu_perspective (field_of_view, width/height, 0.1, focus*max_view_distance)
			
			-- Setup the model view matrix
			gl_matrix_mode (Em_gl_modelview)
			gl_load_identity
			
			-- Clearing background color to a nice blue
			gl_clear_color (0.1, 0.4, 0.5,0)
			gl_clear (em_gl_color_buffer_bit)
			
			-- Do viewing transformations
			gl_matrix_mode (em_gl_modelview_matrix)
			gl_load_identity
--			gl_translated_external (x_coord*focus, y_coord, z_coord*focus)
--			gl_translated_external (x_translation, -y_translation, 0)
			
			-- Traffic line rides
			if show_shortest_path and then shortest_path_line /= Void and then traffic_line_ride and then marked_destination /= Void and then marked_origin /= Void and then not shortest_path_line.after then
				f := map_to_gl_coords (shortest_path_line.item.polypoints.first)
				t := map_to_gl_coords (shortest_path_line.item.polypoints.last)
				
				direction := t - f
				
				segment_position := segment_position + (direction / direction.length) * speed
--				y_rot := 180/Pi*arc_tangent (direction.y / direction.x) + 270
				
				glu_look_at_external
				(	segment_position.x - (segment_position.x/segment_position.length),
					1,
					segment_position.y - (segment_position.y/segment_position.length),
					segment_position.x + 3*(segment_position.x/segment_position.length),
					0,
					segment_position.y + 3*(segment_position.y/segment_position.length),
					0, 1, 0
				)
				
				gl_translated_external (-f.x, 0, -f.y)
				
				if (segment_position-direction).length < speed and then not shortest_path_line.after then
					shortest_path_line.forth
					position := position + direction
					segment_position.set_x (0)
					segment_position.set_y (0)
				end
			else
				-- Translation
				gl_translated_external (x_coord*focus, y_coord, z_coord*focus)
				gl_translated_external (x_translation, -y_translation, 0)
				
				-- Rotation
				gl_rotatef (x_rotation, 1, 0, 0)
				gl_rotatef (y_rotation, 0, 1, 0)
			end
			
			-- Light settings
			gl_enable (em_gl_lighting)
			gl_enable (em_gl_color_material)
			gl_color_material (Em_gl_front_and_back, Em_gl_ambient_and_diffuse)
			gl_depth_func (em_gl_lequal)
			gl_enable (em_gl_depth_test)
			
			sun_light.ambient.set_xyzt (0, 0, 0, 1)
			sun_light.specular.set_xyzt (0, 0, 0, 1)
			sun_light.diffuse.set_xyzt (1, 1, 1, 1)
			sun_light.apply_values
			
			constant_light.ambient.set_xyzt (0, 0, 0, 1)
			constant_light.specular.set_xyzt (0, 0, 0, 1)
			constant_light.diffuse.set_xyzt (1, 1, 1, 1) -- White
			constant_light.position.set_xyz (0, 1, 0)
			constant_light.apply_values
		end
		
	draw is
			-- Draw the map.
		local
			sun_pos: GL_VECTOR_3D[DOUBLE]
		do
			-- Change angle of sun
			sun_angle := sun_angle + 0.005
			if sun_angle > 5 then
				sun_angle := sun_angle - 5
			end
			
			if sun_shown then
				-- Draw sunset/sunrise differently
				if sun_angle < 1.0 or sun_angle > 5 then
					create sun_pos.make_xyz (0,0,0)
				else
					if sun_angle < 2 then
						sun_light.diffuse.set_xyzt (0.8 + 0.2*(sun_angle - 1), 0.2 + 0.6*(sun_angle - 1), 0.1 + 0.9*(sun_angle - 1), 1)
					elseif sun_angle > 4 then
						sun_light.diffuse.set_xyzt (1 - 0.2*(sun_angle - 4), 1 - 0.6*(sun_angle - 4), 1 - 0.9*(sun_angle - 4), 1)
					end
					create sun_pos.make_xyz (-sine(sun_angle), -cosine(sun_angle), 0)
				end
				sun_light.position.set_xyz (sun_pos.x, sun_pos.y, 0)
				sun_light.apply_values
				
				sun_light.enable
				constant_light.disable
				
				-- Draw "Sun"
				gl_matrix_mode (em_gl_modelview_matrix)
				gl_push_matrix
				gl_color3d (1, 1, 0)
				gl_translated (0, 8, 0)
				gl_rotated (90, 1, 0, 0)
				glu_sphere (glu_new_quadric, 1, 72, 100)
				gl_pop_matrix
			else
				sun_light.disable
				constant_light.enable
			end

			-- Draw plane
			gl_call_list (1)
			
			-- Show coordinate system
			if coordinates_shown then
				gl_call_list (2)
			end
			
			-- Display buildings and lines
			if is_map_loaded then
				if buildings_shown then
					if buildings_transparent then
						gl_polygon_mode (em_gl_front_and_back, em_gl_line)
						gl_flush
					end
					ewer.draw
					gl_polygon_mode (em_gl_front_and_back, em_gl_fill)
					gl_flush
				end
				draw_metro_lines
			end

			-- Draw marked stations
			if marked_origin /= Void then
				gl_matrix_mode (Em_gl_modelview)
				gl_push_matrix
				gl_color3d (0, 1, 0)
				gl_translated (map_to_gl_coords (marked_origin.position).x , line_height + 0.08, map_to_gl_coords (marked_origin.position).y)
				gl_rotated (90, 1, 0, 0)
				glu_disk (glu_new_quadric, 0, station_radius + 0.06, 72, 1)
				gl_pop_matrix
				gl_flush
			end
			if marked_destination /= Void then
				gl_matrix_mode (Em_gl_modelview)
				gl_push_matrix
				gl_color3d (1, 0, 0)
				gl_translated (map_to_gl_coords (marked_destination.position).x , line_height + 0.08, map_to_gl_coords (marked_destination.position).y)
				gl_rotated (90, 1, 0, 0)
				glu_disk (glu_new_quadric, 0, station_radius + 0.06, 72, 1)
				gl_pop_matrix
				gl_flush
			end
			
			if show_shortest_path and then marked_origin /= Void and then marked_destination /= Void then
				calculate_shortest_path
			end
		end
		
feature -- Shortest path

	shortest_path_line: TRAFFIC_LINE
			-- Artificial traffic line for the shortest path
	
	shortest_path_line_representation: EM_3D_OBJECT
			-- Graphical representation of `shortest_path_line'
	
	marked_station_changed: BOOLEAN
			-- Has the marked station changed?
	
	calculate_shortest_path is
			-- Calculate the shortest path.
		local
			line: TRAFFIC_LINE
			i: INTEGER
			origin, destination: TRAFFIC_PLACE
			new_segments: LINKED_LIST[TRAFFIC_LINE_SECTION]
		do
			if marked_station_changed then
				map.find_shortest_path (map.places.item (marked_origin.name), map.places.item (marked_destination.name))
				create line.make ("Shortest path", create {TRAFFIC_TYPE_WALKING}.make)
				from
					map.shortest_path.start
				until
					map.shortest_path.after
				loop
					line.force (map.shortest_path.item.label)
					map.shortest_path.forth
				end
				
				create new_segments.make
				
				if not line.is_empty and then not line.first.polypoints.first.is_equal(marked_origin.position) then
					create origin.make_with_position (marked_origin.name, marked_origin.position.x.rounded, marked_origin.position.y.rounded)
					create destination.make_with_position (line.first.origin.name, line.first.polypoints.first.x.rounded, line.first.polypoints.first.y.rounded)
					new_segments.force (create {TRAFFIC_LINE_SECTION}.make (origin, destination, create {TRAFFIC_TYPE_WALKING}.make, void))
				end
				
				if not line.is_empty and then not line.last.polypoints.last.is_equal(marked_destination.position) then
					create origin.make_with_position (line.last.destination.name, line.last.polypoints.last.x.rounded, line.last.polypoints.last.y.rounded)
					create destination.make_with_position (marked_destination.name, marked_destination.position.x.rounded, marked_destination.position.y.rounded)
					new_segments.force (create {TRAFFIC_LINE_SECTION}.make (origin, destination, create {TRAFFIC_TYPE_WALKING}.make, void))
				end
				
				from i := 1; line.start
				until i >= line.count
				loop
					if not line.i_th (i).polypoints.last.is_equal(line.i_th(i+1).polypoints.first) then
						create origin.make_with_position (line.i_th (i).destination.name, line.i_th (i).polypoints.last.x.rounded, line.i_th (i).polypoints.last.y.rounded)
						create destination.make_with_position (line.i_th (i+1).origin.name, line.i_th (i+1).polypoints.first.x.rounded, line.i_th (i+1).polypoints.first.y.rounded)
						new_segments.force (create {TRAFFIC_LINE_SECTION}.make (origin, destination, create {TRAFFIC_TYPE_WALKING}.make, void))
					end
					i := i + 1
				end
				line.append (new_segments)
				shortest_path_line := line
				
				traffic_line_factory.set_line_color (create {GL_VECTOR_3D[DOUBLE]}.make_xyz (1, 1, 1))
				traffic_line_factory.set_line (line)
				shortest_path_line_representation := traffic_line_factory.create_object
				shortest_path_line_representation.set_origin (0, line_height+0.2, 0)
				marked_station_changed := false
			end
		end
		
feature {NONE} -- Traffic line rides

	position: EM_VECTOR_2D
	
	segment_position: EM_VECTOR_2D
		
feature -- Traffic map loading

	load_map (filename: STRING) is
			-- Load the map.
		require
			name_valid: filename /= void and then not filename.is_empty
		local
			map_file: TRAFFIC_MAP_FILE
		do
			create map_file.make_from_file (filename)
			map := map_file.traffic_map
			is_map_loaded := true
			number_of_buildings := 0
			create ewer.make(-plane_size/2, -plane_size/2, number_of_buildings, map)
			create_metro_line_representation
			marked_destination := void
			marked_origin := void
			shortest_path_line := void
			shortest_path_line_representation := void
			marked_station_changed := true
		ensure
			map /= void
			is_map_loaded = true
			ewer /= void
			traffic_line_objects /= void
		end
		
	is_map_loaded: BOOLEAN
			-- Has parsing already taken place?
			
	map: TRAFFIC_MAP
			-- Parsed map
			
	number_of_buildings: INTEGER
			-- How many buildings should be displayed?
			
	marked_origin: TRAFFIC_PLACE
			-- Currently marked origin
			
	marked_destination: TRAFFIC_PLACE
			-- Currently marked destination

feature -- Options

	zoom_in is
			-- Zoom in.
		do
			wheel_up
		end
	
	zoom_out is
			-- Zoom in.
		do
			wheel_down
		end
		
	set_zoom (d: DOUBLE) is
			-- Set the focus.
		require d > 0
		do
			focus := d
		ensure focus = d
		end
		
	set_coordinates_shown (b: BOOLEAN) is
			-- Set `coordinates_shown'.
		require variable_exists: b /= void
		do
			coordinates_shown := b
		ensure coordinates_shown = b
		end

	set_sun_shown (b: BOOLEAN) is
			-- Set `sun_shown'.
		require variable_exists: b /= void
		do
			sun_shown := b
		ensure sun_shown = b
		end
		
	set_buildings_shown (b: BOOLEAN) is
			-- Set `buildings_shown'.
		require variable_exists: b /= void
		do
			buildings_shown := b
		ensure buildings_shown = b
		end
	
	set_number_of_buildings (n: INTEGER) is
			-- Set `number_of_buildings'.
		require
			n >= 0
		do
			number_of_buildings := n
			if is_map_loaded then
				ewer.set_building_number (number_of_buildings)
			end
		ensure 
			number_of_buildings = n
		end
		
	set_buildings_transparent (b: BOOLEAN) is
			-- Set `buildings_transparent'.
		require variable_exists: b /= void
		do
			buildings_transparent := b
		ensure buildings_transparent = b
		end

	set_lines_highlighted (b: BOOLEAN) is
			-- If `b' then traffic lines are highlighted.
		require variable_exist: b /= void
		do
			if b then
				highlighting_delta := 2
			else 
				highlighting_delta := 0
			end
		ensure
			b implies highlighting_delta = 2
			not b implies highlighting_delta = 0
		end
	
	set_show_shortest_path (b: BOOLEAN) is
			-- Set `show_shortest_path'.
		require variable_exists: b /= void
		do
			if show_shortest_path then
				shortest_path_line := void
				shortest_path_line_representation := void
			end
			show_shortest_path := b
			marked_station_changed := true
		ensure show_shortest_path = b
		end
	
	take_traffic_line_ride is
			-- Take a traffic line ride.
		require
			shortest_path_line /= Void
		do
			traffic_line_ride := True
			shortest_path_line.start
			create position.make (0, 0)
			create segment_position.make (0, 0)
		ensure
			traffic_line_ride
			position /= Void
			segment_position /= Void
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
		
feature {NONE} -- Event handling

	wheel_down is
			-- Handle mouse wheel down event.
		do
			if focus > 3 then
				focus := focus + 1
			else
				focus := focus + 0.1
			end
		ensure
			focus_incremented: focus > old focus
		end
		
	wheel_up is
			-- Handle mouse wheel up event.
		do
			if focus > 3 then
				focus := focus - 1
			elseif focus > 0.1 then
				focus := focus - 0.1
			end
		ensure
			focus_decremented: focus > 0.1 implies focus < old focus
		end
	
	mouse_click (event: EM_MOUSEBUTTON_EVENT) is
			-- Handle mouse clicked event.
		local
			section: TRAFFIC_LINE_SECTION
			line: TRAFFIC_LINE
			lines: HASH_TABLE [TRAFFIC_LINE, STRING]
			place_x, place_z, delta_x, delta_z, delta: DOUBLE
			is_found: BOOLEAN
			result_vec: GL_VECTOR_3D[DOUBLE]
			clicked_point: GL_VECTOR_3D[DOUBLE]
		do
			if event.is_left_button then
				result_vec := transform_coords(event.screen_x, event.screen_y)				
				create clicked_point.make_xyz (result_vec.x, result_vec.y, result_vec.z)
				if map /= Void then
					
					from lines := map.lines
						lines.start
						is_found := False
					until is_found or else lines.after
					loop
						from line := lines.item_for_iteration
							line.start
						until line.after
						loop
							section := line.item
							
							-- Checking origin of section
							place_x := map_to_gl_coords (section.polypoints.first).x
							place_z := map_to_gl_coords (section.polypoints.first).y
							delta_x := place_x - clicked_point.x
							delta_z := place_z - clicked_point.z
							delta := sqrt (delta_x^2 + delta_z^2)
							if delta < station_radius then
								create marked_origin.make_with_position (section.origin.name, section.polypoints.first.x.rounded, section.polypoints.first.y.rounded)
								is_found := True
								marked_station_changed := true
							end
							
							-- Checking destination of section
							place_x := map_to_gl_coords (section.polypoints.last).x
							place_z := map_to_gl_coords (section.polypoints.last).y
							delta_x := place_x - clicked_point.x
							delta_z := place_z - clicked_point.z
							delta := sqrt (delta_x^2 + delta_z^2)
							if delta < station_radius then
								create marked_origin.make_with_position (section.destination.name, section.polypoints.last.x.rounded, section.polypoints.last.y.rounded)
								is_found := True
								marked_station_changed := true
							end
							line.forth
						end
						lines.forth
					end	
					if not is_found then
						marked_origin := Void
						marked_destination := Void
						shortest_path_line := void
						shortest_path_line_representation := void
						marked_station_changed := true
					end
				end
				
			elseif event.is_right_button then
				result_vec := transform_coords(event.screen_x, event.screen_y)				
				create clicked_point.make_xyz (result_vec.x, result_vec.y, result_vec.z)
				if map /= Void then
					from lines := map.lines
						lines.start
						is_found := False
					until is_found or else lines.after
					loop
						from line := lines.item_for_iteration
							line.start
						until line.after
						loop
							section := line.item
							
							-- Checking origin of section
							place_x := map_to_gl_coords (section.polypoints.first).x
							place_z := map_to_gl_coords (section.polypoints.first).y
							delta_x := place_x - clicked_point.x
							delta_z := place_z - clicked_point.z
							delta := sqrt (delta_x^2 + delta_z^2)
							if delta < station_radius then
								create marked_destination.make_with_position (section.origin.name, section.polypoints.first.x.rounded, section.polypoints.first.y.rounded)
								is_found := True
								marked_station_changed := true
							end
							
							-- Checking destination of section
							place_x := map_to_gl_coords (section.polypoints.last).x
							place_z := map_to_gl_coords (section.polypoints.last).y
							delta_x := place_x - clicked_point.x
							delta_z := place_z - clicked_point.z
							delta := sqrt (delta_x^2 + delta_z^2)
							if delta < station_radius then
								create marked_destination.make_with_position (section.destination.name, section.polypoints.last.x.rounded, section.polypoints.last.y.rounded)
								is_found := True
								marked_station_changed := true
							end
							line.forth
						end
						lines.forth
					end
					if not is_found then
						marked_destination := Void
						marked_origin := Void
						shortest_path_line := void
						shortest_path_line_representation := void
						marked_station_changed := true
					end
				end
			end
		end
	
	mouse_drag (event: EM_MOUSEMOTION_EVENT) is
			-- Handle mouse movement event.
		local
			start_vec, end_vec: GL_VECTOR_3D[DOUBLE]
			delta_x, delta_y, delta, mouse_delta: DOUBLE
		do
			if event.button_state_right then				
				y_rotation := y_rotation + event.x_motion
				if y_rotation <= 90 then
					y_rotation := 90
				elseif y_rotation >= 270 then
					y_rotation := 270
				end
				x_rotation := x_rotation + event.y_motion
				if x_rotation <= 15 then
					x_rotation := 15
				elseif x_rotation >= 90 then
					x_rotation := 90
				end
			elseif event.button_state_left then
				start_vec := transform_coords (event.x, event.y)
				end_vec := transform_coords (event.x + event.x_motion, event.y + event.y_motion)
				
				delta_x := end_vec.x - start_vec.x
				delta_y := end_vec.z - start_vec.z
				
				delta := sqrt (delta_x^2 + delta_y^2)
				mouse_delta := sqrt (event.x_motion^2 + event.y_motion^2)
				
				if mouse_delta > 0 and then delta/mouse_delta <= 3 and then sqrt (start_vec.x^2 + start_vec.y^2) < plane_size/2 then
					x_translation := x_translation + event.x_motion*(delta/mouse_delta)
					y_translation := y_translation + event.y_motion*(delta/mouse_delta)
				end
			end
		end
	
	key_down (event: EM_KEYBOARD_EVENT) is
			-- Handle key events.
		do
			if event.key = event.sdlk_up then
				x_rotation := x_rotation + 10
			elseif event.key = event.sdlk_down then
				x_rotation := x_rotation - 10
			elseif event.key = event.sdlk_left then
				y_rotation := y_rotation - 10
			elseif event.key = event.sdlk_right then
				y_rotation := y_rotation + 10
			elseif event.key = event.sdlk_return then
				x_coord := 0
				y_coord := -1
				z_coord := -9
				x_translation := 0
				y_translation := 0
			end
		end
		
feature {NONE} -- Auxiliary drawing features
		
	draw_metro_lines is
			-- Draw representation of metro lines.
		local 
			i: INTEGER
		do
			from i := traffic_line_objects.lower
			until i > traffic_line_objects.upper
			loop
				if highlighting_delta > 0 then
					traffic_line_objects.item(i).set_origin (0, line_height + highlighting_delta + 0.4*i, 0)
				else
					traffic_line_objects.item(i).set_origin (0, line_height, 0)
				end
				traffic_line_objects.item(i).draw
				i := i + 1
			end
			if shortest_path_line_representation /= void then
				shortest_path_line_representation.draw
			end
		end

	create_plane (p1, p2, p3, p4, rgb: GL_VECTOR_3D[DOUBLE]) is
		-- OpenGL display list Nr. `1' for a plane.
		require
			p1 /= Void
			p2 /= Void
			p3 /= Void
			p4 /= Void
			rgb /= Void
		do
			gl_new_list (1, em_gl_compile)
				gl_begin (em_gl_quads)
					gl_color3dv (rgb.pointer)
					gl_normal3d (0,1,0)
					gl_vertex3dv (p1.pointer)
					gl_normal3d (0,1,0)
					gl_vertex3dv (p2.pointer)
					gl_normal3d (0,1,0)
					gl_vertex3dv (p3.pointer)
					gl_normal3d (0,1,0)
					gl_vertex3dv (p4.pointer)
				gl_end
			gl_end_list
		end
		
	create_coord_system is
			-- OpenGL display list Nr `2' for coordinate system.
		do
			gl_new_list (2, em_gl_compile)
				gl_line_width (2)
				gl_begin(em_gl_lines)
					-- x axis
					gl_color3d (1,0,0)
					gl_vertex3d (0,0,0)
					gl_vertex3d(1,0,0)
				gl_end
				
				gl_begin(em_gl_lines)
					-- y axis
					gl_color3d (0,1,0)
					gl_vertex3d (0,0,0)
					gl_vertex3d(0,1,0)
				gl_end
				
				gl_begin(em_gl_lines)
					-- z axis
					gl_color3d (0,0,1)
					gl_vertex3d (0,0,0)
					gl_vertex3d(0,0,1)
				gl_end
			gl_end_list
		end
		
	create_metro_line_representation is
			-- Create the objects necessary for displaying the metro lines.
		require
			traffic_line_factory /= Void
		local
			lines: HASH_TABLE [TRAFFIC_LINE, STRING]
			metro_line: EM_3D_OBJECT
			i: INTEGER
		do
			create traffic_line_objects.make (1,1)
			lines := map.lines
			from
				lines.start
				i := 1
			until
				lines.after
			loop 
				traffic_line_factory.set_line_color (create {GL_VECTOR_3D[DOUBLE]}.make_xyz (lines.item_for_iteration.color.red/255,lines.item_for_iteration.color.green/255,lines.item_for_iteration.color.blue/255))
				traffic_line_factory.set_line (lines.item_for_iteration)
				metro_line := traffic_line_factory.create_object
				traffic_line_objects.force (metro_line,i)
				i := i + 1
				lines.forth
			end
		ensure
			traffic_line_objects /= void
		end
		
	transform_coords (screen_x,screen_y: INTEGER): GL_VECTOR_3D[DOUBLE] is
			-- Transform mouse coordinates with gl_un_project to 3D coordinates.
			-- screen = event.screen_
			-- rel = event.x
		require
			screen_x /= void and then screen_y /= void
		local
			model_matrix, projection_matrix: ARRAY [DOUBLE]
			model_c, projection_c: ANY
			viewport: GL_VECTOR_4D [INTEGER]
			y_new: INTEGER
			result_x, result_y, result_z: DOUBLE
			temp: ANY
			window_z: REAL
		do
			-- Vorbereitung fuer beide Varianten
			if video_subsystem.video_surface.gl_2d_mode then
				video_subsystem.video_surface.gl_leave_2d
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

			gl_read_pixels (screen_x, y_new, 1, 1, Em_gl_depth_component, Em_gl_float, $window_z)
			temp := glu_un_project (screen_x, y_new, window_z, $model_c, $projection_c, viewport.pointer, $result_x, $result_y, $result_z)
			
			create Result.make_xyz (result_x, result_y, result_z)
		ensure
			Result /= void
		end

feature {NONE} -- Shared objects
	
	ewer: BUILDING_EWER
			-- Ewer for creation and distribution of buildings
			
	traffic_line_factory: TRAFFIC_LINE_FACTORY
			-- Factory for traffic lines
			
	traffic_line_objects: ARRAY[EM_3D_OBJECT]
			-- Container for objects created with traffic line factory
			
	sun_light: GL_LIGHT
			-- Light that imitates the sun
			
	constant_light: GL_LIGHT
			-- Constant white light from one direction

feature {NONE} -- Attributes

	sun_angle: DOUBLE
			-- Angle of sun rotation	
	focus: DOUBLE
			-- Used to zoom in or out.
	x_coord: DOUBLE
			-- X coordinate of the viewer	
	y_coord: DOUBLE
			-- Y coordinate of the viewer		
	z_coord: DOUBLE
			-- Z coordinate of the viewer	
	x_rotation: DOUBLE
			-- Rotation around the x axis		
	y_rotation: DOUBLE
			-- Rotation around the y axis	
	x_translation: DOUBLE
			-- Translation of the map's origin in x direction	
	y_translation: DOUBLE
			-- Translation of the map's origin in y direction
	highlighting_delta: DOUBLE
			-- Height difference between highlighted and normal line representation
	
invariant
	
	number_of_buildings >= 0
	
	focus_greater_than_0: focus > 0

end -- class MAP
