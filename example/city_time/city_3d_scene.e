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
			-- Creation procedure
		do
			make_component_scene
			
			set_frame_counter_visibility (True)
			
			create bg_color.make_with_rgb (150,255,150)
						
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
			simulated_time := 1
			create traffic_time.make_day (simulated_time)
			traffic_time.add_callback_procedure (agent time_count)

			-- time button
			time_button.set_position (20 ,200)
			time_button.set_width (100)
			time_button.clicked_event.subscribe (agent time_button_clicked)
			time_button.set_background_color (create {EM_COLOR}.make_with_rgb (127, 127, 127))
			toolbar_panel.add_widget(time_button)
			
			
			-- time labels
			create time_label.make_from_text("hour: minute:")
			create simulated_time_label.make_from_text (simulated_time.out)
			
			-- label init
			simulated_time_label.set_position (140, 250)
			simulated_time_label.set_optimal_dimension (50, 20)
			simulated_time_label.resize_to_optimal_dimension
			simulated_time_label.set_background_color (bg_color)
			simulated_time_label.set_tooltip ("simulated time")
			toolbar_panel.add_widget (simulated_time_label)

			-- simulated time
			create time_slider.make_from_range_horizontal (1, 60)
			time_slider.set_position (20, 250)
			time_slider.set_optimal_dimension (120, 20)
			time_slider.resize_to_optimal_dimension
			time_slider.set_background_color (bg_color)
			time_slider.set_tooltip ("Day simulation minutes")
			time_slider.position_changed_event.subscribe (agent number_of_minutes_changed (simulated_time_label, ?))
			toolbar_panel.add_widget (time_slider)
			
			
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
			
			-- Toolbar Panel
			toolbar_panel.set_background_color (bg_color)
			toolbar_panel.set_position ((window_width*0.75).rounded, 0)
			add_component (toolbar_panel)
			
			-- Combobox title
			combo_title.set_position (10,50)
			combo_title.set_background_color (bg_color)
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
			marked_origin_title.set_background_color (bg_color)
			toolbar_panel.add_widget (marked_origin_title)
			
			-- Marked destination title
			marked_destination_title.set_position (10, 470)
			marked_destination_title.set_optimal_dimension (180, 20)
			marked_destination_title.resize_to_optimal_dimension
			marked_destination_title.set_background_color (bg_color)
			toolbar_panel.add_widget (marked_destination_title)
			
			-- Marked origin label
			marked_origin_label.set_position (15, 450)
			marked_origin_label.set_optimal_dimension (180, 20)
			marked_origin_label.resize_to_optimal_dimension
			marked_origin_label.set_background_color (bg_color)
			marked_origin_label.set_tooltip ("Marked Station")
			map.mouse_clicked_event.subscribe (agent handle_mouse_click (marked_origin_label, marked_destination_label, ?))
			toolbar_panel.add_widget (marked_origin_label)
			
			-- Marked destination label
			marked_destination_label.set_position (15, 490)
			marked_destination_label.set_optimal_dimension (180, 20)
			marked_destination_label.resize_to_optimal_dimension
			marked_destination_label.set_background_color (bg_color)
			marked_destination_label.set_tooltip ("Marked Station")
			toolbar_panel.add_widget (marked_destination_label)
			
			
			time_label.set_position(15, 550)
			time_label.set_optimal_dimension(180,20)
			time_label.resize_to_optimal_dimension
			time_label.set_background_color (bg_color)
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
			-- "time" button clicked
		require
			time_button /= Void
		do
			traffic_time.change_simulated_time (simulated_time)
			time_button.set_pressed(False)
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
			
--			if map.marked_origin /= Void and then map.marked_destination /= void and then map.show_shortest_path then
--				traffic_line_ride_button.show
--			else
--				traffic_line_ride_button.hide
--			end
		end
			
		
	load_button_clicked is
			-- "Load" button has been clicked.
		require
			load_button /= Void
		do
			load_button.set_pressed (False)
--			map_widget.load_map (map_file_name)
			map.load_map (map_file_name)
			marked_origin_label.set_text ("")
			marked_destination_label.set_text ("")
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
			-- the slider was used
		require
			label /= Void
		do
			simulated_time := number
			label.set_text (simulated_time.out)
		end
		
feature	 -- time counting
	time_count is
			-- update the time label
			do
				time_label.set_text ("hour: "+traffic_time.actual_hour.out+" minute: "+traffic_time.actual_minute.out)
			end
		
	
	
feature -- Widgets

	toolbar_panel: EM_PANEL
			-- Panel, in which all option widgets are displayed.
			
	combo_title: EM_LABEL
			-- Title for combo box
			
	combo_box: EM_COMBOBOX[STRING]
			-- Box to choose the xml file from
			
	load_button: EM_BUTTON
			-- Button to load the xml file
			
	zoom_in_button: EM_BUTTON
	
	zoom_out_button: EM_BUTTON
	
	time_button: EM_BUTTON
			
	marked_origin_label: EM_LABEL
			-- Label for the origin
			
	marked_origin_title: EM_LABEL
			-- Name of the (origin) station
			
	time_slider: EM_SCROLLBAR
			-- Scrollbar for the time		
	
	time_label: EM_LABEL
			-- Label for time display
			
	simulated_time_label: EM_LABEL
			-- label for simulated time
			
	marked_destination_label: EM_LABEL
			-- Label for the destination
			
	marked_destination_title: EM_LABEL
			-- Name of the (destination) station
			
	is_time_enabled: BOOLEAN
			-- is the time running
			
feature {NONE} -- Implementation

	traffic_time: TRAFFIC_TIME

	set_time_enabled(a_boolean: BOOLEAN) is
			-- set the is_time_enabled option
		do
			is_time_enabled := a_boolean
		ensure
			is_time_enabled = a_boolean
		end

	bg_color: EM_COLOR
			-- Background color of the scene

	map_file_name: STRING
			-- Name of the map file to be loaded
		
	loaded_file_name: STRING
			-- Name of the currently loaded 

	map: CITY_3D_MAP
			-- The 3 dimensional representation of the map
	
	simulated_time: INTEGER
			-- Number of minutes a day will last
	
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
