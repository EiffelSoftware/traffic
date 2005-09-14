indexing
	description: "The 'main scene' containing the whole GUI"
	date: "$Date$"
	revision: "$Revision$"

class
	CITY_3D_SCENE
	
inherit
	
	EM_COMPONENT_SCENE
	
	SHARED_CONSTANTS
		export {NONE} all end
	
creation
	make

feature -- Interface
	
	make is
			-- Creation procedure
		do
			make_component_scene
			set_frame_counter_visibility (true)
			create bg_color.make_with_rgb (150,255,150)
			create highlighting_checkbox.make_from_text ("Highlight lines")
			create buildings_checkbox.make_from_text ("Show buildings")
			create toolbar_panel.make_from_dimension ((window_width*0.25).rounded, window_height)
			create combo_box.make_from_list (search_for_xml)
			create load_button.make_from_text ("Load map")
			create zoom_in_button.make_from_text ("Zoom in")
			create zoom_out_button.make_from_text ("Zoom out")
			create coordinates_checkbox.make_from_text ("Show coordinates")
			create sun_checkbox.make_from_text ("Show sun")
			create buildings_transparent_checkbox.make_from_text ("Transparent buildings")
			create buildings_label.make_from_text ("0")
			create buildings_slider.make_from_range_horizontal (0, 100)
			create marked_origin_title.make_from_text ("Marked station:")
			create marked_origin_label.make_from_text ("")
			create marked_destination_title.make_from_text ("")
			create marked_destination_label.make_from_text ("")
			create shortest_path_checkbox.make_from_text ("Shortest path")
			
			create zoom_slider.make_from_range_horizontal (1,30)
			create zoom_label.make_empty
			
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
			
			-- Load Button
			load_button.set_position (50, 80)
--			load_button.set_font (create {EM_TTF_FONT}.make_from_ttf_file ("./herbert.ttf",18))
--			load_button.set_dimension (50, 20)
			load_button.clicked_event.subscribe (agent load_button_clicked)
			load_button.set_background_color (create {EM_COLOR}.make_with_rgb (127, 127, 127))
			toolbar_panel.add_widget (load_button)

			-- Combobox for XML selection
			combo_box.set_position (10, 50)
			combo_box.set_optimal_dimension (150, 20)
			combo_box.set_to_optimal_dimension
			combo_box.set_background_color (create {EM_COLOR}.make_white)
			combo_box.set_selected_index (1)
			combo_box.selection_change_event.subscribe (agent combo_selection_changed(?))
			toolbar_panel.add_widget (combo_box)
			
--			-- Zoom out Button
--			zoom_out_button.set_position (180-zoom_out_button.width, 170)
--			zoom_out_button.clicked_event.subscribe (agent zoom_out_button_clicked)
--			zoom_out_button.set_background_color (create {EM_COLOR}.make_with_rgb (127, 127, 127))
--			toolbar_panel.add_widget (zoom_out_button)
--			
--			-- Zoom in Button
--			zoom_in_button.set_position (20, 170)
--			zoom_in_button.set_dimension (zoom_out_button.width, zoom_out_button.height)
--			zoom_in_button.clicked_event.subscribe (agent zoom_in_button_clicked)
--			zoom_in_button.set_background_color (create {EM_COLOR}.make_with_rgb (127, 127, 127))
--			toolbar_panel.add_widget (zoom_in_button)

--			-- Zoom label
			zoom_label.set_position (140, 170)
			zoom_label.set_optimal_dimension (50, 20)
			zoom_label.set_to_optimal_dimension
			zoom_label.set_background_color (bg_color)
			zoom_label.set_tooltip ("Zoom factor")
			toolbar_panel.add_widget (zoom_label)

			-- Zoom slider
			zoom_slider.set_position (10, 170)
			zoom_slider.set_optimal_dimension (120, 20)
			zoom_slider.set_to_optimal_dimension
			zoom_slider.set_background_color (bg_color)
			zoom_slider.set_tooltip ("Zoom")
			zoom_slider.position_changed_event.subscribe (agent zoom_changed (zoom_label, ?))
			toolbar_panel.add_widget (zoom_slider)

			
			-- Transparent buildings  Checkbox
			buildings_transparent_checkbox.set_position (10, 250)
			buildings_transparent_checkbox.set_background_color (bg_color)
			buildings_transparent_checkbox.set_optimal_dimension (180, 20)
			buildings_transparent_checkbox.set_to_optimal_dimension
			buildings_transparent_checkbox.checked_event.subscribe (agent transparency_checked)
			buildings_transparent_checkbox.unchecked_event.subscribe (agent transparency_unchecked)
			toolbar_panel.add_widget (buildings_transparent_checkbox)
			
			-- Sun Checkbox
			sun_checkbox.set_position (10, 270)
			sun_checkbox.set_background_color (bg_color)
			sun_checkbox.set_optimal_dimension (110, 20)
			sun_checkbox.set_to_optimal_dimension
			sun_checkbox.set_background_color (bg_color)
			sun_checkbox.checked_event.subscribe (agent sun_checked)
			sun_checkbox.unchecked_event.subscribe (agent sun_unchecked)
			toolbar_panel.add_widget (sun_checkbox)
			
			-- Coordinates Checkbox
			coordinates_checkbox.set_position (10, 290)
			coordinates_checkbox.set_background_color (bg_color)
			sun_checkbox.set_optimal_dimension (110, 20)
			sun_checkbox.set_to_optimal_dimension
			sun_checkbox.set_background_color (bg_color)
			coordinates_checkbox.checked_event.subscribe (agent coordinates_checked)
			coordinates_checkbox.unchecked_event.subscribe (agent coordinates_unchecked)
			toolbar_panel.add_widget (coordinates_checkbox)
			
			-- Highlighting Checkbox
			highlighting_checkbox.set_position (10, 310)
