indexing
	description: "Main Scene for Touch"
	author: "Roger Kueng"
	date: "2005/06/20"
	revision: "alpha"

obsolete class
	TOUCH_WIDGET
	
inherit 
	EM_SCENE
--		redefine
--			make
--		end
	
	TRAFFIC_TYPE_FACTORY   -- Singleton traffic types
		export
			{NONE} all
		undefine
			default_create
		end
		
 	EM_SHARED_STANDARD_FONTS
		export
			{NONE} all
		undefine
			default_create
		end
		
	EM_SHARED_COLORS
		export
			{NONE} all
		undefine
			default_create
		end
	

feature {NONE} --Implementation
	example_manager: TOUCH_EXAMPLE_MANAGER

	--example_manager containers
	button_container: EM_ZOOMABLE_CONTAINER	
	description_container: EM_ZOOMABLE_CONTAINER
	
	--contains the run_button
	settings_container: EM_ZOOMABLE_CONTAINER
	
	
	--hide example_buttons, description and run_button
	switch_view_to_example_running is
			-- Show/Hide Visible Objects
		do
			if not main_container.has (console) then
				main_container.extend (console)
			end
			-- Remove description_container from main_container
			main_container.start
			main_container.search_forth (description_container)
			if  not main_container.off then
				main_container.remove_at
			end	
		end

	switch_view_to_example_selection is
			-- Show/Hide Visible Objects
		do
			-- Remove console from main_container 
			-- (using delete would invalidate any cursor)
			main_container.start
			main_container.search_forth (console)
			if  not main_container.off then
				main_container.remove_at
			end
			
			if not main_container.has (description_container) then
				main_container.extend (description_container)
			end
		end
		
feature -- Model
	
	traffic_map: TRAFFIC_MAP
			-- The traffic map.

feature -- Views
		
	zoomable_widget: EM_ZOOMABLE_WIDGET
			-- Interactive container inside which 
			-- `traffic_map' is displayed and can be zoomed

	map_widget: TRAFFIC_MAP_WIDGET
			-- Map widget to visualize `traffic_map'

	console: TOUCH_TEXTLIST
			-- Simple Console Output for description and examples.
			
	run_button: TOUCH_BUTTON
	

feature -- Scene Initialization
	
	initialize_scene is
			-- Build 'main_container' containing zoomable map.
		local
			map_file: TRAFFIC_MAP_FILE
			title: EM_DRAWABLE

			example1: TOUCH_CONSOLE_TEST
			example2: TOUCH_CITY_CHANGE_EXAMPLE
			
			line: TRAFFIC_LINE
			place: TRAFFIC_PLACE
			
			place_renderer: TRAFFIC_PLACE_RENDERER
			line_renderer: TRAFFIC_LINE_SECTION_RENDERER
			
			width, height: INTEGER
			border: INTEGER
			title_offset: INTEGER
