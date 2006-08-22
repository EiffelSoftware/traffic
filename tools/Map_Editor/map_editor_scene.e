indexing
	description: "The main scene for the map editor application"
	author: "Fabio Maninchedda and Daniel Saner"
	date: "$Date$"
	revision: "$Revision$"
	
class
	MAP_EDITOR_SCENE
	
inherit
	EM_WIDGET_SCENE
	
create
	make
	
feature {NONE} -- Scene initialisation
  
	make is
			-- Create map scene with specified map file
		do
			make_widget_scene											-- Create the widget scene
			set_frame_counter_visibility (True)							-- Display the frame counter (may disable per default after debug)
			load_and_build_map ("./map/zurich_little.xml")				-- Build the interface with the default map
		end
		
	load_and_build_map (a_map_filename: STRING) is
			-- Load a map by XML file
		require
			a_map_filename_exists: a_map_filename /= Void
		do
			create map_editor.make_with_map_file (a_map_filename)		-- Create one of our wicked map editor objects
			create highlight_renderer.make_with_map (map_editor.map)
			create highlight_color.make_with_rgb (255, 255, 128)		-- For highlighting selected places
			highlight_renderer.set_place_color (highlight_color)		-- Smae
			
			clear_scene													-- Clear the scene if it has already been created
			create main_container.make_from_surface (surface)			-- Create a container in which to place all the other widgets
			add_widget (main_container)
			build_map_widget											-- Build the map
			build_nav_widget											-- Build the small map navigation
			build_menu_buttons											-- Build the menu buttons and listboxes
		ensure
			map_editor_created: map_editor /= Void
			map_not_void: map_editor.map /= Void
		end	
		
	build_map_widget is
			-- Build the map widget (the big thing that displays the actual map)
		require
			map_not_void: map_editor.map /= Void
		local
			background_box: EM_RECTANGLE								-- The light blue background
		do
			-- Create main container
			create map_container.make
			
			-- Create box for map display
			create background_box.make_from_coordinates (0, 0, window_width - 300, window_height - 80)
			background_box.set_line_width (2)
			background_box.line_color.make_black
			background_box.fill_color.make_with_rgb (215, 215, 255)
			map_container.extend (background_box)
			
			-- Create map widget to display map
			create map_widget.make_with_map (window_width, window_height, map_editor.map)
			map_widget.set_map (map_editor.map)
			create place_renderer.make_with_map (map_editor.map)
			map_widget.set_default_place_renderer (place_renderer)		-- Set different renderer for selected place here --==|TODO|==-												-- INCOMPLETE
			if list_places /= Void and then list_places.selected_element /= Void then
				map_widget.set_place_special_renderer (highlight_renderer, map_editor.map.places.item (map_editor.place_hashes.item(list_places.selected_index)))
			end
--			map_widget.render --==|danger|==-- <- original; new: following 1 line
--			map_widget.show
			
			-- Create zoomable widget to make map zoomable
			create map_zoomable_widget.make (background_box.width - 5, background_box.height - 5)
			map_zoomable_widget.extend (map_widget) --==|danger|==--
			map_zoomable_widget.calculate_object_area
			map_zoomable_widget.set_object_area (map_widget.bounding_box)
			map_zoomable_widget.scroll_and_zoom_to_rectangle (map_widget.bounding_box)
			map_zoomable_widget.set_x_y (2, 2)
			map_zoomable_widget.mouse_button_down_event.subscribe (agent mouse_place_add) --mousef
			map_container.extend (map_zoomable_widget)
						
			-- Implement the container as a widget into the application scene			
			create map_panel.make_from_container (map_container)
			map_panel.set_position (5, 42)
			map_panel.set_dimension (background_box.width, background_box.height)
			main_container.add_widget (map_panel)
		ensure
			map_widget_created: main_container.has_widget (map_panel)
			zoomable_widget_added: map_container.has (map_zoomable_widget)
		end
		
	build_nav_widget is
			-- Build the thumbnail and navigation widget
		require
			map_not_void: map_editor.map /= Void
		local
			nav_container: EM_DRAWABLE_CONTAINER [EM_DRAWABLE]											-- Container for navigator
			background_box: EM_RECTANGLE																-- The light blue background
			nav_box: EM_ORTHOGONAL_RECTANGLE															-- The box for the navigation
		do
			-- Create contanier for background and widgets
			create nav_container.make
			
			-- Create background box
			create background_box.make_from_coordinates (0, 0, 280, 190)
			background_box.set_line_width (2)
			background_box.line_color.make_black
			background_box.fill_color.make_with_rgb (215, 215, 255)
			nav_container.extend (background_box)
			
			-- Create little map widget to display map
			create nav_widget.make_with_map (window_width, window_height, map_editor.map)
			nav_widget.render
			
			-- Create zoomable container to display navigation widget
			create nav_zoomable_container.make (background_box.width - 4, background_box.height - 4)
			nav_zoomable_container.extend (nav_widget)													-- Add navigation to zoomable container
			create nav_box.make_from_rectangle (nav_widget.bounding_box)
			nav_box.zoom (1.05)
			nav_zoomable_container.scroll_and_zoom_to_rectangle (nav_box)
			nav_container.extend (nav_zoomable_container)
			
			-- Implement the container as a widget into the application scene			
			create nav_panel.make_from_container (nav_container)
			nav_panel.set_position (map_container.width + 10, 42)
			nav_panel.set_dimension (background_box.width, background_box.height)
			main_container.add_widget (nav_panel)
			
			-- Connect the map and navigation widgets for navigation
			create navigator.make (nav_zoomable_container, map_zoomable_widget)							-- Connect map and navigation widgets
		ensure
			nav_widget_created: main_container.has_widget (nav_panel)
		end
		
	build_menu_buttons is
				-- Build the menu buttons, lists and editing buttons (everything the interface is still missinga after map and nav widgets)
		local
			button: EM_BUTTON
			label: EM_LABEL
			color_black: EM_COLOR												-- Background color for the framerate counter bar
			scrollpanel: EM_SCROLLPANEL
		do
			
			--- BEGIN OF MAIN MENU BUTTON BLOCK ---
			
			create button.make_from_text ("Open map")							-- Button for loading a map
			button.set_position (5, 18)
			button.set_tooltip ("Open a traffic map file")
			button.clicked_event.subscribe (agent btn_open_map)
			main_container.add_widget (button)
			
			create button.make_from_text ("Save XML")							-- Button for exporting the map to XML file
			button.set_position (80, 18)
			button.set_tooltip ("Export the currently loaded map to Flat Hunt compatible XML file")
			button.clicked_event.subscribe (agent btn_save_map)
			main_container.add_widget (button)
			
			create button.make_from_text ("Frame counter")						-- Button for toggling the frame counter
			button.set_position (150, 18)
			button.set_tooltip ("Display or hide the frame counter")
			button.clicked_event.subscribe (agent btn_toggle_fps)
			main_container.add_widget (button)
			
			create button.make_from_text ("About")								-- Button for displaying the about dialog
			button.set_position (248, 18)
			button.set_tooltip ("Show the about dialog...")
			button.clicked_event.subscribe (agent btn_about_dialog)
			main_container.add_widget (button)
				
			create button.make_from_text ("Exit")								-- Quit button
			button.set_position (294, 18)
			button.set_tooltip ("Quit the Flat Hunt Map Editor software")
			button.clicked_event.subscribe (agent quit_dialog)
			main_container.add_widget (button)
			
			--- END OF MAIN MENU BUTTON BLOCK ---
			
			--- BEGIN OF GENERAL ELEMENTS BLOCK ---
			
			create label.make_from_text ("Map:")								-- Display the map name in the status area
			label.set_position (5, 732)
			add_widget (label)
			create label.make_from_text (map_editor.map.name + " (" + map_editor.map.description + " - " + "map_file_name (TODO!) )") --map_editor.map_file.filename.out + ")")
			label.set_position (38, 732)
			main_container.add_widget (label)
			
			create color_black.make_black										-- Create the black rectangle to make the fps counter more visible (debug)		
			create label.make_empty
			label.set_position (0, 0)
			label.set_dimension (1024, 15)
			label.set_background_color (color_black)
			label.set_tooltip ("This frame rate counter shows you how slow Traffic really is")
			main_container.add_widget (label)
			
			--- END OF GENERAL ELEMENTS BLOCK ---
			
			--- BEGIN OF LISTBOX CREATION BLOCK ---
					
			create list_places.make_empty
			create list_lines.make_empty
			build_places_listbox(list_places)									-- Build the listboxes for the lines and places
			build_lines_listbox(list_lines)										-- (Own features for later refreshs)
			
			create scrollpanel.make_from_widget (list_places)					-- Make list scrollable
			scrollpanel.set_dimension (280, 120)
			scrollpanel.set_position (map_container.width + 10, 237)
			list_places.set_tooltip ("The places of the map. Click one, then select an action below.")
			main_container.add_widget (scrollpanel)
			
			create scrollpanel.make_from_widget (list_lines)					-- Make list scrollable
			scrollpanel.set_dimension (280, 120)
			scrollpanel.set_position (map_container.width + 10, 430)
			list_lines.set_tooltip ("The lines of the map. Click one, then select an action below.")
			main_container.add_widget (scrollpanel)
			
			--- END OF LISTBOX CREATION BLOCK ---
			
			--- BEGIN OF PLACE EDITING BUTTON BLOCK ---
			
			create button.make_from_dimension (280, 20)							-- Button for displaying and changing place information
			button.set_text ("View and modify place...")
			button.set_tooltip ("Display and change the name and coordinates of the selected station")
			button.set_position (map_container.width + 10, 360)
			button.clicked_event.subscribe (agent btn_place_edit)
			if list_places.count = 0 then										-- Deactivate this button if no places are in the list
				button.set_enabled (False)
			end
			main_container.add_widget (button)
			
			create button.make_from_dimension (280, 20)							-- Button for adding a new place
			button.set_text ("Add a new place...")
			button.set_tooltip ("Create a new station and add it to the map")
			button.set_position (map_container.width + 10, 380)
			button.clicked_event.subscribe (agent btn_place_add)
			main_container.add_widget (button)
			
			create button.make_from_dimension (280, 20)							-- Button for removing the selected place
			button.set_text ("Remove selected place")
			button.set_tooltip ("Remove the selected station from the map")
			button.set_position (map_container.width + 10, 400)
			button.clicked_event.subscribe (agent btn_place_delete)
			if list_places.count = 0 then										-- Deactivate this button if no places are in the list
				button.set_enabled (False)
			end
			main_container.add_widget (button)
			
			--- END OF PLACE EDITING BUTTON BLOCK ---
			
			--- BEGIN OF LINE EDITING BUTTON BLOCK ---
			
			create button.make_from_dimension (280, 20)							-- Button for displaying and modifying lines
			button.set_text ("View and modify line...")
			button.set_tooltip ("Display and change the information about the line, its stations and segments")
			button.set_position (map_container.width + 10, 552)
			button.clicked_event.subscribe (agent btn_line_edit)
			if list_lines.count = 0 then										-- Disable this button if no lines are in the list
				button.set_enabled (False)
			end
			main_container.add_widget (button)
			
			create button.make_from_dimension (280, 20)							-- Button for adding a new line
			button.set_text ("Create a new line...")
			button.set_tooltip ("Add the information of a new line and add it to the map")
			button.set_position (map_container.width + 10, 572)
			button.clicked_event.subscribe (agent btn_line_add)
			main_container.add_widget (button)
			
			create button.make_from_dimension (280, 20)							-- Button for removing a line
			button.set_text ("Remove selected line")
			button.set_tooltip ("Removes the selected line from the map completely")
			button.set_position (map_container.width + 10, 592)
			button.clicked_event.subscribe (agent btn_line_delete)
			if list_lines.count = 0 then
				button.set_enabled (False)										-- Disable this button if no lines are in the list
			end
			main_container.add_widget (button)
			
			--- END OF LINE EDITING BUTTON BLOCK ---
			
			--- BEGIN OF GENERAL ACTION BUTTON BLOCK ---
			
			create button.make_from_dimension (280, 20)							-- Change map name and description
			button.set_text ("Modify map information...")
			button.set_tooltip ("Change the name and description of the currently loaded map")
