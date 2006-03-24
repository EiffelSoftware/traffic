indexing
	description: "The 'main scene' containing the whole GUI"
	date: "$Date: 2006/01/09 12:23:15 $"
	revision: "$Revision: 1.56 $"

class
	CITY_3D_SCENE
	
inherit
	
	EM_COMPONENT_SCENE
	
	TRAFFIC_3D_CONSTANTS
		export {NONE} all end
	
	EXCEPTIONS
		export {NONE} all end
	
creation
	make

feature -- Interface
	
	make is
			-- Creation procedure.
		do
			make_component_scene
			
			set_frame_counter_visibility (True)
			
--			create bg_color.make_with_rgb (0,0,0)
						
			-- Toolbar
			create toolbar_panel.make_from_dimension ((window_width*0.25).rounded, window_height)
				
			-- Box and button for xml files
			create combo_title.make_from_text ("Choose a map:")
			create combo_box.make_from_list (search_for_xml)
			create load_button.make_from_text ("Load map")
			
			-- 'Zoom in' and 'Zoom out' buttons
			create zoom_in_button.make_from_text ("Zoom in")
			create zoom_out_button.make_from_text ("Zoom out")
			create time_button.make_from_text("start time")
			create passenger_button.make_from_text ("update passengers")
						
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

			-- time
			simulated_time := 5


			-- time button
			time_button.set_position (20 ,200)
			time_button.set_width (100)
			time_button.clicked_event.subscribe (agent time_button_clicked)
			time_button.set_background_color (create {EM_COLOR}.make_with_rgb (127, 127, 127))
			toolbar_panel.add_widget(time_button)
	
	
			-- passenger button
			passenger_button.set_position (20 ,300)
			passenger_button.set_width (160)
			passenger_button.clicked_event.subscribe (agent passenger_button_clicked)
			passenger_button.set_background_color (create {EM_COLOR}.make_with_rgb (127, 127, 127))
			toolbar_panel.add_widget(passenger_button)		
			
			-- time labels
			create time_label.make_from_text("day time: ")
			create simulated_time_label.make_from_text (simulated_time.out)
			
			-- label init
			simulated_time_label.set_position (140, 230)
			simulated_time_label.set_optimal_dimension (50, 20)
			simulated_time_label.resize_to_optimal_dimension
--			simulated_time_label.set_background_color (bg_color)
			simulated_time_label.set_tooltip ("simulated time")
			toolbar_panel.add_widget (simulated_time_label)

			-- simulated time
			create time_slider.make_from_range_horizontal (5, 60)
			time_slider.set_position (20, 230)
			time_slider.set_optimal_dimension (120, 20)
			time_slider.resize_to_optimal_dimension
--			time_slider.set_background_color (bg_color)
			time_slider.set_tooltip ("Day simulation minutes")
			time_slider.position_changed_event.subscribe (agent number_of_minutes_changed (simulated_time_label, ?))
			toolbar_panel.add_widget (time_slider)
			
			-- passenger label
			create passenger_label.make_from_text (passenger_number.out)
			passenger_label.set_position (140 ,330)
			passenger_label.set_optimal_dimension (50, 20)
			passenger_label.resize_to_optimal_dimension
--			passenger_label.set_background_color (bg_color)
			passenger_label.set_tooltip ("passengers")
			toolbar_panel.add_widget (passenger_label)
			
			-- passenger slider
			create passenger_slider.make_from_range_horizontal (0, 300)
			passenger_slider.set_position (20, 330)
			passenger_slider.set_optimal_dimension (120, 20)
			passenger_slider.resize_to_optimal_dimension
--			passenger_slider.set_background_color (bg_color)
			passenger_slider.set_tooltip ("Number of random passengers")
			passenger_slider.position_changed_event.subscribe (agent number_of_passengers_changed (passenger_label, ?))
			toolbar_panel.add_widget (passenger_slider)
			
			
			
			-- Labels for origin and destination
			create marked_origin_title.make_from_text ("Marked station:")
			create marked_origin_label.make_from_text ("")
			create marked_destination_title.make_from_text ("")
			create marked_destination_label.make_from_text ("")
			
			
			-- Has to be defined before toolpanel, because otherwise
			-- gl_clear_color cleans whole screen
			if video_subsystem.opengl_enabled then
				create map.make
				map.set_position (0, 0)
				add_component (map)
			else
				io.put_string ("OpenGL disabled: Map not loaded%N")
			end
			
			-- get time from map
			traffic_time := map.traffic_time
			traffic_time.add_callback_procedure (agent time_count)
			
			-- Toolbar Panel
