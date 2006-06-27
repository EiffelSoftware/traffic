indexing
	description: "The 'main scene' containing the whole GUI"
	date: "$Date: 2006/06/18 12:23:15 $"
	revision: "$Revision: 1.56 $"

class CITY_TAXI_SCENE
	
inherit
	
	EM_COMPONENT_SCENE
	
	TRAFFIC_3D_CONSTANTS
		export {NONE} all end
	
	EXCEPTIONS
		export {NONE} all end
	
create
	make

feature -- Interface
	
	make is
			-- Create all gui elements.
		do
			make_component_scene
			
			set_frame_counter_visibility (True)
			
			create bg_color.make_with_rgb (211,211,211)
			
			-- Toolbar
			create toolbar_panel.make_from_dimension ((window_width*0.25).rounded, window_height)
			
			-- 'Zoom in' and 'Zoom out' buttons
			create zoom_in_button.make_from_text ("Zoom in")
			create zoom_out_button.make_from_text ("Zoom out")
			create time_button.make_from_text("start time")
			
			-- Taxi office type combobox 
			-- Default selection to "Dispatcher Taxi office"
			create taxi_office_type_combobox.make_empty
			taxi_office_type_combobox.put ("Event Taxi Office")
			taxi_office_type_combobox.put ("Dispatcher Taxi Office")
			taxi_office_type_combobox.set_selected_element ("Event Taxi Office")
						
			-- Zoom out Button
			zoom_out_button.set_position (180-zoom_out_button.width, 170)
			zoom_out_button.clicked_event.subscribe (agent zoom_out_button_clicked)
			toolbar_panel.add_widget (zoom_out_button)
			
			-- Zoom in Button
			zoom_in_button.set_position (20, 170)
			zoom_in_button.set_dimension (zoom_out_button.width, zoom_out_button.height)
			zoom_in_button.clicked_event.subscribe (agent zoom_in_button_clicked)
			toolbar_panel.add_widget (zoom_in_button)

			-- time
			simulated_time := 5

			-- time button
			time_button.set_position (20 ,200)
			time_button.set_width (100)
			time_button.clicked_event.subscribe (agent time_button_clicked)
			toolbar_panel.add_widget(time_button)
		
			-- Taxi office type combobox
			taxi_office_type_combobox.set_position (20, 300)
			taxi_office_type_combobox.set_width (140)
			taxi_office_type_combobox.set_height (20)
			taxi_office_type_combobox.selection_changed_event.subscribe (agent taxi_office_type_changed(?))
			toolbar_panel.add_widget (taxi_office_type_combobox)
			
			-- Has to be defined before toolpanel, because otherwise
			-- gl_clear_color cleans whole screen
			if video_subsystem.opengl_enabled then
				create map.make
				map.set_position (0, 0)
				add_component (map)
			else
				io.put_string ("OpenGL disabled: Map not loaded%N")
			end
			
			-- Time from map
			traffic_time := map.traffic_time
			
			-- Toolbar Panel
			toolbar_panel.set_position ((window_width*0.75).rounded, 0)
			add_component (toolbar_panel)
		
			-- Default map hbzurich_mini.xml
			map.load_map ("../map/zurich_mini.xml")
			loaded_file_name := "../map/zurich_mini.xml"
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
			-- "Time" button clicked.
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
		
	taxi_office_type_changed(type: STRING) is
			-- Selection on "taxi_office_type_combobox" changed.
		do
			if type.is_equal ("Event Taxi Office")  then
				-- Event Taxis in yellow
				taxi_office_type_combobox.set_background_color(create {EM_COLOR}.make_with_rgb(255, 255, 0))
			else
				-- Dispatcher Taxis in ozean
				taxi_office_type_combobox.set_background_color (create {EM_COLOR}.make_with_rgb(0, 255, 255))
			end
			map.set_taxi_office_type(type)
		end
		
feature -- Widgets


	toolbar_panel: EM_PANEL
			-- Panel, in which all option widgets are displayed
			
	zoom_in_button: EM_BUTTON
			-- Button to zoom in to the map
	
	zoom_out_button: EM_BUTTON
			-- Button to zoom out of the map
	
	time_button: EM_BUTTON
			-- Button to start, pause or continue the time
													
	is_time_enabled: BOOLEAN
			-- Is the time running?

	traffic_time: TRAFFIC_TIME
			-- Time of the city time system
			
	taxi_office_type_combobox: EM_COMBOBOX[STRING]
			-- Requests will be sent to the selected taxi office.
			
feature {NONE} -- Implementation

	set_time_enabled(a_boolean: BOOLEAN) is
			-- Enable/disable the time option.
		do
			is_time_enabled := a_boolean
		ensure
			is_time_enabled = a_boolean
		end
	
	bg_color: EM_COLOR
			-- Background color of the scene
		
	loaded_file_name: STRING
			-- Name of the currently loaded

	map: CITY_TAXI_WIDGET
			-- The 3 dimensional representation of the map
	
	simulated_time: INTEGER
			-- Number of minutes a day will last
	

end
