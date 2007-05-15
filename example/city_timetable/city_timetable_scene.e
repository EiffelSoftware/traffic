indexing
	description: "The 'main scene' containing the whole GUI"
	date: "$Date: 2006-06-05 16:07:17 +0200 (Mon, 05 Jun 2006) $"
	revision: "$Revision: 658 $"

class CITY_TIMETABLE_SCENE

inherit

	TRAFFIC_3D_SCENE
		redefine
			make,
			open_file
		end

	TRAFFIC_3D_CONSTANTS
		export {NONE} all end

	EXCEPTIONS
		export {NONE} all end

	TE_3D_SHARED_GLOBALS

creation
	make

feature -- Interface

	make is
			-- Create all checkboxes and gui elements.
		local
			loader: TRAFFIC_MAP_LOADER
			s: STRING
			fs: KL_FILE_SYSTEM
			et: TRAFFIC_EVENT_TAXI_OFFICE
			dt: TRAFFIC_DISPATCHER_TAXI_OFFICE
		do
			make_component_scene

			create random.set_seed (198273)

			set_frame_counter_visibility (False)

			Precursor

			map_widget.place_clicked_event.subscribe (agent call_taxi)

			-- adding zurich_big.xml as default using platform independent paths
			fs := (create {KL_SHARED_FILE_SYSTEM}).file_system
			s := fs.pathname ("..", "map")
			s := fs.pathname (s, "zurich_little.xml")

			create loader.make (s)
			loader.disable_dump_loading
			loader.load_map
			map_widget.set_map (loader.map)
			loaded_file_name := s

			create point_randomizer.set_map (loader.map)
			create path_randomizer.set_map (loader.map)

			build_tool_bar

--			loader.map.lines.item_for_iteration.

			-- Checkboxes
--			create buildings_checkbox.make_from_text ("Show buildings")
--			create vehicles_checkbox.make_from_text ("Show vehicles")
--			create time_checkbox.make_from_text ("Simulate time")

--			-- Labels, Buttons, Lists
--			create load_buildings_button.make_from_text("Load buildings")
--			create time_label.make_from_text("00:00")
--			create delete_buildings_button.make_from_text("Delete buildings")
--			create station_label.make_from_text("Select station")
--			create station_schedule_textlist.make_empty
--			create station_lines_combobox.make_empty

			-- Has to be defined before toolpanel, because otherwise
			-- gl_clear_color cleans whole screen
--			if video_subsystem.opengl_enabled then
--				map_widget.mouse_clicked_event.subscribe (agent handle_mouse_click (?))
--			else
--				io.put_string ("OpenGL disabled: Map not loaded%N")
--			end

			-- Toolbar Panel

			-- Taxi office type combobox
--			create taxi_office_type_combobox.make_empty
--			taxi_office_type_combobox.put ("Event Taxi Office")
--			taxi_office_type_combobox.put ("Dispatcher Taxi Office")
--			taxi_office_type_combobox.set_selected_element ("Event Taxi Office")
--			taxi_office_type_combobox.set_position (15, 10)
--			taxi_office_type_combobox.set_dimension (160,20)
--			taxi_office_type_combobox.selection_changed_event.subscribe (agent taxi_office_type_changed(?))
--			toolbar_panel.add_widget (taxi_office_type_combobox)

			-- Building buttons
--			load_buildings_button.set_position(20,(traffic_window_height * 0.68).rounded)
--			load_buildings_button.set_dimension (160, load_buildings_button.height)
--			load_buildings_button.clicked_event.subscribe (agent load_buildings_clicked)
----			toolbar_panel.add_widget (load_buildings_button)
--			delete_buildings_button.set_position (20, (traffic_window_height * 0.73).rounded)
--			delete_buildings_button.set_dimension (160, delete_buildings_button.height)
--			delete_buildings_button.clicked_event.subscribe (agent delete_buildings_clicked)
----			toolbar_panel.add_widget (delete_buildings_button)

			-- Sun Checkbox
