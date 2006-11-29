indexing
	description: "The 'main scene' containing the whole GUI"
	date: "$Date: 2006-06-05 16:07:17 +0200 (Mon, 05 Jun 2006) $"
	revision: "$Revision: 658 $"

class ME_SCENE

inherit

	EM_COMPONENT_SCENE

	TRAFFIC_3D_CONSTANTS
		export {NONE} all end

	EXCEPTIONS
		export {NONE} all end

	TRAFFIC_SHARED_TIME
		rename
			time as traffic_time
		end

	TE_3D_SHARED_GLOBALS

	EM_SHARED_BITMAP_FACTORY

creation
	make

feature -- Interface

	make is
			-- Create all checkboxes and gui elements.
		local
			loader: TRAFFIC_MAP_LOADER
			s: STRING
			fs: KL_FILE_SYSTEM
		do
			make_component_scene

			set_frame_counter_visibility (False)

			create bg_color.make_with_rgb (211,211,211)


			-- Toolbar
			create toolbar_panel.make_from_dimension (200, traffic_window_height)


			-- Has to be defined before toolpanel, because otherwise
			-- gl_clear_color cleans whole screen
			if video_subsystem.opengl_enabled then
				create map_widget.make
				map_widget.set_position (0, 30)
				add_component (map_widget)
			else
				io.put_string ("OpenGL disabled: Map not loaded%N")
			end

			-- Toolbar Panel
			toolbar_panel.set_background_color (bg_color)
			toolbar_panel.set_position (me_window_width-200, 0)
			add_component (toolbar_panel)

			-- Lines checkbox
			create lines_checkbox.make_from_text ("Show traffic lines")
			lines_checkbox.set_position (10,40)
			lines_checkbox.set_optimal_dimension (140, 20)
			lines_checkbox.resize_to_optimal_dimension
			lines_checkbox.set_checked
			lines_checkbox.checked_event.subscribe (agent lines_checked)
			lines_checkbox.unchecked_event.subscribe (agent lines_unchecked)
			toolbar_panel.add_widget (lines_checkbox)

			-- adding zurich_big.xml as default using platform independent paths
			fs := (create {KL_SHARED_FILE_SYSTEM}).file_system
			s := fs.pathname ("..", "map")
			s := fs.pathname (s, "zurich_big.xml")

			create loader.make (s)
			loader.enable_dump_loading
			loader.load_map
			map_widget.set_map (loader.map)
			loaded_file_name := s

			-- Quick tools
			create quicktoolbar_panel.make_from_dimension (me_window_width, 30)
			quicktoolbar_panel.set_position (0, 0)
			quicktoolbar_panel.set_background_color (bg_color)
			add_component (quicktoolbar_panel)

			-- Open file
			s := fs.pathname ("resource", "file_open.png")
			bitmap_factory.create_bitmap_from_image (s)
			create quick_open.make_from_image (bitmap_factory.last_bitmap)
			quick_open.set_optimal_dimension (26, 25)
			quick_open.resize_to_optimal_dimension
			quick_open.set_position (2, 2)
			quick_open.clicked_event.subscribe (agent choose_file)
			quicktoolbar_panel.add_widget (quick_open)

			-- Zoom out Button
			s := fs.pathname ("resource", "zoom_out.png")
			bitmap_factory.create_bitmap_from_image (s)
			create zoom_out_button.make_from_image (bitmap_factory.last_bitmap)
			zoom_out_button.set_optimal_dimension (26, 25)
			zoom_out_button.resize_to_optimal_dimension
			zoom_out_button.set_position (30, 2)
			zoom_out_button.clicked_event.subscribe (agent zoom_out_button_clicked)
			quicktoolbar_panel.add_widget (zoom_out_button)

			-- Zoom in Button
			s := fs.pathname ("resource", "zoom_in.png")
			bitmap_factory.create_bitmap_from_image (s)
			create zoom_in_button.make_from_image (bitmap_factory.last_bitmap)
			zoom_in_button.set_optimal_dimension (26, 25)
			zoom_in_button.resize_to_optimal_dimension
			zoom_in_button.set_position (58, 2)
			zoom_in_button.clicked_event.subscribe (agent zoom_in_button_clicked)
			quicktoolbar_panel.add_widget (zoom_in_button)

			-- Frame counter
			create fps_label.make
			fps_label.set_position (me_window_width - 60, 2)
			fps_label.align_right
			fps_label.set_background_color (theme_colors.button_background)
			fps_label.set_foreground_color (theme_colors.button_text)
			quicktoolbar_panel.add_widget (fps_label)

		end

feature -- Event handling

	choose_file is
			-- Open file dialog and choose a map to load.
		local
			dlg: ME_FILE_DIALOG
		do
			create dlg.make
			dlg.add_file_filter ("Traffic xml files (*.xml)", "xml")
			dlg.show
			dlg.button_clicked_event.subscribe (agent open_file (dlg))
		end

	open_file (a_dlg: EM_FILE_DIALOG) is
			-- File dialog was closed, now load a map.
		local
			loader: TRAFFIC_MAP_LOADER
			dlg: EM_MESSAGE_DIALOG
			n,i: INTEGER
			s: STRING
			list: LIST [STRING]
			lbl: EM_LABEL
		do
			if a_dlg.was_ok_clicked and a_dlg.is_file_selected then
				create loader.make (a_dlg.absolute_filename)
				loader.enable_dump_loading
				loader.load_map
				if not loader.has_error then
					map_widget.set_map (loader.map)
					loaded_file_name := a_dlg.filename
				else
					create dlg.make_from_error ("Error parsing" + a_dlg.filename)
					io.put_string (loader.error_message)
					dlg.show
				end

			end
		end

	zoom_in_button_clicked is
			-- "Zoom in" button has been clicked.
		require
			zoom_in_button /= Void
		do
			zoom_in_button.set_pressed (False)
			map_widget.zoom_in
		end

	zoom_out_button_clicked is
			-- "Zoom out" button has been clicked.
		require
			zoom_out_button /= Void
		do
			zoom_out_button.set_pressed (False)
			map_widget.zoom_out
		end

	lines_unchecked is
			-- Checkbox has been unchecked.
		do
			map_widget.disable_lines_shown
		end

	lines_checked is
			-- Checkbox has been checked.
		do
			map_widget.enable_lines_shown
		end

feature -- Widgets

	toolbar_panel: EM_PANEL
			-- Panel, in which all option widgets are displayed

	quicktoolbar_panel: EM_PANEL
			-- Panel on the top where quick tools are located

	quick_open: EM_BUTTON
			-- Button for opening xml files

	lines_checkbox: EM_CHECKBOX
			-- Checkbox for visibility of lines

	zoom_in_button: EM_BUTTON
			-- Botton to zoom in

	zoom_out_button: EM_BUTTON
			-- Botton to zoom out

	fps_label: EM_FPS_LABEL
			-- Frame counter label

feature {NONE} -- Implementation

	me_window_width: INTEGER is 800
			-- Width of map

	bg_color: EM_COLOR
			-- Background color of the scene

	loaded_file_name: STRING
			-- Name of the currently loaded

	map_widget: ME_MAP_WIDGET
			-- The 3 dimensional representation of the map

end
