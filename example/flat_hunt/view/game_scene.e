indexing
	description: "Displays the game."
	date: "$Date$"
	revision: "$Revision$"

class
	GAME_SCENE
	
inherit 
	FLAT_HUNT_SCENE
		redefine
			handle_key_down_event, handle_outside_event
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
			build_big_map_widget
			create status.make (0)
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
			main_container.extend (big_container)
			build_little_map_widget
			
			-- Build navigation widget to connect
			-- little map to big map for navigation
			create navigation_widget.make (little_zoomable_container, big_zoomable_widget)	
			
			-- Build status box
			create status_box.make_from_coordinates (map_area_width + 2 * margin, window_width - map_area_width - 2 * margin, window_width - margin, map_area_height, "Status")
			status_box.set_font (status_font)
			status_box.set_title_font (medium_game_widget_font)
			status_box.set_color (game_widget_color)
			status_box.set_opacity (70)
			main_container.extend (status_box)
			update_status_box

			-- Build player status box
			create player_status_box.make_from_position_and_size (margin, margin + map_area_height - 100, map_area_width, 100, " ")
			player_status_box.set_font (status_font)
			player_status_box.set_title_font (small_credits_font)
			player_status_box.set_color (status_color)
			player_status_box.set_opacity (80)
			player_status_box.set_visibility (false)
			main_container.extend (player_status_box)
			
			last_clicked_button := Void
			
			display_players
		end
	
	create_players_from_list (a_player_list: ARRAYED_LIST [PLAYER]) is
			-- Create views for players on the scene
		require
			a_player_list_not_void: a_player_list /= Void
			a_player_list_valid: a_player_list.count >= 2
			traffic_map_not_void: traffic_map /= Void
			big_map_widget_not_void: big_map_widget /= Void
		local
			i: INTEGER
			cur_button_x: INTEGER
			cur_button_y: INTEGER
			tmp_button: BUTTON
			tmp_player_displayer: PLAYER_DISPLAYER
		do
			cur_button_x := margin
			cur_button_y := window_height - margin - estate_agent_button_pic.height
			create hash_from_button_to_player_displayer.make (0)
			create player_displayers.make (0)
			from
				i := 1
			until
				i > a_player_list.count
			loop
				if i <= 1 then
					tmp_button := create {BUTTON}.make_with_picture (estate_agent_button_pic)
					tmp_player_displayer := create {ESTATE_AGENT_DISPLAYER}.make_from_player (a_player_list.first, estate_agent_pic, traffic_map, big_map_widget)
				else
					tmp_button := create {BUTTON}.make_with_picture (flat_hunter_button_pics.item (i-1))
					tmp_player_displayer := create {FLAT_HUNTER_DISPLAYER}.make_from_player (a_player_list.i_th (i), flat_hunter_pics.item (i-1), traffic_map, big_map_widget)
				end
				tmp_button.subscribe_for_click (agent process_clicked_player_button)
				tmp_button.set_x_y (cur_button_x, cur_button_y)
				cur_button_x := cur_button_x + tmp_button.width
				hash_from_button_to_player_displayer.extend (tmp_player_displayer, tmp_button)
				player_displayers.extend (tmp_player_displayer)
				i := i + 1
			end
		end
		
	display_players is
			-- Visualize players on the scene
		do
			from
				hash_from_button_to_player_displayer.start	
			until
				hash_from_button_to_player_displayer.after
			loop
				big_zoomable_widget.extend (hash_from_button_to_player_displayer.item_for_iteration)
				main_container.extend (hash_from_button_to_player_displayer.key_for_iteration)
				hash_from_button_to_player_displayer.forth
			end
		end
		
			
feature -- Views

	big_container: EM_DRAWABLE_CONTAINER [EM_DRAWABLE]
			-- Container that holds `big_zoomable_widget' and `big_map_widget' and their background box
			
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

	status_box: STATUS_BOX
			-- Status box to display state of current player and general overview.
			
	player_status_box: STATUS_BOX
			-- Status box to be displayed when a player button gets clicked.

	active: BOOLEAN
			-- Is game active or in pause?
			
	hash_from_button_to_player_displayer: HASH_TABLE [PLAYER_DISPLAYER, BUTTON]
			-- Hash table to show correct status box when button clicked
			
	player_displayers: ARRAYED_LIST [PLAYER_DISPLAYER]
			-- Holds all player displayers
			
feature -- Access

	set_status (a_status: ARRAYED_LIST [STRING]) is
			-- Set `status' to `a_status'
		do
			status := a_status
		end

	update_status_box is
			-- Update the overview status box
		do
			status_box.clear
			status_box.add_lines (status)
			if screen /= Void then
				redraw
			end
		end
		
		
