indexing
	description: "Displays the game"
	author: "Ursina Caluori, ucaluori@student.ethz.ch"
	author: "Rolf Bruderer, bruderol@student.ethz.ch"
	date: "$Date$"
	revision: "$Revision$"

class
	GAME_SCENE
	
inherit 
	ESDL_SCENE
	
	TRAFFIC_TYPE_FACTORY   -- Singleton traffic types
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

--	ESDL_SHARED_BITMAP_FACTORY
--		undefine
--			default_create
--		end
		
	DISPLAY_CONSTANTS
		undefine
			default_create
		end

feature -- Model
	
	traffic_map: TRAFFIC_MAP
			-- Traffic map that models a city
			
feature -- Views
		
	big_zoomable_widget: ESDL_ZOOMABLE_WIDGET
			-- Interactive container inside which 
			-- `traffic_map' is displayed and can be zoomed

	big_map_widget: TRAFFIC_MAP_WIDGET
			-- Map widget to visualize `traffic_map'
			-- for big zoomable map
			
	little_zoomable_container: ESDL_ZOOMABLE_CONTAINER
			-- Container inside which `little_map_widget' is displayed

	little_map_widget: TRAFFIC_MAP_WIDGET
			-- Map widget to visualize 'traffic_map'
			-- for little navigation map.
			
	navigation_widget: NAVIGATOR
			-- Widget to navigate in `big_zoomable_widget'
			-- using `little_map_widget'

	information_box: ESDL_ZOOMABLE_CONTAINER
			-- Information box to display some text information.	
	
	place_info_text: ESDL_STRING
			-- Information text about last clicked place.
		
	status_box: STATUS_BOX
			-- Currently displayed status box

feature -- Scene Initialization
		
	initialize_scene is
			-- Build 'main_container' containing zoomable map.
		local
			map_file: TRAFFIC_MAP_FILE
		do			
			-- general settings
			background_color.make_black
			set_frame_counter_visibility (true)

			-- Load `traffic_map'
			create map_file.make_from_file ("./map/zurich_little.xml")
			traffic_map := map_file.traffic_map
		
			-- Set background color
			background_color.make_black	
			
			-- Build map widgets
			build_big_map_widget
			build_little_map_widget
			
			-- Build navigation widget to connect
			-- little map to big map for navigation
			create navigation_widget.make (little_zoomable_container, big_zoomable_widget)	
			
			-- Build static status box
			build_static_status_box
			
			-- Build dynamic status box
			initialize_dynamic_status_box
			
			-- Subscribe for on item click event in big map view to show place info text.
			big_map_widget.subscribe_to_clicked_place_event (agent process_clicked_place)	

			-- Add the Flat Hunt logo to the scene
			main_container.extend (flathunt_logo)

		end
		
		
