indexing
	description: "[
					map widget to display the map in 3D.
					The main idea is to change the old map_widget into a 3D compatible. 
					Therefore the main parts of the model should be the same, to say TRAFFIC_MAP
					and so on are reused. The render objects have to be reimplemented, so that they
					deal with EM_3D_COMPONENT instead of EM_DRAWABLE
					]"
	author: "Florian Geldmacher"
	date: "8.12.2005"
	revision: "0.1"

deferred class
	TRAFFIC_3D_MAP_WIDGET

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

--create
--	make_with_map
	
feature -- Initialisation
	make_with_map(a_map: TRAFFIC_MAP) is
			-- create the map
			require
				a_map_not_void: a_map /= Void	
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
				sun_angle := 0
				
				-- various creations
				create sun_light.make (em_gl_light0 )
				create constant_light.make (em_gl_light1)
				
				create_plane (create {GL_VECTOR_3D[DOUBLE]}.make_xyz (-plane_size/2,0,-plane_size/2), create {GL_VECTOR_3D[DOUBLE]}.make_xyz (plane_size/2,0,-plane_size/2), create {GL_VECTOR_3D[DOUBLE]}.make_xyz (plane_size/2,0,plane_size/2), create {GL_VECTOR_3D[DOUBLE]}.make_xyz (-plane_size/2,0,plane_size/2), create {GL_VECTOR_3D[DOUBLE]}.make_xyz (0.5,0.5,0.5))
				create_coord_system
				
				-- User Interaction
--				mouse_dragged_event.subscribe (agent mouse_drag (?))
--				mouse_wheel_down_event.subscribe (agent wheel_down)
--				mouse_wheel_up_event.subscribe (agent wheel_up)
--				key_down_event.subscribe (agent key_down (?))
--				mouse_clicked_event.subscribe (agent mouse_click)
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
			
			-- Traffic line rides
			if traffic_line_ride and then show_shortest_path and then shortest_path_line /= Void and then marked_destination /= Void and then marked_origin /= Void and then not shortest_path_line.after then
				prepare_for_traffic_line_ride
			else
				traffic_line_ride := False
				-- Translation
				gl_translated_external (x_coord*focus, y_coord, z_coord*focus)
				gl_translated_external (x_translation, -y_translation, 0)
				
				-- Rotation
				gl_rotated_external (x_rotation, 1, 0, 0)
				gl_rotated_external (y_rotation, 0, 1, 0)
			end
			
			-- Light settings
			gl_enable_external (em_gl_lighting)
			gl_enable_external (em_gl_color_material)
			gl_color_material_external (Em_gl_front_and_back, Em_gl_ambient_and_diffuse)
			gl_depth_func_external (em_gl_lequal)
			gl_enable_external (em_gl_depth_test)
			
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
				gl_matrix_mode_external (em_gl_modelview_matrix)
				gl_push_matrix_external
				gl_color3d_external (1, 1, 0)
				gl_translated_external (0, 8, 0)
				gl_rotated_external (90, 1, 0, 0)
				glu_sphere_external (glu_new_quadric, 1, 72, 100)
				gl_pop_matrix_external
			else
				sun_light.disable
				constant_light.enable
			end

			-- Draw plane
			gl_call_list_external (1)
			
			-- Show coordinate system
			if coordinates_shown then
				gl_call_list_external (2)
			end
			
			-- Display buildings and lines and places
			if is_map_loaded then
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
			end
			
			-- Draw marked stations
			if marked_origin /= Void then
				traffic_places.highlighte_place (marked_origin,0)			
			end
			if marked_destination /= Void then
				traffic_places.highlighte_place (marked_destination,1)
			
			if show_shortest_path and then marked_origin /= Void and then marked_destination /= Void then
				calculate_shortest_path
				traffic_lines.draw_shortest_path
			end
		end
	end