--			toolbar_panel.add_widget (sun_checkbox)

			-- Shadow Checkbox

			-- Buildings Checkbox
--			buildings_checkbox.set_position (17, (traffic_window_height * 0.87).rounded)
--			buildings_checkbox.set_optimal_dimension (110, 20)
--			buildings_checkbox.resize_to_optimal_dimension
--			buildings_checkbox.set_checked
--			buildings_checkbox.checked_event.subscribe (agent buildings_checked)
--			buildings_checkbox.unchecked_event.subscribe (agent buildings_unchecked)
----			toolbar_panel.add_widget (buildings_checkbox)


--			-- Time Checkbox
--			time_checkbox.set_position (17, (traffic_window_height * 0.91).rounded)
--			time_checkbox.set_optimal_dimension (110, 20)
--			time_checkbox.resize_to_optimal_dimension
--			time_checkbox.checked_event.subscribe (agent time_checked)
--			time_checkbox.unchecked_event.subscribe (agent time_unchecked)
----			toolbar_panel.add_widget (time_checkbox)

--			-- Time slider
--			create time_slider.make_from_range_horizontal (1, 60)
--			time_slider.set_position (40, (traffic_window_height * 0.95).rounded)
--			time_slider.set_optimal_dimension (120, 20)
--			time_slider.resize_to_optimal_dimension
--			time_slider.set_tooltip ("Day simulation minutes")
--			time_slider.position_changed_event.subscribe (agent number_of_minutes_changed)
----			toolbar_panel.add_widget (time_slider)

			-- Zoom out Button
--			zoom_out_button.set_position (180-zoom_out_button.width, (traffic_window_height * 0.78).rounded)
--			zoom_out_button.clicked_event.subscribe (agent zoom_out_button_clicked)
--			zoom_out_button.set_background_color (create {EM_COLOR}.make_with_rgb (127, 127, 127))
--			toolbar_panel.add_widget (zoom_out_button)

			-- Zoom in Button
--			zoom_in_button.set_position (20, (traffic_window_height * 0.78).rounded)
--			zoom_in_button.set_dimension (zoom_out_button.width, zoom_out_button.height)
--			zoom_in_button.clicked_event.subscribe (agent zoom_in_button_clicked)
--			zoom_in_button.set_background_color (create {EM_COLOR}.make_with_rgb (127, 127, 127))
--			toolbar_panel.add_widget (zoom_in_button)

			-- Time label
--			time_label.set_position(15, 35)
--			time_label.set_optimal_dimension(160,40)
--			time_label.resize_to_optimal_dimension
--			time_label.align_center
----			toolbar_panel.add_widget (time_label)

--			-- Station label
--			station_label.set_position(0, 60)
--			station_label.set_optimal_dimension(200, 40)
--			station_label.resize_to_optimal_dimension
--			station_label.align_center
----			toolbar_panel.add_widget (station_label)

--			-- Station lines combobox
--			station_lines_combobox.set_position(15, 80)
--			station_lines_combobox.set_dimension (160,20)
--			station_lines_combobox.selection_changed_event.subscribe (agent station_lines_selection_changed)
----			toolbar_panel.add_widget (station_lines_combobox)

			-- Station schedue scrollpanel			
