indexing
	description: "Map of a city"
	date: "$Date$"
	revision: "$Revision$"

class MAP

inherit

	EM_SCENE
		redefine
			redraw,
			handle_key_down_event,
			handle_mouse_button_down_event,
			handle_mouse_motion_event
		end
		
	EM_CONSTANTS
		export {NONE} all end
		
	EM_SHARED_SUBSYSTEMS
		export {NONE} all end
		
	GL_FUNCTIONS
		export {NONE} all end
		
	GLU_FUNCTIONS
		export {NONE} all end
		
	SDL_VIDEO_FUNCTIONS
		export {NONE} all end
	
	MATH_CONST
	
	DOUBLE_MATH

create
	make_scene

feature -- Initialization

	initialize_scene is
			-- Initialize the scene.
		local 
			i: INTEGER
			metro_line: EM_3D_OBJECT
			points: ARRAY[TUPLE[DOUBLE]]
		do
			gl_enable (em_gl_depth_test)
			angle := 0

			-- Setup the projection matrix
			gl_matrix_mode (Em_gl_projection)
			gl_load_identity
			glu_perspective (60, width/height, 1, 140)

			-- Setup the model view matrix
			gl_matrix_mode (Em_gl_modelview)
			gl_load_identity
			
			-- Initialize normalized speed for rotation of pyramid
			create speed
			speed.set_speed (100)
			
			red := 1.0
			blue := 1.0
			green := 1.0
			scale_x := 1.0
			scale_y := 1.0
			scale_z := 1.0
			f := 1
			x := 0
			y := -1
			z := -9
			alpha := -35
			angle := -80
			
			-- creation of factories
			create house_factory.make
			create metro_line_factory
			create cubes.make(1,3)
			create metro_lines.make(1,1)
			
			-- shitty
			create positions.make(1,3)
			positions.force([0.5,0,-2.5],1)
			positions.force([0.0,0.0,1.0],2)
			positions.force([4.0,0.0,3.0],3)
			
			-- create some metro lines
			create metro_lines_coords.make (1,1)
			-- line 1
			metro_line_factory.set_color ([0.5, 0.5, 0.5])
			metro_line_factory.set_line_width (0.15)
			create points.make(1,1)
			points.force ([-5.0,0.1,-5],1)
			points.force ([5.0,0.1,5],2)
			metro_lines_coords.force (points, 1)
			metro_line_factory.set_points (points)
			metro_line := metro_line_factory.create_object
			metro_lines.force (metro_line, 1)
			
			-- line 2
			create points.make(1,1)
			points.force ([-5.0,0.1,5],1)
			points.force ([-3.0,0.1,5],2)
			points.force ([1.2,0.1,1.0],3)
			points.force ([1.8,0.1,-1],4)
			points.force ([2.0,0.1,-5],5)
			points.force ([5.0,0.1,-5],6)
			metro_lines_coords.force (points, 2)
			metro_line_factory.set_points (points)
			metro_line_factory.set_color ([1.0, 1.0, 0])
			metro_line := metro_line_factory.create_object
			metro_lines.force (metro_line, 2)
			
			-- create some houses
			from i := 1
			until i > cubes.count
			loop
				cubes.force (house_factory.create_object, i)		
				i := i + 1
			end

			-- User Interaction
			create event_loop.make_poll
			event_loop.key_down_event.subscribe (agent handle_key_down_event(?))
			event_loop.mouse_button_down_event.subscribe (agent handle_mouse_button_down_event (?))
			event_loop.mouse_motion_event.subscribe (agent handle_mouse_motion_event (?))
		end
		
feature {NONE} -- Implementation
	
	redraw is
			-- Draw all
		local
			i: INTEGER
			ewer: HOUSE_EWER
		do	
			-- Clear the screen
			gl_load_identity
			gl_clear_color (red, green, blue, 0)
			gl_clear (Em_gl_color_buffer_bit | Em_gl_depth_buffer_bit)		

			gl_load_identity
			gl_translatef(x*f, y*f, z*f)
--			gl_translatef (new_x, new_y, new_z)
			gl_rotatef(angle, 0, 1, 0)
			gl_rotatef (alpha, 0, 0, 1)
			
			-- display the plane
			draw_plane ([-10.0, 0, -10.0], [-10.0, 0, 10.0], [10.0, 0, 10.0], [10.0, 0, -10.0], [0.0,0.0,0.0])

			-- display the metro lines
