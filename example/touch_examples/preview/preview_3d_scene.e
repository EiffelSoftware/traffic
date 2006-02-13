indexing
	description: "The 'main scene' containing the whole GUI"
	date: "$Date: 2006/01/17 00:24:59 $"
	revision: "$Revision: 1.57 $"

class
	PREVIEW_3D_SCENE
	
inherit
	
	EM_COMPONENT_SCENE
	
	TOUCH_3D_CONSTANTS
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
			
			-- Toolbar
			 create toolbar_panel.make_from_dimension ((window_width*0.25).rounded, (window_height*0.8).rounded)
			
			-- Box and button for xml files
--			create combo_title.make_from_text ("Choose a map:")
--			create combo_box.make_from_list (search_for_xml)
			create load_button.make_from_text ("Load map")
			
			create start_button.make_from_text ("Start Preview")
			
			-- 'Zoom in' and 'Zoom out' buttons
			create zoom_in_button.make_from_text ("Zoom in")
			create zoom_out_button.make_from_text ("Zoom out")
			
--			
--			-- 'Take traffic line ride' button 
--			
			-- Has to be defined before toolpanel, because otherwise
			-- gl_clear_color cleans whole screen
			if video_subsystem.opengl_enabled then
				create map.make
--				create map_widget.make
--				map_widget.set_position(0,0)
--				add_component (map_widget)
				map.set_position (0, 0)
				add_component (map)
			else
				io.put_string ("OpenGL disabled: Map not loaded%N")
			end
	--			create traffic_line_ride_button.make_from_text ("Take a traffic line ride")
		
			-- Toolbar Panel
			toolbar_panel.set_background_color (create {EM_COLOR}.make_with_rgb(180, 180, 180))
			toolbar_panel.set_position ((Window_width*0.75).rounded, 0)
			add_component (toolbar_panel)