feature {NONE} -- Implementation

	rail_color: ESDL_COLOR is
			-- Color used for rail lines.
		once
			create Result.make_with_rgb (255, 160, 0)
		end	
	
	map_area_width: INTEGER is 
			-- Width of the area where you can interact with the game
		do
			Result := (window_width - window_width // 10 - 300)	
		end
		
	map_area_height: INTEGER is 
			-- Height of the area where you can interact with the game
		do
			Result := (window_height - window_height // 10 - flathunt_logo.height)
		end

	build_big_map_widget is
			-- Build `big_map_widget' inside `big_zoomable_widget'
			-- to visualize `traffic_map' within a dedicated box
			-- and add it to `main_container'
		require
			traffic_map_not_void: traffic_map /= Void
		local
			container: ESDL_DRAWABLE_CONTAINER [ESDL_DRAWABLE]
			box: ESDL_RECTANGLE
		do			
			-- Create container to put background and widgets into.
			create container.make
			container.set_x_y (30, flathunt_logo.height + (window_height - map_area_height) // 4)
			
			-- Create and customize the box in which the map will be displayed
			create box.make_from_coordinates (0, 0, map_area_width, map_area_height)
--			box.set_line_width (1)
--			box.set_line_color (light_gray)
			box.set_fill_color (dark_gray)
			container.extend (box)
			
			-- Create and customize big map widget to visualize `traffic_map'
			create big_map_widget.make_with_map (traffic_map)			
			big_map_widget.line_renderer.traffic_type_line_widths.put (8, "rail")
			big_map_widget.line_renderer.traffic_type_colors.put (rail_color, "rail")
			big_map_widget.render
			
			-- Create zoomable widget to make map zoomable
			create big_zoomable_widget.make (map_area_width, map_area_height)
			big_zoomable_widget.extend (big_map_widget)
			big_zoomable_widget.calculate_object_area
			big_zoomable_widget.scroll_and_zoom_to_rectangle (big_map_widget.bounding_box)
			container.extend (big_zoomable_widget)
			
			-- Extend scene with big map widget
			main_container.extend (container)
		end		

	build_little_map_widget is
			-- Build `little_map_widget' to visualize `traffic_map' 
			-- within a dedicated box and add it to `main_container'
		require
			traffic_map_not_void: traffic_map /= Void
		local
			container: ESDL_DRAWABLE_CONTAINER [ESDL_DRAWABLE]
			background: ESDL_RECTANGLE
			map_box: ESDL_ORTHOGONAL_RECTANGLE
		do	
		
			-- Create container to put background and widgets into.
			create container.make
			container.set_x_y (670, flathunt_logo.height + (window_height - map_area_height) // 4)
		
			-- Create black background
			create background.make_from_coordinates (0, 0, 300, 300)
			background.set_fill_color (dark_gray)
			container.extend (background)
			
			-- Build little map widget to visualize `traffic_map'.
			create little_map_widget.make_with_map (traffic_map)

			-- Customize map widget and render (to affect changes)
			little_map_widget.line_renderer.traffic_type_line_widths.put (8, "rail")
			little_map_widget.line_renderer.traffic_type_colors.put (rail_color, "rail")
			little_map_widget.line_renderer.traffic_type_colors.put (yellow, "tram")
			little_map_widget.render

			-- Build zoomable container to show little map widget in.
			create little_zoomable_container.make (301, 301)
			little_zoomable_container.extend (little_map_widget)
			map_box := little_map_widget.bounding_box
			map_box.zoom (1.05)
			little_zoomable_container.scroll_and_zoom_to_rectangle (map_box)
			container.extend (little_zoomable_container)
			
			-- Extend scene with little map widget.
			main_container.extend (container)
		end	
		
	build_static_status_box is
			-- Build little status box 
			-- where the status of the current player
			-- and location on the map is displayed
		local
			background: ESDL_RECTANGLE
			title: ESDL_STRING
			current_player_label: ESDL_STRING
			place_info_label: ESDL_STRING
		do
			create information_box.make (300, 270)
			information_box.set_x_y (670, 500)

			-- TODO: 
			-- display:
			-- current player: name, tickets, location
			-- estate agent: last seen, rounds since then
			-- "clicked place" no longer necessary
			-- improve:
			-- positioning of boxes (with constants, to make it
			-- resolution independent)
			
			-- Create and customize background.
			create background.make_from_coordinates (0, 0, 300, 270)
			background.set_fill_color (dark_gray)
			information_box.extend (background)
			
			-- Create title of status box
			create title.make ("Status", big_font)
			title.set_x_y (0, 0)
			information_box.extend (title)
			
			-- Information about current player
			create current_player_label.make ("Current Player: ", small_font)
			current_player_label.set_x_y (10, 30)
			information_box.extend(current_player_label)
			
			-- Create place info label.
			create place_info_label.make ("Clicked Place: ", small_font)
			place_info_label.set_x_y (10, 90)
			information_box.extend (place_info_label)

			-- Create place info text
			create place_info_text.make ("", small_font)
			place_info_text.set_x_y (10, 120)
			information_box.extend (place_info_text)
			
			-- Extend scene with information box.
			main_container.extend (information_box)		
		end


	initialize_dynamic_status_box is
			-- initialize `status_box'
		do
			create status_box.make_from_coordinates (30, flathunt_logo.height + map_area_height, 30 + map_area_width, flathunt_logo.height + map_area_height + (window_height - map_area_height) // 4)
			main_container.extend (status_box)
		end
		
feature {NONE} -- Implementation (Place clicks)

	process_clicked_place (place: TRAFFIC_PLACE; m_event: ESDL_MOUSEBUTTON_EVENT) is
			-- 
		local
			link: TRAFFIC_LINE_SECTION
			place_renderer: TRAFFIC_PLACE_RENDERER
		do
			if m_event.is_left_button then
				--Color Place Yellow
				create place_renderer.make_with_map (traffic_map)
				place_renderer.set_place_color (Yellow)
				big_map_widget.set_place_special_renderer (place_renderer, place)
				--Re-Render the Scene for the effects to be visible
				big_map_widget.render
				--Set info Text
				place_info_text.set_value (place.name)
			end			
		end

end