--			button.set_position (map_container.width + 10, 632)					-- Set back to these coordinates if you plan on using buttons 2-5
			button.set_position (map_container.width + 10, 712)
			button.clicked_event.subscribe (agent btn_mapinfo)
			main_container.add_widget (button)
			
--			create button.make_from_dimension (280, 20)							-- General Action 2
--			button.set_text ("General Action 2")
--			button.set_tooltip ("General Action 2")
--			button.set_position (map_container.width + 10, 652)
--			main_container.add_widget (button)
--			
--			create button.make_from_dimension (280, 20)							-- General Action 3
--			button.set_text ("General Action 3")
--			button.set_tooltip ("General Action 3")
--			button.set_position (map_container.width + 10, 672)
--			main_container.add_widget (button)
--			
--			create button.make_from_dimension (280, 20)							-- General Action 4
--			button.set_text ("General Action 4")
--			button.set_tooltip ("General Action 4")
--			button.set_position (map_container.width + 10, 692)
--			main_container.add_widget (button)
--			
--			create button.make_from_dimension (280, 20)							-- General Action 5
--			button.set_text ("General Action 5")
--			button.set_tooltip ("General Action 5")
--			button.set_position (map_container.width + 10, 712)
--			main_container.add_widget (button)
			
			--- END OF GENERAL ACTION BUTTON BLOCK ---
			
		ensure
			widgets_built: main_container.widgets.count > 0
		end
		
	build_places_listbox(a_listbox: EM_TEXTLIST [STRING]) is
			-- Fill a listbox with all the places of the map
		require
			map_loaded: map_editor.map /= Void
		local
			i_th, old_position: INTEGER
		do
			if a_listbox.count > 0 then											-- Save the currently selected element to a variable if the listbox is not
				old_position := a_listbox.selected_index						-- empty, so the same element can be reselected after rebuilding the listbox
				a_listbox.wipe_out
				remove_widget (a_listbox)
			else
				old_position := 1
			end
			map_editor.update_hash_arrays										-- Update the hashes in case places have changed
			if map_editor.place_hashes.count > 0 then
				from
					i_th := 1
				until
					i_th = map_editor.place_hashes.count + 1
				loop
					a_listbox.put (map_editor.map.places.item (map_editor.place_hashes.item (i_th)).name)
					i_th := i_th + 1
				end
				a_listbox.set_selected_index (old_position)						-- Select the previously selected item (or the first one if the listbox is new)
			end
			if list_places.mouse_clicked_event.subscriptions.count = 0 then
				list_places.mouse_clicked_event.subscribe (agent highlight_place_event)
			end
		ensure
			all_places_added: a_listbox.count = map_editor.place_hashes.count
		end
		
	build_lines_listbox(a_listbox: EM_TEXTLIST [STRING]) is
			-- Fill a listbox with all the lines of the map
		require
			map_loaded: map_editor.map /= Void
		local
			i_th, old_position: INTEGER
			temp_string: STRING
		do
			if a_listbox.count > 0 then											-- Save the currently selected element to a variable if the listbox is not
				old_position := a_listbox.selected_index						-- empty, so that the same element can be reselected after rebuilding the listbox
				a_listbox.wipe_out
				remove_widget (a_listbox)
			else
				old_position := 1
			end
			map_editor.update_hash_arrays										-- Update the hashes in case lines have changed
			if map_editor.line_hashes.count > 0 then
				from
					i_th := 1
				until
					i_th = map_editor.line_hashes.count + 1
				loop
					temp_string := map_editor.map.lines.item(map_editor.line_hashes.item (i_th)).type.name + " " + map_editor.map.lines.item(map_editor.line_hashes.item (i_th)).name
					a_listbox.put (temp_string)
					i_th := i_th + 1
				end
				a_listbox.set_selected_index (old_position)						-- Select the previously selected item if possible, otherwise the first one
			end
		ensure
			all_lines_added: a_listbox.count = map_editor.line_hashes.count
		end
		
	build_turning_point_listbox (a_listbox: EM_TEXTLIST [STRING]; a_line_section: TRAFFIC_LINE_SECTION) is
			-- Fill a listbox with the line segments of a line
		require
			a_listbox_exists: a_listbox /= Void
			a_line_section_exists: a_line_section /= Void
		do
			from
				a_listbox.wipe_out
				a_line_section.polypoints.start
			until
				a_line_section.polypoints.after
			loop
				if a_line_section.polypoints.isfirst or a_line_section.polypoints.islast then
					a_line_section.polypoints.forth
				else
					a_listbox.put (a_line_section.polypoints.item.out)
					a_line_section.polypoints.forth
				end
			end
		end
		
	highlight_place_event(an_event: EM_MOUSEBUTTON_EVENT) is		
			-- Highlight the selected place
		local
			i_th: INTEGER
		do
			if list_places /= Void and then list_places.selected_element /= Void then
				from
					i_th := 1
				until
					i_th > map_editor.place_hashes.count
				loop
					map_widget.set_place_special_renderer (place_renderer, map_editor.map.places.item (map_editor.place_hashes.item (i_th)))
					i_th := i_th + 1
				end
				map_widget.set_place_special_renderer (highlight_renderer, map_editor.map.places.item (map_editor.place_hashes.item(list_places.selected_index)))
			end
			map_widget.render			
		end
		
		
	redraw_scene is
			-- Clear the scene and redraw the window, use this if you changed the map in some way
		do