feature {NONE} -- Implementation
	
	status: ARRAYED_LIST [STRING]
			
	last_clicked_button: BUTTON
	
	rail_color: EM_COLOR is
			-- Color used for rail lines.
		once
			create Result.make_with_rgb (255, 160, 0)
		end	

	build_big_map_widget is
			-- Build `big_map_widget' inside `big_zoomable_widget'
			-- to visualize `traffic_map' within a dedicated box
		require
			traffic_map_not_void: traffic_map /= Void
		local
			background_box: EM_RECTANGLE
		do			
			-- Create container to put background and widgets into.
			create big_container.make
			big_container.set_x_y (margin, margin)
			
			-- Create and customize the box in which the map will be displayed
			create background_box.make_from_coordinates (0, 0, map_area_width, map_area_height)
			background_box.set_rounded_corner_radius (10)
			background_box.set_line_width (1)
			background_box.set_line_color (game_widget_color)
			background_box.set_fill_color (game_widget_color)
			background_box.fill_color.set_alpha (70)
			big_container.extend (background_box)
			
			-- Create and customize big map widget to visualize `traffic_map'
			create big_map_widget.make_with_map (traffic_map)			
			big_map_widget.line_section_renderer.traffic_type_line_widths.put (6, "rail")
			big_map_widget.line_section_renderer.traffic_type_colors.put (rail_color, "rail")
			big_map_widget.render
			
			-- Create zoomable widget to make map zoomable
			create big_zoomable_widget.make (background_box.width, background_box.height)
			big_zoomable_widget.extend (big_map_widget)
			big_zoomable_widget.calculate_object_area
			big_zoomable_widget.set_object_area (big_map_widget.bounding_box)
			big_zoomable_widget.scroll_and_zoom_to_rectangle (big_map_widget.bounding_box)
			big_container.extend (big_zoomable_widget)
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
			background_box.set_line_color (game_widget_color)
			background_box.set_fill_color (game_widget_color)
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

	initialize_player_status_box (a_status_box: STATUS_BOX; a_title: STRING) is
			-- Initialize a status box
		do			
			a_status_box.set_position_and_size (big_map_widget.x, big_map_widget.y + big_map_widget.height - 50, big_map_widget.width, 100)		
			a_status_box.set_title_font (big_credits_font)
			a_status_box.set_font (status_font)
			a_status_box.set_color (status_color)
			a_status_box.set_opacity (70)
			a_status_box.set_visibility (false)
			main_container.extend (a_status_box)
			
--			create status_boxes.make (hunter_count + 1)  -- the + 1 is for the estate agent
--			from
--				i := 1
--			until
--				i > hunter_count + 1
--			loop
--				if i = hunter_count + 1 then -- estate agent
--					status_boxes.put (create {STATUS_BOX}.make_from_coordinates (margin, margin + map_area_height - 70, margin + map_area_width, margin + map_area_height + 30, "Status of estate agent"), i)										
--				else
--					status_boxes.put (create {STATUS_BOX}.make_from_coordinates (margin, margin + map_area_height - 70, margin + map_area_width, margin + map_area_height + 30, "Status of hunter " + i.out), i)				
--				end
--				status_boxes.item (i).set_font (small_credits_font)
--				status_boxes.item (i).set_title_font (big_credits_font)
--				status_boxes.item (i).set_color (credits_color)
--				status_boxes.item (i).set_opacity (70)
--				status_boxes.item (i).set_visibility (false)
--				main_container.extend (status_boxes.item (i))
--				i := i + 1
--			end
		end
		
		
feature {MAIN_CONTROLLER} -- Event Handling

	handle_key_down_event (a_keyboard_event: EM_KEYBOARD_EVENT) is
			-- Handle keyboard events.
		do
			Precursor {FLAT_HUNT_SCENE} (a_keyboard_event)
			
			if a_keyboard_event.key = sdlk_p then
				-- Set game to pause mode and show pause menu
				active := false
			end
		end
		
	handle_outside_event is
		do
			Precursor
			
		end
		
	process_clicked_player_button (a_button: BUTTON) is
			-- User clicked on a player button
		require
			a_button_not_void: a_button /= Void
			player_status_box_not_void: player_status_box /= Void
		local
			tmp_player_displayer: PLAYER_DISPLAYER
		do
			tmp_player_displayer := hash_from_button_to_player_displayer.item (a_button)
			if a_button = last_clicked_button then
				player_status_box.toggle_visibility
			else
				last_clicked_button := a_button
				player_status_box.set_visibility (true)
				player_status_box.set_title ("Status of " + tmp_player_displayer.out)
				player_status_box.clear
				player_status_box.add_lines (tmp_player_displayer.statistics)
			end
			redraw
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

	subscribe_to_clicked_place_event (an_agent: PROCEDURE [ANY, TUPLE [TRAFFIC_PLACE]]) is
			-- Subscribe `an_agent' to clicked place event
		do
			big_map_widget.subscribe_to_clicked_place_event (an_agent)
		end

invariant
	traffic_map_not_void: traffic_map /= Void
	hunter_count_valid: hunter_count > 0 and hunter_count <= 8
end