--			highlighting_checkbox.set_font (create {EM_TTF_FONT}.make_from_ttf_file ("./herbert.ttf",20))
			highlighting_checkbox.set_background_color (bg_color)
			highlighting_checkbox.set_optimal_dimension (110, 20)
			highlighting_checkbox.set_to_optimal_dimension
			highlighting_checkbox.checked_event.subscribe (agent highlighting_checked)
			highlighting_checkbox.unchecked_event.subscribe (agent highlighting_unchecked)
			toolbar_panel.add_widget (highlighting_checkbox)
			
			-- Buildings Checkbox
			buildings_checkbox.set_position (10, 330)
			buildings_checkbox.set_background_color (bg_color)
			buildings_checkbox.set_optimal_dimension (120, 20)
			buildings_checkbox.set_to_optimal_dimension
			buildings_checkbox.checked_event.subscribe (agent buildings_checked)
			buildings_checkbox.unchecked_event.subscribe (agent buildings_unchecked)
			toolbar_panel.add_widget (buildings_checkbox)
			
			-- Buildings label
			buildings_label.set_position (140, 410)
			buildings_label.set_optimal_dimension (50, 20)
			buildings_label.set_to_optimal_dimension
			buildings_label.set_background_color (bg_color)
			buildings_label.set_tooltip ("Number of buildings")
			toolbar_panel.add_widget (buildings_label)
			
			-- Buildings slider
			buildings_slider.set_position (10, 410)
			buildings_slider.set_optimal_dimension (120, 20)
			buildings_slider.set_to_optimal_dimension
			buildings_slider.set_background_color (bg_color)
			buildings_slider.set_tooltip ("Number of buildings")
			buildings_slider.position_changed_event.subscribe (agent number_of_buildings_changed (buildings_label, ?))
			toolbar_panel.add_widget (buildings_slider)
			
			-- Marked origin title
			marked_origin_title.set_position (10, 460)
			marked_origin_title.set_optimal_dimension (180, 20)
			marked_origin_title.set_to_optimal_dimension
			marked_origin_title.set_background_color (bg_color)
			toolbar_panel.add_widget (marked_origin_title)
			
			-- Marked destination title
			marked_destination_title.set_position (10, 500)
			marked_destination_title.set_optimal_dimension (180, 20)
			marked_destination_title.set_to_optimal_dimension
			marked_destination_title.set_background_color (bg_color)
			toolbar_panel.add_widget (marked_destination_title)
			
			-- Marked origin label
			marked_origin_label.set_position (15, 480)
			marked_origin_label.set_optimal_dimension (180, 20)
			marked_origin_label.set_to_optimal_dimension
			marked_origin_label.set_background_color (bg_color)
			marked_origin_label.set_tooltip ("Marked Station")
--			marked_origin_label.mouse_clicked_event.subscribe (agent handle_mouse_click (marked_origin_label, marked_destination_label, ?))
			map.mouse_clicked_event.subscribe (agent handle_mouse_click (marked_origin_label, marked_destination_label, ?))
			toolbar_panel.add_widget (marked_origin_label)
			
			-- Marked destination label
			marked_destination_label.set_position (15, 520)
			marked_destination_label.set_optimal_dimension (180, 20)
			marked_destination_label.set_to_optimal_dimension
			marked_destination_label.set_background_color (bg_color)
			marked_destination_label.set_tooltip ("Marked Station")
