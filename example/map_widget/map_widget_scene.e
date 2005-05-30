indexing
	description: "TRAFFIC Sample Scene with two map views"
	author: "Rolf Bruderer"
	date: "2005/03/03"
	revision: "1.5"

class
	MAP_WIDGET_SCENE
	
inherit 
	ESDL_SCENE
--		redefine
--			default_create	
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
		
feature {NONE} -- Initialization

--	default_create is
			-- Default initialization
--		do
--			Precursor {ESDL_SCENE}
			--Precursor {ESDL_SHARED_STANDARD_FONTS}			
--		end
		
feature -- Model
	
	traffic_map: TRAFFIC_MAP
			-- Model of the traffic map.
			
	player: MAP_WIDGET_PASSENGER
			-- Player on the traffic map.
			
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
			
	navigation_widget: MAP_WIDGET_NAVIGATOR
			-- Widget to navigate in `big_zoomable_widget'
			-- using `little_map_widget'

	information_box: ESDL_ZOOMABLE_CONTAINER
			-- Information box to display some text information.	
	
	place_info_text: ESDL_STRING
			-- Information text about last clicked place.
			
	player_view: MAP_WIDGET_PASSENGER_DRAWABLE

feature -- Scene Initialization
	
	initialize_scene is
			-- Build 'main_container' containing zoomable map.
		local
			map_file: TRAFFIC_MAP_FILE
			title: ESDL_DRAWABLE
			player_sprite: ESDL_SPRITE
			player_anim: ESDL_ANIMATION
		do			
			-- Load `traffic_map'
			create map_file.make_from_file ("./map/zurich_little.xml")
			traffic_map := map_file.traffic_map
		
			-- Build blue background color.
			create background_color.make_with_rgb (0, 0, 100)	
			
			-- Build title
			title := text_box ("TRAFFIC Visualization Example", 940, 40)
			title.set_x_y (30, 30)
			main_container.extend (title)		
			
			-- Build little map widget.
			build_little_map_widget
			
			-- Build big map widget.
			build_big_map_widget
			
			-- Build navigation widget to connect
			-- little map to big map for navigation
			create navigation_widget.make (little_zoomable_container, big_zoomable_widget)	
			
			-- Build information box.
			build_info_box
			
			-- Subscribe for on item click event in big map view to show place info text.
			big_map_widget.mouse_button_down_on_map_item_event.subscribe (agent process_clicked_map_item)	
			
			-- Build player and its view.
			create player.make_on_map_place (traffic_map, traffic_map.places.item ("Hauptbahnhof"))
			create player_view.make_from_passenger (player)
			create player_anim.make_from_file ("./pic/peanut.anim")
			create player_sprite.make (player_anim)
			player_view.set_picture (player_sprite)
			big_zoomable_widget.extend (player_view)		
			start_animating (player_sprite)
			start_animating (player_view)
		end
		
		
feature {NONE} -- Implementation

	rail_color: ESDL_COLOR is
			-- Color used for rail lines.
		once
			create Result.make_with_rgb (255, 160, 0)
		end		

	build_big_map_widget is
			-- Build `big_map_widget' inside `big_zoomable_widget'
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
			container.set_x_y (30, 100)
			
			-- Build black background		
			create background.make_from_coordinates (0, 0, 600, 600)		
			background.set_fill_color (black)
			container.extend (background)
			
			-- Build big map widget to visualize `traffic_map'
			create big_map_widget.make_with_map (traffic_map)			
			
			-- Customize map widget and render.
			big_map_widget.line_renderer.traffic_type_line_widths.put (8, "rail")
			big_map_widget.line_renderer.traffic_type_colors.put (rail_color, "rail")
			big_map_widget.render
			
			-- Create zoomable widget to make map zoomable.
			create big_zoomable_widget.make (600, 600)
			big_zoomable_widget.extend (big_map_widget)
			big_zoomable_widget.calculate_object_area
			big_zoomable_widget.scroll_and_zoom_to_rectangle (big_map_widget.bounding_box)
			container.extend (big_zoomable_widget)
			
			-- Extend scene with big map widget.
			main_container.extend (container)
		end		

	build_little_map_widget is
			-- Build `little_map_widget' to visualize `traffic_map' 
			-- with black background and add it to `main_container'
		require
			traffic_map_not_void: traffic_map /= Void
		local
			container: ESDL_DRAWABLE_CONTAINER [ESDL_DRAWABLE]
			background: ESDL_RECTANGLE
			map_box: ESDL_ORTHOGONAL_RECTANGLE
		do	
		
			-- Create container to put background and widgets into.
			create container.make
			container.set_x_y (670, 400)
		
			-- Create black background
			create background.make_from_coordinates (0, 0, 300, 300)
			background.set_fill_color (black)
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
		
	build_info_box is
			-- Build little information box 
			-- with texts for informations
			-- about map.			
		local
			background: ESDL_RECTANGLE
			place_info_label: ESDL_STRING
		do
			create information_box.make (300, 270)
			information_box.set_x_y (670, 100)
					
			-- Build Background.
			create background.make_from_coordinates (0, 0, 300, 270)
			background.set_fill_color (black)
			information_box.extend (background)
			
			-- Build place info label.
			create place_info_label.make ("Clicked Place: ", standard_fonts.small_font)
			place_info_label.set_x_y (10, 30)
			information_box.extend (place_info_label)

			-- Build place info text
			create place_info_text.make ("", standard_fonts.small_font)
			place_info_text.set_x_y (10, 60)
			information_box.extend (place_info_text)
			
			-- Extend scene with information box.
			main_container.extend (information_box)		
		end

	text_box (a_text: STRING; a_width, a_height: INTEGER): ESDL_DRAWABLE is
			-- A new black box of size `a_widht' and `a_height'
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

	process_clicked_map_item (item: HASHABLE; m_event: ESDL_MOUSEBUTTON_EVENT) is
			-- 
		local
			place: TRAFFIC_PLACE
			link: TRAFFIC_LINE_SECTION
		do
			place ?= item
			if place /= Void and then m_event.is_left_button then
				place_info_text.set_value (place.name)
				if traffic_map.has_line_section_between (player.place.name, place.name) then
					player.move_to (place)
				elseif place /= player.place then					
					-- Super-Player: Can build new line sections ...
					create link.make (player.place, place, walking_type, Void)
					traffic_map.add_line_section (link)
					player.move_to (place)
					
				end
			end			
		end

end
