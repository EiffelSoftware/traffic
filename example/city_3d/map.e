indexing
	description: "Map of a city"
	author: ""
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
	
	MEMORY
	
	MATH_CONST
	
	DOUBLE_MATH
	
creation
	
	make
	
feature -- Initialization

	make is
			-- Creation procedure.
		do
			make_3d_component
			set_keyboard_sensitive (true)
			set_field_of_view (60)
			set_width (600)
			set_height (600)
			set_min_view_distance (1.0)
			set_max_view_distance (140)
			
			-- Variable initialization
			focus := 2
			x_coord := 0
			y_coord := -1
			z_coord := -9
			y_rotation := 180  -- -35
			x_rotation := 40  -- -80
			sun_angle := 0
			
			-- Factory creation
			create traffic_line_factory
			
			-- User Interaction
			mouse_button_down_event.subscribe (agent button_down (?))
			mouse_dragged_event.subscribe (agent dragged (?))
			mouse_wheel_down_event.subscribe (agent wheel_down)
			mouse_wheel_up_event.subscribe (agent wheel_up)
			key_down_event.subscribe (agent key_down (?))
			mouse_clicked_event.subscribe (agent handle_mouse_clicked)
		end
		
feature -- Drawing

	clicked_point: GL_VECTOR_3D[DOUBLE]
	
	prepare_drawing is
			-- Prepare for drawing.
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
			glu_perspective (field_of_view, width/height, min_view_distance, focus*max_view_distance)
			
			-- Setup the model view matrix
			gl_matrix_mode (Em_gl_modelview)
			gl_load_identity
			
			-- Clearing background color to a nice blue
			gl_clear_color (0.1,0.4,0.5,0)
			gl_clear(em_gl_color_buffer_bit)
			
			-- Do viewing transformations
			gl_matrix_mode (em_gl_modelview_matrix)
			gl_load_identity
			gl_translated_external (x_coord*focus, y_coord*focus, z_coord*focus)
			gl_translated_external (x_translation, -y_translation, 0)
			gl_rotatef (x_rotation, 1, 0, 0)
			gl_rotatef(y_rotation, 0, 1, 0)
			
			-- Light settings
			gl_enable (em_gl_lighting)
			gl_enable (em_gl_color_material)
			gl_color_material (Em_gl_front_and_back, Em_gl_ambient_and_diffuse)
			gl_depth_func (em_gl_lequal)
			gl_enable (em_gl_depth_test)
		end
		
	draw is
			-- Draw the map.
		local
			lines: HASH_TABLE [TRAFFIC_LINE, STRING]
			obj: EM_3D_OBJECT
			sun_pos: GL_VECTOR_3D[DOUBLE]
			light_0, light_1: GL_LIGHT
		do	
--			io.put_double(x_coord)
--			io.put_new_line
			
			create light_0.make (em_gl_light0)
			create light_1.make (em_gl_light1)

			-- Light 0 -> SUN
			light_0.ambient.set_xyzt (0, 0, 0, 1)
			light_0.specular.set_xyzt (0, 0, 0, 1)
			light_0.diffuse.set_xyzt (1, 1, 1, 1)
			
			sun_angle := sun_angle + 0.005