--			clear_scene
			map_editor.update_hash_arrays			
--			build_map_widget
--			build_nav_widget
--			build_menu_buttons
		ensure
			widgets_rebuilt: widgets.count > 0
		end
		
	diet_redraw is
			-- This feature works like `redraw_scene' but doesn't rebuild the buttons and lists.
			-- It is being used in the edit line dialog to avoid the listbox jumping back to the first
			-- line after adding a segment or turning point. There would be code to reselect the previously
			-- selected element after rebuilding, but it seems to suck.
		do
--			map_container.wipe_out
			map_editor.update_hash_arrays
--			build_map_widget
		ensure
			widgets_rebuilt: widgets.count > 0
		end
		
		
	clear_scene is
			-- Clear the window scene to rebuild it with a new map
		do
			if main_container /= Void then
				remove_widget (main_container)
				create main_container.make_from_surface (surface)
				add_widget (main_container)
			end
		end
		
	quit_dialog is
			-- Ask if user really wants to quit
		local
			question_dialog: EM_MESSAGE_DIALOG
		do
			create question_dialog.make_from_question ("Do you really want to quit the Flat Hunt Map Editor?")
			question_dialog.set_title ("Do you believe in life after Flat Hunt?")
			question_dialog.yes_button.clicked_event.subscribe (agent quit)
			question_dialog.show
		end

		

feature		-- Main button event handlers

	btn_open_map is
			-- File dialog for selecting a map XML file to load
		local
			message_dialog: EM_MESSAGE_DIALOG
		do
			create file_dialog.make
			file_dialog.center_on_screen
			file_dialog.set_modal (True)
			file_dialog.set_title ("Open traffic map")
			file_dialog.hide_event.subscribe (agent load_map)
			file_dialog.set_directory (".\map")
			file_dialog.show
			
			create message_dialog.make_from_message ("Please note that due to restrictions of the Traffic%Nlibrary, you can only load maps from the '.\map' subdirectory%Nof the Map Editor program folder.%N %NThe file dialog is currently pointed to that folder.")
			message_dialog.set_title ("Note: Where to load maps from")
			message_dialog.show
		end
		
	load_map is
			-- Load selected traffic map if OK button was clicked (to be run by btn_open_map)
		do
			if file_dialog.was_ok_clicked then
				file_dialog.filename.to_lower													-- Make filename all lower case to simplify filename checks
				if file_dialog.filename.is_empty then
					err_invalid_xml
				elseif file_dialog.filename.has_substring (".xml") then
					load_and_build_map (".\map\" + file_dialog.filename)						-- Load the selected XML file and rebuild the window
				else
					err_invalid_xml																-- If wrong path/file, display error message
				end
			end
		end
		
	btn_save_map is
			-- Select a filename to save the map to
		do
			create file_dialog.make
			file_dialog.center_on_screen
			file_dialog.set_modal (True)
			file_dialog.set_title ("Save traffic map")
			file_dialog.hide_event.subscribe (agent export_map)
			file_dialog.show
		end
		
	export_map is
			-- Save the current traffic map to the specified XML file (to be run by btn_save_map)
		do
			if file_dialog.was_ok_clicked then
				file_dialog.filename.to_lower														-- Make filename all lower case to simplify filename checks
				if file_dialog.filename.is_empty then												-- If no file name specified, display error message
					err_invalid_filename
				elseif file_dialog.filename.has_substring (".xml") then								-- If valid filename has been entered/selected
					create map_output.make_with_map (map_editor.map)								-- Create a map outpup object
					map_output.output_to_xml (file_dialog.directory + "\" + file_dialog.filename)	-- Start exporting map to specified XML file
				else	
					err_invalid_filename
				end
			end
		end	
		
	btn_toggle_fps is
			-- Display the frame counter if it is hidden, and vice-versa
		do
			if is_frame_counter_displayed = True then
				set_frame_counter_visibility (False)
			else
				set_frame_counter_visibility (True)
			end
		end
		
	btn_about_dialog is
			-- Display the application's about dialog
		local
			about_dialog: EM_DIALOG
			button:EM_BUTTON
			label: EM_LABEL
			logo_panel: EM_IMAGEPANEL
			logo_factory: EM_BITMAP_FACTORY
			website_command: KL_SHELL_COMMAND								-- Shell command to open the web browser (buggy)
		do
			create about_dialog.make_from_title ("About Flat Hunt Map Editor")
			about_dialog.set_dimension (300, 400)
			about_dialog.show
			about_dialog.center_on_screen
			
			create label.make_from_text ("THE FLAT HUNT MAP EDITOR")
			label.set_position (65, 40)
			about_dialog.add_widget (label)
			
			create label.make_from_text ("____________________________")
			label.set_position (65, 45)
			about_dialog.add_widget (label)
			
			create label.make_from_text ("Version 0.7")
			label.set_position (164, 64)
			about_dialog.add_widget (label)
						
			create logo_factory.make
			logo_factory.create_bitmap_from_image ("logo.bmp")
			create logo_panel.make_from_bitmap (logo_factory.last_bitmap)
			logo_panel.set_position (30, 100)
			about_dialog.add_widget (logo_panel)
			
			create label.make_from_text ("An extension to Traffic and Flat Hunt")
			label.set_position (15, 170)
			about_dialog.add_widget (label)
			
			create label.make_from_text ("Idea, concept, analysis, design, planning")
			label.set_position (15, 200)
			about_dialog.add_widget (label)
			
			create label.make_from_text ("preparation, implementation, assembling,")
			label.set_position (15, 216)
			about_dialog.add_widget (label)
			
			create label.make_from_text ("debugging, structuring, compilation,")
			label.set_position (15, 232)
			about_dialog.add_widget (label)
			
			create label.make_from_text ("packaging, documentation and release by")
			label.set_position (15, 248)
			about_dialog.add_widget (label)
			
			create label.make_from_text ("Fabio Maninchedda      and      Daniel Saner")
			label.set_position (15, 280)
			about_dialog.add_widget (label)
			
			create label.make_from_text ("ETH Zurich, 2005-2006, D-INFK, Semester 1")
			label.set_position (15, 296)
			about_dialog.add_widget (label)
			
			create label.make_from_text ("Professor: Dr. Bertrand Meyer")
			label.set_position (15, 324)
			about_dialog.add_widget (label)
			
			create label.make_from_text ("Assistant: Matthias Konrad")
			label.set_position (15, 340)
			about_dialog.add_widget (label)
			
			create button.make_from_dimension (140, 20)
			button.set_position (7, 375)
			button.set_text ("Visit Project Website")
			create website_command.make ("start http://students:info1@wiki.se.inf.ethz.ch/info1_05/Fabio_Maninchedda,_Daniel_Saner")	-- Does not seem to work (WHY??)
			button.clicked_event.subscribe (agent website_command.execute)
			about_dialog.add_widget (button)
			
--			create button.make_from_dimension (140, 20)						-- Old button dimensions. The new dimension and position below does hide the
--			button.set_position (149, 375)									-- website button because that one sucks at the moment.
			create button.make_from_dimension (282, 20)
			button.set_position (7, 375)
			button.set_text ("OK, this tool rules")							-- Telling the user the truth
			button.clicked_event.subscribe (agent about_dialog.hide)
			about_dialog.add_widget (button)
		end
	
	btn_mapinfo is
			-- Dialog to change the general information of a map file
		local
			button: EM_BUTTON
			label: EM_LABEL
		do
			create mapinfo_dialog.make_from_title ("Modify map information")
			mapinfo_dialog.set_dimension (500, 120)
			mapinfo_dialog.center_on_screen
			mapinfo_dialog.show
			
			create label.make_from_text ("Map name:")
			label.set_position (20, 30)
			mapinfo_dialog.add_widget (label)
			
			create label.make_from_text ("Map description:")
			label.set_position (20,55)
			mapinfo_dialog.add_widget (label)
			
			create textbox_map_name.make_from_size (42)
			textbox_map_name.set_position (135,30)
			textbox_map_name.set_text (map_editor.map.name)								-- Set the content to the current map name
			textbox_map_name.set_tooltip ("Enter a new name for the map")
			mapinfo_dialog.add_widget (textbox_map_name)
			
			create textbox_map_description.make_from_size (42)
			textbox_map_description.set_position (135,55)
			textbox_map_description.set_text (map_editor.map.description)				-- Set the text to the current description
			textbox_map_description.set_tooltip ("Enter a description for the map")
			mapinfo_dialog.add_widget (textbox_map_description)
			
			create button.make_from_text (" Accept ")
			button.set_position (350, 85)
			button.set_tooltip ("Save changes and close window")
			button.clicked_event.subscribe (agent mapinfo_apply_event)
			mapinfo_dialog.add_widget (button)
			
			create button.make_from_text (" Discard ")
			button.set_position (412, 85)
			button.set_tooltip ("Close window without saving changes made to map")
			button.clicked_event.subscribe (agent mapinfo_dialog.hide)
			mapinfo_dialog.add_widget (button)
		ensure
			new_name_set: map_editor.map.name /= Void
			new_description_set: map_editor.map.description /= Void
		end
		
	mapinfo_apply_event is
			-- Change `map.name' and `map.description' according to mapinfo_dialog (only to be run from there)
		require
			map_name_not_void: textbox_map_name /= Void
			map_description_not_void: textbox_map_description /= Void
		do
			if textbox_map_name.text.is_empty then															-- `textbox_map_name' textbox text is empty
				err_invalid_name
			elseif textbox_map_description.text.is_empty then												-- `textbox_map_description' textbox text is empty
				err_invalid_description
			else
				map_editor.change_map_information (textbox_map_name.text, textbox_map_description.text)
				mapinfo_dialog.hide
				redraw_scene																				-- Refresh the window to reflect the changes (label under map representation)
			end
		ensure
			name_set: map_editor.map.name.is_equal (textbox_map_name.text)
			description_set: map_editor.map.description.is_equal (textbox_map_description.text)
		end
		
		
