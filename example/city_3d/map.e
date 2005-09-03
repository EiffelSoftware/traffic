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
			mouse_button_down,
			mouse_dragged,
			mouse_wheel_down,
			mouse_wheel_up,
			prepare_drawing
		end
		
		SHARED_CONSTANTS
		export {NONE} all end
		
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
			y_rotation := -90 -- -35
			z_rotation := -40 -- -80
			lines_height := 0.2
			
			-- Factory creation
			create ewer.make(-5, -5, 10, 10, .5)
			create traffic_line_factory
			traffic_line_factory.set_line_width (0.05)
			
			-- User Interaction
			mouse_button_down_event.subscribe (agent mouse_button_down (?))
			mouse_dragged_event.subscribe (agent mouse_dragged (?))
			mouse_wheel_down_event.subscribe (agent mouse_wheel_down)
			mouse_wheel_up_event.subscribe (agent mouse_wheel_up)
			key_down_event.subscribe (agent key_down (?))
			mouse_clicked_event.subscribe (agent handle_mouse_clicked)
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
	
	load_map (fn: STRING) is
			-- load the map
		local
			map_file: TRAFFIC_MAP_FILE
		do
			filename := fn
			create map_file.make_from_file (filename)
			map := map_file.traffic_map
			is_loaded := true
			ewer.create_buildings (number_of_buildings, map)
		end	

