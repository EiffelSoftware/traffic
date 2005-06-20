indexing
	description: "Main Scene for Touch"
	author: "Roger Kueng"
	date: "2005/06/20"
	revision: "alpha"

class
	MAP_WIDGET_SCENE
	
inherit 
	ESDL_SCENE
--		redefine
--			make
--		end
	
	TRAFFIC_TYPE_FACTORY   -- Singleton traffic types
		export
			{NONE} all
		undefine
			default_create
		end
		
 	ESDL_SHARED_STANDARD_FONTS
		export
			{NONE} all
		undefine
			default_create
		end
		
	ESDL_SHARED_COLORS
		export
			{NONE} all
		undefine
			default_create
		end
	

feature -- Access
	example_manager: TOUCH_EXAMPLE_MANAGER
	
feature -- Model
	
	traffic_map: TRAFFIC_MAP
			-- The traffic map.

feature -- Views
		
	zoomable_widget: ESDL_ZOOMABLE_WIDGET
			-- Interactive container inside which 
			-- `traffic_map' is displayed and can be zoomed

	map_widget: TRAFFIC_MAP_WIDGET
			-- Map widget to visualize `traffic_map'

feature -- Scene Initialization
	
	initialize_scene is
			-- Build 'main_container' containing zoomable map.
		local
			map_file: TRAFFIC_MAP_FILE
			title: ESDL_DRAWABLE

			example1: TOUCH_CONSOLE_TEST
			example2: TOUCH_CITY_CHANGE_EXAMPLE
			
			line: TRAFFIC_LINE
			place: TRAFFIC_PLACE
			textlist: TOUCH_TEXTLIST
			
			place_renderer: TRAFFIC_PLACE_RENDERER
			line_renderer: TRAFFIC_LINE_SECTION_RENDERER
		do			
			-- Load `traffic_map'
			create map_file.make_from_file ("./map/zurich_little.xml")
			traffic_map := map_file.traffic_map
		
			-- Build grey background color.
			create background_color.make_with_rgb (100, 100, 100)	
			
			-- Build title
			title := text_box ("ESDL TOUCH", 940, 30)
			title.set_x_y (10, 10)
			main_container.extend (title)
			
			
			-- Build map widget.
			build_map_widget
			
			place := traffic_map.place ("Central")
			create place_renderer.make_with_map (traffic_map)
			place_renderer.set_place_color (green)
			map_widget.set_place_special_renderer (place_renderer, place)
			
			line := traffic_map.line ("11")
			create line_renderer.make_with_map (traffic_map)
			line_renderer.set_line_color (red)
			map_widget.set_line_special_renderer (line_renderer, line)
			
			map_widget.place_renderer.set_place_color (white)
			
			map_widget.render

			--initialize example_manager
			create example_manager.make
			main_container.extend (example_manager.button_container)
			main_container.extend (example_manager.description_container)

			--Create Examples			
			create example1
			create example2
			example_manager.subscribe (example1)
			example_manager.subscribe (example2)
			
			--Create Console
			create textlist.make
			
			textlist.set_width_height ( 500, 200)
			
			textlist.set_x_y( 10, 400)
			textlist.put_line ("LINE1")
			textlist.put_line ("LINE2-VERYLONGVERY--20--5----30--5----40--5----50--5----60--5----70--5----80")
			textlist.put_line ("LINE3")
			textlist.put_line ("LINE3")
			textlist.put_line ("LINE4")
			textlist.put_line ("LINE5")
			textlist.put_line ("LINE6")
			textlist.put_line ("LINE7")
			textlist.put_line ("LINE8")
			textlist.put_line ("LINE9")
			textlist.put_line ("LINE10")
			
			main_container.extend (textlist)
			
			map_widget.subscribe_to_clicked_place_event (agent process_clicked_place)

		end
		
		
feature {NONE} -- Implementation

	rail_color: ESDL_COLOR is
			-- Color used for rail lines.
		once
			create Result.make_with_rgb (255, 160, 0)
		end		

	build_map_widget is
			-- Build `map_widget' inside `zoomable_widget'
			-- to visualize `traffic_map' with black background
			-- and add it to `main_container'
		require
			traffic_map_not_void: traffic_map /= Void
		local
			container: ESDL_DRAWABLE_CONTAINER [ESDL_DRAWABLE]
			background: ESDL_RECTANGLE
		do			
			-- Create container to put background and widgets into.
			create container.make
			container.set_x_y (30, 80)
			
			-- Build black background		
			create background.make_from_coordinates (0, 0, 600, 600)		
			background.set_fill_color (black)
			container.extend (background)
			
			-- Build map widget to visualize `traffic_map'
			create map_widget.make_with_map (traffic_map)			
			
			-- Customize map widget and render.
			map_widget.line_renderer.traffic_type_line_widths.put (8, "rail")
			map_widget.line_renderer.traffic_type_colors.put (rail_color, "rail")
			map_widget.render
			
			-- Create zoomable widget to make map zoomable.
			create zoomable_widget.make (600, 600)
			zoomable_widget.extend (map_widget)
			zoomable_widget.calculate_object_area
			zoomable_widget.scroll_and_zoom_to_rectangle (map_widget.bounding_box)
			container.extend (zoomable_widget)
			
			-- Extend scene with map widget.
			main_container.extend (container)
		end		

	text_box (a_text: STRING; a_width, a_height: INTEGER): ESDL_DRAWABLE is
			-- A new black box of size `a_width' and `a_height'
			-- with `a_text' in it (centered).
		require
			a_title_not_void: a_text /= Void
		local
			box: ESDL_DRAWABLE_CONTAINER [ESDL_DRAWABLE]
			background: ESDL_RECTANGLE
			text: ESDL_STRING
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
		
feature {NONE} -- Implementation (Place clicks)

	process_clicked_place (place: TRAFFIC_PLACE; m_event: ESDL_MOUSEBUTTON_EVENT) is
			-- 
		local
			renderer: TRAFFIC_PLACE_RENDERER
		do
			if m_event.is_left_button then
				create renderer.make_with_map (map_widget.map)
				renderer.set_place_color (yellow)
				map_widget.set_place_special_renderer (renderer, place)
				map_widget.render
			end			
		end
end


		