feature -- Mouse features

	my_mouse_event (event: EM_MOUSEBUTTON_EVENT) is
			-- event for mouse click on main container
		do
			io.put_string ("button is: "+event.button.out+"%N")
			io.put_string ("x-axis is: "+event.screen_x.out+"%N")
			io.put_string ("y-axis is: "+event.screen_y.out+"%N")
		end
		
		
feature -- Place editing button event handlers
		
	
	btn_place_edit is		
			-- Dialog for displaying and changing the information of a selected place
		local
			button: EM_BUTTON
			label: EM_LABEL
			temp_string: STRING						-- Needed, because `EM_TEXTBOX' is so gay, it's automatically updating the name otherwise.
		do
			temp_selected_place := map_editor.map.places.item (map_editor.place_hashes.item(list_places.selected_index))
			create temp_string.make_from_string (temp_selected_place.name)
			-- Create all widgets
			
			create edit_place_dialog.make_from_title ("Rename place")
			edit_place_dialog.center_on_screen
			edit_place_dialog.set_dimension (240, 90)
			edit_place_dialog.show_close_button
			
			create label.make_from_text ("Place name:    ")
			label.set_position (10, 30)
			edit_place_dialog.add_widget (label)
			
			create edit_place_name.make_from_size (14)
			edit_place_name.set_position (110, 30)
			edit_place_name.set_tooltip ("Enter a new name for the selected place")
			edit_place_name.set_text (temp_string)
			edit_place_dialog.add_widget (edit_place_name)
			
			create button.make_from_dimension (100, 20)
			button.set_text ("Ok")
			button.set_tooltip ("Ok")
			button.set_position (15, 60)
			button.clicked_event.subscribe (agent edit_place_ok_button_event)
			edit_place_dialog.add_widget (button)
			
			create button.make_from_dimension (100,20)
			button.set_text ("Cancel")
			button.set_tooltip ("Cancel")
			button.set_position (125, 60)
			button.clicked_event.subscribe (agent edit_place_dialog.hide)
			edit_place_dialog.add_widget (button)
			
			edit_place_dialog.show
		ensure
			name_not_void: edit_place_name /= Void
		end
	
	btn_place_add is
			-- Dialog for adding a place to the map
		local
			button: EM_BUTTON
			label: EM_LABEL
		do
			-- Create all widgets
			
			create add_place_dialog.make_from_title ("Add place")
			add_place_dialog.center_on_screen
			add_place_dialog.set_dimension (240, 150)
			add_place_dialog.show_close_button
			
			create label.make_from_text ("Place name:    ")
			label.set_position (10, 30)
			add_place_dialog.add_widget (label)
			
			create add_place_name.make_from_size (14)
			add_place_name.set_position (110, 30)
			add_place_name.set_tooltip ("Enter the name of the place you want to add")
			add_place_dialog.add_widget (add_place_name)
			
			create label.make_from_text ("X coordinates:")
			label.set_position (10, 60)
			add_place_dialog.add_widget (label)
			
			create add_place_a_x.make_from_size (14)
			add_place_a_x.set_position (110, 60)
			add_place_a_x.set_tooltip ("Enter the x coordinates of the place you want to add")
			add_place_dialog.add_widget (add_place_a_x)
			
			create label.make_from_text ("Y coordinates:")
			label.set_position (10, 90)
			add_place_dialog.add_widget (label)
			
			create add_place_a_y.make_from_size (14)
			add_place_a_y.set_position (110, 90)
			add_place_a_y.set_tooltip ("Enter the y coordinates of the place you want to add")			
			add_place_dialog.add_widget (add_place_a_y)
			
			create button.make_from_dimension (100, 20)
			button.set_text ("Ok")
			button.set_tooltip ("Ok")
			button.set_position (15, 120)
			button.clicked_event.subscribe (agent add_place_ok_button_event)
			add_place_dialog.add_widget (button)
			
			create button.make_from_dimension (100,20)
			button.set_text ("Cancel")
			button.set_tooltip ("Cancel")
			button.set_position (125, 120)
			button.clicked_event.subscribe (agent add_place_dialog.hide)
			add_place_dialog.add_widget (button)
			
			add_place_dialog.show
		ensure
			name_not_void: add_place_name /= Void
			coordinates_not_void: add_place_a_x /= Void and then add_place_a_y /= Void
		end

	mouse_place_add (event: EM_MOUSEBUTTON_EVENT) is
			-- Dialog for adding a place to the map
		local
			button: EM_BUTTON
			label: EM_LABEL
			i: INTEGER
		do
			-- bypass the EM_TEXTBOX features...
			-- the values from screen_x and screen_y are not the right ones for the map... (shifted)
			create add_place_a_x.make_from_text (event.screen_x.out)
			create add_place_a_y.make_from_text (event.screen_y.out)
			
			io.put_string ("button state is: "+event.button.out)
			if event.button = 1 then
				-- Create all widgets
				create add_place_dialog.make_from_title ("Add place")
				add_place_dialog.center_on_screen
				add_place_dialog.set_dimension (240, 150)
				add_place_dialog.show_close_button
				
				create label.make_from_text ("Place name:    ")
				label.set_position (10, 30)
				add_place_dialog.add_widget (label)
				
				create add_place_name.make_from_size (14)
				add_place_name.set_position (110, 30)
				add_place_name.set_tooltip ("Enter the name of the place you want to add")
				add_place_dialog.add_widget (add_place_name)
				
				create label.make_from_text ("X coordinates: "+event.screen_x.out)
				label.set_position (10, 60)
				add_place_dialog.add_widget (label)
				
				create label.make_from_text ("Y coordinates:"+event.screen_y.out)
				label.set_position (10, 90)
				add_place_dialog.add_widget (label)
				
				create button.make_from_dimension (100, 20)
				button.set_text ("Ok")
				button.set_tooltip ("Ok")
				button.set_position (15, 120)
				button.clicked_event.subscribe (agent add_place_ok_button_event)
				add_place_dialog.add_widget (button)
				
				create button.make_from_dimension (100,20)
				button.set_text ("Cancel")
				button.set_tooltip ("Cancel")
				button.set_position (125, 120)
				button.clicked_event.subscribe (agent add_place_dialog.hide)
				add_place_dialog.add_widget (button)
				
				add_place_dialog.show
			else
				from i:=0
				until not (map_editor.map.has_place ("dummy_"+i.out))
				loop
					i:=i+1
				end
				create add_place_name.make_from_text ("dummy_"+i.out)
				create add_place_dialog.make_empty
				add_place_ok_button_event
			end
		ensure
			name_not_void: add_place_name /= Void
			coordinates_not_void: add_place_a_x /= Void and then add_place_a_y /= Void
		end
		
	add_place_ok_button_event is
			-- Event that will be executed when OK button in btn_place_add dialog is clicked (only run this from there)
		require
			add_place_name_not_void: add_place_name /= Void
			add_place_coordinates_not_void: add_place_a_x /= Void and add_place_a_y /= Void
		do
			if add_place_name.text.is_empty then													-- `add_place_name' textbox text is empty, error message
				err_invalid_name
			elseif add_place_a_x.text.is_empty or else add_place_a_y.text.is_empty then				-- `add_place_a_x' or `add_place_a_y' textbox text is empty, error message
				err_invalid_coordinates	
			elseif not add_place_a_x.text.is_integer or else not add_place_a_y.text.is_integer then	-- `add_place_a_x' or `add_place_a_y' textbox text is not integer, error message
				err_invalid_coordinates
			elseif map_editor.map.places.has (add_place_name.text) then								-- Place with name `add_place_name' already exists, error message
				err_already_exists
			else
				map_editor.place_add (add_place_name.text, add_place_a_x.text.to_integer, add_place_a_y.text.to_integer)
				add_place_dialog.hide
				redraw_scene
			end
		end
		
	edit_place_ok_button_event is
			-- Event that will be executed when OK button in btn_place_edit dialog is clicked (only run this from there)
		require
			edit_place_name_not_void: edit_place_name /= Void
		do
			if edit_place_name.text.is_empty then														-- `edit_place_name' textbox text is empty, error message
				err_invalid_name
			elseif map_editor.map.places.has (edit_place_name.text) then								-- Place with name `add_place_name' already exists, error message
				err_already_exists
			else
				map_editor.place_rename (temp_selected_place, edit_place_name.text)
				edit_place_dialog.hide
				redraw_scene
			end
		end
		
	btn_place_delete is
			-- Deleting the place selected in the listbox from the map
		do
			map_editor.place_remove (map_editor.map.places.item (map_editor.place_hashes.item (list_places.selected_index)))
			map_editor.update_hash_arrays
			redraw_scene
		end
	
	
	
feature -- Line editing button event handlers


	btn_line_add is
			-- Add a line and line segment to the map
		local
			button: EM_BUTTON
			label: EM_LABEL
		do
			-- Create all widgets
			
			create add_line_dialog.make_from_title ("Add line")
			add_line_dialog.center_on_screen
			add_line_dialog.set_dimension (240, 120)
			add_line_dialog.show_close_button
			
			create label.make_from_text ("Line name:    ")
			label.set_position (10, 30)
			add_line_dialog.add_widget (label)
			
			create add_line_name.make_from_size (14)
			add_line_name.set_position (110, 30)
			add_line_name.set_tooltip ("Enter the name of the line you want to create")
			add_line_dialog.add_widget (add_line_name)
			
			create label.make_from_text ("Line type:")
			label.set_position (10, 60)
			add_line_dialog.add_widget (label)
			
			create add_line_type.make_from_list (traffic_type_list)
			add_line_type.set_dimension (116, 20)
			add_line_type.set_position (110, 60)
			add_line_type.set_tooltip ("Choose a traffic line type")
			add_line_dialog.add_widget (add_line_type)
			
			create button.make_from_text ("Ok")
			button.set_dimension (100, 20)
			button.set_position (15, 90)
			button.clicked_event.subscribe (agent add_line_ok_button_event)
			add_line_dialog.add_widget (button)
			
			create button.make_from_text ("Cancel")
			button.set_dimension (100, 20)
			button.set_position (125, 90)
			button.clicked_event.subscribe (agent add_line_dialog.hide)
			add_line_dialog.add_widget (button)
			
			add_line_dialog.show
		end
		
	add_line_ok_button_event is
			-- Add a line to the map (according to the information from btn_line_add, from where this feature should be run ONLY)
		do
			if add_line_name.text.is_empty then												-- `add_line_name' textbox text is empty, display error message
				err_invalid_name
			elseif map_editor.map.lines.has (add_line_name.text) then						-- Line of name `add_line_name' already exists, display error message
				err_already_exists
			else
				map_editor.line_add (add_line_name.text, add_line_type.selected_element)
				add_line_dialog.hide
				redraw_scene
			end
		end
		
	btn_line_delete is
			-- Deleting a line from the map
		local
			question_dialog: EM_MESSAGE_DIALOG
		do
			create question_dialog.make_from_question ("Are you sure that you want delete this line%Nand all her line sections")
			question_dialog.yes_button.clicked_event.subscribe (agent map_editor.line_remove (map_editor.map.lines.item (map_editor.line_hashes.item (list_lines.selected_index))))
			question_dialog.yes_button.clicked_event.subscribe (agent line_delete_cheat)
			question_dialog.show
		ensure
--			line_removed: not map_editor.map.has_line (map_editor.line_hashes.item(list_lines.selected_index))
		end
		
	line_delete_cheat is
			-- A little cheat to make the deleted line disappear (only visually, it would be removed anyway)
		local
			temporary_export: MAP_EDITOR_OUTPUT
		do
			create temporary_export.make_with_map (map_editor.map)
			temporary_export.output_to_xml (".\map\temp_linedelete.xml")
			load_and_build_map (".\map\temp_linedelete.xml")
		end
		
		
	btn_line_edit is
			-- Dialog for editing a line (mainly line sections and turning points)
		local
			
			button: EM_BUTTON
			label: EM_LABEL
			scrollpanel: EM_SCROLLPANEL
			divider: EM_TEXTBOX
		do
			
			-- Create all the widgets
			create line_edit_dialog.make_from_title ("Modify line")
			line_edit_dialog.set_dimension (520, 560)
			line_edit_dialog.center_on_screen
			line_edit_dialog.show_close_button
			
			create label.make_from_text ("Origin of new line segment")
			label.set_position (20, 40)	
			line_edit_dialog.add_widget (label)
			
			create add_line_station1_listbox.make_empty
			build_places_listbox(add_line_station1_listbox)
			create scrollpanel.make_from_widget (add_line_station1_listbox)
			scrollpanel.set_dimension (230, 80)
			scrollpanel.set_position (20, 60)
			scrollpanel.set_tooltip ("Select the origin for the new line segment.")
			line_edit_dialog.add_widget (scrollpanel)
				
			create label.make_from_text ("Destination of new line segment")
			label.set_position (20, 160)
			line_edit_dialog.add_widget (label)
			
			create add_line_station2_listbox.make_empty
			build_places_listbox(add_line_station2_listbox)
			create scrollpanel.make_from_widget (add_line_station2_listbox)
			scrollpanel.set_dimension (230, 80)
			scrollpanel.set_position (20, 180)
			scrollpanel.set_tooltip ("Select the destination for the new line segment.")
			line_edit_dialog.add_widget (scrollpanel)
			
			create label.make_from_text ("Current line segments")
			label.set_position (280, 40)
			line_edit_dialog.add_widget (label)

			create add_line_segments_listbox.make_empty
			build_line_segment_listbox (add_line_segments_listbox, selected_line)
			add_line_segments_listbox.focus_received_event.subscribe (agent selected_line_section_event)
			create add_line_segments_scollpanel.make_from_widget (add_line_segments_listbox)
			add_line_segments_scollpanel.set_dimension (210, 150)
			add_line_segments_scollpanel.set_position (280, 60)
			add_line_segments_scollpanel.set_tooltip ("The current line segments of the line")
			line_edit_dialog.add_widget (add_line_segments_scollpanel)
			
			if not selected_line.is_empty then
				add_line_station1_listbox.set_selected_element (selected_line.i_th (selected_line.count // 2).destination.name)
				add_line_station1_listbox.disable				
			end
			
			create button.make_from_text ("Append new line segment")
			button.set_tooltip ("Add the new line segment to the end of the list")
			button.set_dimension (210, 20)
			button.set_position (280, 220)
			button.clicked_event.subscribe (agent add_line_section_event)
			line_edit_dialog.add_widget (button)
			
			create button.make_from_text ("Delete last line segment")
			button.set_tooltip ("Removes the last line segment of the list")
			button.set_dimension (210, 20)
			button.set_position (280, 240)
			button.clicked_event.subscribe (agent remove_line_section_event)
			line_edit_dialog.add_widget (button)
			
			---- FIRST DIVIDER (LINE SEGMENT PART / TURNING POINT PART) ----
			
			create divider.make_empty
			divider.set_position (40, 295)
			divider.set_dimension (440, 3)
			divider.set_enabled (False)
			line_edit_dialog.add_widget (divider)
			
			---- FIRST DIVIDER (LINE SEGMENT PART / TURNING POINT PART) ----
			
			create label.make_from_text ("Edit turning points")
			label.set_position (20, 330)	
			line_edit_dialog.add_widget (label)
			
			create label.make_from_text ("X coordinate")
			label.set_position (20, 360)
			line_edit_dialog.add_widget (label)
			
			create turning_point_a_x.make_from_size (10)
			turning_point_a_x.set_position (120, 360)
			turning_point_a_x.set_tooltip ("Enter x coordinate for the turning point")
			turning_point_a_x.show
			
			create label.make_from_text ("Y coordinate")
			label.set_position (20, 385)
			line_edit_dialog.add_widget (label)
			
			create turning_point_a_y.make_from_size (10)
			turning_point_a_y.set_position (120, 385)
			turning_point_a_y.set_tooltip ("Enter y coordinate for the turning point")
			turning_point_a_y.show
		
			create turning_point_listbox.make_empty
			create turning_point_scrollpanel.make_from_widget (turning_point_listbox)
			turning_point_scrollpanel.set_dimension (160, 80)
			turning_point_scrollpanel.set_position (220, 330)
			turning_point_scrollpanel.set_tooltip ("Select the destination for the new line segment.")
			line_edit_dialog.add_widget (turning_point_scrollpanel)
			
			create button.make_from_text ("Add point")
			button.set_dimension (100,20)
			button.set_position (400, 330)
			button.set_tooltip ("Add first turning point to the line segment you are creating")
			button.clicked_event.subscribe (agent add_turning_point)
			line_edit_dialog.add_widget (button)
			
			create button.make_from_text ("Prepend point")
			button.set_dimension (100,20)
			button.set_position (400, 350)
			button.set_tooltip ("Add turning point before the selected turning point")
			button.clicked_event.subscribe (agent prepend_turning_point)
			line_edit_dialog.add_widget (button)
			
			create button.make_from_text ("Append point")
			button.set_dimension (100,20)
			button.set_position (400, 370)
			button.set_tooltip ("Add turning point after the selected turning point")
			button.clicked_event.subscribe (agent append_turning_point)
			line_edit_dialog.add_widget (button)
			
			create button.make_from_text ("Remove point")
			button.set_dimension (100,20)
			button.set_position (400, 390)
			button.set_tooltip ("Remove the last turning point from the current line segment")
			button.clicked_event.subscribe (agent remove_turning_point)
			line_edit_dialog.add_widget (button)
			
			
			---- SECOND DIVIDER (LINE SEGMENT PART / GENERAL LINE PART) ----
			
			create divider.make_empty
			divider.set_position (40, 445)
			divider.set_dimension (440, 3)
			divider.set_enabled (False)
			line_edit_dialog.add_widget (divider)
			
			---- SECOND DIVIDER (LINE SEGMENT PART / GENERAL LINE PART) ----
			
			create label.make_from_text ("Type")
			label.set_position (20, 515)
			line_edit_dialog.add_widget (label)
			
			create divider.make_from_size (21)
			divider.set_text (selected_line.type.name)
			divider.set_tooltip ("The type of the selected line. Cannot be changed after creation.")
			divider.set_position (80, 515)
			divider.set_enabled (False)
			divider.set_transparent
			line_edit_dialog.add_widget (divider)
			
			create label.make_from_text ("Name")
			label.set_position (20, 490)
			line_edit_dialog.add_widget (label)
			
			create line_name.make_from_size (21)
			line_name.set_position (80, 490)
			line_name.set_tooltip ("Change the name of the traffic line")
			line_name.set_text (selected_line.name)
			line_name.show
			
			create button.make_from_text ("Apply")
			button.set_tooltip ("Apply the changes made to the line name and type")
			button.set_dimension (60, 45)
			button.set_position (260, 490)
--			button.clicked_event.subscribe (agent add_line_rename_line(selected_line, line_name.text))
			line_edit_dialog.add_widget (button)
			
			create button.make_from_text ("Close window")
			button.set_tooltip ("Close this window. No new changes will be saved (use the appropriate 'apply' buttons).")
			button.set_position (400, 515)
			button.clicked_event.subscribe (agent line_edit_dialog.hide)
			button.clicked_event.subscribe (agent redraw_scene)
			line_edit_dialog.add_widget (button)
			
			-- Add all created widgets to the dialog
			
			line_edit_dialog.add_widget (turning_point_a_x)
			line_edit_dialog.add_widget (turning_point_a_y)

			line_edit_dialog.add_widget (line_name)
			
			line_edit_dialog.show
		end		
		
	selected_line_section: TRAFFIC_LINE_SECTION is
			-- selected traffic line section
		do
			Result := selected_line.i_th (add_line_segments_listbox.selected_index)
		end
		
	selected_line: TRAFFIC_LINE is
			-- selected traffic line
		do
			Result := map_editor.map.lines.item (map_editor.line_hashes.item (list_lines.selected_index))
		end
		
	selected_line_section_event is
			-- When a line section of the selected line is selected the polypoints of the selected line section will show up in the turning point listbox
		do
			turning_point_listbox.wipe_out
			build_turning_point_listbox (turning_point_listbox, selected_line_section)
			turning_point_scrollpanel.set_widget (turning_point_listbox)
			turning_point_scrollpanel.set_dimension (160, 80)
			turning_point_scrollpanel.set_position (220, 330)
			turning_point_scrollpanel.set_tooltip ("Select a line section to view polypoints.")
		end
		
	add_line_section_event is
			-- Add a line section to the map
		do
			if add_line_station1_listbox.has_selected_element and add_line_station2_listbox.has_selected_element then
--	original ->	map_editor.line_segment_add (map_editor.map.places.item (map_editor.place_hashes.item (add_line_station1_listbox.selected_index)), map_editor.map.places.item (map_editor.place_hashes.item (add_line_station2_listbox.selected_index)), selected_line, selected_line.type)
				map_editor.line_segment_add (map_editor.map.stops.item (map_editor.stop_hashes.item (add_line_station1_listbox.selected_index)), map_editor.map.stops.item (map_editor.stop_hashes.item (add_line_station2_listbox.selected_index)), selected_line, selected_line.type)
				--|danger| new: map_editor.stop_hashes.item...
				map_editor.line_segment_add_without_display (map_editor.map.stops.item (map_editor.stop_hashes.item (add_line_station2_listbox.selected_index)), map_editor.map.stops.item (map_editor.stop_hashes.item (add_line_station1_listbox.selected_index)), selected_line, selected_line.type)
				-- new: map_editor.stop_hashes.item... instead of map_editor.place_hashes.item...
				build_line_segment_listbox (add_line_segments_listbox, selected_line)
				add_line_segments_scollpanel.set_widget (add_line_segments_listbox)
				update_station1_selected_element
				diet_redraw
			end
		end
		
	update_station1_selected_element  is
			-- Update the station1 place selected element so that the destination of the last line segment is selected
		do
			if not selected_line.is_empty then
				add_line_station1_listbox.set_selected_element (selected_line.i_th (selected_line.count // 2).destination.name)
				add_line_station1_listbox.disable				
			end
			
		end
																														--<-- END NEW FEATURE
	remove_line_section_event is
			-- Remove a line section from the map
		do
			if selected_line.count > 0 then
				map_editor.map.remove_line_section (selected_line.i_th (selected_line.count // 2))
				map_editor.map.remove_line_section (selected_line.i_th ((selected_line.count // 2) + 1))
				selected_line.go_i_th (selected_line.count //2)
				selected_line.remove
				selected_line.remove
				add_line_segments_scollpanel.set_widget (add_line_segments_listbox)
				build_line_segment_listbox (add_line_segments_listbox, selected_line)
				diet_redraw
			else
				err_line_has_no_line_sections
			end	
		end
	
	add_turning_point is	
			-- Add a turning point after the selected turning point	
		local
			vector: EM_VECTOR_2D
		do
			if not add_line_segments_listbox.has_selected_element then
				err_select_line_section		
			elseif turning_point_a_x.text.is_empty or else turning_point_a_x.text.is_empty  then
				err_invalid_coordinates
			elseif not turning_point_a_x.text.is_double or else not turning_point_a_y.text.is_double then
				err_invalid_coordinates
			elseif turning_point_listbox.elements.count > 0 then
				err_use_prepend_append
			else	
				create vector.make (turning_point_a_x.text.to_double, turning_point_a_y.text.to_double)
				selected_line_section.polypoints.go_i_th (1)
				selected_line_section.polypoints.put_right (vector)
				build_turning_point_listbox (turning_point_listbox, selected_line_section)
				turning_point_scrollpanel.set_widget (turning_point_listbox)
				diet_redraw
			end
		end
		
	prepend_turning_point is	
			-- Add a turning point after the selected turning point	
		local
			vector: EM_VECTOR_2D
		do
			if not add_line_segments_listbox.has_selected_element then
				err_select_line_section		
			elseif turning_point_a_x.text.is_empty or else turning_point_a_x.text.is_empty  then
				err_invalid_coordinates
			elseif not turning_point_a_x.text.is_double or else not turning_point_a_y.text.is_double then
				err_invalid_coordinates
			elseif turning_point_listbox.elements.count < 1 then
				err_prepend_append
			elseif not turning_point_listbox.has_selected_element then
				err_select_element
			else	
				create vector.make (turning_point_a_x.text.to_double, turning_point_a_y.text.to_double)
				selected_line_section.polypoints.go_i_th (1 + turning_point_listbox.selected_index)
				selected_line_section.polypoints.put_left (vector)
				build_turning_point_listbox (turning_point_listbox, selected_line_section)
				turning_point_scrollpanel.set_widget (turning_point_listbox)
				diet_redraw
			end
		end
		
	append_turning_point is
			-- Add a turning point before the selected turning point
		local
			vector: EM_VECTOR_2D
		do
			if not add_line_segments_listbox.has_selected_element then
				err_select_line_section		
			elseif turning_point_a_x.text.is_empty or else turning_point_a_x.text.is_empty  then
				err_invalid_coordinates
			elseif not turning_point_a_x.text.is_double or else not turning_point_a_y.text.is_double then
				err_invalid_coordinates
			elseif turning_point_listbox.elements.count < 1 then
				err_prepend_append
			elseif not turning_point_listbox.has_selected_element then
				err_select_element
			else	
				create vector.make (turning_point_a_x.text.to_double, turning_point_a_y.text.to_double)
				selected_line_section.polypoints.go_i_th (1 + turning_point_listbox.selected_index)
				selected_line_section.polypoints.put_right (vector)
				build_turning_point_listbox (turning_point_listbox, selected_line_section)
				turning_point_scrollpanel.set_widget (turning_point_listbox)
				diet_redraw
			end
		end
		
	remove_turning_point is
			-- Remove a turning point from the selected line
		do
			if turning_point_listbox.has_selected_element then
				selected_line_section.polypoints.go_i_th (turning_point_listbox.selected_index + 1)
				selected_line_section.polypoints.remove
				if selected_line_section.polypoints.count - 2 > 0 then
					build_turning_point_listbox (turning_point_listbox, selected_line_section)	
				else	
					turning_point_listbox.wipe_out
				end
				turning_point_scrollpanel.set_widget (turning_point_listbox)
				build_turning_point_listbox (turning_point_listbox, selected_line_section)
				turning_point_scrollpanel.set_widget (turning_point_listbox)
				diet_redraw
			else	
				err_select_element
			end
		end
		
	build_line_segment_listbox(a_listbox: EM_TEXTLIST [STRING]; a_line: TRAFFIC_LINE) is
			-- Fill a listbox with the line segments of a line
		require
			a_listbox_not_void: a_listbox /= Void
			a_line_not_void: a_line /= Void
		do
			if a_line.count > 0 then
				from
					a_listbox.wipe_out
					a_line.start
				until
--					a_line.index > a_line.count	- a_line.count // 2												-- Only half of the segments, because the rest is just the other direction
					a_line.index > a_line.count
				loop
					a_listbox.put (a_line.item.origin.name + " <-> " + a_line.item.destination.name)	-- Add to the listbox in format "Origin <-> Destination"
					a_line.forth
				end
			end				
		end
		
	change_line_button_event(a_line: TRAFFIC_LINE; a_new_line_name: STRING; a_new_line_type: TRAFFIC_TYPE) is
			-- Apply new settings to line `a_line'.
		require
			a_line_not_void: a_line /= Void
			a_new_line_name_not_void: a_new_line_name /= Void
			a_new_line_type_not_void: a_new_line_type /= Void
		do
			map_editor.line_rename (a_line, a_new_line_name)
			map_editor.line_type_change (a_line, a_new_line_type)
		ensure
			new_name_set: map_editor.map.has_line (a_new_line_name)
			new_type_set: map_editor.map.lines.item (a_new_line_name).type = a_new_line_type
		end
		
									
