indexing
	description: "The 'main scene' containing the whole GUI"
	date: "$Date: 2006-06-05 16:07:17 +0200 (Mon, 05 Jun 2006) $"
	revision: "$Revision: 658 $"

class CITY_TIMETABLE_SCENE

inherit

	EM_COMPONENT_SCENE
		redefine
			redraw
		end

	TRAFFIC_3D_CONSTANTS
		export {NONE} all end

	EXCEPTIONS
		export {NONE} all end
		
	TRAFFIC_SHARED_TIME		
		rename 
			time as traffic_time
		end
		
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
			create toolbar_panel.make_from_dimension (200, window_height)

			-- Checkboxes
			create sun_checkbox.make_from_text ("Show sun")
			create buildings_checkbox.make_from_text ("Show buildings")			
			create vehicles_checkbox.make_from_text ("Show vehicles")
			create time_checkbox.make_from_text ("Simulate time")			
			
			-- 'Zoom in' and 'Zoom out' buttons
			create zoom_in_button.make_from_text ("Zoom in")
			create zoom_out_button.make_from_text ("Zoom out")

			-- Labels, Buttons
			create load_buildings_button.make_from_text("Load buildings")
			create time_label.make_from_text("00:00")
			create delete_buildings_button.make_from_text("Delete buildings")

			-- Has to be defined before toolpanel, because otherwise
			-- gl_clear_color cleans whole screen
			if video_subsystem.opengl_enabled then
				create map.make
				map.set_position (0, 0)
				add_component (map)
			else
				io.put_string ("OpenGL disabled: Map not loaded%N")
			end

			-- Toolbar Panel
			toolbar_panel.set_background_color (bg_color)
			toolbar_panel.set_position (city_timetable_window_width-200, 0)
			add_component (toolbar_panel)

			-- Building buttons
			load_buildings_button.set_position(20,(window_height * 0.73).rounded)
			load_buildings_button.set_dimension (160, load_buildings_button.height)
			load_buildings_button.clicked_event.subscribe (agent load_buildings_clicked)
			toolbar_panel.add_widget (load_buildings_button)
			delete_buildings_button.set_position (20, (window_height * 0.78).rounded)
			delete_buildings_button.set_dimension (160, delete_buildings_button.height)
			delete_buildings_button.clicked_event.subscribe (agent delete_buildings_clicked)
			toolbar_panel.add_widget (delete_buildings_button)

			-- Sun Checkbox
			sun_checkbox.set_position (17, (window_height * 0.87).rounded)
			sun_checkbox.set_background_color (bg_color)
			sun_checkbox.set_optimal_dimension (110, 20)
			sun_checkbox.resize_to_optimal_dimension
			sun_checkbox.set_background_color (bg_color)
			sun_checkbox.set_checked
			sun_checkbox.checked_event.subscribe (agent sun_checked)
			sun_checkbox.unchecked_event.subscribe (agent sun_unchecked)
			toolbar_panel.add_widget (sun_checkbox)

			-- Buildings Checkbox
			buildings_checkbox.set_position (17, (window_height * 0.91).rounded)
			buildings_checkbox.set_background_color (bg_color)
			buildings_checkbox.set_optimal_dimension (110, 20)
			buildings_checkbox.resize_to_optimal_dimension
			buildings_checkbox.set_background_color (bg_color)
			buildings_checkbox.set_checked
			buildings_checkbox.checked_event.subscribe (agent buildings_checked)
			buildings_checkbox.unchecked_event.subscribe (agent buildings_unchecked)
			toolbar_panel.add_widget (buildings_checkbox)

			-- Time Checkbox
			time_checkbox.set_position (17, (window_height * 0.95).rounded)
			time_checkbox.set_background_color (bg_color)
			time_checkbox.set_optimal_dimension (110, 20)
			time_checkbox.resize_to_optimal_dimension
			time_checkbox.set_background_color (bg_color)
			time_checkbox.checked_event.subscribe (agent time_checked)
			time_checkbox.unchecked_event.subscribe (agent time_unchecked)
			toolbar_panel.add_widget (time_checkbox)

			-- Zoom out Button
			zoom_out_button.set_position (180-zoom_out_button.width, (window_height * 0.83).rounded)
			zoom_out_button.clicked_event.subscribe (agent zoom_out_button_clicked)
			zoom_out_button.set_background_color (create {EM_COLOR}.make_with_rgb (127, 127, 127))
			toolbar_panel.add_widget (zoom_out_button)

			-- Zoom in Button
			zoom_in_button.set_position (20, (window_height * 0.83).rounded)
			zoom_in_button.set_dimension (zoom_out_button.width, zoom_out_button.height)
			zoom_in_button.clicked_event.subscribe (agent zoom_in_button_clicked)
			zoom_in_button.set_background_color (create {EM_COLOR}.make_with_rgb (127, 127, 127))
			toolbar_panel.add_widget (zoom_in_button)
			
			-- Time label
			time_label.set_position(15, 20)
			time_label.set_optimal_dimension(180,40)
			time_label.resize_to_optimal_dimension
			time_label.align_center
			toolbar_panel.add_widget (time_label)			

			-- adding zurich_big.xml as default using platform independent paths
			fs := (create {KL_SHARED_FILE_SYSTEM}).file_system
			s := fs.pathname ("..", "map")
			s := fs.pathname (s, "zurich_big.xml")

			create loader.make (s)
			loader.load_map
			map.set_map (loader.map)
			map.add_vehicles
			loaded_file_name := s

		end