--			io.put_double(sun_angle)
--			io.put_new_line
			if sun_angle > 5 then
				sun_angle := sun_angle - 5
			end
			
			if sun_angle < 1.0 or sun_angle > 5 then
				create sun_pos.make_xyz (0,0,0)
			else
				if sun_angle < 2 then
					light_0.diffuse.set_xyzt (0.8 + 0.2*(sun_angle - 1), 0.2 + 0.6*(sun_angle - 1), 0.1 + 0.9*(sun_angle - 1), 1)
				elseif sun_angle > 4 then
					light_0.diffuse.set_xyzt (1 - 0.2*(sun_angle - 4), 1 - 0.6*(sun_angle - 4), 1 - 0.9*(sun_angle - 4), 1)
				end
				create sun_pos.make_xyz (-sine(sun_angle),-cosine(sun_angle),0)
			end
			
			light_0.position.set_xyz (sun_pos.x, sun_pos.y, 0.0 )
			light_0.apply_values
			
			light_1.ambient.set_xyzt (0, 0, 0, 1)
			light_1.specular.set_xyzt (0, 0, 0, 1)
			light_1.diffuse.set_xyzt (1.0, 1, 1, 1) -- Red
			light_1.position.set_xyz (1, 1, 1)
			light_1.apply_values
			
			if show_sun then
				light_0.enable
				light_1.disable
			else
				light_0.disable
				light_1.enable
			end
			
			if show_sun then
				gl_matrix_mode (em_gl_modelview_matrix)
				gl_push_matrix
				gl_color3d (1,1,0)
				gl_translated (0,8,0)
				gl_rotated (90,1,0,0)
				glu_sphere (glu_new_quadric, 1, 72, 100)
				gl_pop_matrix
			end
			
			-- Coordinate System
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
			
			draw_plane (create {GL_VECTOR_3D[DOUBLE]}.make_xyz(-plane_size/2,0,-plane_size/2), create {GL_VECTOR_3D[DOUBLE]}.make_xyz(plane_size/2,0,-plane_size/2), create {GL_VECTOR_3D[DOUBLE]}.make_xyz(plane_size/2,0,plane_size/2), create {GL_VECTOR_3D[DOUBLE]}.make_xyz(-plane_size/2,0,plane_size/2), create {GL_VECTOR_3D[DOUBLE]}.make_xyz(0.5,0.5,0.5))
			
			if is_loaded then
				if show_buildings then
					ewer.draw
				end
				
				lines := map.lines
				from lines.start
				until lines.after
				loop 
					traffic_line_factory.set_color (create {GL_VECTOR_3D[DOUBLE]}.make_xyz (lines.item_for_iteration.color.red/255,lines.item_for_iteration.color.green/255,lines.item_for_iteration.color.red/255))
					traffic_line_factory.set_line (lines.item_for_iteration)
					obj := traffic_line_factory.create_object
--					obj.set_scale (2,2,2)
					obj.set_origin (-14,line_height+highlighting_delta,-14)
					obj.draw
					lines.forth
				end
			end
			
			-- draw the clicked point
--			if clicked_point /= Void then
--				gl_matrix_mode (Em_gl_modelview)
--				gl_push_matrix
--				gl_color3d (1, 0, 0)
--				gl_translated (clicked_point.x,0.1,clicked_point.z)
--				gl_rotated (90, 1, 0, 0)
--				glu_disk (glu_new_quadric, 0, 0.2, 72, 1)
--				gl_pop_matrix
--				gl_flush
--			end

			-- draw marked station
			if marked_station /= Void then
				gl_matrix_mode (Em_gl_modelview)
				gl_push_matrix
				gl_color3d (1, 0, 0)
				gl_translated (clicked_point.x,0.1,clicked_point.z)
				gl_rotated (90, 1, 0, 0)
				glu_disk (glu_new_quadric, 0, station_radius, 72, 1)
				gl_pop_matrix
				gl_flush
			end
		end

	draw_plane (p1, p2, p3, p4, rgb: GL_VECTOR_3D[DOUBLE]) is
		-- draw a plane
		do
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
		end
		
	transform_coords (screen_x,screen_y: INTEGER): GL_VECTOR_3D[DOUBLE] is
			-- Transforms mouse coords with gl_un_project
			-- screen = event.screen_
			-- rel = event.x
		require screen_x /= void and then screen_y /= void
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
			
--			create click_1.make_xyz (result_x, result_y, result_z)
--			clicked_point := click_1
--			
--			if map /= Void then
--				from
--					places := map.places
--					places.start
--					is_found := False
--				until
--					is_found or else places.after
--				loop
--					place_x := places.item_for_iteration.position.x/50 - 14
--					place_z := places.item_for_iteration.position.y/50 - 14
--					delta_x := place_x - clicked_point.x
--					delta_z := place_z - clicked_point.z
--					delta := sqrt (delta_x^2 + delta_z^2)
--					if delta < station_radius then
--						marked_station := places.item_for_iteration
--						is_found := True
--					end
--					places.forth
--				end
--				if not is_found then
--					marked_station := Void
--				end
--			end
		end
		
