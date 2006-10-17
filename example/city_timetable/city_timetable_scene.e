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
			traveler: TRAFFIC_PASSENGER
			list: ARRAYED_LIST [EM_VECTOR_2D]
		do
			make_component_scene

			set_frame_counter_visibility (True)

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

			-- Labels, Buttons, Lists
			create load_buildings_button.make_from_text("Load buildings")
			create time_label.make_from_text("00:00")
			create delete_buildings_button.make_from_text("Delete buildings")
			create station_label.make_from_text("Select station")
			create station_schedule_textlist.make_empty
			create station_lines_combobox.make_empty

			-- Has to be defined before toolpanel, because otherwise
			-- gl_clear_color cleans whole screen
			if video_subsystem.opengl_enabled then
				create map.make
				map.set_position (0, 0)
				add_component (map)
				map.mouse_clicked_event.subscribe (agent handle_mouse_click (?))
			else
				io.put_string ("OpenGL disabled: Map not loaded%N")
			end

			-- Toolbar Panel
			toolbar_panel.set_background_color (bg_color)
			toolbar_panel.set_position (city_timetable_window_width-200, 0)
			add_component (toolbar_panel)

			-- Building buttons
			load_buildings_button.set_position(20,(window_height * 0.68).rounded)
			load_buildings_button.set_dimension (160, load_buildings_button.height)
			load_buildings_button.clicked_event.subscribe (agent load_buildings_clicked)
			toolbar_panel.add_widget (load_buildings_button)
			delete_buildings_button.set_position (20, (window_height * 0.73).rounded)
			delete_buildings_button.set_dimension (160, delete_buildings_button.height)
			delete_buildings_button.clicked_event.subscribe (agent delete_buildings_clicked)
			toolbar_panel.add_widget (delete_buildings_button)

			-- Sun Checkbox
			sun_checkbox.set_position (17, (window_height * 0.83).rounded)
			sun_checkbox.set_background_color (bg_color)
			sun_checkbox.set_optimal_dimension (110, 20)
			sun_checkbox.resize_to_optimal_dimension
			sun_checkbox.set_background_color (bg_color)
			sun_checkbox.set_checked
			sun_checkbox.checked_event.subscribe (agent sun_checked)
			sun_checkbox.unchecked_event.subscribe (agent sun_unchecked)
			toolbar_panel.add_widget (sun_checkbox)

			-- Buildings Checkbox
			buildings_checkbox.set_position (17, (window_height * 0.87).rounded)
			buildings_checkbox.set_background_color (bg_color)
			buildings_checkbox.set_optimal_dimension (110, 20)
			buildings_checkbox.resize_to_optimal_dimension
			buildings_checkbox.set_background_color (bg_color)
			buildings_checkbox.set_checked
			buildings_checkbox.checked_event.subscribe (agent buildings_checked)
			buildings_checkbox.unchecked_event.subscribe (agent buildings_unchecked)
			toolbar_panel.add_widget (buildings_checkbox)

			-- Lines checkbox
			create lines_checkbox.make_from_text ("Show VBZ Lines")
			lines_checkbox.set_position (20,375)
			lines_checkbox.set_optimal_dimension (120, 20)
			lines_checkbox.resize_to_optimal_dimension
			lines_checkbox.checked_event.subscribe (agent lines_checked)
			lines_checkbox.unchecked_event.subscribe (agent lines_unchecked)
			toolbar_panel.add_widget (lines_checkbox)

			-- Time Checkbox
			time_checkbox.set_position (17, (window_height * 0.91).rounded)
			time_checkbox.set_background_color (bg_color)
			time_checkbox.set_optimal_dimension (110, 20)
			time_checkbox.resize_to_optimal_dimension
			time_checkbox.set_background_color (bg_color)
			time_checkbox.checked_event.subscribe (agent time_checked)
			time_checkbox.unchecked_event.subscribe (agent time_unchecked)
			toolbar_panel.add_widget (time_checkbox)

			-- Time slider
			create time_slider.make_from_range_horizontal (1, 60)
			time_slider.set_position (40, (window_height * 0.95).rounded)
			time_slider.set_optimal_dimension (120, 20)
			time_slider.resize_to_optimal_dimension
			time_slider.set_tooltip ("Day simulation minutes")
			time_slider.position_changed_event.subscribe (agent number_of_minutes_changed)
			toolbar_panel.add_widget (time_slider)

			-- Zoom out Button
			zoom_out_button.set_position (180-zoom_out_button.width, (window_height * 0.78).rounded)
			zoom_out_button.clicked_event.subscribe (agent zoom_out_button_clicked)
			zoom_out_button.set_background_color (create {EM_COLOR}.make_with_rgb (127, 127, 127))
			toolbar_panel.add_widget (zoom_out_button)

			-- Zoom in Button
			zoom_in_button.set_position (20, (window_height * 0.78).rounded)
			zoom_in_button.set_dimension (zoom_out_button.width, zoom_out_button.height)
			zoom_in_button.clicked_event.subscribe (agent zoom_in_button_clicked)
			zoom_in_button.set_background_color (create {EM_COLOR}.make_with_rgb (127, 127, 127))
			toolbar_panel.add_widget (zoom_in_button)

			-- Time label
			time_label.set_position(15, 20)
			time_label.set_optimal_dimension(160,40)
			time_label.resize_to_optimal_dimension
			time_label.align_center
			toolbar_panel.add_widget (time_label)

			-- Station label
			station_label.set_position(0, 50)
			station_label.set_optimal_dimension(200, 40)
			station_label.resize_to_optimal_dimension
			station_label.align_center
			toolbar_panel.add_widget (station_label)

			-- Station lines combobox
			station_lines_combobox.set_position(15, 70)
			station_lines_combobox.set_dimension (160,20)
			station_lines_combobox.selection_changed_event.subscribe (agent station_lines_selection_changed)
			toolbar_panel.add_widget (station_lines_combobox)

			-- Station schedue scrollpanel			
			create station_schedule_scrollpanel.make_from_dimension (160, 250)
			station_schedule_scrollpanel.set_position (15, 110)
			station_schedule_scrollpanel.set_widget (station_schedule_textlist)
			toolbar_panel.add_widget (station_schedule_scrollpanel)


			-- adding zurich_big.xml as default using platform independent paths
			fs := (create {KL_SHARED_FILE_SYSTEM}).file_system
			s := fs.pathname ("..", "map")
			s := fs.pathname (s, "zurich_big.xml")

			create loader.make (s)
			loader.enable_dump_loading
			loader.load_map
			map.set_map (loader.map)
			map.add_vehicles
			loaded_file_name := s