--			metro_lines.item(1).set_origin (3,0,3)
--			metro_lines.item(1).draw
			metro_lines.do_all (agent draw_metro_line)
			
			-- display the houses
			from i := 1
			until i > cubes.count
			loop
				cubes.item(i).set_origin (positions.item(i).double_item(1),positions.item(i).double_item(2),positions.item(i).double_item(3))
				cubes.item(i).set_scale (4-i, 5-i, 4-i)
				cubes.item(i).draw
				i := i + 1
			end
			
			create ewer.make(-5, -5, 10, 10, .2)
			ewer.draw (1000, metro_lines_coords)
			
			screen.redraw
		end
		
	draw_metro_line (m: EM_3D_OBJECT) is
			-- Draw a metro line.
		do
			m.draw
		end
		
	draw_line (p1, p2: TUPLE[DOUBLE]) is
			-- Draw a line.
		local
			px, py, pz, delta_x, delta_z: DOUBLE
			qx, qy, qz, norm: DOUBLE
			line_width: DOUBLE
		do
			px := p1.double_item (1)
			py := p1.double_item (2)
			pz := p1.double_item (3)
			
			qx := p2.double_item (1)
			qy := p2.double_item (2)
			qz := p2.double_item (3)
			
			line_width := 0.1
			
			delta_x := qx - px
			delta_z := qz - pz
			
			norm := sqrt (delta_x*delta_x + delta_z*delta_z)
			
			draw_plane ([px-delta_z*line_width/2/norm,py,pz+delta_x*line_width/2/norm],[px+delta_z*line_width/2/norm,py,pz-delta_x*line_width/2/norm], [qx+delta_z*line_width/2/norm,qy,qz-delta_x*line_width/2/norm] ,[qx-delta_z*line_width/2/norm,qy,qz+delta_x*line_width/2/norm],[0.5,0.5,0.5])
			gl_flush
	
		end
		
	draw_cube (p1, p2: TUPLE[DOUBLE]) is
		-- Draw a cube.
		local
			px, py, pz: DOUBLE
			qx, qy, qz: DOUBLE
		do
			px := p1.double_item (1)
			py := p1.double_item (2)
			pz := p1.double_item (3)
			
			qx := p2.double_item (1)
			qy := p2.double_item (2)
			qz := p2.double_item (3)
			
			gl_begin (em_gl_quads)
			
				-- Front
				gl_color3f (0, 0, 1) -- Blue
				gl_vertex3d (qx, py, qz)
				gl_vertex3d (qx, qy, qz)
				gl_vertex3d (qx, qy, pz)
				gl_vertex3d (qx, py, pz)
			gl_end
				
			gl_begin(em_gl_quads)

				-- Right
				gl_color3f(0, 1, 0) -- Green
				gl_vertex3d (px, qy, qz)
				gl_vertex3d (px, py, qz)
				gl_vertex3d (qx, py, qz)
				gl_vertex3d (qx, qy, qz)
				
				-- Back
				gl_color3f(1, 0, 0) -- Red
				gl_vertex3d (px, py, pz)
				gl_vertex3d (px, qy, pz)
				gl_vertex3d (px, qy, qz)
				gl_vertex3d (px, py, qz)

				-- Left
				gl_color3f (1, 1, 0) -- Yellow
				gl_vertex3d (qx, qy, pz)
				gl_vertex3d (qx, py, pz)
				gl_vertex3d (px, py, pz)
				gl_vertex3d (px, qy, pz)
				
				-- Top
				gl_color3f(1, 1, 1) -- White
				gl_vertex3d (px, qy, pz)
				gl_vertex3d (px, qy, qz)
				gl_vertex3d (qx, qy, qz)
				gl_vertex3d (qx, qy, pz)
				
			gl_end
			
		end
	
	draw_plane (p1, p2, p3, p4, rgb: TUPLE[DOUBLE]) is
		-- Draw a plane.
		do
			gl_begin (em_gl_quads)
				-- Boden
				gl_color3d(rgb.double_item(1), rgb.double_item(2), rgb.double_item(3)) -- Black
				gl_vertex3d (p1.double_item (1), p1.double_item (2), p1.double_item (3))
				gl_vertex3d (p2.double_item (1), p2.double_item (2), p2.double_item (3))
				gl_vertex3d (p3.double_item (1), p3.double_item (2), p3.double_item (3))
				gl_vertex3d (p4.double_item (1), p4.double_item (2), p4.double_item (3))
			gl_end
		end
		
feature {NONE} -- Movement

	handle_mouse_motion_event (a_mouse_motion_event: EM_MOUSEMOTION_EVENT) is
			-- Handle mouse motion.
		local viewport, modelview, projection, x_pointer, y_pointer, z_pointer: POINTER
		do
			if a_mouse_motion_event.button_state_right then
				alpha := alpha + a_mouse_motion_event.y_motion
				if alpha >= -15 then
					alpha := -15
				elseif alpha <= -165 then
					 alpha := -165
				end
				angle := angle + a_mouse_motion_event.x_motion
				if angle >= -15 then
					angle := -15
				elseif angle <= -165 then
					angle := -165
				end
			end
			if a_mouse_motion_event.button_state_left then
				
				viewport := viewport.memory_alloc (4)
				modelview := modelview.memory_alloc (16)
				projection := projection.memory_alloc (16)			

				gl_get_integerv (em_gl_viewport, viewport)
				gl_get_doublev (em_gl_modelview, modelview)
				gl_get_doublev (em_gl_projection, projection)

--				glu_un_project (a_mouse_motion_event.x_motion, 0, a_mouse_motion_event.y_motion ,modelview, viewport, projection, new_x.to_reference, new_y.to_reference, new_z.to_reference)
				
				
--				new_z := new_z + (a_mouse_motion_event.x_motion*0.5)
--				new_y := new_y + a_mouse_motion_event.x_motion
				