--			toolbar_panel.set_background_color (bg_color)
			toolbar_panel.set_position ((window_width*0.75).rounded, 0)
			add_component (toolbar_panel)
			
			-- Combobox title
			combo_title.set_position (10,50)
--			combo_title.set_background_color (bg_color)
			toolbar_panel.add_widget (combo_title)
			
			-- Combobox for XML selection
			combo_box.set_position (10, 75)
			combo_box.set_optimal_dimension (150, 20)
			combo_box.resize_to_optimal_dimension
			combo_box.set_background_color (create {EM_COLOR}.make_white)
			combo_box.set_selected_index (1)
			combo_box.selection_changed_event.subscribe (agent combo_selection_changed(?))
			toolbar_panel.add_widget (combo_box)
			
			-- Load Button
			load_button.set_position ((200-load_button.width) // 2, 110)
			load_button.clicked_event.subscribe (agent load_button_clicked)
			load_button.set_background_color (create {EM_COLOR}.make_with_rgb (127, 127, 127))
			toolbar_panel.add_widget (load_button)
			
			-- Marked origin title
			marked_origin_title.set_position (10, 430)
			marked_origin_title.set_optimal_dimension (180, 20)
			marked_origin_title.resize_to_optimal_dimension
--			marked_origin_title.set_background_color (bg_color)
			toolbar_panel.add_widget (marked_origin_title)
			
			-- Marked destination title
			marked_destination_title.set_position (10, 470)
			marked_destination_title.set_optimal_dimension (180, 20)
			marked_destination_title.resize_to_optimal_dimension
--			marked_destination_title.set_background_color (bg_color)
			toolbar_panel.add_widget (marked_destination_title)
			
			-- Marked origin label
			marked_origin_label.set_position (15, 450)
			marked_origin_label.set_optimal_dimension (180, 20)
			marked_origin_label.resize_to_optimal_dimension
--			marked_origin_label.set_background_color (bg_color)
			marked_origin_label.set_tooltip ("Marked Station")
			map.mouse_clicked_event.subscribe (agent handle_mouse_click (marked_origin_label, marked_destination_label, ?))
			toolbar_panel.add_widget (marked_origin_label)
			
			-- Marked destination label
			marked_destination_label.set_position (15, 490)
			marked_destination_label.set_optimal_dimension (180, 20)
			marked_destination_label.resize_to_optimal_dimension
--			marked_destination_label.set_background_color (bg_color)
			marked_destination_label.set_tooltip ("Marked Station")
			toolbar_panel.add_widget (marked_destination_label)
			
			
			time_label.set_position(15, 550)
			time_label.set_optimal_dimension(180,20)
			time_label.resize_to_optimal_dimension
--			time_label.set_background_color (bg_color)
			toolbar_panel.add_widget (time_label)
			
			-- adding zurich_mini.xml as default
			map.load_map ("map/zurich_mini.xml")
			loaded_file_name := "map/zurich_mini.xml"
			
		end
		
feature -- Event handling

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
		
	time_button_clicked is
			-- "time" button clicked.
		require
			time_button /= Void
		do
			traffic_time.change_simulated_time (simulated_time)
			time_button.set_pressed(False)
			map.adjust_speed
			if is_time_enabled then
				traffic_time.pause_time
				time_button.set_text ("continue time")
				set_time_enabled(false)
			else		
				traffic_time.resume_time
				time_button.set_text("pause time")
				set_time_enabled(true)
			end
		end
		
	passenger_button_clicked is
			-- passenger_button clicked.
		do
			passenger_button.set_pressed (False)
			if is_time_enabled then
				time_button_clicked
			end
			map.update_passenger_number (passenger_number)
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
			
		
	load_button_clicked is
			-- "Load" button has been clicked.
		require
			load_button /= Void
		do
			set_time_enabled (False)
			time_button.set_text ("start time")
			traffic_time.reset_time
			load_button.set_pressed (False)
			map.load_map (map_file_name)
			marked_origin_label.set_text ("")
			marked_destination_label.set_text ("")
			passenger_button_clicked
		rescue
			catch(24)
			catch(8)
			map_file_name := loaded_file_name
			add_component(create {EM_MESSAGE_DIALOG}.make_from_error(original_tag_name))
			retry
		end
		
	combo_selection_changed (name: STRING) is
			-- Combo Box selection has been changed.
		require
			name_exists: name /= void and then not name.is_empty
		do
			map_file_name := name
		ensure 
			map_file_name = name
		end
	
	number_of_minutes_changed (label: EM_LABEL; number: INTEGER) is
			-- the slider was used.
		require
			label /= Void
		do
			simulated_time := number
			label.set_text (simulated_time.out)
		end
		
	number_of_passengers_changed (label: EM_LABEL; number: INTEGER) is
			-- the slider was used.
		require
			number >= 0
			label /= Void
		do
			passenger_number := number
			label.set_text (passenger_number.out)
		end
		
		
feature	 -- time counting

	time_count is
			-- update the time label.
			do
				time_label.set_text ("day time: " + traffic_time.actual_hour.out + " hour  " + traffic_time.actual_minute.out + " minute")
			end
	
		
	
feature -- Widgets

	toolbar_panel: EM_PANEL
			-- Panel, in which all option widgets are displayed.
			
	combo_title: EM_LABEL
			-- Title for combo box.
			
	combo_box: EM_COMBOBOX[STRING]
			-- Box to choose the xml file from.
			
	load_button: EM_BUTTON
			-- Button to load the xml file.
			
	zoom_in_button: EM_BUTTON
			-- Button to zoom in to the map.
	
	zoom_out_button: EM_BUTTON
			-- Button to zoom out of the map.
	
	time_button: EM_BUTTON
			-- Button to start, pause or continue the time.
			
	passenger_button: EM_BUTTON
			-- Button to update the numbe rof passengers.
			
	marked_origin_label: EM_LABEL
			-- Label for the origin.
			
	marked_origin_title: EM_LABEL
			-- Name of the (origin) station.
			
	time_slider: EM_SLIDER
			-- Scrollbar for the time.	
	
	passenger_slider: EM_SLIDER
			-- Scrollbar for the number of passengers.
	
	time_label: EM_LABEL
			-- Label for time display.
			
	passenger_label: EM_LABEL
			-- Label for passenger display.
			
	simulated_time_label: EM_LABEL
			-- label for simulated time.
			
	marked_destination_label: EM_LABEL
			-- Label for the destination.
			
	marked_destination_title: EM_LABEL
			-- Name of the (destination) station.
			
	is_time_enabled: BOOLEAN
			-- is the time running?

	traffic_time: TRAFFIC_TIME
			-- time of the city time system.
			
feature {NONE} -- Implementation


	set_time_enabled(a_boolean: BOOLEAN) is
			-- set the is_time_enabled option.
		do
			is_time_enabled := a_boolean
		ensure
			is_time_enabled = a_boolean
		end

--	bg_color: EM_COLOR
			-- Background color of the scene.

	map_file_name: STRING
			-- Name of the map file to be loaded.
		
	loaded_file_name: STRING
			-- Name of the currently loaded.

	map: CITY_3D_MAP
			-- The 3 dimensional representation of the map.
	
	simulated_time: INTEGER
			-- Number of minutes a day will last.
	
	passenger_number: INTEGER
			-- number of random passengers on the map.
	
	search_for_xml: DS_LINKED_LIST[STRING] is
			-- Search for xml files.
		local
			directory: DIRECTORY
		do
			create Result.make
			
			create directory.make_open_read ("./map")
			if directory.is_readable and not directory.is_empty then
				from
					directory.start
					directory.readentry
				until
					directory.lastentry = void
				loop
					if directory.lastentry.has_substring (".xml") then
						Result.force_last ("map/" + directory.lastentry)
					end
					directory.readentry
				end
			end
		end

end -- class CITY_3D_SCENE