--	traffic_type_list: DS_LINKED_LIST [TRAFFIC_TYPE] is  --|danger|-- <-original, new: next line
	traffic_type_list: DS_LINKED_LIST [TRAFFIC_TYPE_LINE] is
			-- A list of all the traffic types that will be loaded in the line_type combobox
		do
			create bus.make
			create rail.make
			create street.make
--			create taxi_office.make (5, 23) -- taxi office with 5 taxis; seed = 23
--			create taxi.make_random (taxi_office, 42, 7) -- taxi working for taxi_office, seed = 42, with 7 stops
			create tram.make
			create walking.make
			create Result.make
			Result.put_last (bus)
			Result.put_last (rail)
--			Result.put_last (street) --|danger| why is TRAFFIC_TYPE_STREET not inheriting TRAFFIC_TYPE_LINE?
--			Result.put_last (taxi)
			Result.put_last (tram)
			Result.put_last (walking)
		ensure
			traffic_type_list /= Void
		end
		
		
		
feature			-- Error message dialogs (incorrect user input)


	err_invalid_xml is
			-- The user has chosen a file with wrong extension, or no file at all
		local
			error_dialog: EM_MESSAGE_DIALOG
		do
			create error_dialog.make_from_error ("Please choose a valid .XML file to load.")			
			error_dialog.set_title ("Error: Invalid file")
			error_dialog.show	
		end
		
	err_invalid_filename is
			-- The user has entered an invalid filename, or none at all
		local
			error_dialog: EM_MESSAGE_DIALOG
		do
			create error_dialog.make_from_error ("Please enter a valid filename for saving the file.%NOnly .xml files are supported.")
			error_dialog.set_title ("Error: Invalid filename")
			error_dialog.show
		end	

	err_invalid_name is
			-- The user has not entered any name
		local
			error_dialog: EM_MESSAGE_DIALOG
		do
			create error_dialog.make_from_error ("Please enter a valid name for the element. Allowed%Nare characters and numbers.%N %Ne.g. 'Place 123'")
			error_dialog.set_title ("Error: Invalid element name entered")
			error_dialog.show	
		end	
		

	err_invalid_description is
			-- The user has entered no map description
		local
			error_dialog: EM_MESSAGE_DIALOG
		do
			create error_dialog.make_from_error ("Please enter a valid map description. Allowed%Nare characters and numbers.%N %Ne.g. 'New York City'")
			error_dialog.set_title ("Error: Invalid map description")
			error_dialog.show	
		end
		
	err_invalid_coordinates is
			-- The user has entered invalid coordinates, `x' or `y' coordinates are empty or not integers
		local
			error_dialog: EM_MESSAGE_DIALOG
		do
			create error_dialog.make_from_error ("The coordinates you have entered are invalid.%NMake sure to only enter numbers.")
			error_dialog.set_title ("Error: Invalid coordinates")
			error_dialog.show
		end	
		
	err_cannot_remove_place is
			-- The user wants to remove a place that still is used by one or more lines
		local
			error_dialog: EM_MESSAGE_DIALOG
		do
			create error_dialog.make_from_error ("The place you want to remove is still used%Nby one or more lines. First delete the line segments%Nstill connected to this place before trying to remove%Nit again.")
			error_dialog.set_title ("Error: Place still in use")
			error_dialog.show
		end
		
	err_already_exists is
			-- The user has entered a name that is already used
		local
			error_dialog: EM_MESSAGE_DIALOG
		do
			create error_dialog.make_from_error ("An object with the name you entered already%Nexists on the map. Please choose a different name%Nor delete the other element first.")
			error_dialog.set_title ("Error: Name already in use")
			error_dialog.show	
		end	
		
	err_select_line_section is
			-- The user has not selected an element from the line segment listbox
		local
			error_dialog: EM_MESSAGE_DIALOG
		do
			create error_dialog.make_from_error ("You first have to select a line segment%Nfrom the line segment listbox before using this feature.")
			error_dialog.set_title ("Error: No line segment selected")
			error_dialog.show
		end
		
	err_select_element is
			-- The user has not selected any element from the listbox
		local
			error_dialog: EM_MESSAGE_DIALOG
		do
			create error_dialog.make_from_error ("You first have to select an element%Nfrom the listbox if you want to use this action.")
			error_dialog.set_title ("Error: No element selected")
			error_dialog.show
		end
		
	err_prepend_append is
			-- User did not add a first turning point yet.
		local
			error_dialog: EM_MESSAGE_DIALOG
		do
			create error_dialog.make_from_error ("Please use 'Add' to create the first%Nturning point and add it to the line segment.")
			error_dialog.set_title ("Error: Append first point first")
			error_dialog.show
		end
		
	err_use_prepend_append is
			-- Use Prepend / Append to create more turning points.
		local
			error_dialog: EM_MESSAGE_DIALOG
		do
			create error_dialog.make_from_error ("Please use 'Append' and 'Prepend' when%None or more turning points already exist.")
			error_dialog.set_title ("Error: Use Append / Prepend")
			error_dialog.show
		end
		
	err_line_has_no_line_sections is
			-- The line has no line sections to be removed.
		local
			error_dialog: EM_MESSAGE_DIALOG
		do
			create error_dialog.make_from_error ("You can only modify turning points of an%Nexisting line segment. Create one first.")
			error_dialog.set_title ("Error: No line sections")
			error_dialog.show
		end
		
		
		
		
