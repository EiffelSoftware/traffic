indexing
	description: "Displays the game."
	author: "Ursina Caluori, ucaluori@student.ethz.ch"
	author: "Rolf Bruderer, bruderol@student.ethz.ch"
	date: "$Date$"
	revision: "$Revision$"

class
	GAME_SCENE
	
inherit 
	FLAT_HUNT_SCENE
		redefine
			handle_key_down_event
		end
	
	TRAFFIC_TYPE_FACTORY   -- Singleton traffic types
		rename 
			make as make_type_factory
		undefine 
			default_create 
		end
		
	THEME
		undefine
			default_create
		end

create
	make

feature -- Initialization
		
	make (a_traffic_map: TRAFFIC_MAP; a_hunter_count: INTEGER) is
			-- Creation procedure
		require
			a_traffic_map_not_void: a_traffic_map /= Void
			a_hunter_count_valid: a_hunter_count > 0 and a_hunter_count <= 8
		do
			default_create
			traffic_map := a_traffic_map
			hunter_count := a_hunter_count
		end
		
	initialize_scene is
			-- Build 'main_container' containing zoomable map.
		require else
			traffic_map_not_void: traffic_map /= Void
		do			
			active := true
			background_color.make_black
--			set_frame_counter_visibility (true)

			-- Build map widgets
			build_big_map_widget
			build_little_map_widget
			
			-- Build navigation widget to connect
			-- little map to big map for navigation
			create navigation_widget.make (little_zoomable_container, big_zoomable_widget)	
			
			-- Build static status box
			create static_status_box.make_from_coordinates (map_area_width + 2 * margin, window_width - map_area_width - margin, window_width - margin, margin + map_area_height, "Status")
			static_status_box.set_font (small_game_widget_font)
			static_status_box.set_title_font (medium_game_widget_font)
			static_status_box.set_color (game_widget_color)
			static_status_box.set_opacity (70)
			main_container.extend (static_status_box)

			display_players
			
			-- Build dynamic status boxes
			initialize_dynamic_status_boxes
			
			-- Subscribe for on item click event in big map view to show place info text.
			big_map_widget.subscribe_to_clicked_place_event (agent process_clicked_place)
			
			flat_hunter_button_pics.item (1).set_x_y (margin, window_height - margin - flat_hunter_button_pics.item (1).height)
			main_container.extend (flat_hunter_button_pics.item (1))
			
		end
	
	create_players_from_list (a_player_list: ARRAYED_LIST [PLAYER]) is
			-- Create views for players on the scene
		require
			a_player_list_not_void: a_player_list /= Void
			a_player_list_valid: a_player_list.count >= 2
		local
			i: INTEGER
		do
			create player_views.make (0)
			from
				i := 1
			until
				i > a_player_list.count
			loop
				if i <= 1 then
					player_views.extend (create {ESTATE_AGENT_DISPLAYER}.make_from_player (a_player_list.first, estate_agent_pic))
				else
					player_views.extend (create {FLAT_HUNTER_DISPLAYER}.make_from_player (a_player_list.i_th (i), flat_hunter_pics.item (i - 1)))
				end		
				i := i + 1
			end
		end
		
	display_players is
			-- Visualize players on the scene
		do
			from
				player_views.start
			until
				player_views.after
			loop
				big_zoomable_widget.extend (player_views.item)
				player_views.forth
			end
		end
		
			
