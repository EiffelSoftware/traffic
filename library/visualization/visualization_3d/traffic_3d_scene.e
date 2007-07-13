indexing
	description: "Default scene with a map widget and buttons for opening an xml, zooming in and out"
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_3D_SCENE

inherit

	EM_COMPONENT_SCENE
		rename
			time as em_time
		redefine
			redraw
		end

	TRAFFIC_3D_CONSTANTS
		export {NONE} all end

	EXCEPTIONS
		export {NONE} all end

	TRAFFIC_SHARED_TIME

	TE_3D_SHARED_GLOBALS

	EM_SHARED_BITMAP_FACTORY

creation
	make

feature {NONE} -- Initialization

	make is
			-- Create all checkboxes and gui elements.
		local
			loader: TRAFFIC_MAP_LOADER
			s: STRING
			fs: KL_FILE_SYSTEM
		do
			make_component_scene

			set_frame_counter_visibility (False)

			-- Has to be defined before toolpanel, because otherwise
			-- gl_clear_color cleans whole screen
			if video_subsystem.opengl_enabled then
				create map_widget.make (width, height - 30)
				map_widget.set_position (0, 30)
				map_widget.mouse_dragged_event.subscribe (agent rotate (?))
				map_widget.mouse_wheel_up_event.subscribe (agent map_widget.zoom_in)
				map_widget.mouse_wheel_down_event.subscribe (agent map_widget.zoom_out)
				add_component (map_widget)
			else
				io.put_string ("OpenGL disabled: Map not loaded%N")
			end

			-- adding zurich_big.xml as default using platform independent paths
--			fs := (create {KL_SHARED_FILE_SYSTEM}).file_system
--			s := fs.pathname ("..", "map")
--			s := fs.pathname (s, "zurich_big.xml")

--			create loader.make (s)
--			loader.enable_dump_loading
--			loader.load_map
--			map_widget.set_map (loader.map)
--			loaded_file_name := s

			build_quicktoolbar

			-- Frame counter
--			create fps_label.make
--			fps_label.set_position (width - 60, 40)
--			fps_label.align_right
--			fps_label.set_background_color (theme_colors.button_background)
--			fps_label.set_foreground_color (theme_colors.button_text)
--			quicktoolbar_panel.add_widget (fps_label)

			-- Time counter
			create time_counter.make
			time_counter.set_x_y (10, 40)
		end

	build_quicktoolbar is
			-- Build the quick toolbar panel with default buttons.
		local
			s: STRING
			fs: KL_FILE_SYSTEM
		do
			fs := (create {KL_SHARED_FILE_SYSTEM}).file_system
			-- Quick tools
			create quicktoolbar_panel.make_from_dimension (width, 30)
			quicktoolbar_panel.set_position (0, 0)
			add_component (quicktoolbar_panel)

			-- Open file
			s := fs.pathname ("..\image", "open.png")
			bitmap_factory.create_bitmap_from_image (s)
			create open_button.make_from_image (bitmap_factory.last_bitmap)
			open_button.set_optimal_dimension (26, 25)
			open_button.resize_to_optimal_dimension
			open_button.set_position (2, 2)
			open_button.clicked_event.subscribe (agent choose_file)
			quicktoolbar_panel.add_widget (open_button)

			-- Zoom out Button
			s := fs.pathname ("..\image", "zoom_out.png")
			bitmap_factory.create_bitmap_from_image (s)
			create zoom_out_button.make_from_image (bitmap_factory.last_bitmap)
			zoom_out_button.set_optimal_dimension (26, 25)
			zoom_out_button.resize_to_optimal_dimension
			zoom_out_button.set_position (58, 2)
			zoom_out_button.clicked_event.subscribe (agent zoom_out_button_clicked)
			quicktoolbar_panel.add_widget (zoom_out_button)

			-- Zoom in Button
			s := fs.pathname ("..\image", "zoom_in.png")
			bitmap_factory.create_bitmap_from_image (s)
			create zoom_in_button.make_from_image (bitmap_factory.last_bitmap)
			zoom_in_button.set_optimal_dimension (26, 25)
			zoom_in_button.resize_to_optimal_dimension
			zoom_in_button.set_position (86, 2)
			zoom_in_button.clicked_event.subscribe (agent zoom_in_button_clicked)
			quicktoolbar_panel.add_widget (zoom_in_button)
		end

feature -- Basic operations

	redraw is
			--
		local
			cursor: DS_BILINKED_LIST_CURSOR [EM_COMPONENT]
			component: EM_COMPONENT
		do
			if video_subsystem.opengl_enabled then
--				gl_clear (Em_gl_color_buffer_bit | Em_gl_depth_buffer_bit)
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

feature -- Event handling

	rotate (an_event: EM_MOUSEMOTION_EVENT) is
			-- Rotate camera around
		do
			if an_event.button_state_right then
				map_widget.rotate_camera (an_event.x_motion, an_event.y_motion)
			end
		end


	choose_file is
			-- Open file dialog and choose a map to load.
		local
			dlg: TRAFFIC_FILE_DIALOG
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
					io.put_string ("bad error!!")
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

feature -- Access

	quicktoolbar_panel: EM_PANEL
			-- Panel on the top where quick tools are located

	open_button: EM_BUTTON
			-- Button for opening xml files

	zoom_in_button: EM_BUTTON
			-- Botton to zoom in

	zoom_out_button: EM_BUTTON
			-- Botton to zoom out

	fps_label: EM_FPS_LABEL
			-- Frame counter label

	time_counter: TRAFFIC_TIME_COUNTER
			-- Time counter label

	map_widget: TRAFFIC_3D_MAP_WIDGET
			-- The 3 dimensional representation of the map

feature {NONE} -- Implementation

	loaded_file_name: STRING
			-- Name of the currently loaded

end