feature			-- Attributes, objects, variables

	window_height: INTEGER is 							-- Current window height
		do
			Result := video_subsystem.video_surface_height
		end
		
	window_width: INTEGER is							-- Current window width
		do
			Result := video_subsystem.video_surface_width
		end
		
	map_editor: MAP_EDITOR								-- A map editing object
	map_output: MAP_EDITOR_OUTPUT						-- Object for map file output

	main_container: EM_PANEL							-- A panel container, containing all widgets of the window
	
	map_panel: EM_DRAWABLE_PANEL						-- The panel to draw the map widget in
	map_widget: TRAFFIC_2D_MAP_WIDGET					-- The widget to display the map
	map_zoomable_widget: EM_ZOOMABLE_WIDGET				-- The widget to make the map zoomable
	map_container: EM_DRAWABLE_CONTAINER [EM_DRAWABLE]	-- The container for the map display widgets
	
	nav_panel: EM_DRAWABLE_PANEL						-- The panel to draw the navigation widget in
	nav_widget: TRAFFIC_2D_MAP_WIDGET --original -> TRAFFIC_MAP_WIDGET --|danger|--						-- The widget to display the map navigation
	nav_zoomable_container: EM_ZOOMABLE_CONTAINER		-- Container in which navigation is displayed
	navigator: NAVIGATOR								-- Widget to navigat map using navigation widget
	
	list_places, list_lines: EM_TEXTLIST [STRING]		-- The listboxes that display the map's stations and lines
		
	file_dialog: EM_FILE_DIALOG							-- The dialog for opening or saving a map file
	
	mapinfo_dialog: EM_DIALOG							-- The dialog for displaying and changing the map name and description
	textbox_map_name: EM_TEXTBOX						-- The textbox for changing the map name
	textbox_map_description: EM_TEXTBOX					-- The textbox for changing the map description
	
	add_place_dialog: EM_DIALOG							-- The dialog for adding a new place to the map
	add_place_name: EM_TEXTBOX							-- The textbox for entering the name of a new place
	add_place_a_x, add_place_a_y: EM_TEXTBOX			-- The textboxes for entering the coordinates of a new place
	
	edit_place_dialog: EM_DIALOG						-- The dialog for renaming a place
	edit_place_name: EM_TEXTBOX							-- The textbox for entering the new name of a place
	
	add_line_dialog: EM_DIALOG							-- The dialog for adding a new line to the map
	add_line_name: EM_TEXTBOX							-- The textbox for entering the name of a new line
	add_line_type: EM_COMBOBOX [TRAFFIC_TYPE_LINE]			-- The textbox for choosing the type of a new line
	
	temp_selected_place: TRAFFIC_PLACE					-- To be used as a temporary place reference by various features	



	add_line_station1_listbox, add_line_station2_listbox: EM_TEXTLIST [STRING]		-- Edit line dialog widgets
	station1_name, station1_x, station1_y: EM_TEXTBOX
	station2_name, station2_x, station2_y: EM_TEXTBOX
	add_line_segments_listbox: EM_TEXTLIST [STRING]
	add_line_points_listbox: EM_TEXTLIST [STRING]	
	
	turning_point_a_x, turning_point_a_y: EM_TEXTBOX								-- Continued (Turning point section)
	turning_point_listbox: EM_TEXTLIST [STRING]
	turning_point_list: LINKED_LIST [EM_PAIR [DOUBLE,DOUBLE]]
	
	turning_point_scrollpanel, add_line_segments_scollpanel: EM_SCROLLPANEL			-- Continued
	line_edit_dialog: EM_DIALOG
	
	line: EM_SCROLLPANEL															-- Continued
	line_name: EM_TEXTBOX
	line_type: EM_COMBOBOX [TRAFFIC_TYPE]
	
	bus: TRAFFIC_TYPE_BUS															-- Traffic type objects
	rail: TRAFFIC_TYPE_RAIL
	street: TRAFFIC_TYPE_STREET
	taxi: TRAFFIC_EVENT_TAXI
	taxi_office: TRAFFIC_EVENT_TAXI_OFFICE
	tram: TRAFFIC_TYPE_TRAM
	walking: TRAFFIC_TYPE_WALKING
	
	highlight_renderer: TRAFFIC_2D_PLACE_RENDERER										-- Place highlighting objects
	highlight_color: EM_COLOR
	place_renderer: TRAFFIC_2D_PLACE_RENDERER
	
	my_mouse: EM_MOUSEBUTTON_EVENT
end
