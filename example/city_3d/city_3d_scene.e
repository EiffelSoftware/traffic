indexing
	description: "The 'main scene' containing the whole GUI"
	date: "$Date$"
	revision: "$Revision$"

class CITY_3D_SCENE

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
			-- Create all checkboxes and gui elements.
		local
			loader: TRAFFIC_MAP_LOADER
			s: STRING
			fs: KL_FILE_SYSTEM
		do
			make_component_scene
			fs := (create {KL_SHARED_FILE_SYSTEM}).file_system

			set_frame_counter_visibility (False)

			create bg_color.make_with_rgb (211,211,211)
			-- Toolbar
			create toolbar_panel.make_from_dimension (200, window_height)
			create toolbar_panel_left.make_from_dimension (200, window_height)

			-- Checkboxes
			create highlighting_checkbox.make_from_text ("Highlight lines")
			create buildings_checkbox.make_from_text ("Show buildings")
			create sun_checkbox.make_from_text ("Show sun")
			create coordinates_checkbox.make_from_text ("Show coordinates")
			create buildings_transparent_checkbox.make_from_text ("Transparent buildings")
			create time_running_checkbox.make_from_text("Simulate Time")
			create lines_checkbox.make_from_text ("Show VBZ Lines")

			-- Box and button for xml files
			create combo_title.make_from_text ("Choose a map:")
			s := fs.pathname ("..", "map")
			create combo_box.make_from_list (search_for_xml(s))
			create load_button.make_from_text ("Load map")

			-- Slider and label for number of buildings
			create buildings_title.make_from_text ("Number of buildings:")
			create buildings_label.make_from_text ("0")
			create buildings_slider.make_from_range_horizontal (0, 100)

			-- 'Zoom in' and 'Zoom out' buttons
			create zoom_in_button.make_from_text ("Zoom in")
			create zoom_out_button.make_from_text ("Zoom out")

			-- Labels for origin and destination
			create marked_origin_title.make_from_text ("Marked station:")
			create marked_origin_label.make_from_text ("")
			create marked_destination_title.make_from_text ("")
			create marked_destination_label.make_from_text ("")
			create shortest_path_checkbox.make_from_text ("Shortest path")

			-- 'Take traffic line ride' button
			create traffic_line_ride_button.make_from_text ("Take a traffic line ride")

			-- Labels, Buttons for buildings
			create traffic_building_name.make_from_text("")
			create traffic_building_label.make_from_text("Name of marked building:")
			create load_buildings_button.make_from_text("Load buildings from file")
			create load_buildings_along_lines_button.make_from_text("Load buildings along lines")
			create building_combo_title.make_from_text ("Choose building file:")
			s := fs.pathname ("..", "buildings")
			create building_combo_box.make_from_list (search_for_xml(s))
			create delete_buildings_button.make_from_text("Delete buildings")

			create path_description.make_empty
			create minimal_switches_checkbox.make_from_text ("Min Sw")

			-- Has to be defined before toolpanel, because otherwise
			-- gl_clear_color cleans whole screen
			if video_subsystem.opengl_enabled then
				create map.make
				map.set_position (200, 0)
				add_component (map)
			else
				io.put_string ("OpenGL disabled: Map not loaded%N")
			end
			map.building_clicked_event.subscribe (agent show_building_information(?,?))
			map.shortest_path_calculated_event.subscribe (agent update_shortest_path_description)


			-- Toolbar Panel
			toolbar_panel.set_background_color (bg_color)
			toolbar_panel.set_position (city_3d_window_width-200, 0)
			add_component (toolbar_panel)

			-- Toolbar Panel left hand side
			toolbar_panel_left.set_background_color (bg_color)
			toolbar_panel_left.set_position (0,0)
			add_component (toolbar_panel_left)

			-- Building labels
			traffic_building_label.set_position(10,40)
			toolbar_panel_left.add_widget (traffic_building_label)
			traffic_building_name.set_position(10,60)
			traffic_building_name.set_dimension (150,20)
			toolbar_panel_left.add_widget (traffic_building_name)

			-- Building buttons
			load_buildings_button.set_position (10, 175)
			load_buildings_button.clicked_event.subscribe (agent load_buildings_clicked)
			toolbar_panel_left.add_widget (load_buildings_button)
			load_buildings_along_lines_button.set_position(10,225)
			load_buildings_along_lines_button.clicked_event.subscribe (agent load_buildings_along_lines_clicked)
			toolbar_panel_left.add_widget (load_buildings_along_lines_button)
			delete_buildings_button.set_position (10, 275)
			delete_buildings_button.clicked_event.subscribe (agent delete_buildings_clicked)
			toolbar_panel_left.add_widget (delete_buildings_button)

			-- Combox for building XML selection
			building_combo_title.set_position (10,100)
			toolbar_panel_left.add_widget (building_combo_title)
			building_combo_box.set_position (10,125)
			building_combo_box.set_optimal_dimension (150, 20)
			building_combo_box.resize_to_optimal_dimension
			building_combo_box.set_background_color (create {EM_COLOR}.make_white)
			building_combo_box.set_selected_index (1)
			building_combo_box.selection_changed_event.subscribe (agent building_combo_selection_changed(?))
			toolbar_panel_left.add_widget (building_combo_box)

			-- Path description
			path_description.set_position (5, 325)
			path_description.set_optimal_dimension (185, 250)
			path_description.resize_to_optimal_dimension
			--path_description.set_background (bg_color)
			path_description.set_enabled (False)
			path_description.hide
			toolbar_panel_left.add_widget (path_description)

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

			-- Transparent buildings Checkbox
			buildings_transparent_checkbox.set_position (10, 290)
			buildings_transparent_checkbox.set_background_color (bg_color)
			buildings_transparent_checkbox.set_optimal_dimension (180, 20)
			buildings_transparent_checkbox.resize_to_optimal_dimension
			buildings_transparent_checkbox.checked_event.subscribe (agent transparency_checked)
			buildings_transparent_checkbox.unchecked_event.subscribe (agent transparency_unchecked)
			toolbar_panel.add_widget (buildings_transparent_checkbox)

			-- Sun Checkbox
			sun_checkbox.set_position (10, 310)
			sun_checkbox.set_background_color (bg_color)
			sun_checkbox.set_optimal_dimension (110, 20)
			sun_checkbox.resize_to_optimal_dimension
			sun_checkbox.set_background_color (bg_color)
			sun_checkbox.checked_event.subscribe (agent sun_checked)
			sun_checkbox.unchecked_event.subscribe (agent sun_unchecked)
			toolbar_panel.add_widget (sun_checkbox)

			-- Coordinates Checkbox
			coordinates_checkbox.set_position (10, 330)
			coordinates_checkbox.set_background_color (bg_color)
			sun_checkbox.set_optimal_dimension (110, 20)
			sun_checkbox.resize_to_optimal_dimension
			sun_checkbox.set_background_color (bg_color)
			coordinates_checkbox.checked_event.subscribe (agent coordinates_checked)
			coordinates_checkbox.unchecked_event.subscribe (agent coordinates_unchecked)
			toolbar_panel.add_widget (coordinates_checkbox)

			-- Highlighting Checkbox
			highlighting_checkbox.set_position (10, 350)
			highlighting_checkbox.set_background_color (bg_color)
			highlighting_checkbox.set_optimal_dimension (110, 20)
			highlighting_checkbox.resize_to_optimal_dimension
			highlighting_checkbox.checked_event.subscribe (agent highlighting_checked)
			highlighting_checkbox.unchecked_event.subscribe (agent highlighting_unchecked)
			toolbar_panel.add_widget (highlighting_checkbox)

			-- Buildings Checkbox
			buildings_checkbox.set_position (10, 370)
			buildings_checkbox.set_background_color (bg_color)
			buildings_checkbox.set_optimal_dimension (120, 20)
			buildings_checkbox.resize_to_optimal_dimension
			buildings_checkbox.checked_event.subscribe (agent buildings_checked)
			buildings_checkbox.unchecked_event.subscribe (agent buildings_unchecked)
			toolbar_panel.add_widget (buildings_checkbox)

			-- Shortest Path Checkbox
			shortest_path_checkbox.set_position (10, 390)
			shortest_path_checkbox.set_background_color (bg_color)
			shortest_path_checkbox.set_optimal_dimension (120, 20)
			shortest_path_checkbox.resize_to_optimal_dimension
			shortest_path_checkbox.checked_event.subscribe (agent shortest_path_checked)
			shortest_path_checkbox.unchecked_event.subscribe (agent shortest_path_unchecked)
			toolbar_panel.add_widget (shortest_path_checkbox)

			minimal_switches_checkbox.set_position (115, 390)
			minimal_switches_checkbox.set_background_color (bg_color)
			minimal_switches_checkbox.set_optimal_dimension (70, 20)
			minimal_switches_checkbox.resize_to_optimal_dimension
			minimal_switches_checkbox.checked_event.subscribe (agent minimal_switches_checked)
			minimal_switches_checkbox.unchecked_event.subscribe (agent minimal_switches_unchecked)
			minimal_switches_checkbox.set_tooltip ("Minimal switches")
			minimal_switches_checkbox.hide
			toolbar_panel.add_widget (minimal_switches_checkbox)


			-- Time Running Checkbox
			time_running_checkbox.set_position (10, 410)
			--time_running_checkbox.set_background_color (bg_color)
			time_running_checkbox.set_optimal_dimension (120,20)
			time_running_checkbox.resize_to_optimal_dimension
			time_running_checkbox.checked_event.subscribe (agent time_running_checked)
			time_running_checkbox.unchecked_event.subscribe (agent time_running_unchecked)
			toolbar_panel.add_widget (time_running_checkbox)


			-- Lines Checkbox
			lines_checkbox.set_position (10,430)
			lines_checkbox.set_background_color (bg_color)
			lines_checkbox.set_optimal_dimension (120, 20)
			lines_checkbox.resize_to_optimal_dimension
			lines_checkbox.checked_event.subscribe (agent lines_checked)
			lines_checkbox.unchecked_event.subscribe (agent lines_unchecked)
			toolbar_panel.add_widget (lines_checkbox)



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

			-- Buildings title
			buildings_title.set_position (10,220)
			buildings_title.set_background_color (bg_color)
			toolbar_panel.add_widget (buildings_title)

			-- Buildings label
			buildings_label.set_position (140, 250)
			buildings_label.set_optimal_dimension (50, 20)
			buildings_label.resize_to_optimal_dimension
			buildings_label.set_background_color (bg_color)
			buildings_label.set_tooltip ("Number of buildings")
			toolbar_panel.add_widget (buildings_label)

			-- Buildings slider
			buildings_slider.set_position (10, 250)
			buildings_slider.set_optimal_dimension (120, 20)
			buildings_slider.resize_to_optimal_dimension
			buildings_slider.set_background_color (bg_color)
			buildings_slider.set_tooltip ("Number of buildings")
			buildings_slider.position_changed_event.subscribe (agent number_of_buildings_changed (buildings_label, ?))
			toolbar_panel.add_widget (buildings_slider)

			-- Marked origin title
			marked_origin_title.set_position (10, 450)
			marked_origin_title.set_optimal_dimension (180, 20)
			marked_origin_title.resize_to_optimal_dimension
			marked_origin_title.set_background_color (bg_color)
			toolbar_panel.add_widget (marked_origin_title)

			-- Marked destination title
			marked_destination_title.set_position (10, 490)
			marked_destination_title.set_optimal_dimension (180, 20)
			marked_destination_title.resize_to_optimal_dimension
			marked_destination_title.set_background_color (bg_color)
			toolbar_panel.add_widget (marked_destination_title)

			-- Marked origin label
			marked_origin_label.set_position (15, 470)
			marked_origin_label.set_optimal_dimension (180, 20)
			marked_origin_label.resize_to_optimal_dimension
			marked_origin_label.set_background_color (bg_color)
			marked_origin_label.set_tooltip ("Marked Station")
			map.mouse_clicked_event.subscribe (agent handle_mouse_click (marked_origin_label, marked_destination_label, ?))
			toolbar_panel.add_widget (marked_origin_label)

			-- Marked destination label
			marked_destination_label.set_position (15, 510)
			marked_destination_label.set_optimal_dimension (180, 20)
			marked_destination_label.resize_to_optimal_dimension
			marked_destination_label.set_background_color (bg_color)
			marked_destination_label.set_tooltip ("Marked Station")
			toolbar_panel.add_widget (marked_destination_label)

			-- 'Take a traffic line ride' button
			traffic_line_ride_button.set_position ((200-traffic_line_ride_button.width) // 2, 530)
			traffic_line_ride_button.clicked_event.subscribe (agent traffic_line_ride_button_clicked)
			traffic_line_ride_button.set_background_color (create {EM_COLOR}.make_with_rgb (127, 127, 127))
			toolbar_panel.add_widget (traffic_line_ride_button)
			traffic_line_ride_button.hide

			-- adding zurich_big.xml as default using platform independent paths
			s := fs.pathname ("..", "map")
			s := fs.pathname (s, "zurich_tiny.xml")

			create loader.make (s)
			loader.load_map
			map.set_map (loader.map)
			loaded_file_name := s

			map.travelers_representation.add_tram_per_line (map.map, 2)

			included_for_compilation

		end

	included_for_compilation is
			--
		local
--			bus: TRAFFIC_BUS
--			cablecar: TRAFFIC_CABLECAR
--			d_taxi: TRAFFIC_DISPATCHER_TAXI
--			d_office: TRAFFIC_DISPATCHER_TAXI_OFFICE
--			e_taxi: TRAFFIC_EVENT_TAXI
--			e_office: TRAFFIC_EVENT_TAXI_OFFICE
--			trolley: TRAFFIC_TROLLEYBUS
--			place_rep: TRAFFIC_3D_PLACE_CIRCLE_REP_FACTORY
--			map_widget_2d: TRAFFIC_2D_MAP_WIDGET
--			map_renderer: TRAFFIC_2D_MAP_RENDERER
--			touch_scene: TOUCH_3D_SCENE
--			touch_3d_app: TOUCH_3D_APPLICATION
--			touch_map: TOUCH_MAP
--			tourism: TOURISM
		do

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

	traffic_line_ride_button_clicked is
			-- "Take traffic line ride" button has been clicked.
		require
			traffic_line_ride_button /= Void
		do
			traffic_line_ride_button.set_pressed (False)
			if map.shortest_path_connections /= Void then
				map.take_traffic_line_ride
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

			if map.marked_origin /= Void and then map.marked_destination /= void and then map.show_shortest_path then
				traffic_line_ride_button.show
				path_description.show
				minimal_switches_checkbox.show
			else
				traffic_line_ride_button.hide
				path_description.set_text ("")
				path_description.hide
				minimal_switches_checkbox.hide
			end
		end

	number_of_buildings_changed (label: EM_LABEL; number: INTEGER) is
			-- Change the text on `label'.
		require
			label /= Void
		do
			number_of_buildings := number*49
			label.set_text (number_of_buildings.out)
			if map /= Void and then map.is_map_displayed then
				map.set_number_of_buildings (number_of_buildings)
			end
		end

	transparency_checked is
			-- Checkbox has been checked.
		do
			map.set_buildings_transparent (True)
		end

	transparency_unchecked is
			-- Checkbox has been unchecked.
		do
			map.set_buildings_transparent (False)
		end

	shortest_path_checked is
			-- Checkbox has been checked.
		do
			map.set_show_shortest_path (True)
			marked_destination_title.set_text ("Marked destination:")
			marked_origin_title.set_text ("Marked origin:")
			minimal_switches_checkbox.show
			if map.marked_destination /= Void then
				marked_destination_label.set_text (map.marked_destination.name)
			end
			if map.marked_origin /= Void then
				marked_origin_label.set_text (map.marked_origin.name)
			end
			if map.marked_origin /= Void and then map.marked_destination /= Void then
				traffic_line_ride_button.show
				path_description.show
			end
		end

	shortest_path_unchecked is
			-- Checkbox has been unchecked.
		do
			map.set_show_shortest_path (False)
			marked_destination_title.set_text ("")
			marked_destination_label.set_text ("")
			marked_origin_title.set_text ("Marked station:")
			traffic_line_ride_button.hide
			path_description.hide
			minimal_switches_checkbox.hide
		end

	buildings_checked is
			-- Checkbox has been checked.
		do
			map.set_buildings_shown (True)
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

	buildings_unchecked is
			-- Checkbox has been unchecked.
		do
			map.set_buildings_shown (False)
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

	time_running_checked is
			-- Checkbox has been checked.
		do
			map.time.start_time
		end

	time_running_unchecked is
			-- Checkbox has been unchecked.
		do
			map.time.pause_time
		end

	highlighting_checked is
			-- Checkbox has been checked.
		do
			map.lines_representation.highlight_all_lines
		end

	highlighting_unchecked is
			-- Checkbox has been unchecked.
		do
			map.lines_representation.unhighlight_all_lines
		end

	coordinates_checked is
			-- Checkbox has been checked.
		do
			map.set_coordinates_shown(True)
		end

	coordinates_unchecked is
			-- Checkbox has been unchecked.
		do
			map.set_coordinates_shown (False)
		end

	load_button_clicked is
			-- "Load" button has been clicked.
		require
			load_button /= Void
		local
			loader: TRAFFIC_MAP_LOADER
		do
			create loader.make (map_file_name)
			load_button.set_pressed (False)
			loader.load_map
			map.set_map (loader.map)
			buildings_slider.set_current_value (buildings_slider.left_value)
			marked_origin_label.set_text ("")
			marked_destination_label.set_text ("")
			traffic_line_ride_button.hide
			map.travelers_representation.add_tram_per_line (map.map, 2)
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

	building_combo_selection_changed (name: STRING) is
			-- Combo Box selection has been changed.
		require
			name_exists: name /= void and then not name.is_empty
		do
			building_file_name := name
		ensure
			building_file_name = name
		end

	show_building_information (a_building: TRAFFIC_BUILDING; an_event: EM_MOUSEBUTTON_EVENT) is
			-- Agent to show building information
		require
			building_valid: a_building /= void
			event_valid: an_event /= void
		do
			if an_event.is_left_button then
				traffic_building_name.set_text (a_building.name)
			end
		end

	load_buildings_clicked is
			-- Load buildings from an xml file.
		local
			parser: TRAFFIC_BUILDING_PARSER
		do
			create parser.make_with_map(map)
			parser.set_file_name (building_file_name)
			parser.parse
			if parser.has_error then
				io.putstring ("Error while parsing buildings ")
				io.putstring (parser.error_description)
			end
			parser.process
			if parser.has_error then
				io.putstring ("Error while processing" + parser.error_description)
			end
		end

	load_buildings_along_lines_clicked is
			-- Load buildings along lines.
		do
			map.add_buildings_along_lines
		end

	delete_buildings_clicked is
			-- Delete buildings from representation.
		do
			map.delete_buildings
			buildings_slider.set_current_value (0)
		end

	minimal_switches_checked is
			-- set shortest path mode to minimal switches
		do
			map.map.set_shortest_path_mode (map.map.shortest_path_mode_minimal_switches)
		end

	minimal_switches_unchecked is
			-- set shortest path mode to normal distance
		do
			map.map.set_shortest_path_mode (map.map.shortest_path_mode_normal_distance)
		end

feature -- Widgets

	path_description: EM_TEXTAREA
			-- textual description of shortest path

	minimal_switches_checkbox: EM_CHECKBOX
			-- checkbox for specifying shortest path mode

	toolbar_panel: EM_PANEL
			-- Panel, in which all option widgets are displayed.

	toolbar_panel_left: EM_PANEL
			-- Panel on the left hand side

	buildings_transparent_checkbox: EM_CHECKBOX
			-- Checkbox for transparent buildings

	sun_checkbox: EM_CHECKBOX
			-- Checkbox for different light

	coordinates_checkbox: EM_CHECKBOX
			-- Checkbox for (visible) coordinate axis

	highlighting_checkbox: EM_CHECKBOX
			-- Checkbox for highlighting traffic lines

	buildings_checkbox: EM_CHECKBOX
			-- Checkbox for visibility of buildings

	lines_checkbox: EM_CHECKBOX
			-- Checkbox for visibility of lines

	shortest_path_checkbox: EM_CHECKBOX
			-- Checkbox for shortest path calculation

	time_running_checkbox: EM_CHECKBOX
			-- Checkbox to start/stop time simulation

	combo_title: EM_LABEL
			-- Title for combo box

	combo_box: EM_COMBOBOX[STRING]
			-- Box to choose the xml file from

	load_button: EM_BUTTON
			-- Button to load the xml file

	zoom_in_button: EM_BUTTON
			-- Botton to zoom in

	zoom_out_button: EM_BUTTON
			-- Botton to zoom out

	buildings_title: EM_LABEL
			-- Title for slider

	buildings_label: EM_LABEL
			-- Label to show number of houses

	buildings_slider: EM_SLIDER
			-- Slider to change number of houses displayed

	marked_origin_label: EM_LABEL
			-- Label for the origin

	marked_origin_title: EM_LABEL
			-- Name of the (origin) station

	marked_destination_label: EM_LABEL
			-- Label for the destination

	marked_destination_title: EM_LABEL
			-- Name of the (destination) station

	traffic_line_ride_button: EM_BUTTON
			-- Botton to take a traffic line ride

	traffic_building_name: EM_LABEL
			-- Label for the building name

	traffic_building_label: EM_LABEL
			-- Label for the building

	load_buildings_button: EM_BUTTON
			-- Button to load buildings from XML file

	load_buildings_along_lines_button: EM_BUTTON
			-- Button to load buildings along lines

	delete_buildings_button: EM_BUTTON
			-- Button to delete buildings from the map

	building_combo_title: EM_LABEL
			-- Title for building combo

	building_combo_box: EM_COMBOBOX[STRING]
			-- Box to choose the building xml file from

feature {NONE} -- Implementation

	city_3d_window_width: INTEGER is 1000
			-- Width of map

	bg_color: EM_COLOR
			-- Background color of the scene

	map_file_name: STRING
			-- Name of the map file to be loaded

	building_file_name: STRING
			-- Name of the building file to be loaded

	loaded_file_name: STRING
			-- Name of the currently loaded

	map: CITY_3D_MAP_WIDGET
			-- The 3 dimensional representation of the map

	update_shortest_path_description (a_description: STRING) is
			-- Update the shortest path description
		do
			path_description.set_text (a_description)
		end


	number_of_buildings: INTEGER
			-- Number of buildings on the map

	search_for_xml(directory_name:STRING) : DS_LINKED_LIST[STRING] is
			-- Search for xml files in directory `directory_name'.
		require
			directory_name_valid: directory_name /= void and then not directory_name.is_empty
		local
			directory: DIRECTORY
--			s: STRING
			fs: KL_FILE_SYSTEM
		do
			create Result.make

			-- use platform independent paths
			fs := (create {KL_SHARED_FILE_SYSTEM}).file_system
--			s := fs.pathname (".", directory_name)

			create directory.make_open_read (directory_name)
			if directory.exists and then directory.is_readable and not directory.is_empty then
				from
					directory.start
					directory.readentry
				until
					directory.lastentry = void
				loop
					if directory.lastentry.has_substring (".xml") then

						Result.force_last (fs.pathname (directory_name, directory.lastentry))
					end
					directory.readentry
				end
			end
		end

end