--			
--			-- Combobox title
--			combo_title.set_position (10,50)
--			combo_title.set_background_color (bg_color)
--			toolbar_panel.add_widget (combo_title)
--			
--			-- Combobox for XML selection
--			combo_box.set_position (10, 75)
--			combo_box.set_optimal_dimension (150, 20)
--			combo_box.resize_to_optimal_dimension
--			combo_box.set_background_color (create {EM_COLOR}.make_white)
--			combo_box.set_selected_index (1)
--			combo_box.selection_changed_event.subscribe (agent combo_selection_changed(?))
--			toolbar_panel.add_widget (combo_box)
			
			-- Load Button
			load_button.set_position ((200-load_button.width) // 2, 110)
			load_button.clicked_event.subscribe (agent load_button_clicked)
			load_button.set_background_color (create {EM_COLOR}.make_with_rgb (127, 127, 127))
			toolbar_panel.add_widget (load_button)


			-- Start Button
			start_button.set_position ((200-start_button.width) // 2, 230)
			start_button.clicked_event.subscribe (agent start_button_clicked)
			start_button.set_background_color (create {EM_COLOR}.make_with_rgb (127, 127, 127))
			toolbar_panel.add_widget (start_button)


--			-- Highlighting Checkbox
--			highlighting_checkbox.set_position (10, 350)
--			highlighting_checkbox.set_background_color (bg_color)
--			highlighting_checkbox.set_optimal_dimension (110, 20)
--			highlighting_checkbox.resize_to_optimal_dimension
--			highlighting_checkbox.checked_event.subscribe (agent highlighting_checked)
--			highlighting_checkbox.unchecked_event.subscribe (agent highlighting_unchecked)
--			toolbar_panel.add_widget (highlighting_checkbox)
			
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
			
--			
--			-- 'Take a traffic line ride' button
--			traffic_line_ride_button.set_position ((200-traffic_line_ride_button.width) // 2, 530)
--			traffic_line_ride_button.clicked_event.subscribe (agent traffic_line_ride_button_clicked)
--			traffic_line_ride_button.set_background_color (create {EM_COLOR}.make_with_rgb (127, 127, 127))
--			toolbar_panel.add_widget (traffic_line_ride_button)
--			traffic_line_ride_button.hide
--			
--			-- adding zurich_big.xml as default
--			map.load_map ("map/zurich_tiny.xml")
--			loaded_file_name := "map/zurich_tiny.xml"

	-- Console

			create console_panel.make_from_dimension ((window_width*0.25).rounded, (window_height*0.25).rounded)			
			console_panel.set_border (create {EM_NAMED_BORDER}.make_from_text ("Console"))
			
			console_panel.set_background_color (create {EM_COLOR}.make_with_rgb(180, 180, 180))
			console_panel.set_position((window_width*0.75).rounded, (window_height*0.75).rounded)	
			add_component(console_panel)
						
			create console_textarea.make_empty
			console_textarea.set_position(8, 12)
			console_textarea.set_background_color (create {EM_COLOR}.make_with_rgb(200, 200, 200))
			console_textarea.set_dimension ((window_width*0.25).rounded - 16, (window_height*0.25).rounded - 20)
			console_textarea.disable
			
			console_panel.add_widget(console_textarea)			
			
			map.load_map ("./map/paris.xml")
			
			
			create preview
			preview.run(map_widget)
		
		
		end
		
feature -- Event handling

	zoom_in_button_clicked is
			-- "Zoom in" button has been clicked.
		require
			zoom_in_button /= Void
		do
			zoom_in_button.set_pressed (False)
			map.zoom_in
			console_textarea.set_text ("zooming in..%NThe zoom was awesome!")
		end
		
	zoom_out_button_clicked is
			-- "Zoom out" button has been clicked.
		require
			zoom_out_button /= Void
		do
			zoom_out_button.set_pressed (False)
			map.zoom_out
			
			console_textarea.set_text ("zooming out..")
		end
	
--	traffic_line_ride_button_clicked is
--			-- "Zoom out" button has been clicked.
--		require
--			traffic_line_ride_button /= Void
--		do
--			traffic_line_ride_button.set_pressed (False)
--			if map.shortest_path_line /= Void then
--				map.take_traffic_line_ride
--			end
--		end

--	handle_mouse_click (origin_label, destination_label: EM_LABEL; e: EM_MOUSEBUTTON_EVENT) is
--			-- Adapt the text on `origin_label' and `destination_label'.
--		require
--			origin_label /= Void
--			destination_label /= Void
--			e /= Void
--		do
--			if map.marked_origin /= Void then
--				origin_label.set_text (map.marked_origin.name)
--			else
--				origin_label.set_text ("")
--			end
--			
--			if map.marked_destination /= Void and then map.show_shortest_path then
--				destination_label.set_text (map.marked_destination.name)
--			else
--				destination_label.set_text ("")
--			end
--			
--			if map.marked_origin /= Void and then map.marked_destination /= void and then map.show_shortest_path then
--				traffic_line_ride_button.show
--			else
--				traffic_line_ride_button.hide
--			end
--		end
--	
--	shortest_path_checked is
--			-- Checkbox has been checked.
--		do
--			map.set_show_shortest_path (True)
--			marked_destination_title.set_text ("Marked destination:")
--			marked_origin_title.set_text ("Marked origin:")
--			if map.marked_destination /= Void then
--				marked_destination_label.set_text (map.marked_destination.name)
--			end
--			if map.marked_origin /= Void then
--				marked_origin_label.set_text (map.marked_origin.name)
--			end
--			if map.marked_origin /= Void and then map.marked_destination /= Void then
--				traffic_line_ride_button.show
--			end
--		end
--		
--	shortest_path_unchecked is
--			-- Checkbox has been unchecked.
--		do
--			map.set_show_shortest_path (False)
--			marked_destination_title.set_text ("")
--			marked_destination_label.set_text ("")
--			marked_origin_title.set_text ("Marked station:")
--			traffic_line_ride_button.hide
--		end

-- ### remove this afterwards, just for testing	
	load_button_clicked is
			-- "Load" button has been clicked.
		require
			load_button /= Void
		do
			load_button.set_pressed (False)
--			map_widget.load_map (map_file_name)

	--		map.load_map ("map/zurich_tiny.xml")

			map.load_map ("./map/paris.xml")
--			buildings_slider.set_current_value (buildings_slider.left_value)
--			marked_origin_label.set_text ("")
--			marked_destination_label.set_text ("")
--			traffic_line_ride_button.hide
		rescue
			catch(24)
			catch(8)
--			map_file_name := loaded_file_name
			add_component(create {EM_MESSAGE_DIALOG}.make_from_error(original_tag_name))
			retry
		end
		
-- ## start button 		
	start_button_clicked is
			-- "Start" button has been clicked.
		require
			start_button /= Void
		do
			start_button.set_pressed (False)
			
			console_textarea.set_text ("Starting the preview example from chapter 2...")
			-- invoking preview...
--			preview.explore
		
		
		rescue
			catch(24)
			catch(8)
--			map_file_name := loaded_file_name
			add_component(create {EM_MESSAGE_DIALOG}.make_from_error(original_tag_name))
			retry
		end
		
--	combo_selection_changed (name: STRING) is
--			-- Combo Box selection has been changed.
--		require
--			name_exists: name /= void and then not name.is_empty
--		do
--			map_file_name := name
--		ensure 
--			map_file_name = name
--		end
--		
feature -- Widgets

	preview: PREVIEW

	console_panel: EM_PANEL
			-- Panel, in which the console is displayed.
	
	console_textarea: EM_TEXTAREA
			-- 	For displaying the process of the program.	
	
--	console_message_dialog: EM_MESSAGE_DIALOG
--			-- 	For displaying text.

--	console_text_box: TEXT_BOX
--			-- For displaying the process of the program.
			
	toolbar_panel: EM_PANEL
			-- Panel, in which all option widgets are displayed.
			
	console_text: STRING
			-- The output text to the console. 
--	shortest_path_checkbox: EM_CHECKBOX
--			-- Checkbox for shortest path calculation
--	
--	combo_title: EM_LABEL
--			-- Title for combo box
--			
--	combo_box: EM_COMBOBOX[STRING]
--			-- Box to choose the xml file from
--			
	load_button: EM_BUTTON
			-- Button to load the xml file
			
	start_button: EM_BUTTON
			-- Button to start the preview exampe		
	
	zoom_in_button: EM_BUTTON
			-- Botton to zoom in
			
	zoom_out_button: EM_BUTTON
			-- Botton to zoom out
			
		
--feature {NONE} -- Implementation
--
	bg_color: EM_COLOR
			-- Background color of the scene

	map_file_name: STRING
			-- Name of the map file to be loaded
		
	loaded_file_name: STRING
			-- Name of the currently loaded 

	map: PREVIEW_3D_MAP
			-- The 3 dimensional representation of the map
		
			
	map_widget: TRAFFIC_3D_MAP_WIDGET
	
--	number_of_buildings: INTEGER
--			-- Number of buildings on the map
--	
	search_for_xml: DS_LINKED_LIST[STRING] is
			-- Search for xml files.
		local
			directory: DIRECTORY
		do
			create Result.make
			
			create directory.make_open_read ("./../map")
			if directory.is_readable and not directory.is_empty then
				from
					directory.start
					directory.readentry
				until
					directory.lastentry = void
				loop
					if directory.lastentry.has_substring (".xml") then
						Result.force_last ("../map/" + directory.lastentry)
					end
					directory.readentry
				end
			end
		end

end -- class PREVIEW_3D_SCENE
