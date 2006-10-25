indexing
	description: "The 'main scene' containing the standard GUI for touch examples"
	date: "$Date: 2006/01/17 00:24:59 $"
	revision: "$Revision: 1.57 $"

class TOUCH_3D_SCENE

inherit

	EM_COMPONENT_SCENE
		redefine
			initialize_scene
		end

	TOUCH_3D_CONSTANTS
		export {NONE} all end

	EXCEPTIONS
		export {NONE} all end

create
	make_component_scene

feature -- Initialization

	initialize_scene is
			-- Create all gui elements.
		do

			Precursor
			set_frame_counter_visibility (True)

			-- Toolbar
			 create toolbar_panel.make_from_dimension ((window_width*0.25).rounded, (window_height*0.8).rounded)

			-- 'Zoom in' and 'Zoom out' buttons
			create zoom_in_button.make_from_text ("Zoom in")
			create zoom_out_button.make_from_text ("Zoom out")

			-- Has to be defined before toolpanel, because otherwise
			-- gl_clear_color cleans whole screen
			if video_subsystem.opengl_enabled then
				create map_widget.make
				map_widget.set_position (0, 0)
				add_component (map_widget)
			else
				io.put_string ("OpenGL disabled: Map not loaded%N")
			end

			-- Toolbar Panel
			toolbar_panel.set_background_color (create {EM_COLOR}.make_with_rgb(180, 180, 180))
			toolbar_panel.set_position ((Window_width*0.75).rounded, 0)
			add_component (toolbar_panel)

			-- Zoom out Button
			zoom_out_button.set_position (180-zoom_out_button.width, 170)
			zoom_out_button.clicked_event.subscribe (agent zoom_out_button_clicked)
			zoom_out_button.set_background_color (create {EM_COLOR}.make_with_rgb (127, 127, 127))
			toolbar_panel.add_widget (zoom_out_button)

			-- Zoom in Button
			zoom_in_button.set_position (20, 170)
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
			create console_panel.make_from_dimension ((window_width*0.25).rounded, (window_height*0.25).rounded)
			console_panel.set_border (create {EM_NAMED_BORDER}.make_from_text ("Console"))

			console_panel.set_background_color (create {EM_COLOR}.make_with_rgb(180, 180, 180))
			console_panel.set_position((window_width*0.75).rounded, (window_height*0.75).rounded)
			add_component(console_panel)

			create console.make_empty
			console.set_position(8, 12)
			console.set_background_color (create {EM_COLOR}.make_with_rgb(200, 200, 200))
			console.set_dimension ((window_width*0.25).rounded - 16, (window_height*0.25).rounded - 20)
			console.disable

			console_panel.add_widget (console)
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

	map_widget: TOUCH_3D_MAP_WIDGET
			-- The 3 dimensional representation of the map		

end
