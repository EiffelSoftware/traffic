indexing
	description: "Objects that ..."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

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
 	make,
 	make_with_zurich_little,
 	make_with_zurich_big,
 	make_with_paris
 		
feature -- Initialization
	make_with_zurich_little (an_example: TOUCH_EXAMPLE) is
			-- 
		do
			make_with_map_file (an_example, "./map/zurich_little.xml")
		ensure
			traffic_map_not_void: traffic_map /= Void
		end
		
	make_with_zurich_big (an_example: TOUCH_EXAMPLE) is
			-- 
		do
			make_with_map_file (an_example, "./map/zurich_big.xml")
		ensure
			traffic_map_not_void: traffic_map /= Void
		end
		
	make_with_paris (an_example: TOUCH_EXAMPLE) is
			-- 
		do
			make_with_map_file (an_example, "./map/paris.xml")
		ensure
			traffic_map_not_void: traffic_map /= Void
		end
		
	make_with_map_file (an_example: TOUCH_EXAMPLE; a_map_file: STRING) is
			-- 
		local
			map_file: TRAFFIC_MAP_FILE
		do
			default_create
			-- Load `traffic_map'
			example := an_example
			create map_file.make_from_file (a_map_file)
			traffic_map := map_file.traffic_map
		ensure
			traffic_map_not_void: traffic_map /= Void
		end
		
feature {NONE} --Implementation
	first_loop: BOOLEAN
	
	example: TOUCH_EXAMPLE
	
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

	end_button: TOUCH_BUTTON
	
feature -- Scene Initialization
	
	initialize_scene is
			-- Build 'main_container' containing zoomable map.
		local			
			width, height: INTEGER
			border: INTEGER
		do			
			width := 1024
			height := 768
			border := 10
		
			first_loop := true
			
			-- Build grey background color.
			create background_color.make_with_rgb (100, 100, 100)	

			-- Build map widget.
			build_map_widget (border, border, width-2*border, (0.7*height-2*border).rounded)
--			map_widget.subscribe_to_clicked_place_event (agent process_clicked_place)

			
			--Build end button
			end_button := create {TOUCH_TEXT_BUTTON}.make_with_title_and_width_and_height ("End Example", 250, 30)
			end_button.set_x_y (width-2*border-end_button.width, (0.7*height+border).rounded)
			end_button.subscribe_for_click (agent process_clicked_end_button)

			-- Build Console
			create console.make_with_width_and_height ((0.7*width-2*border).rounded, (0.3*height-2*border).rounded)
			console.set_x_y (border, (0.7*height+border).rounded)
			
			main_container.extend (console)
			main_container.extend (end_button)
			
			--Render map_widget
			map_widget.render		
			
			
			map_widget.subscribe_to_clicked_place_event (agent process_clicked_place)
			
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
		
	set_next_scene (a_scene: EM_SCENE) is
			-- 
		do
			next_scene := a_scene
		end
		
feature {NONE} -- Implementation

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
			
			-- Build white background
			create background.make_from_coordinates (0, 0, width, height)
			background.set_fill_color (create {EM_COLOR}.make_with_rgb (230, 230, 230))
			container.extend (background)
			
			-- Build map widget to visualize `traffic_map'
			create map_widget.make_with_map (traffic_map)
			
			-- Customize map widget and render.
			map_widget.line_section_renderer.traffic_type_line_widths.put (8, "rail")
			map_widget.line_section_renderer.traffic_type_colors.put (rail_color, "rail")
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