--			create station_schedule_scrollpanel.make_from_dimension (160, 230)
--			station_schedule_scrollpanel.set_position (15, 120)
--			station_schedule_scrollpanel.set_widget (station_schedule_textlist)
----			toolbar_panel.add_widget (station_schedule_scrollpanel)


		end

	build_line_vehicle_tools: EM_PANEL is
			-- Build the area which steers adding and removing line vehicles.
		local
			label: EM_LABEL
			button: EM_BUTTON
			slider: EM_SLIDER
		do
			create Result.make_from_dimension (toolbar_panel.width, 20)
			create label.make_from_text ("0 Veh./Line")
			label.set_position (50, 0)
			Result.add_widget (label)
			create slider.make_from_range_horizontal (0, 5)
			slider.set_width (40)
			slider.set_position (155, 0)
			slider.position_changed_event.subscribe (agent update_label_count (?, label, "Veh./Line"))
			Result.add_widget (slider)
			create button.make_from_text ("Add")
			button.clicked_event.subscribe (agent add_vehicles (slider))
			button.set_position (10, 0)
			Result.add_widget (button)
		end

	build_map_tools: EM_PANEL is
			-- Build the area which steers map display options.
		local
			checkbox: EM_CHECKBOX
			button: EM_BUTTON
		do
			create Result.make_from_dimension (toolbar_panel.width, 70)
			-- Sun
			create checkbox.make_from_text ("Show sun")
			checkbox.set_position (10, 0)
			checkbox.set_checked
			checkbox.checked_event.subscribe (agent map_widget.enable_sun_shown)
			checkbox.unchecked_event.subscribe (agent map_widget.disable_sun_shown)
			Result.add_widget (checkbox)

			-- Shadows
			create checkbox.make_from_text ("Enable shadows")
			checkbox.set_position (10, 20)
			checkbox.set_unchecked
			checkbox.checked_event.subscribe (agent map_widget.enable_shadows)
			checkbox.unchecked_event.subscribe (agent map_widget.disable_shadows)
			Result.add_widget (checkbox)

			-- Lines
			create checkbox.make_from_text ("Show VBZ Lines")
			checkbox.set_position (10,40)
			checkbox.checked_event.subscribe (agent map_widget.enable_lines_shown)
			checkbox.checked_event.subscribe (agent map_widget.disable_roads_shown)
			checkbox.unchecked_event.subscribe (agent map_widget.disable_lines_shown)
			checkbox.unchecked_event.subscribe (agent map_widget.enable_roads_shown)
			checkbox.set_checked
			Result.add_widget (checkbox)
		end

	build_taxi_tools: EM_PANEL is
			-- Build the area which steers the taxis.
		require
			map_loaded: map_widget.map /= Void
		local
			et: TRAFFIC_EVENT_TAXI_OFFICE
			dt: TRAFFIC_DISPATCHER_TAXI_OFFICE
			i: INTEGER
		do
			create Result.make_from_dimension (toolbar_panel.width, 20)
			create et.make_with_color (255, 0, 0)
			et.add_to_map (map_widget.map)
			from
				i := 1
			until
				i > 5
			loop
				point_randomizer.generate_point_array (5)
				et.add_taxi (create {TRAFFIC_EVENT_TAXI}.make_random (et, point_randomizer.last_array))
				i := i + 1
			end
			create dt.make_with_color (0, 255, 0)
			dt.add_to_map (map_widget.map)
			from
				i := 1
			until
				i > 5
			loop
				point_randomizer.generate_point_array (5)
				dt.add_taxi (create {TRAFFIC_DISPATCHER_TAXI}.make_random (dt, point_randomizer.last_array))
				i := i + 1
			end
			time.set (11, 0, 0)
			create taxi_combobox.make_empty
			taxi_combobox.set_to_string_agent (agent taxi_office_output)
			taxi_combobox.put (et)
			taxi_combobox.put (dt)
			taxi_combobox.set_selected_element (et)
			taxi_combobox.set_position (10, 0)
			taxi_combobox.set_dimension (160,20)
			Result.add_widget (taxi_combobox)

		end

	build_time_tools: EM_PANEL is
			-- Build the area which steers the time.
		local
			label: EM_LABEL
			button: EM_BUTTON
			slider: EM_SLIDER
		do
			create Result.make_from_dimension (toolbar_panel.width, 20)
			-- Time
			create label.make_from_text ("1x      ")
			label.set_position (50, 0)
			Result.add_widget (label)
			create slider.make_from_range_horizontal (1, 1000)
			slider.set_height (label.height)
			slider.set_width (110)
			slider.set_position (90, 0)
			slider.position_changed_event.subscribe (agent update_label_count (?, label, "x"))
			slider.position_changed_event.subscribe (agent time.set_speedup (?))
			Result.add_widget (slider)
			create button.make_from_text ("Start")
			button.clicked_event.subscribe (agent update_time (button))
			button.set_position (10, 0)
			Result.add_widget (button)
		end

	build_passenger_tools: EM_PANEL is
			-- Build the area that steers the passengers.
		local
			label: EM_LABEL
			button: EM_BUTTON
			slider: EM_SLIDER
		do
			create Result.make_from_dimension (toolbar_panel.width, 20)
			create label.make_from_text ("0 pass.  ")
			label.set_position (50, 0)
			Result.add_widget (label)
			create slider.make_from_range_horizontal (0, 100)
			slider.set_height (label.height)
			slider.set_width (90)
			slider.set_position (110, 0)
			slider.position_changed_event.subscribe (agent update_label_count (?, label, "pass."))
			Result.add_widget (slider)
			create button.make_from_text ("Add")
			button.clicked_event.subscribe (agent add_passengers (slider))
			button.set_position (10, 0)
			Result.add_widget (button)
		end

	build_free_moving_tools: EM_PANEL is
			-- Build the area that steers the free moving objects.
		local
			label: EM_LABEL
			button: EM_BUTTON
			slider: EM_SLIDER
		do
			create Result.make_from_dimension (toolbar_panel.width, 20)
			create label.make_from_text ("0 free mov.  ")
			label.set_position (50, 0)
			Result.add_widget (label)
			create slider.make_from_range_horizontal (0, 100)
			slider.set_height (label.height)
			slider.set_width (90)
			slider.set_position (110, 0)
			slider.position_changed_event.subscribe (agent update_label_count (?, label, "free mov."))
			Result.add_widget (slider)
			create button.make_from_text ("Add")
			button.clicked_event.subscribe (agent add_free_movings (slider))
			button.set_position (10, 0)
			Result.add_widget (button)
		end

	build_path_tools: EM_PANEL is
			-- Build the area that steers the path.
		local
			label: EM_LABEL
			button: EM_BUTTON
			slider: EM_SLIDER
		do
			create Result.make_from_dimension (toolbar_panel.width, 40)
			create label.make_from_text ("0 paths  ")
			label.set_position (50, 0)
			Result.add_widget (label)
			create slider.make_from_range_horizontal (0, 10)
			slider.set_height (label.height)
			slider.set_width (90)
			slider.set_position (110, 0)
			slider.position_changed_event.subscribe (agent update_label_count (?, label, "paths"))
			Result.add_widget (slider)
			create button.make_from_text ("Add")
			button.clicked_event.subscribe (agent add_paths (slider))
			button.set_position (10, 0)
			Result.add_widget (button)
			create path_checkbox.make_from_text ("Minimum switches")
			path_checkbox.set_position (10, 20)
			Result.add_widget (path_checkbox)
		end

	build_tool_bar is
			-- Build the toolbar.
		require
			map_exists: map_widget.map /= Void
		local
			label: EM_LABEL
			checkbox: EM_CHECKBOX
			button: EM_BUTTON
			slider: EM_SLIDER
			combobox: EM_COMBOBOX [TRAFFIC_TAXI_OFFICE]
			panel: EM_PANEL
		do
			create toolbar_panel.make_from_dimension (200, height)
			toolbar_panel.set_position (width-200, 0)
			add_component (toolbar_panel)
			map_widget.set_width (width-200)

			panel := build_map_tools
			panel.set_position (0, 20)
			toolbar_panel.add_widget (panel)

			panel := build_time_tools
			panel.set_position (0, 80)
			toolbar_panel.add_widget (panel)

			panel := build_line_vehicle_tools
			panel.set_position (0, 120)
			toolbar_panel.add_widget (panel)

			panel := build_taxi_tools
			panel.set_position (0, 150)
			toolbar_panel.add_widget (panel)

			panel := build_passenger_tools
			panel.set_position (0, 180)
			toolbar_panel.add_widget (panel)

			panel := build_free_moving_tools
			panel.set_position (0, 210)
			toolbar_panel.add_widget (panel)

			panel := build_path_tools
			panel.set_position (0, 240)
			toolbar_panel.add_widget (panel)
		end