--			w,h:DOUBLE
			
			test_button: TOUCH_BITMAP_BUTTON
		do			
			width := 1024
			height := 768
			border := 10
			title_offset := 60
			
			if not initialized then
				initialized := true
				-- Load `traffic_map'
				create map_file.make_from_file ("./map/zurich_little.xml")
				traffic_map := map_file.traffic_map
			
				-- Build grey background color.
				create background_color.make_with_rgb (100, 100, 100)	
				
				
				
				-- Build map widget.
				build_map_widget (border, title_offset+2*border, (0.7*width-2*border).rounded, (0.7*height-2*border-title_offset).rounded)
				map_widget.subscribe_to_clicked_place_event (agent process_clicked_place)
	
				-- Build title
				title := text_box ("ESDL TOUCH", width-2*border, title_offset-2*border)
				title.set_x_y (border, border)
				
				-- Build Example_Manager containers
				create button_container.make ((0.3*width-2*border).rounded, (0.8*height-title_offset-2*border).rounded)
				create description_container.make ((0.7*width-2*border).rounded, (0.3*height-2*border).rounded)
				button_container.set_x_y ((0.7*width+border).rounded, title_offset+border)
				description_container.set_x_y (border, (0.7*height+border).rounded)
				
				--Build Settings container
				create settings_container.make ((0.3*width-2*border).rounded, (0.2*height-2*border).rounded)
				settings_container.set_x_y ((0.7*width+border).rounded, (0.8*height+border).rounded)
	
				-- Build Console
				create console.make
				console.set_width_height ((0.7*width-2*border).rounded, (0.3*height-2*border).rounded)
				console.set_x_y (border, (0.7*height+border).rounded)
				
		
				--Build Run Button
				run_button := create {TOUCH_TEXT_BUTTON}.make_with_title_and_width_and_height ("RUN EXAMPLE", settings_container.width-2*border, 30)
				run_button.set_x_y (border, border)
				settings_container.extend (run_button)
				run_button.subscribe_for_click (agent process_clicked_run_button)
	
	
				--Build Test Bitmap Button
				create test_button.make_with_image_file_and_width_and_height ("images\\next_chapter.png", settings_container.width-2*border, 50)
				test_button.set_x_y (border, run_button.y + run_button.height + border)
				settings_container.extend (test_button)
				
				--Put Drawables to main_container
				main_container.extend (title)
				main_container.extend (button_container)
				main_container.extend (description_container)
				main_container.extend (console)
				main_container.extend (settings_container)
	--			main_container.extend (run_button)
	
				
				--initialize example_manager
				create example_manager.make_with_containers (button_container, description_container)
	
				--Create Examples		
				create example1
				create example2
				example_manager.subscribe (example1)
				example_manager.subscribe (example2)
	
	
				--Create Example Renderers
				place := traffic_map.place ("Central")
				create place_renderer.make_with_map (traffic_map)
				place_renderer.set_place_color (green)
				map_widget.set_place_special_renderer (place_renderer, place)
				
				line := traffic_map.line ("11")
				create line_renderer.make_with_map (traffic_map)
				line_renderer.set_line_color (red)
				map_widget.set_line_special_renderer (line_renderer, line)
				
				map_widget.place_renderer.set_place_color (white)
				
				--Finally Render map_widget
				map_widget.render		
			end
			
			switch_view_to_example_selection
		end
		
		
feature {NONE} -- Implementation

	initialized: BOOLEAN
	
	rail_color: EM_COLOR is
			-- Color used for rail lines.
		once
			create Result.make_with_rgb (255, 160, 0)
		end		

	build_map_widget (x, y, width, height: INTEGER) is
			-- Build `map_widget' inside `zoomable_widget'
			-- to visualize `traffic_map' with black background
			-- and add it to `main_container'
		require
			traffic_map_not_void: traffic_map /= Void
		local
			container: EM_DRAWABLE_CONTAINER [EM_DRAWABLE]
			background: EM_RECTANGLE
		do	
			-- Create container to put background and widgets into.
			create container.make
			container.set_x_y (x, y)
			
			-- Build black background
			create background.make_from_coordinates (0, 0, width, height)
			background.set_fill_color (black)
			container.extend (background)
			
			-- Build map widget to visualize `traffic_map'
			create map_widget.make_with_map (traffic_map)
			
			-- Customize map widget and render.
			map_widget.line_renderer.traffic_type_line_widths.put (8, "rail")
			map_widget.line_renderer.traffic_type_colors.put (rail_color, "rail")
			map_widget.render
			
			-- Create zoomable widget to make map zoomable.
			create zoomable_widget.make (width, height)
			zoomable_widget.extend (map_widget)
			zoomable_widget.calculate_object_area
			zoomable_widget.scroll_and_zoom_to_rectangle (map_widget.bounding_box)
			container.extend (zoomable_widget)
			
			-- Extend scene with map widget.
			main_container.extend (container)
		end		

	text_box (a_text: STRING; a_width, a_height: INTEGER): EM_DRAWABLE is
			-- A new black box of size `a_width' and `a_height'
			-- with `a_text' in it (centered).
		require
			a_title_not_void: a_text /= Void
		local
			box: EM_DRAWABLE_CONTAINER [EM_DRAWABLE]
			background: EM_RECTANGLE
			text: EM_STRING
			tx, ty: INTEGER			
		do
			-- Build text box container.
			create box.make
			Result := box
					
			-- Build Background.
			create background.make_from_coordinates (0, 0, a_width, a_height)
			background.set_fill_color (black)
			box.extend (background)
			
			-- Build Title text.
			create text.make (a_text, standard_fonts.medium_font)
			box.extend (text)			
			
			-- Set text centered in box.
			tx := (a_width - text.width) // 2
			ty := (a_height - text.height) // 2
			text.set_x_y (tx, ty)	
		end
		
feature {NONE} -- Agents, GUI events

	process_clicked_place (place: TRAFFIC_PLACE; m_event: EM_MOUSEBUTTON_EVENT) is
			-- User clicked on a place in the map
--		local
--			renderer: TRAFFIC_PLACE_RENDERER
		do
			if m_event.is_left_button then
--				create renderer.make_with_map (map_widget.map)
--				renderer.set_place_color (yellow)
--				map_widget.set_place_special_renderer (renderer, place)
--				map_widget.render
				
				if place.information /= Void then				
					console.put_text (place.information.description)
				end
				console.put_line (place.name)
			end			
		end
		
		
	process_clicked_run_button (a_button: TOUCH_BUTTON) is
			-- User clicked the run example button
		local
			runtime: TOUCH_EXAMPLE_RUNTIME_IMPLEMENTATION
			example_scene: EM_SCENE
			example: TOUCH_EXAMPLE
		do
			example := example_manager.current_example
			--If example not Void then run it
			if example /= Void then
				
				example_scene := example.run_with_scene
				
				if example_scene /= Void then
		
					next_scene := example_scene
					--example_scene.next_scene := Void
					--example_scene.next_scene := Current
					--example_scene.next_scene := example_scene
					event_loop.stop
				else
					--Switch View
					switch_view_to_example_running
					
					--Create runtime
					create runtime.make_with_map_and_map_widget_and_textlist (traffic_map, map_widget, console)

					--Run example
					example.run (runtime)	
				end
			end			
		end
		
end


		