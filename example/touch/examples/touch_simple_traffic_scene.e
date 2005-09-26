indexing
	description: "A simple EM_SCENE which displays a map."
	author: "Roger Kueng"
	date: "2005/08/25"
	revision: "1.0"

class
	TOUCH_SIMPLE_TRAFFIC_SCENE

inherit 
	EM_SCENE
		redefine
			handle_outside_event
		end
	
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

create
	make_with_map_file,
 	make_with_zurich_little,
 	make_with_zurich_big,
 	make_with_paris
 		
feature -- Initialization
	make_with_zurich_little (an_example: TOUCH_EXAMPLE) is
			-- 
		do
			make_scene
			make_with_map_file (an_example, "./map/zurich_little.xml")
		ensure
			traffic_map_not_void: traffic_map /= Void
		end
		
	make_with_zurich_big (an_example: TOUCH_EXAMPLE) is
			-- 
		do
			make_scene			
			make_with_map_file (an_example, "./map/zurich_big.xml")
		ensure
			traffic_map_not_void: traffic_map /= Void
		end
		
	make_with_paris (an_example: TOUCH_EXAMPLE) is
			-- 
		do
			make_scene			
			make_with_map_file (an_example, "./map/paris.xml")
		ensure
			traffic_map_not_void: traffic_map /= Void
		end
		
	make_with_map_file (an_example: TOUCH_EXAMPLE; a_map_file: STRING) is
			-- 
		local
			map_file: TRAFFIC_MAP_FILE
		do
			make_scene
			-- Load `traffic_map'
			example := an_example
			create map_file.make_from_file (a_map_file)
			traffic_map := map_file.traffic_map
		ensure
			traffic_map_not_void: traffic_map /= Void
		end

feature -- Access
	initialized: BOOLEAN

feature -- Widgets
	blue_box: TOUCH_BITMAP_STATIC
			-- The Box where the end button is in
	foreground: TOUCH_BITMAP_STATIC
			-- the foreground for the map
	background : EM_RECTANGLE
			-- the grey background for the map
			
	zoomable_widget: EM_ZOOMABLE_WIDGET
			-- Interactive container inside which 
			-- `traffic_map' is displayed and can be zoomed

	map_widget: TRAFFIC_MAP_WIDGET
			-- Map widget to visualize `traffic_map'

	console: TOUCH_TEXTLIST
			-- Simple Console Output for description and examples.	

	end_button: TOUCH_BUTTON
	
feature -- Scene Initialization
	
	initialize_scene is
			-- Build 'main_container' containing zoomable map.
		local			
			width, height: INTEGER
			border: INTEGER
		do	
		
			if not initialized then
				width := 1024
				height := 768
				border := 10
				initialized := true
				first_loop := true
				
				-- Build black background color.
				create background_color.make_with_rgb (0, 0, 0)	
	
				-- Build map widget.
				build_map_widget (border, border, width-2*border, (0.7*height-2*border).rounded)
	--			map_widget.subscribe_to_clicked_place_event (agent process_clicked_place)
	

				--Build end button				
				end_button := create {TOUCH_TEXT_BUTTON}.make_with_title_and_width_and_height ("End Example", 250, 30)
				end_button.set_x_y (width-3*border-end_button.width, (0.7*height+3*border).rounded)
				end_button.subscribe_for_click (agent process_clicked_end_button)

				--Build box for end button
				create blue_box.make_with_image_file_and_width_and_height ("./images/background_filled.png", 250+4*border, 30+4*border)
				blue_box.set_x_y (width-5*border-end_button.width, (0.7*height+border).rounded)
	
				-- Build Console
				create console.make_with_width_and_height ((0.7*width-2*border).rounded, (0.3*height-2*border).rounded)
				console.set_x_y (border, (0.7*height+border).rounded)

				--Build Map foreground
				create foreground.make_with_image_file_and_width_and_height ("./images/map.png",width-2*border+2, (0.7*height-2*border).rounded+4)
				foreground.set_x_y (border, border)
				
				main_container.extend (blue_box)
				main_container.extend (console)
				main_container.extend (end_button)
				main_container.extend (foreground)
				
				--Render map_widget
				map_widget.render

				map_widget.subscribe_to_clicked_place_event (agent process_clicked_place)	
			end	
		ensure then
			initialized: initialized = true
		end
		
feature -- Basic Operation

	hide (a_drawable: EM_DRAWABLE) is
			-- 
		do
			if main_container.has (a_drawable) then
				main_container.delete (a_drawable)
			end			
		end
		
	show (a_drawable: EM_DRAWABLE) is
			-- 
		do
			if not main_container.has (a_drawable) then
				main_container.extend (a_drawable)
			end			
		end
		
--	set_next_scene (a_scene: EM_SCENE) is
--			-- 
--		do
--			next_scene := a_scene
--		end
		
	big_console is
			-- make the console bigger
		require
			is_initialized: initialized = true
		local
			size, border: INTEGER
		do
			size := 100
			border := 10
			
			console.set_x_y ( border, 50)
			console.set_width_height (400, 650) 
			
			zoomable_widget.set_x_y (border + console.width + border, 50)
			zoomable_widget.set_size ( 580, 580)
			zoomable_widget.calculate_object_area
			
			background.set_x_y (zoomable_widget.x, zoomable_widget.y)
			background.set_size (zoomable_widget.width, zoomable_widget.height)
			
			-- Re-Build Map foreground
			main_container.delete (foreground)
			
			create foreground.make_with_image_file_and_width_and_height ("./images/map.png", background.width+2, background.height+2)
			foreground.set_x_y (background.x, background.y)
			
			main_container.extend (foreground)
			
			blue_box.set_x_y ( zoomable_widget.x + zoomable_widget.width - end_button.width - 4*border, 680-2*border)
			end_button.set_x_y ( zoomable_widget.x + zoomable_widget.width - end_button.width-2*border, 680)
		end
	
feature -- Model	
	traffic_map: TRAFFIC_MAP
			-- The traffic map.
		
feature {NONE} -- Implementation
	first_loop: BOOLEAN
	
	example: TOUCH_EXAMPLE

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
		do				
			-- Build white background
			create background.make_from_position_and_size (x, y, width, height)
			background.set_fill_color (create {EM_COLOR}.make_with_rgb (230, 230, 230))
			main_container.extend (background)
			
			-- Build map widget to visualize `traffic_map'
			create map_widget.make_with_map (traffic_map)
			
			-- Customize map widget and render.
			map_widget.line_section_renderer.traffic_type_line_widths.put (8, "rail")
			map_widget.line_section_renderer.traffic_type_colors.put (rail_color, "rail")
			map_widget.render
			
			-- Create zoomable widget to make map zoomable.
			create zoomable_widget.make (width, height)
			zoomable_widget.set_x_y (x,y)
			zoomable_widget.extend (map_widget)
			zoomable_widget.calculate_object_area
			zoomable_widget.scroll_and_zoom_to_rectangle (map_widget.bounding_box)
			main_container.extend (zoomable_widget)
			
		end		

		
feature {NONE} -- Agents, GUI events

	handle_outside_event is
			-- 
		do
			if first_loop then
				first_loop := false	
				if  example /= Void then
					example.run (create {TOUCH_EXAMPLE_RUNTIME_IMPLEMENTATION}.make_with_map_and_map_widget_and_console (traffic_map, map_widget, console))
				end
			end
		end
		

	process_clicked_end_button (button: TOUCH_BUTTON) is
			-- 
		do
			event_loop.stop
		end
	
	process_clicked_place (a_place: TRAFFIC_PLACE) is
			-- 
		do
			console.put_line (a_place.name)
		end
		

invariant
	invariant_clause: True -- Your invariant here

end -- class TOUCH_SIMPLE_TRAFFIC_SCENE