feature -- Event handling

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
				loader.disable_dump_loading
				loader.load_map
				if not loader.has_error then
					map_widget.set_map (loader.map)
					loaded_file_name := a_dlg.filename
					point_randomizer.set_map (loader.map)
					path_randomizer.set_map (loader.map)
				else
					create dlg.make_from_error ("Error parsing" + a_dlg.filename)
					io.put_string ("bad error!!")
					dlg.show
				end

			end
		end

	taxi_office_output (an_office: TRAFFIC_TAXI_OFFICE): STRING is
			--
		do
			Result := an_office.generating_type.substring (9, an_office.generating_type.count)
		end

	update_label_count (a_value: INTEGER; a_label: EM_LABEL; a_unit: STRING) is
			-- Update the label for number of trams per line.
		require
			a_label_exists: a_label /= Void
		do
			a_label.set_text (a_value.out + " " + a_unit)
		end

	update_time (a_button: EM_BUTTON) is
			--
		require
			a_button_exists: a_button /= Void
		do
			if time.is_time_running then
				time.pause
				a_button.set_text ("Start")
			else
				time.resume
				a_button.set_text ("Stop")
			end
		end

	add_vehicles (a_slider: EM_SLIDER) is
			-- Add `slider.current_value' number of vehicles per line.
		require
			a_slider_exists: a_slider /= Void
		local
			tram: TRAFFIC_TRAM
			train: TRAFFIC_TRAM -- Todo add trains
			bus: TRAFFIC_BUS
			i: INTEGER
		do
			map_widget.map.trams.wipe_out
			if a_slider.current_value > 0 then
				from
					map_widget.map.lines.start
				until
					map_widget.map.lines.after
				loop
					from
						i := 1
					until
						i > a_slider.current_value or else i = map_widget.map.lines.item_for_iteration.count
					loop
						if map_widget.map.lines.item_for_iteration.type.name.is_equal ("tram") then
							create tram.make_with_line (map_widget.map.lines.item_for_iteration)
							tram.set_to_station (map_widget.map.lines.item_for_iteration.item (i).origin)
							map_widget.map.trams.put_last (tram)
							io.put_string (map_widget.map.lines.item_for_iteration.name + " Tram " + tram.position.out + "%N")
							tram.start
--						elseif map_widget.map.lines.item_for_iteration.type.name.is_equal ("rail") then
--							create tram.make_with_line (map_widget.map.lines.item_for_iteration)
--							tram.set_to_station (map_widget.map.lines.item_for_iteration.item (i).origin)
--							map_widget.map.trams.put_last (tram)
--							io.put_string (map_widget.map.lines.item_for_iteration.name + " Tram " + tram.position.out + "%N")
--							tram.start
						elseif map_widget.map.lines.item_for_iteration.type.name.is_equal ("bus") then
							create bus.make_with_line (map_widget.map.lines.item_for_iteration)
							bus.set_to_station (map_widget.map.lines.item_for_iteration.item (i).origin)
							bus.set_speed (5)
							map_widget.map.busses.put_last (bus)
							io.put_string (map_widget.map.lines.item_for_iteration.name + " Bus " + bus.position.out + "%N")
							bus.start
						end
						i := i + 1
					end
					map_widget.map.lines.forth
				end
				io.put_string ("No. " + (map_widget.map.trams.count + map_widget.map.busses.count).out + "%N")
			end
		end

	add_passengers (a_slider: EM_SLIDER) is
			-- Add `slider.current_value' number of passengers.
		require
			a_slider_exists: a_slider /= Void
		local
			passenger: TRAFFIC_PASSENGER
			i: INTEGER
			path_finder: TRAFFIC_PATH_CALCULATOR
		do
			if a_slider.current_value > map_widget.map.passengers.count then