feature -- Views

	player_views: ARRAYED_LIST [PLAYER_DISPLAYER]
			-- Holds all player displayers

	status_boxes: HASH_TABLE [STATUS_BOX, INTEGER]
			-- Holds a dynamic status box for each player (including estate agent).
			
	big_zoomable_widget: EM_ZOOMABLE_WIDGET
			-- Interactive container inside which 
			-- `traffic_map' is displayed and can be zoomed

	big_map_widget: TRAFFIC_MAP_WIDGET
			-- Map widget to visualize `traffic_map'
			-- for big zoomable map
			
	little_zoomable_container: EM_ZOOMABLE_CONTAINER
			-- Container inside which `little_map_widget' is displayed

	little_map_widget: TRAFFIC_MAP_WIDGET
			-- Map widget to visualize 'traffic_map'
			-- for little navigation map.
			
	navigation_widget: NAVIGATOR
			-- Widget to navigate in `big_zoomable_widget'
			-- using `little_map_widget'

	information_box: EM_ZOOMABLE_CONTAINER
			-- Information box to display some text information.	
	
	place_info_text: EM_STRING
			-- Information text about last clicked place.

feature -- Attributes

	traffic_map: TRAFFIC_MAP
			-- Reference to the map where the game takes place
			
	hunter_count: INTEGER
			-- Reference to number of hunters

	static_status_box: STATUS_BOX
			-- Status box to display items & state of current player

	active: BOOLEAN
			-- Is game active or in pause?
			
feature -- Status Settings
		
feature {NONE} -- Implementation

	rail_color: EM_COLOR is
			-- Color used for rail lines.
		once
			create Result.make_with_rgb (255, 160, 0)
		end	

	build_big_map_widget is
			-- Build `big_map_widget' inside `big_zoomable_widget'
			-- to visualize `traffic_map' within a dedicated box
			-- and add it to `main_container'
		require
			traffic_map_not_void: traffic_map /= Void
		local
			container: EM_DRAWABLE_CONTAINER [EM_DRAWABLE]
			background_box: EM_RECTANGLE
		do			
			-- Create container to put background and widgets into.
			create container.make
			container.set_x_y (margin, margin)
			
			-- Create and customize the box in which the map will be displayed
			create background_box.make_from_coordinates (0, 0, map_area_width, map_area_height)
			background_box.set_rounded_corner_radius (10)
			background_box.set_line_width (1)
			background_box.set_line_color (dark_blue)
			background_box.set_fill_color (dark_blue)
			background_box.fill_color.set_alpha (70)
			container.extend (background_box)
			
			-- Create and customize big map widget to visualize `traffic_map'
			create big_map_widget.make_with_map (traffic_map)			
			big_map_widget.line_section_renderer.traffic_type_line_widths.put (8, "rail")
			big_map_widget.line_section_renderer.traffic_type_colors.put (rail_color, "rail")
			big_map_widget.render
			
			-- Create zoomable widget to make map zoomable
			create big_zoomable_widget.make (background_box.width, background_box.height)
			big_zoomable_widget.extend (big_map_widget)
			big_zoomable_widget.calculate_object_area
			big_zoomable_widget.set_object_area (big_map_widget.bounding_box)
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
			container: EM_DRAWABLE_CONTAINER [EM_DRAWABLE]
			background_box: EM_RECTANGLE
			map_box: EM_ORTHOGONAL_RECTANGLE
		do	
		
			-- Create container to put background and widgets into.
			create container.make
			container.set_x_y (map_area_width + 2 * margin, margin)
		
			-- Create black background
			
			create background_box.make_from_coordinates (0, 0, window_width - map_area_width - 3 * margin , window_width - map_area_width - 3 * margin)
			background_box.set_rounded_corner_radius (10)
			background_box.set_line_width (1)
			background_box.set_line_color (dark_blue)
			background_box.set_fill_color (dark_blue)
			background_box.fill_color.set_alpha (70)
			container.extend (background_box)
			
			-- Build little map widget to visualize `traffic_map'.
			create little_map_widget.make_with_map (traffic_map)

			-- Customize map widget and render (to affect changes)
			little_map_widget.line_section_renderer.traffic_type_line_widths.put (8, "rail")
			little_map_widget.line_section_renderer.traffic_type_colors.put (rail_color, "rail")
			little_map_widget.line_section_renderer.traffic_type_colors.put (yellow, "tram")
			little_map_widget.render

			-- Build zoomable container to show little map widget in.
			create little_zoomable_container.make (background_box.width, background_box.height)
			little_zoomable_container.extend (little_map_widget)
			create map_box.make_from_rectangle (little_map_widget.bounding_box)
			map_box.zoom (1.05)
			little_zoomable_container.scroll_and_zoom_to_rectangle (map_box)
			container.extend (little_zoomable_container)
			
			-- Extend scene with little map widget.
			main_container.extend (container)
		end	

	initialize_dynamic_status_boxes is
			-- Initialize `status_boxes'
		local
			i: INTEGER
		do
			create status_boxes.make (hunter_count + 1)  -- the + 1 is for the estate agent
			from
				i := 1
			until
				i > hunter_count + 1
			loop
				if i = hunter_count + 1 then -- estate agent
					status_boxes.put (create {STATUS_BOX}.make_from_coordinates (margin, margin + map_area_height - 70, margin + map_area_width, margin + map_area_height + 30, "Status of estate agent"), i)										
				end
				status_boxes.put (create {STATUS_BOX}.make_from_coordinates (margin, margin + map_area_height - 70, margin + map_area_width, margin + map_area_height + 30, "Status of hunter " + i.out), i)
				status_boxes.item (i).set_font (small_credits_font)
				status_boxes.item (i).set_title_font (big_credits_font)
				status_boxes.item (i).set_color (credits_color)
				status_boxes.item (i).set_opacity (70)
				i := i + 1
			end
			main_container.extend (status_boxes.item (1))
		end
		
		
feature {NONE} -- Event Handling

	handle_key_down_event (a_keyboard_event: EM_KEYBOARD_EVENT) is
			-- Handle keyboard events.
		do
			Precursor {FLAT_HUNT_SCENE} (a_keyboard_event)
			
			if a_keyboard_event.key = sdlk_p then
				-- Set game to pause mode and show pause menu
				active := false
			end
		end
		

	process_clicked_place (place: TRAFFIC_PLACE; m_event: EM_MOUSEBUTTON_EVENT) is
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
--				place_info_text.set_value (place.name)
			end			
		end	

invariant
	traffic_map_not_void: traffic_map /= Void
	hunter_count_valid: hunter_count > 0 and hunter_count <= 8
end