feature	-- Auxiliary drawing

	create_plane (p1, p2, p3, p4, rgb: GL_VECTOR_3D[DOUBLE]) is
			-- OpenGL display list Nr. `1' for a plane.
		require
			p1 /= Void
			p2 /= Void
			p3 /= Void
			p4 /= Void
			rgb /= Void
		do
			gl_new_list_external (1, em_gl_compile)
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
				gl_end_external
			gl_end_list_external
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

	load_map (filename: STRING) is
			-- Load the map.
		require
			name_valid: filename /= void and then not filename.is_empty
		local
			map_file: TRAFFIC_MAP_FILE
			directory: DIRECTORY
			dump_name: STRING
		do
			dump_name := filename.split('.')[1] + ".map"
			create directory.make_open_read ("./")
			if directory.has_entry (dump_name) then
				io.putstring("reading from dump-file")
				create map.make ("temp")
				map ?= map.retrieve_by_name(dump_name)
			else
				create map_file.make_from_file (filename)
				map := map_file.traffic_map
				io.putstring ("creating dump file")
				io.new_line
				map.store_by_name (dump_name)
				io.putstring("creation ended")
				io.new_line
			end
			is_map_loaded := True
			number_of_buildings := 0
			create traffic_places.make (map)
			create traffic_lines.make (map)
			create traffic_buildings.make(number_of_buildings, map)
			marked_destination := void
			marked_origin := void
--			shortest_path_line := void
--			shortest_path_line_representation := void
			marked_station_changed := True
		ensure
			map /= void
			is_map_loaded = True
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
		
feature{NONE} -- Traffic line rides

	last_polypoint: EM_VECTOR_2D
			-- The last polypoint visited
			
	position: EM_VECTOR_2D
			-- The current position
			
	Speed: DOUBLE is 0.05
			-- Speed of the traffic line rides
			
	prepare_for_traffic_line_ride is
			-- Change the viewpoint in order to take a traffic line ride.
		local
			start_point, end_point, direction: EM_VECTOR_2D
		do
			start_point := last_polypoint
			end_point := map_to_gl_coords (shortest_path_line.item.polypoints.item)
			
			direction := end_point - start_point
			
			position := position + (direction / direction.length) * speed
			
			glu_look_at_external
			(	position.x - (position.x/position.length),
				0.5,
				position.y - (position.y/position.length),
				position.x + 0.1*(position.x/position.length),
				0.5,
				position.y + 0.1*(position.y/position.length),
				0, 1, 0
			)
			gl_translated_external (-start_point.x, 0, -start_point.y)
			
			if (position-direction).length < speed then
				last_polypoint := map_to_gl_coords (shortest_path_line.item.polypoints.item)
				shortest_path_line.item.polypoints.forth
				
				if shortest_path_line.item.polypoints.after and then not shortest_path_line.after then
					shortest_path_line.forth
					if not shortest_path_line.after then
						shortest_path_line.item.polypoints.start
						last_polypoint := map_to_gl_coords (shortest_path_line.item.polypoints.first)
						shortest_path_line.item.polypoints.forth
					end
				end
				position.set_x (0)
				position.set_y (0)
			end
		end
		
feature -- Shortest path

	shortest_path_line: TRAFFIC_LINE
			-- Artificial traffic line for the shortest path
			
	marked_station_changed: BOOLEAN
			-- Has the marked station changed?
			
	calculate_shortest_path is
			-- Calculate the shortest path.
		require
			map /= Void
		local
			line: TRAFFIC_LINE
			origin, destination: TRAFFIC_PLACE
			section: TRAFFIC_LINE_SECTION
		do
			if marked_station_changed then
				map.find_shortest_path (map.places.item (marked_origin.name), map.places.item (marked_destination.name))
				create line.make ("Shortest path", create {TRAFFIC_TYPE_WALKING}.make)
				
				if not map.shortest_path.is_empty and then not map.shortest_path.first.label.polypoints.first.is_equal (marked_origin.position) then
					create origin.make_with_position (marked_origin.name, marked_origin.position.x.rounded, marked_origin.position.y.rounded)
					create destination.make_with_position (map.shortest_path.first.label.origin.name, map.shortest_path.first.label.polypoints.first.x.rounded, map.shortest_path.first.label.polypoints.first.y.rounded)
					line.force (create {TRAFFIC_LINE_SECTION}.make (origin, destination, create {TRAFFIC_TYPE_WALKING}.make, void))
				end
				
				from
					map.shortest_path.start
				until
					map.shortest_path.after
				loop
					line.force (map.shortest_path.item.label)
					map.shortest_path.forth
					if not map.shortest_path.after and then not line.last.polypoints.last.is_equal (map.shortest_path.item.label.polypoints.first) then
						create origin.make_with_position (line.last.destination.name, line.last.polypoints.last.x.rounded, line.last.polypoints.last.y.rounded)
						create destination.make_with_position (map.shortest_path.item.label.origin.name, map.shortest_path.item.label.polypoints.first.x.rounded, map.shortest_path.item.label.polypoints.first.y.rounded)
						create section.make (origin, destination, create {TRAFFIC_TYPE_WALKING}.make, void)
						line.force (section)
					end
				end
				
				if not line.is_empty and then not line.last.polypoints.last.is_equal (marked_destination.position) then
					create origin.make_with_position (line.last.destination.name, line.last.polypoints.last.x.rounded, line.last.polypoints.last.y.rounded)
					create destination.make_with_position (marked_destination.name, marked_destination.position.x.rounded, marked_destination.position.y.rounded)
					line.force (create {TRAFFIC_LINE_SECTION}.make (origin, destination, create {TRAFFIC_TYPE_WALKING}.make, void))
				end
				
				shortest_path_line := line
								
--				traffic_line_factory.set_line_color (create {GL_VECTOR_3D[DOUBLE]}.make_xyz (1, 1, 1))
--				traffic_line_factory.set_line (line)
--				traffic_line_factory.set_highlighted (False)
--				shortest_path_line_representation := traffic_line_factory.create_object
--				shortest_path_line_representation.set_origin (0, line_height+0.02, 0)
				traffic_lines.add_shortest_line(line)
--				traffic_lines.draw_shortest_path
				marked_station_changed := False
			end
		end
	
feature -- Options

--	zoom_in is
--			-- Zoom in.
--		do
--			wheel_up
--		end
--	
--	zoom_out is
--			-- Zoom in.
--		do
--			wheel_down
--		end
		
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
			-- Set `number_of_buildings'.
		require
			n >= 0
		do
			number_of_buildings := n
			if is_map_loaded then
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
			-- If `b' then traffic lines are highlighted.
		do
			traffic_lines.set_highlighted (b)

		end
	
	set_show_shortest_path (b: BOOLEAN) is
			-- Set `show_shortest_path'.
		do
			if show_shortest_path then
				shortest_path_line := void