--				create path_finder.make_with_map (map_widget.map)
				-- Add more
				from
				until
					map_widget.map.passengers.count >= a_slider.current_value
				loop
					path_randomizer.generate_path (6)
					random.forth

					create passenger.make_with_path (path_randomizer.last_path, random.double_item*3 + 0.1)
					map_widget.map.passengers.put_last (passenger)
					passenger.set_reiterate (True)
					passenger.start
					i := i + 1
				end
			elseif a_slider.current_value < map_widget.map.passengers.count then
				-- Remove
				map_widget.map.passengers.prune_last (map_widget.map.passengers.count - a_slider.current_value)
			end
		end

	add_free_movings (a_slider: EM_SLIDER) is
			-- Add `slider.current_value' number of free moving objects.
		require
			a_slider_exists: a_slider /= Void
		local
			moving: TRAFFIC_FREE_MOVING
			i: INTEGER
		do
			if a_slider.current_value > map_widget.map.free_movings.count then
				-- Add more
				from
				until
					map_widget.map.free_movings.count >= a_slider.current_value
				loop
					point_randomizer.generate_point_array (7)
					create moving.make_with_points (point_randomizer.last_array, 1.5)
					map_widget.map.free_movings.put_last (moving)
					moving.set_reiterate (True)
					moving.start
				end
			elseif a_slider.current_value < map_widget.map.free_movings.count then
				-- Remove
				map_widget.map.free_movings.prune_last (map_widget.map.free_movings.count - a_slider.current_value)
			end
		end

	add_paths (a_slider: EM_SLIDER) is
			-- Add `slider.current_value' number of free moving objects.
		require
			a_slider_exists: a_slider /= Void
		local
			i, g, b: INTEGER
			p: ARRAY [TRAFFIC_PLACE]
			p1, p2: TRAFFIC_PLACE
			c: TRAFFIC_PATH_CALCULATOR
		do
			if a_slider.current_value > map_widget.map.paths.count then
				-- Add more
				p := map_widget.map.places.to_array
				create c.set_map (map_widget.map)
				if path_checkbox.is_checked then
					c.set_shortest_path_mode (c.shortest_path_mode_minimal_switches)
				end
				from
				until
					map_widget.map.paths.count >= a_slider.current_value
				loop
					random.forth
					p1 := p.item (random.item \\ p.count + 1)
					random.forth
					p2 := p.item (random.item \\ p.count + 1)
					if p1 /= p2 then
						c.find_shortest_path (p1, p2)
						random.forth
						g := random.item \\ 256
						random.forth
						b := random.item \\ 256
						map_widget.map.paths.put_last (c.path)
						io.put_string (c.path.out + "%N")
						map_widget.paths_representation.set_colors (create {EM_COLOR}.make_with_rgb (255, g, b), create {EM_COLOR}.make_with_rgb (255, g, b))
						event_loop.process_events
					end
				end
			elseif a_slider.current_value < map_widget.map.paths.count then
				-- Remove
				map_widget.map.paths.prune_last (map_widget.map.paths.count - a_slider.current_value)
			end
		end

	call_taxi (a_place: TRAFFIC_PLACE; an_event: EM_MOUSEBUTTON_EVENT) is
			-- Send a taxi to `a_place'.
		local
			vect: GL_VECTOR_3D [DOUBLE]
		do
			point_randomizer.generate_point_array (1)
			vect := map_widget.transform_coords (an_event.x, an_event.y)
			taxi_combobox.selected_element.call (create {EM_VECTOR_2D}.make (vect.x, vect.z), point_randomizer.last_array.first)
		end


--	redraw is
--			-- Update the clock and redraw the scene
--		do
--			update
--			Precursor
--		end


--	handle_mouse_click (e: EM_MOUSEBUTTON_EVENT) is
--			-- Adapt the text on the station label
--		require
--			valid_station_label: station_label /= Void
--		local
--			traveler: TRAFFIC_LINE_VEHICLE
--		do
--			-- Clear all information
----			station_label.set_text ("Selected station")
----			station_schedule_textlist.elements.wipe_out
----			station_lines_combobox.elements.wipe_out

----			if map.marked_station /= Void then
----				-- Display the name of the station
----				station_label.set_text (map.marked_station.name)

----				-- Add the lines that travel trough the station to the combobox
----				from
----					map.marked_station.schedule.start
----				until
----					map.marked_station.schedule.after
----				loop
----					traveler ?= map.marked_station.schedule.item @ 1

----					if not station_lines_combobox.has (traveler.line.name) then
----						station_lines_combobox.put (traveler.line.name)
----					end

----					map.marked_station.schedule.forth
----				end

----				-- Select the first line if there is one
----				if station_lines_combobox.count > 0 then
----					station_lines_combobox.set_selected_index (1)
----				end
----			end
--		end


--	station_lines_selection_changed (selection: STRING) is
--			-- The selection of the combobox of the lines of the selected station has changed
--		local
--			traveler: TRAFFIC_LINE_VEHICLE
--			departure_time: TIME
--			target: TRAFFIC_PLACE
--			direction_name: STRING
--			list: LINKED_LIST[TIME]
--			schedule: HASH_TABLE[LINKED_LIST[TIME], STRING]
--		do
--			-- Clear all times
----			station_schedule_textlist.elements.wipe_out

----			-- Create a hash table which we use to sort the schedule entrys by target
----			create schedule.make (2)

----			if map.marked_station /= Void and station_lines_combobox.has_selected_element then
----				-- Add all times when a tram of this line departs at the station
----				from
----					map.marked_station.schedule.start
----				until
----					map.marked_station.schedule.after
----				loop
----					traveler ?= map.marked_station.schedule.item @ 1
----					departure_time ?= map.marked_station.schedule.item @ 2
----					target ?= map.marked_station.schedule.item @ 3

----					if traveler.line.name.is_equal (station_lines_combobox.selected_element) then
----						direction_name := "To " + target.name
----						if schedule.has (direction_name) then
----							schedule.item (direction_name).extend (departure_time)
----						else
----							create list.make
----							list.extend (departure_time)
----							schedule.put (list, direction_name)
----						end
----					end

----					map.marked_station.schedule.forth
----				end

----				-- Display
----				from
----					schedule.start
----				until
----					schedule.after
----				loop
----					station_schedule_textlist.put (schedule.key_for_iteration)

----					from
----						schedule.item_for_iteration.start
----					until
----						schedule.item_for_iteration.after
----					loop
----						station_schedule_textlist.put ("  " + schedule.item_for_iteration.item.out)

----						schedule.item_for_iteration.forth
----					end

----					schedule.forth
----				end
----			end

----			station_schedule_scrollpanel.set_widget (station_schedule_textlist)
--		end

--	buildings_checked is
--			-- Checkbox has been checked.
--		do
--			map_widget.enable_buildings_shown
--		end

--	buildings_unchecked is
--			-- Checkbox has been unchecked.
--		do
--			map_widget.disable_buildings_shown
--		end

--	load_buildings_clicked is
--			-- Load buildings along lines.
--		do
--			map_widget.place_buildings_randomly (2)
--		end

--	delete_buildings_clicked is
--			-- Delete buildings from representation.
--		do
--			map_widget.delete_buildings
--		end

--	time_checked is
--			-- Checkbox has been checked.
--		do
----			map.map.change_traveler_speed (map.time.simulated_minutes / 2)
----			map_widget.time.change_simulated_time (1)
--			map_widget.time.start
--		end

--	time_unchecked is
--			-- Checkbox has been unchecked.
--		do
--			map_widget.time.pause
--		end

--	number_of_minutes_changed (number: INTEGER) is
--			-- The time slider was used.
--			do
----			traffic_time.change_simulated_time (number)
--		end

--	update is
--			-- Set clock corresponding to time
--		require
--			time_exists: traffic_time /= Void
--		do
----			time_label.set_text (traffic_time.actual_time.hour.out + ":" + traffic_time.actual_time.minute.out)
--		end

--	taxi_office_type_changed(type: STRING) is
--			-- Selection on "taxi_office_type_combobox" changed.
--		do
----			if type.is_equal ("Event Taxi Office")  then
----				-- Event Taxis in yellow
----				taxi_office_type_combobox.set_background_color(create {EM_COLOR}.make_with_rgb(255, 255, 0))
----			else
----				-- Dispatcher Taxis in ozean
----				taxi_office_type_combobox.set_background_color (create {EM_COLOR}.make_with_rgb(255, 0, 0))
----			end
----			map_widget.set_taxi_office_type(type)
--		end

feature -- Access

	path_checkbox: EM_CHECKBOX
			-- Checkbox for using minimum switches algorithm

	taxi_combobox: EM_COMBOBOX[TRAFFIC_TAXI_OFFICE]
			-- Requests will be sent to the selected taxi office

	toolbar_panel: EM_PANEL
			-- Toolbar panel with all widgets

	point_randomizer: TRAFFIC_POINT_RANDOMIZER
			-- Generator for list of random points

	path_randomizer: TRAFFIC_PATH_RANDOMIZER
			-- Generator for random paths

--	buildings_checkbox: EM_CHECKBOX
--			-- Checkbox for buildings

--	vehicles_checkbox: EM_CHECKBOX
--			-- Checkbox for vehicles

--	time_checkbox: EM_CHECKBOX
--			-- Checkbox for time

--	lines_checkbox: EM_CHECKBOX
--			-- Checkbox for visibility of lines

--	time_label: EM_LABEL
--			-- Clock

--	time_slider: EM_SLIDER
--			-- Scrollbar for the time			

--	station_label: EM_LABEL
--			-- Selected station

--	station_lines_combobox: EM_COMBOBOX[STRING]
--			-- The available lines in the selected station			

--	station_schedule_textlist: EM_TEXTLIST[STRING]
--			-- Schedule of selected station

--	station_schedule_scrollpanel: EM_SCROLLPANEL
--			-- Scrollpanel for station_schedule_textlist

--	load_buildings_button: EM_BUTTON
--			-- Button to load buildings along lines

--	delete_buildings_button: EM_BUTTON
--			-- Button to delete buildings from the map

feature {NONE} -- Implementation

	random: RANDOM

--	city_timetable_window_width: INTEGER is 800
--			-- Width of map

----	bg_color: EM_COLOR
--			-- Background color of the scene

--	map_file_name: STRING
--			-- Name of the map file to be loaded

--	map: CITY_TIMETABLE_MAP_WIDGET
			-- The 3 dimensional representation of the map

--	random_destination: EM_VECTOR_2D is
--			-- Random destination for taxi
--		require
--			random /= Void
--		local
--			temp_x, temp_y: DOUBLE
--			destination: EM_VECTOR_2D
--		do
--			random.forth
--			temp_x := random.double_item
--			random.forth
--			temp_y := random.double_item
--			create destination.make (1500 * temp_x - 67, 1500 * temp_y - 32)
--			-- approximated places so that they are on the map
--			random.forth
--			Result := destination
--		end

end