--				new_y := new_y + (a_mouse_motion_event.y_motion)
				
--				alpha := alpha + a_mouse_motion_event.y_motion
--				if alpha >= -15 then
--					alpha := -15
--				elseif alpha <= -90 then
--					 alpha := -90
--				end
--				angle := angle + a_mouse_motion_event.x_motion
--				if angle >= -60 then
--					angle := -60
--				elseif angle <= -130 then
--					angle := -130
--				end
			end
		end

	handle_mouse_button_down_event (a_mouse_button_event: EM_MOUSEBUTTON_EVENT) is
			-- Handle mouse events.
		require else
			a_mouse_button_event_not_void: a_mouse_button_event /= void
		do
			if a_mouse_button_event.is_mouse_wheel_up then
				f := f - 0.1
				if f < 0.3 then
					f := 0.3
				end
			elseif a_mouse_button_event.is_mouse_wheel_down then
				f := f + 0.1
			end
		end

	handle_key_down_event (a_keyboard_event: EM_KEYBOARD_EVENT) is
			-- Handle keyboard events.
		require else
			a_keyboard_event_not_void: a_keyboard_event /= Void
		do
			if a_keyboard_event.key = a_keyboard_event.sdlk_escape then
				next_scene := void
				event_loop.stop
			elseif a_keyboard_event.key = a_keyboard_event.sdlk_return then
				red := 0.0
				blue := 0.3
				green := 0.2
				x := 0
				y := -1
				z := -9
			elseif a_keyboard_event.key = a_keyboard_event.sdlk_right then
				angle := angle - 10
			elseif a_keyboard_event.key = a_keyboard_event.sdlk_left then
				angle := angle + 10
			elseif a_keyboard_event.key = a_keyboard_event.sdlk_down then
				alpha := alpha + 10
			elseif a_keyboard_event.key = a_keyboard_event.sdlk_up then
				alpha := alpha - 10
			elseif a_keyboard_event.key = a_keyboard_event.sdlk_f then
				scale_x := scale_x + 0.1
			elseif a_keyboard_event.key = a_keyboard_event.sdlk_g then
				scale_x := scale_x - 0.1
			elseif a_keyboard_event.key = a_keyboard_event.sdlk_1 then
				gl_polygon_mode (em_gl_front_and_back, em_gl_line)
				gl_flush
				screen.redraw
			elseif a_keyboard_event.key = a_keyboard_event.sdlk_2 then
				gl_polygon_mode (em_gl_front_and_back, em_gl_fill)
				gl_flush
				screen.redraw
			elseif a_keyboard_event.key = a_keyboard_event.sdlk_u then
				new_x := new_x + 1
				io.put_string("new_x: ")
				io.put_real(new_x)
				io.put_new_line
			elseif a_keyboard_event.key = a_keyboard_event.sdlk_j then
				new_x := new_x - 1
				io.put_string("new_x: ")
				io.put_real(new_x)
				io.put_new_line
			elseif a_keyboard_event.key = a_keyboard_event.sdlk_i then
				new_y := new_y + 1
				io.put_string("new_y: ")
				io.put_real(new_y)
				io.put_new_line
			elseif a_keyboard_event.key = a_keyboard_event.sdlk_k then
				new_y := new_y - 1
				io.put_string("new_y: ")
				io.put_real(new_y)
				io.put_new_line
			elseif a_keyboard_event.key = a_keyboard_event.sdlk_o then
				new_z := new_z + 1
				io.put_string("new_z: ")
				io.put_real(new_z)
				io.put_new_line
			elseif a_keyboard_event.key = a_keyboard_event.sdlk_l then
				new_z := new_z - 1
				io.put_string("new_z: ")
				io.put_real(new_z)
				io.put_new_line
			end
		end

feature {NONE} -- Factories
	
	house_factory: HOUSE_FACTORY
	metro_line_factory: METRO_LINE_FACTORY

feature {NONE} -- Implementation
	-- TODO: Find a better solution than repeating this
	
	angle: DOUBLE
		-- The angle of the rotation in degrees
	
	alpha: DOUBLE
		
	speed: EM_NORMALIZED_SPEED
		-- Rotation speed for pyramid
		
	cubes: ARRAY[EM_3D_OBJECT]
		-- List of all cubes
	metro_lines: ARRAY[EM_3D_OBJECT]
		-- List of all metro lines
	metro_lines_coords: ARRAY[ARRAY[TUPLE[DOUBLE]]]
	positions: ARRAY[TUPLE[DOUBLE]]
	
	red: REAL
	blue: REAL
	green: REAL
	
	scale_x: REAL
	scale_y: REAL
	scale_z: REAL
	
	new_x: REAL
	new_y: REAL
	new_z: REAL
	
	x: REAL
	y: REAL
	z: REAL
	f: REAL
		-- Factor
	
	width: INTEGER is 800 --1024
		-- The width of the surface
		
	height: INTEGER is 600 --768
		-- The height of the surface
		
	resolution: INTEGER is 24
		-- The resolution of the surface

end -- class MAP