feature -- Traffic stuff	

	is_loaded: BOOLEAN
		-- Has parsing already taken place?
		
	filename: STRING
		-- Filename of XML file of map
	
	map: TRAFFIC_MAP
		-- Parsed map
		
	number_of_buildings: INTEGER
		-- How many buildings should be displayed?
		
	marked_station: TRAFFIC_PLACE
		-- Currently marked traffic station
	
	load_map (fn: STRING) is
			-- load the map
		local
			map_file: TRAFFIC_MAP_FILE
		do
			filename := fn
			create map_file.make_from_file (filename)
			map := map_file.traffic_map
			is_loaded := true
			create ewer.make(-7, -7, number_of_buildings, map)
		end

feature -- Options

	show_sun: BOOLEAN
		-- Should sun be displayed?
		
	show_collision_objects: BOOLEAN
		-- Determines if collision objects are shown.
		
	set_show_sun (b: BOOLEAN) is
			-- Set `show_sun'.
		require variable_exists: b /= void
		do
			show_sun := b
		ensure show_sun = b
		end
		
	set_highlighted (b: BOOLEAN) is
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
		
	set_show_buildings (b: BOOLEAN) is
			-- Set `show_buildings'.
		require variable_exists: b /= void
		do
			show_buildings := b
		ensure show_buildings = b
		end
	
	set_number_of_buildings (n: INTEGER) is
			-- Set `number_of_buildings'.
		require
			n >= 0
		do
			number_of_buildings := n
			if is_loaded then
				ewer.set_building_number (number_of_buildings)
			end
		end
		
	set_transparent (b: BOOLEAN) is
			-- Set `buildings_transparent'.
		require variable_exists: b /= void
		do
			buildings_transparent := b
		ensure buildings_transparent = b
		end
		
	set_collision_testing (b: BOOLEAN) is
			-- Set `show_collision_objects'.
		require variable_exists: b /= void
		do
			show_collision_objects := b
		ensure show_collision_objects = b
		end
		
feature {NONE} -- Event handling

	wheel_down is
			-- Mouse wheel down event
		do
			focus := focus + 0.1
--			if focus > 3 then
--				focus := 3
--			end
		end
		
	wheel_up is
			-- Mouse wheel up event
		do
			focus := focus - 0.1
--			if focus < 0.3 then
--				focus := 0.3
--			end
		end
	
	handle_mouse_clicked (event: EM_MOUSEBUTTON_EVENT) is
			-- Handle mouse clicked event.
		local
--			model_matrix, projection_matrix: ARRAY [DOUBLE]
--			model_c, projection_c: ANY
--			viewport: GL_VECTOR_4D [INTEGER]
--			y_new: INTEGER
--			result_x, result_y, result_z: DOUBLE
--			temp: ANY
--			window_z: REAL
			places: HASH_TABLE[TRAFFIC_PLACE, STRING]
			place_x, place_z, delta_x, delta_z, delta: DOUBLE
			is_found: BOOLEAN
			result_vec: GL_VECTOR_3D[DOUBLE]
		do
			if event.is_left_button then
				result_vec := transform_coords(event.screen_x, event.screen_y)
				
--				-- Vorbereitung fuer beide Varianten
--				if video_subsystem.video_surface.gl_2d_mode then
--					video_subsystem.video_surface.gl_leave_2d
--				end
--				
--				create model_matrix.make (0, 15)
--				create projection_matrix.make (0, 15)
--				create viewport.make_xyzt (0, 0, 0, 0)
--				model_c := model_matrix.to_c
--				projection_c := projection_matrix.to_c
--				
--				gl_get_doublev_external (Em_gl_modelview_matrix, $model_c)
--				gl_get_doublev_external (Em_gl_projection_matrix, $projection_c)
--				gl_get_integerv_external (Em_gl_viewport, viewport.pointer)
--				viewport.set_xyzt (x, y, width, height)
--				y_new := video_subsystem.video_surface.height - event.screen_y -- OpenGL renders with (0,0) on bottom, mouse reports with (0,0) on top
				
				-- 1. Variante: Erzeuge Strahl durch Maus und teste anschliessend Schnittpunkte mit Objekten
				-- http://www.3dkingdoms.com/selection.html#point
				
--				temp := glu_un_project_external (event.x.to_double, y_new.to_double, 0, $model_c, $projection_c, viewport.pointer, $result_x, $result_y, $result_z)
--				create click_1.make_xyz (result_x, result_y, result_z)
--				temp := glu_un_project_external (event.x.to_double, y_new.to_double, 1, $model_c, $projection_c, viewport.pointer, $result_x, $result_y, $result_z)
--				create click_2.make_xyz (result_x, result_y, result_z)
--				io.put_string ("Click ray: "+click_1.out+" to "+click_2.out+"%N")
--				-- Jetzt testen, was Strahl von click1 bis click2 trifft, und was am naechsten ist.
					
				-- 2. Variante: Erzeuge Raumpunkt, der richtigen "Depth"-Wert erzeugt
				-- http://wiki.delphigl.com/index.php/GluUnProject
					
--				gl_read_pixels (event.screen_x, y_new, 1, 1, Em_gl_depth_component, Em_gl_float, $window_z)
--				temp := glu_un_project (event.screen_x, y_new, window_z, $model_c, $projection_c, viewport.pointer, $result_x, $result_y, $result_z)

				create clicked_point.make_xyz (result_vec.x, result_vec.y, result_vec.z)
--				io.put_string ("Click point: "+click_1.out+"%N")
--				io.put_string ("Zoom: " + focus.out)
--				io.put_string ("%Nx_rotation: " + x_rotation.out)
--				io.put_string ("%Ny_rotation: " + y_rotation.out)
--				io.put_new_line
				-- Jetzt testen, was am naechsten bei click1 ist.
					
				if map /= Void then
					from
						places := map.places
						places.start
						is_found := False
					until
						is_found or else places.after
					loop
						place_x := places.item_for_iteration.position.x/50 - 14
						place_z := places.item_for_iteration.position.y/50 - 14
						delta_x := place_x - clicked_point.x
						delta_z := place_z - clicked_point.z
						delta := sqrt (delta_x^2 + delta_z^2)
						if delta < station_radius then
							marked_station := places.item_for_iteration
							is_found := True
						end
						places.forth
					end
					
					if not is_found then
						marked_station := Void
					end
				end
			end
		end
		
	button_down (event: EM_MOUSEBUTTON_EVENT) is
			-- Handle mouse events
		require else
			a_mouse_button_event_not_void: event /= void
--		local res: INTEGER
--			  viewport,modelview,projection: POINTER
--			  new_x,new_y,new_z: DOUBLE
--			  other_x,other_y,other_z: MANAGED_POINTER
--			  outa: ARRAY[INTEGER_8]
		do
--				viewport := viewport.memory_alloc (128)
--				modelview := modelview.memory_alloc (256)
--				projection := projection.memory_alloc (256)
--				gl_get_integerv (em_gl_viewport, viewport)
--				gl_get_doublev (em_gl_modelview, modelview)
--				gl_get_doublev (em_gl_projection, projection)
--				create other_x.make_from_pointer (viewport, 128)
--				create outa.make(1,2)
--				outa := other_x.read_array (0,32)
--				create new_x.default_create
--				create new_y.default_create
--				create new_z.default_create
--				new_x := 14
--				new_y := 48
--				new_z := 98
--				create other_x.make (128)
--				create other_y.make (128)
--				create other_z.make (128)
--				other_y.put_double (6,0)
--				res := glu_un_project_external (10, 45, 17, modelview, projection, viewport, other_x.item, other_y.item, other_z.item)
--				io.put_integer(res)
--				io.put_double (other_y.read_double (0))
		end
	
	dragged (event: EM_MOUSEMOTION_EVENT) is
			-- Handle mouse movement
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
			-- Handle key events
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

feature {NONE} -- Factories and stuff
	
	ewer: BUILDING_EWER
	
	traffic_line_factory: TRAFFIC_LINE_FACTORY

feature {NONE} -- Variables

	sun_angle: DOUBLE
		-- Angle of sun rotation
	show_buildings: BOOLEAN
		-- Should the buildings be displayed?
	buildings_transparent: BOOLEAN
		-- Should the buildings be transparent?
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

end -- class MAP