--			marked_destination_label.mouse_clicked_event.subscribe (agent handle_mouse_click (marked_origin_label, marked_destination_label, ?))
--			map.mouse_clicked_event.subscribe (agent handle_mouse_click (marked_origin_label, marked_destination_label, ?))
			toolbar_panel.add_widget (marked_destination_label)			
			
			-- Shortest Path Checkbox
			shortest_path_checkbox.set_position (10, 350)
			shortest_path_checkbox.set_background_color (bg_color)
			shortest_path_checkbox.set_optimal_dimension (120, 20)
			shortest_path_checkbox.set_to_optimal_dimension
			shortest_path_checkbox.checked_event.subscribe (agent shortest_path_checked)
			shortest_path_checkbox.unchecked_event.subscribe (agent shortest_path_unchecked)
			toolbar_panel.add_widget (shortest_path_checkbox)
		end
		
feature -- Event handling

	zoom_changed (label: EM_LABEL ;number: INTEGER) is
			-- Change the text on `label'.
		do
			label.set_text (number.out)
			map.set_zoom (number)
		end
		

	handle_mouse_click (origin_label, destination_label: EM_LABEL; e: EM_MOUSEBUTTON_EVENT) is
			-- Adapt the text on `origin_label' and `destination_label'.
		do
			if map.marked_origin /= Void then
				origin_label.set_text (map.marked_origin.name)
			else
				origin_label.set_text ("")
			end
			if map.marked_destination /= void and then map.show_shortest_path then
				destination_label.set_text (map.marked_destination.name)
			else
				destination_label.set_text ("")
			end
		end
	
	number_of_buildings_changed (label: EM_LABEL; number: INTEGER) is
			-- Change the text on `label'.
		require
			label /= Void
		do
			number_of_buildings := 150*number
			label.set_text (number_of_buildings.out)
			if map /= Void and then map.is_map_loaded then
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
			if map.marked_destination /= Void then
				marked_destination_label.set_text (map.marked_destination.name)
			end
			if map.marked_origin /= Void then
				marked_origin_label.set_text (map.marked_origin.name)
			end
		end
		
	shortest_path_unchecked is
			-- Checkbox has been unchecked.
		do
			map.set_show_shortest_path (False)
			marked_destination_title.set_text ("")
			marked_destination_label.set_text ("")
			marked_origin_title.set_text ("Marked station:")
		end
		
	buildings_checked is
			-- Checkbox has been checked.
		do
			map.set_buildings_shown (True)
			map.set_number_of_buildings (number_of_buildings)
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
	
	highlighting_checked is
			-- Checkbox has been checked.
		do
			map.set_lines_highlighted (True)
		end
		
	highlighting_unchecked is
			-- Checkbox has been unchecked.
		do
			map.set_lines_highlighted (False)
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
		do
			load_button.set_pressed (false)
			map.load_map (map_file_name)
			buildings_slider.set_current_value (buildings_slider.left_value)
		end
		
	zoom_in_button_clicked is
			-- "Zoom in" button has been clicked.
		require
			zoom_in_button /= Void
		do
			zoom_in_button.set_pressed (false)
			map.zoom_in
		end
		
	zoom_out_button_clicked is
			-- "Zoom out" button has been clicked.
		require
			zoom_out_button /= Void
		do
			zoom_out_button.set_pressed (false)
			map.zoom_out
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
		
feature -- Widgets

	buildings_transparent_checkbox: EM_CHECKBOX
	sun_checkbox: EM_CHECKBOX
	coordinates_checkbox: EM_CHECKBOX
	highlighting_checkbox: EM_CHECKBOX
	buildings_checkbox: EM_CHECKBOX
	shortest_path_checkbox: EM_CHECKBOX
	
	toolbar_panel: EM_PANEL
	
	combo_box: EM_COMBOBOX[STRING]
	
	load_button: EM_BUTTON
	zoom_in_button: EM_BUTTON
	zoom_out_button: EM_BUTTON
	zoom_slider: EM_SLIDER
	zoom_label: EM_LABEL
	
	buildings_slider: EM_SLIDER
	buildings_label: EM_LABEL
	
	marked_origin_label: EM_LABEL
	marked_origin_title: EM_LABEL
	marked_destination_label: EM_LABEL
	marked_destination_title: EM_LABEL
		
feature {NONE} -- Implementation

	bg_color: EM_COLOR
			-- Background color of the scene

	map_file_name: STRING
			-- Name of the map file to be loaded
		
	map: MAP
			-- The 3 dimensional representation of the map
	
	number_of_buildings: INTEGER
			-- Number of buildings on the map
	
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
						Result.force_last (directory.lastentry)
					end
					directory.readentry
				end
			end
		end

end -- class CITY_3D_SCENE
