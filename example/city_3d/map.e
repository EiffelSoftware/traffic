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
		end

		
feature -- Traffic stuff	

	is_map_loaded: BOOLEAN
		-- Has parsing already taken place?

	filename: STRING
		-- Filename of XML file of map
	
	map: TRAFFIC_MAP
		-- Parsed map
	
	load_map (fn: STRING) is
			-- load the map
		local
			map_file: TRAFFIC_MAP_FILE
		do
			filename := fn
			create map_file.make_from_file (filename)
			map := map_file.traffic_map
			is_map_loaded := true
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
		local
			lines: HASH_TABLE [TRAFFIC_LINE, STRING]
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
			
			draw_plane (create {GL_VECTOR_3D[DOUBLE]}.make_xyz(-7,0,-7), create {GL_VECTOR_3D[DOUBLE]}.make_xyz(7,0,-7), create {GL_VECTOR_3D[DOUBLE]}.make_xyz(7,0,7), create {GL_VECTOR_3D[DOUBLE]}.make_xyz(-7,0,7), create {GL_VECTOR_3D[DOUBLE]}.make_xyz(1,0,0))				
			
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
			
			if is_map_loaded then
				ewer.draw (1000, map)
				
				lines := map.lines				
				from lines.start
				until lines.after
				loop
					traffic_line_factory.set_color (create {GL_VECTOR_3D[DOUBLE]}.make_xyz (lines.item_for_iteration.color.red/255,lines.item_for_iteration.color.green/255,lines.item_for_iteration.color.red/255))
					traffic_line_factory.set_line (lines.item_for_iteration)
					traffic_line_factory.create_object.draw
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
		
feature{NONE} -- Event handling

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

feature{NONE} -- Factories
	
		ewer: BUILDING_EWER
		
		traffic_line_factory: TRAFFIC_LINE_FACTORY

		
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
