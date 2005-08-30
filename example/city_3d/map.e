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
	
feature -- Interface

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

			-- User Interaction
			mouse_button_down_event.subscribe (agent mouse_button_down (?))
			mouse_dragged_event.subscribe (agent mouse_dragged (?))
			mouse_wheel_down_event.subscribe (agent mouse_wheel_down)
			mouse_wheel_up_event.subscribe (agent mouse_wheel_up)
			key_down_event.subscribe (agent key_down (?))
		end
		
	filename: STRING
	
	map: TRAFFIC_MAP
	
	load_map (fn: STRING) is
			-- load the map
		local
			map_file: TRAFFIC_MAP_FILE
		do
			filename := fn
			create map_file.make_from_file (filename)
			map := map_file.traffic_map
		end
		
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
			glu_perspective (field_of_view, width/height, min_view_distance, max_view_distance)
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
			-- Who the fuck knows that.
		do
			gl_begin (em_gl_quads)
				gl_color3d (1,0,0)
				gl_vertex3d (-1,0,-1)
				gl_vertex3d (1,0,-1)
				gl_vertex3d (1,0,1)
				gl_vertex3d (-1,0,1)
			gl_end			
		end
		
		
feature{NONE} -- Event handling

	mouse_wheel_down is
			-- Mouse wheel down event
		do
			focus := focus + 0.1
			if focus > 3 then
				focus := 3
			end
		end
		
	mouse_wheel_up is
			-- Mouse wheel up event
		do
			focus := focus - 0.1
			if focus < 0.3 then
				focus := 0.3
			end
		end
		


	mouse_button_down (event: EM_MOUSEBUTTON_EVENT) is	
			-- Handle mouse events
		require else
			a_mouse_button_event_not_void: event /= void
		do

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
			if event.key = event.sdlk_right then
				z_rotation := z_rotation - 10
			elseif event.key = event.sdlk_left then
				z_rotation := z_rotation + 10
			elseif event.key = event.sdlk_down then
				y_rotation := y_rotation + 10
			elseif event.key = event.sdlk_up then
				y_rotation := y_rotation - 10
			end
		end
		
feature{NONE} -- Variables

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

end -- class MAP