feature -- Event handling

	redraw is
			-- Update the clock and redraw the scene
		do
			update
			Precursor
		end
		

	zoom_in_button_clicked is
			-- "Zoom in" button has been clicked.
		require
			zoom_in_button /= Void
		do
			zoom_in_button.set_pressed (False)
			map.zoom_in
		end

	zoom_out_button_clicked is
			-- "Zoom out" button has been clicked.
		require
			zoom_out_button /= Void
		do
			zoom_out_button.set_pressed (False)
			map.zoom_out
		end

	handle_mouse_click (origin_label, destination_label: EM_LABEL; e: EM_MOUSEBUTTON_EVENT) is
			-- Adapt the text on `origin_label' and `destination_label'.
		require
			origin_label /= Void
			destination_label /= Void
			e /= Void
		do
			if map.marked_origin /= Void then
				origin_label.set_text (map.marked_origin.name)
			else
				origin_label.set_text ("")
			end

			if map.marked_destination /= Void and then map.show_shortest_path then
				destination_label.set_text (map.marked_destination.name)
			else
				destination_label.set_text ("")
			end
		end

	sun_checked is
			-- Checkbox has been checked.
		do
			map.set_sun_shown (True)
		end

	sun_unchecked is
			-- Checkbox has been unchecked.
		do
			map.set_sun_shown (False)
		end

	buildings_checked is
			-- Checkbox has been checked.
		do
			map.set_buildings_shown (True)
		end

	buildings_unchecked is
			-- Checkbox has been unchecked.
		do
			map.set_buildings_shown (False)
		end

	load_buildings_clicked is
			-- Load buildings along lines.
		do
			map.add_buildings_along_lines
		end

	delete_buildings_clicked is
			-- Delete buildings from representation.
		do
			map.delete_buildings
		end
		
	time_checked is
			-- Checkbox has been checked.
		do
			map.time.start_time
		end

	time_unchecked is
			-- Checkbox has been unchecked.
		do
			map.time.pause_time
		end

	update is
			-- Set clock corresponding to time
		require
			time_exists: traffic_time /= Void
		do
			time_label.set_text (traffic_time.actual_hour.out + ":" + traffic_time.actual_minute.out)
		end

feature -- Widgets

	toolbar_panel: EM_PANEL
			-- Panel, in which all option widgets are displayed.

	sun_checkbox: EM_CHECKBOX
			-- Checkbox for different light

	buildings_checkbox: EM_CHECKBOX
			-- Checkbox for buildings

	vehicles_checkbox: EM_CHECKBOX
			-- Checkbox for vehicles

	time_checkbox: EM_CHECKBOX
			-- Checkbox for time

	zoom_in_button: EM_BUTTON
			-- Botton to zoom in

	zoom_out_button: EM_BUTTON
			-- Botton to zoom out
			
	time_label: EM_LABEL
			-- Clock

	load_buildings_button: EM_BUTTON
			-- Button to load buildings along lines

	delete_buildings_button: EM_BUTTON
			-- Button to delete buildings from the map

feature {NONE} -- Implementation

	city_timetable_window_width: INTEGER is 800
			-- Width of map

	bg_color: EM_COLOR
			-- Background color of the scene

	map_file_name: STRING
			-- Name of the map file to be loaded

	loaded_file_name: STRING
			-- Name of the currently loaded

	map: CITY_TIMETABLE_MAP_WIDGET
			-- The 3 dimensional representation of the map

end