--				traffic_lines.remove_shortest_path
--				shortest_path_line_representation := void
			end
			show_shortest_path := b
			marked_station_changed := True
		ensure
			show_shortest_path = b
		end
	
	take_traffic_line_ride is
			-- Take a traffic line ride.
		require
			shortest_path_line /= Void
		do
			traffic_line_ride := True
			create last_polypoint.make (0, 0)
			shortest_path_line.start
			if not shortest_path_line.after then
				shortest_path_line.item.polypoints.start
				last_polypoint := map_to_gl_coords (shortest_path_line.item.polypoints.first)
				shortest_path_line.item.polypoints.forth
			end
			create position.make (0, 0)
		ensure
			traffic_line_ride
			last_polypoint /= Void
			position /= Void
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
		deferred
		end
		
	wheel_up is
			-- Handle mouse wheel up event.
		deferred
		end
		
	mouse_click (event: EM_MOUSEBUTTON_EVENT) is
			-- Handle mouse clicked event.
		require
			event /= Void
		deferred
		end
	
	mouse_drag (event: EM_MOUSEMOTION_EVENT) is
			-- Handle mouse movement event.
		require
			event /= Void
		deferred
		end
		
	key_down (event: EM_KEYBOARD_EVENT) is
			-- Handle key events.
		require
			event /= Void
		deferred
		end

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
			
feature {NONE} -- Implementation
	traffic_lines: TRAFFIC_LINE_REPRESENTATION
		-- container for the lines
		
	traffic_places: TRAFFIC_PLACE_REPRESENTATION
		-- container for the places
		
	traffic_buildings: BUILDING_EWER
		-- container for the buildings
			
	sun_light: GL_LIGHT
			-- Light that imitates the sun
			
	constant_light: GL_LIGHT
			-- Constant white light from one direction

invariant
	map_not_void: map /= Void

end -- class TRAFFIC_3D_MAP_WIDGET