feature -- Options

	show_collision_objects: BOOLEAN
		-- Determines if collision objects are shown.
		
	set_highlighted (b: BOOLEAN) is
			-- If `b' then traffic lines are highlighted.
		require variable_exist: b /= void
		do
			if b then
				lines_height := 1.5
			else 
				lines_height := 0.2
			end
		ensure b implies lines_height = 1.5
			not b implies lines_height = 0.2
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
				ewer.create_buildings (number_of_buildings, map)
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
		
feature -- Drawing

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
			gl_rotatef(y_rotation, 0, 1, 0)
			gl_rotatef (z_rotation, 0, 0, 1)
		end
		
	draw is
			-- Draw the map.
		local
			lines: HASH_TABLE [TRAFFIC_LINE, STRING]
			obj: EM_3D_OBJECT
			delta_line: DOUBLE
		do
			-- Coordinate System
			
--			gl_line_width (2)
--			gl_begin(em_gl_lines)
--				gl_color3d (1,1,1)
--				gl_vertex3d (0,0,0)
--				gl_vertex3d(1,0,0)
--			gl_end
--			
--			gl_begin(em_gl_lines)
--				gl_color3d (0.5,0.5,0.5)
--				gl_vertex3d (0,0,0)
--				gl_vertex3d(0,1,0)
--			gl_end
--			
--			gl_begin(em_gl_lines)
--				gl_color3d (0,0,0)
--				gl_vertex3d (0,0,0)
--				gl_vertex3d(0,0,1)
--			gl_end
			
			draw_plane (create {GL_VECTOR_3D[DOUBLE]}.make_xyz(-7,0,-7), create {GL_VECTOR_3D[DOUBLE]}.make_xyz(7,0,-7), create {GL_VECTOR_3D[DOUBLE]}.make_xyz(7,0,7), create {GL_VECTOR_3D[DOUBLE]}.make_xyz(-7,0,7), create {GL_VECTOR_3D[DOUBLE]}.make_xyz(0.5,0.5,0.5))				
			
--			gl_line_width(400)
--			gl_matrix_mode (Em_gl_modelview)
--			gl_push_matrix
--			gl_color3d(0.4,1,0)
----			gl_translated (0, 1,0)
--			gl_rotated (90, 1, 0,0)
--				gl_begin(em_gl_line)
--				gl_color3d(0.0,1.0,0.2)
--				gl_vertex3d(-3,0,0)
--				gl_vertex3d(3,0,0)
--			gl_end
--			gl_pop_matrix
--			gl_flush	
			if show_collision_objects then
				ewer.draw_collision
			end
			
			if is_loaded then
				if show_buildings then
					ewer.draw
				end
				
				lines := map.lines
				from lines.start; delta_line := 0
				until lines.after
				loop 
					traffic_line_factory.set_color (create {GL_VECTOR_3D[DOUBLE]}.make_xyz (lines.item_for_iteration.color.red/255,lines.item_for_iteration.color.green/255,lines.item_for_iteration.color.red/255))
					traffic_line_factory.set_line (lines.item_for_iteration)
					obj := traffic_line_factory.create_object
--					obj.set_scale (2,2,2)
					if lines_height > 0.2 then
						obj.set_origin (-14,lines_height+delta_line,-14)
						delta_line := delta_line + 0.4
					else
						obj.set_origin (-14,lines_height,-14)
					end	
					obj.draw
					lines.forth
				end
			end
		end

	draw_plane (p1, p2, p3, p4, rgb: GL_VECTOR_3D[DOUBLE]) is
		-- draw a plane
		do
			gl_begin (em_gl_quads)
				gl_color3dv (rgb.pointer) 
				gl_vertex3dv (p1.pointer)
				gl_vertex3dv (p2.pointer)
				gl_vertex3dv (p3.pointer)
				gl_vertex3dv (p4.pointer)
			gl_end
		end
		
feature {NONE} -- Event handling

	mouse_wheel_down is
			-- Mouse wheel down event
		do
			focus := focus + 0.1
--			if focus > 3 then
--				focus := 3
--			end
		end
		
	mouse_wheel_up is
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
			model_matrix, projection_matrix: ARRAY [DOUBLE]
			model_c, projection_c: ANY
			viewport: GL_VECTOR_4D [INTEGER]
			y_new: INTEGER
			result_x, result_y, result_z: DOUBLE
			temp: ANY
			click_1, click_2: GL_VECTOR_3D [DOUBLE]
			window_z: REAL
			
		do
--			create model_matrix.make (0, 15)
--			create projection_matrix.make (0, 15)
--			create viewport.make_xyzt (0, 0, 0, 0)
--			model_c := model_matrix.to_c
--			projection_c := projection_matrix.to_c
--			
--			gl_get_doublev_external (Em_gl_modelview_matrix, $model_c)
--			gl_get_doublev_external (Em_gl_projection_matrix, $projection_c)
--			gl_get_integerv_external (Em_gl_viewport, viewport.pointer)
--			y_new := video_subsystem.video_surface.height - event.screen_y -- OpenGL renders with (0,0) on bottom, mouse reports with (0,0) on top
--			
--			temp := glu_un_project_external (event.x.to_double, y_new.to_double, 0, $model_c, $projection_c, viewport.pointer, $result_x, $result_y, $result_z)
--			create click_1.make_xyz (result_x, result_y, result_z)
--			temp := glu_un_project_external (event.x.to_double, y_new.to_double, 1, $model_c, $projection_c, viewport.pointer, $result_x, $result_y, $result_z)
--			create click_2.make_xyz (result_x, result_y, result_z)
--			io.put_string ("Click ray: "+click_1.out+" to "+click_2.out+"%N")
--			
--			gl_read_pixels (event.screen_x, y_new, 1, 1, Em_gl_depth_component, Em_gl_float, $window_z)
--			temp := glu_un_project (event.screen_x, y_new, window_z, $model_c, $projection_c, viewport.pointer, $result_x, $result_y, $result_z)
--			create click_1.make_xyz (result_x, result_y, result_z)
--			io.put_string ("Click point: "+click_1.out+"%N")

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
			y_new := video_subsystem.video_surface.height - event.screen_y -- OpenGL renders with (0,0) on bottom, mouse reports with (0,0) on top

			-- 1. Variante: Erzeuge Strahl durch Maus und teste anschliessend Schnittpunkte mit Objekten
			-- http://www.3dkingdoms.com/selection.html#point
			
			temp := glu_un_project_external (event.x.to_double, y_new.to_double, 0, $model_c, $projection_c, viewport.pointer, $result_x, $result_y, $result_z)
			create click_1.make_xyz (result_x, result_y, result_z)
			temp := glu_un_project_external (event.x.to_double, y_new.to_double, 1, $model_c, $projection_c, viewport.pointer, $result_x, $result_y, $result_z)
			create click_2.make_xyz (result_x, result_y, result_z)
			io.put_string ("Click ray: "+click_1.out+" to "+click_2.out+"%N")
			-- Jetzt testen, was Strahl von click1 bis click2 trifft, und was am naechsten ist.
			
			-- 2. Variante: Erzeuge Raumpunkt, der richtigen "Depth"-Wert erzeugt
			-- http://wiki.delphigl.com/index.php/GluUnProject
			
			gl_read_pixels (event.screen_x, y_new, 1, 1, Em_gl_depth_component, Em_gl_float, $window_z)
			temp := glu_un_project (event.screen_x, y_new, window_z, $model_c, $projection_c, viewport.pointer, $result_x, $result_y, $result_z)
			create click_1.make_xyz (result_x, result_y, result_z)
			io.put_string ("Click point: "+click_1.out+"%N")
			-- Jetzt testen, was am naechsten bei click1 ist.
		end
		
	mouse_button_down (event: EM_MOUSEBUTTON_EVENT) is
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

	mouse_dragged (event: EM_MOUSEMOTION_EVENT) is
			-- Handle mouse movement
		do
			if event.button_state_right then				
				y_rotation := y_rotation + event.x_motion
				if y_rotation >= -15 then
					y_rotation := -15
				elseif y_rotation <= -165 then
					 y_rotation := -165
				end
				z_rotation := z_rotation + event.y_motion
				if z_rotation >= -15 then
					z_rotation := -15
				elseif z_rotation <= -90 then
					z_rotation := -90
				end
			elseif event.button_state_right then
				
			end			
		end

	key_down (event: EM_KEYBOARD_EVENT) is
			-- Handle key events
		do
			if event.key = event.sdlk_up then
				z_rotation := z_rotation + 10
			elseif event.key = event.sdlk_down then
				z_rotation := z_rotation - 10
			elseif event.key = event.sdlk_left then
				y_rotation := y_rotation - 10
			elseif event.key = event.sdlk_right then
				y_rotation := y_rotation + 10
			end
		end

feature {NONE} -- Factories and stuff
	
	ewer: BUILDING_EWER
	
	traffic_line_factory: TRAFFIC_LINE_FACTORY

feature {NONE} -- Variables

	show_buildings: BOOLEAN
		-- Should the buildings be displayed?
	buildings_transparent: BOOLEAN
		-- Should the buildings be transparent?
	focus: DOUBLE
		-- Used to zoom in or out.
	x_coord: DOUBLE
		-- X coordinate of the centre
	y_coord: DOUBLE
		-- Y coordinate of the centre
	z_coord: DOUBLE
		-- Z coordinate of the centre
	y_rotation: DOUBLE
		-- Rotation around the y axis
	z_rotation: DOUBLE
		-- Rotation around the z axis
	lines_height: DOUBLE
		-- Height of the metrolines on map

invariant
	
	number_of_buildings >= 0

end -- class MAP