--			create list.make (2)
--			list.extend (map.map.place ("Wipkingerplatz").position)
--			list.extend (create {EM_VECTOR_2D}.make (100, 100))
--			create traveler.make_directed (list, .5)
--			traveler.set_reiterate (True)
--			map.add_traveler (traveler)
----			map.map.add_traveler (traveler)
--			traveler.take_tour

--			create list.make (2)
--			list.extend (map.map.place ("Rosengartenstrasse").position)
--			list.extend (create {EM_VECTOR_2D}.make (50, 100))
--			create traveler.make_directed (list, .5)
--			traveler.set_reiterate (True)
--			map.add_traveler (traveler)
----			map.map.add_traveler (traveler)
--			traveler.take_tour

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

	handle_mouse_click (e: EM_MOUSEBUTTON_EVENT) is
			-- Adapt the text on the station label
		require
			valid_station_label: station_label /= Void
		local
			traveler: TRAFFIC_LINE_VEHICLE
		do
			-- Clear all information
			station_label.set_text ("Selected station")
			station_schedule_textlist.elements.wipe_out
			station_lines_combobox.elements.wipe_out

			if map.marked_station /= Void then
				-- Display the name of the station
				station_label.set_text (map.marked_station.name)

				-- Add the lines that travel trough the station to the combobox
				from
					map.marked_station.schedule.start
				until
					map.marked_station.schedule.after
				loop
					traveler ?= map.marked_station.schedule.item @ 1

					if not station_lines_combobox.has (traveler.line.name) then
						station_lines_combobox.put (traveler.line.name)
					end

					map.marked_station.schedule.forth
				end

				-- Select the first line if there is one
				if station_lines_combobox.count > 0 then
					station_lines_combobox.set_selected_index (1)
				end
			end
		end


	station_lines_selection_changed (selection: STRING) is
			-- The selection of the combobox of the lines of the selected station has changed
		local
			traveler: TRAFFIC_LINE_VEHICLE
			departure_time: TIME
			target: TRAFFIC_PLACE
			direction_name: STRING
			list: LINKED_LIST[TIME]
			schedule: HASH_TABLE[LINKED_LIST[TIME], STRING]
		do
			-- Clear all times
			station_schedule_textlist.elements.wipe_out

			-- Create a hash table which we use to sort the schedule entrys by target
			create schedule.make (2)

			if map.marked_station /= Void and station_lines_combobox.has_selected_element then
				-- Add all times when a tram of this line departs at the station
				from
					map.marked_station.schedule.start
				until
					map.marked_station.schedule.after
				loop
					traveler ?= map.marked_station.schedule.item @ 1
					departure_time ?= map.marked_station.schedule.item @ 2
					target ?= map.marked_station.schedule.item @ 3

					if traveler.line.name.is_equal (station_lines_combobox.selected_element) then
						direction_name := "To " + target.name
						if schedule.has (direction_name) then
							schedule.item (direction_name).extend (departure_time)
						else
							create list.make
							list.extend (departure_time)
							schedule.put (list, direction_name)
						end
					end

					map.marked_station.schedule.forth
				end

				-- Display
				from
					schedule.start
				until
					schedule.after
				loop
					station_schedule_textlist.put (schedule.key_for_iteration)

					from
						schedule.item_for_iteration.start
					until
						schedule.item_for_iteration.after
					loop
						station_schedule_textlist.put ("  " + schedule.item_for_iteration.item.out)

						schedule.item_for_iteration.forth
					end

					schedule.forth
				end
			end

			station_schedule_scrollpanel.set_widget (station_schedule_textlist)
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
			map.time.change_simulated_time (1)
			map.time.start_time
		end

	time_unchecked is
			-- Checkbox has been unchecked.
		do
			map.time.pause_time
		end

	number_of_minutes_changed (number: INTEGER) is
			-- The time slider was used.
			do
			traffic_time.change_simulated_time (number)
		end

	update is
			-- Set clock corresponding to time
		require
			time_exists: traffic_time /= Void
		do
			time_label.set_text (traffic_time.actual_hour.out + ":" + traffic_time.actual_minute.out)
		end

	lines_unchecked is
			-- Checkbox has been unchecked.
		do
			map.set_lines_shown (False)
		end

	lines_checked is
			-- Checkbox has been checked.
		do
			map.set_lines_shown (True)
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

	lines_checkbox: EM_CHECKBOX
			-- Checkbox for visibility of lines

	zoom_in_button: EM_BUTTON
			-- Botton to zoom in

	zoom_out_button: EM_BUTTON
			-- Botton to zoom out

	time_label: EM_LABEL
			-- Clock

	time_slider: EM_SLIDER
			-- Scrollbar for the time			

	station_label: EM_LABEL
			-- Selected station

	station_lines_combobox: EM_COMBOBOX[STRING]
			-- The available lines in the selected station			

	station_schedule_textlist: EM_TEXTLIST[STRING]
			-- Schedule of selected station

	station_schedule_scrollpanel: EM_SCROLLPANEL
			-- Scrollpanel for station_schedule_textlist

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
