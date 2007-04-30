indexing
	description: "The 'main scene' containing the standard GUI for touch examples"
	date: "$Date: 2006/01/17 00:24:59 $"
	revision: "$Revision: 1.57 $"

class TOUCH_3D_SCENE

inherit

	EM_COMPONENT_SCENE
		rename
			time as em_time
		redefine
			initialize_scene,
			run,
			redraw
		end

	TOUCH_3D_CONSTANTS
		export {NONE} all end

	EXCEPTIONS
		export {NONE} all end
	TOUCH_SHARED_MAP_WIDGET

	TRAFFIC_SHARED_TIME

create
	make_component_scene

feature -- Initialization

	run (a_screen: EM_VIDEO_SURFACE) is
			--
		do
			if is_frame_counter_displayed then
				create frame_counter.make
			end
			screen := a_screen
			event_loop.key_down_event.subscribe (agent handle_key_down_event (?))
			event_loop.key_up_event.subscribe (agent handle_key_up_event (?))
			event_loop.mouse_button_down_event.subscribe (agent handle_mouse_button_down_event (?))
			event_loop.mouse_button_up_event.subscribe (agent handle_mouse_button_up_event (?))
			event_loop.mouse_motion_event.subscribe (agent handle_mouse_motion_event (?))
			event_loop.quit_event.subscribe (agent handle_quit_event (?))
			event_loop.update_event.subscribe (agent handle_update_event)
			event_loop.update_event.subscribe (agent animate)
			event_loop.update_event.subscribe (agent redraw)
			event_loop.joystick_axis_event.subscribe (agent handle_joystick_axis_event (?))
			event_loop.joystick_ball_event.subscribe (agent handle_joystick_ball_event (?))
			event_loop.joystick_button_down_event.subscribe (agent handle_joystick_button_down_event (?))
			event_loop.joystick_button_up_event.subscribe (agent handle_joystick_button_up_event (?))
			event_loop.joystick_hat_event.subscribe (agent handle_joystick_hat_event (?))
			event_loop.update_event.subscribe (agent start_next_scene_threaded)

			is_running := True
			set_running_scene (Current)
			time.set (9, 0, 0)
			time.resume
			event_loop.dispatch
			set_running_scene (Void)
			is_running := False
		end

	initialize_scene is
			-- Create all gui elements.
		do

			Precursor
			set_frame_counter_visibility (True)

			-- Toolbar
			 create toolbar_panel.make_from_dimension ((touch_window_width*0.25).rounded, touch_window_height)

			-- 'Zoom in' and 'Zoom out' buttons
			create zoom_in_button.make_from_text ("Zoom in")
			create zoom_out_button.make_from_text ("Zoom out")

			-- Has to be defined before toolpanel, because otherwise
			-- gl_clear_color cleans whole screen
			if video_subsystem.opengl_enabled then
				map_widget.set_position (0, 0)
				add_component (map_widget)
			else
				io.put_string ("OpenGL disabled: Map not loaded%N")
			end

			-- Toolbar Panel
			toolbar_panel.set_background_color (create {EM_COLOR}.make_with_rgb(180, 180, 180))
			toolbar_panel.set_position ((touch_window_width*0.75).rounded, 0)
			add_component (toolbar_panel)

			-- Zoom out Button
			zoom_out_button.set_position (180-zoom_out_button.width, 50)
			zoom_out_button.clicked_event.subscribe (agent zoom_out_button_clicked)
			zoom_out_button.set_background_color (create {EM_COLOR}.make_with_rgb (127, 127, 127))
			toolbar_panel.add_widget (zoom_out_button)

			-- Zoom in Button
			zoom_in_button.set_position (20, 50)
			zoom_in_button.set_dimension (zoom_out_button.width, zoom_out_button.height)
			zoom_in_button.clicked_event.subscribe (agent zoom_in_button_clicked)
			zoom_in_button.set_background_color (create {EM_COLOR}.make_with_rgb (127, 127, 127))
			toolbar_panel.add_widget (zoom_in_button)

			-- Click here button for examples
			create click_here_button.make_from_text ("Click here")
			click_here_button.set_position (margin, margin)
			click_here_button.set_width (toolbar_panel.width - 2*margin)
			toolbar_panel.add_widget (click_here_button)

			-- Console
			create console.make_empty
			console.set_position(10, (touch_window_height*0.2).rounded)
			console.set_border (create {EM_NAMED_BORDER}.make_from_text ("Console"))
			console.set_background_color (create {EM_COLOR}.make_white)
			console.set_dimension ((touch_window_width*0.25).rounded - 16, (touch_window_height*0.8).rounded - 20)
			console.disable

			toolbar_panel.add_widget (console)

			create time_counter.make
			time_counter.set_x (map_widget.x + map_widget.width - 140)
		end

feature -- Event handling

	zoom_in_button_clicked is
			-- "Zoom in" button has been clicked.
		require
			zoom_in_button /= Void
		do
			zoom_in_button.set_pressed (False)
			map_widget.zoom_in
			console.set_text ("zooming in ...")
		end

	zoom_out_button_clicked is
			-- "Zoom out" button has been clicked.
		require
			zoom_out_button /= Void
		do
			zoom_out_button.set_pressed (False)
			map_widget.zoom_out

			console.set_text ("zooming out ...")
		end

feature -- Widgets

	console_panel: EM_PANEL
			-- Panel, in which the console is displayed.

	console: TOUCH_CONSOLE
			-- 	For displaying the process of the program.	

	toolbar_panel: EM_PANEL
			-- Panel, in which all option widgets are displayed.

	console_text: STRING
			-- The output text to the console.

	zoom_in_button: EM_BUTTON
			-- Botton to zoom in

	zoom_out_button: EM_BUTTON
			-- Botton to zoom out

	click_here_button: EM_BUTTON
			-- Button to execute example codes	

feature -- Access

	time_counter: TRAFFIC_TIME_COUNTER

	redraw is
			--
		local
			cursor: DS_BILINKED_LIST_CURSOR [EM_COMPONENT]
			component: EM_COMPONENT
		do
			if video_subsystem.opengl_enabled then
				gl_clear (Em_gl_color_buffer_bit | Em_gl_depth_buffer_bit)
			end
			from
				cursor := components_impl.new_cursor
				cursor.start
			until
				cursor.off
			loop
				component := cursor.item
				if component.is_visible then
					component.redraw
				end
				cursor.forth
			end
			if is_frame_counter_displayed then
				if video_subsystem.opengl_enabled and not video_subsystem.video_surface.is_opengl_blitting_enabled then
					video_subsystem.video_surface.enable_opengl_blitting
				end
				frame_counter.draw (screen)
			end
			if video_subsystem.opengl_enabled and not video_subsystem.video_surface.is_opengl_blitting_enabled then
				video_subsystem.video_surface.enable_opengl_blitting
			end
			time_counter.draw (screen)
			screen.redraw
		end

end
