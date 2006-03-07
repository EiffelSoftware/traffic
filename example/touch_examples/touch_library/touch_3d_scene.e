indexing
	description: "The 'main scene' containing the standard GUI for touch examples"
	date: "$Date: 2006/01/17 00:24:59 $"
	revision: "$Revision: 1.57 $"

class
	TOUCH_3D_SCENE
	
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
			
--			-- Button to load Paris.xml file
--			create load_button.make_from_text ("Load map")
			
			-- 'Zoom in' and 'Zoom out' buttons
			create zoom_in_button.make_from_text ("Zoom in")
			create zoom_out_button.make_from_text ("Zoom out")
			
			
			-- 'Take traffic line ride' button 
			
			-- Has to be defined before toolpanel, because otherwise
			-- gl_clear_color cleans whole screen
			if video_subsystem.opengl_enabled then
				create map.make
				map.set_position (0, 0)
				add_component (map)
--				create map_widget.make
--				map_widget.set_position(0,0)
--				add_component (map_widget)
			else
				io.put_string ("OpenGL disabled: Map not loaded%N")
			end
	--			create traffic_line_ride_button.make_from_text ("Take a traffic line ride")
		
			-- Toolbar Panel
			toolbar_panel.set_background_color (create {EM_COLOR}.make_with_rgb(180, 180, 180))
			toolbar_panel.set_position ((Window_width*0.75).rounded, 0)
			add_component (toolbar_panel)

			
--			-- Load Button
--			load_button.set_position ((200-load_button.width) // 2, 110)
--			load_button.clicked_event.subscribe (agent load_button_clicked)
--			load_button.set_background_color (create {EM_COLOR}.make_with_rgb (127, 127, 127))
--			toolbar_panel.add_widget (load_button)

			
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
		end
		
feature -- Event handling

	zoom_in_button_clicked is
			-- "Zoom in" button has been clicked.
		require
			zoom_in_button /= Void
		do
			zoom_in_button.set_pressed (False)
			map.zoom_in
			console_textarea.set_text ("zooming in ...")
		end
		
	zoom_out_button_clicked is
			-- "Zoom out" button has been clicked.
		require
			zoom_out_button /= Void
		do
			zoom_out_button.set_pressed (False)
			map.zoom_out
			
			console_textarea.set_text ("zooming out ...")
		end
	


--	load_button_clicked is
--			-- "Load" button has been clicked.
--		require
--			load_button /= Void
--		do
--			load_button.set_pressed (False)
----			map_widget.load_map (map_file_name)
--
--	--		map.load_map ("map/zurich_tiny.xml")
--
--			map.load_map ("./map/paris.xml")
----			buildings_slider.set_current_value (buildings_slider.left_value)
----			marked_origin_label.set_text ("")
----			marked_destination_label.set_text ("")
----			traffic_line_ride_button.hide
--		rescue
--			catch(24)
--			catch(8)
----			map_file_name := loaded_file_name
--			add_component(create {EM_MESSAGE_DIALOG}.make_from_error(original_tag_name))
--			retry
--		end
		

		
feature -- Widgets

--	preview: PREVIEW

	console_panel: EM_PANEL
			-- Panel, in which the console is displayed.
	
	console_textarea: EM_TEXTAREA
			-- 	For displaying the process of the program.	
				
	toolbar_panel: EM_PANEL
			-- Panel, in which all option widgets are displayed.
			
	console_text: STRING
			-- The output text to the console. 

--	load_button: EM_BUTTON
--			-- Button to load the xml file
			
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

	map: TOUCH_3D_MAP_WIDGET
			-- The 3 dimensional representation of the map		
			
--	map_widget: TRAFFIC_3D_MAP_WIDGET
--	
	number_of_buildings: INTEGER
			-- Number of buildings on the map
	
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

end -- class TOUCH_3D_SCENE
