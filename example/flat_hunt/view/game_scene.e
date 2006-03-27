indexing
	description: "Displays the game."
	date: "$Date$"
	revision: "$Revision$"

class
	GAME_SCENE
	
inherit 
	FLAT_HUNT_SCENE
		rename 
			make_scene as make_scene_default
		redefine
			handle_key_down_event, initialize_scene
		end

	DISPLAY_CONSTANTS

create
	make_scene

feature -- Initialization

	make_scene (a_traffic_map: TRAFFIC_MAP; a_hunter_count: INTEGER) is
			-- Creation procedure
		require
			a_traffic_map_exists: a_traffic_map /= Void
			a_hunter_count_valid: a_hunter_count > 0 and a_hunter_count <= 8
		do
			make_scene_default
			traffic_map := a_traffic_map
			hunter_count := a_hunter_count
			build_big_map_widget
			build_little_map_widget
			
			-- Set defaults.
			create status.make (0)	
			create hash_from_button_to_player_displayer.make (0)
			create player_displayers.make (0)
			paused := False
			game_over := False
		ensure
			traffic_map_set: traffic_map = a_traffic_map
			hunter_count_set: hunter_count = a_hunter_count
		end
		
	initialize_scene is
			-- Build 'main_container' containing zoomable map.
		do			
		
			set_background_color (theme.background_color)

			-- Build map widgets.
			-- Build navigation widget to connect
			-- little map to big map for navigation.
			create navigation_widget.make (little_map_widget, big_map_widget)	
			
			-- Build status box.
			create status_box.make_from_coordinates (Map_area_width + 2 * Margin, Window_width - Map_area_width - 2 * Margin, Window_width - Margin, Map_area_height, "Status")
			status_box.set_font (theme.Status_font)
			status_box.set_title_font (theme.Medium_game_widget_font)
			status_box.set_color (theme.Status_color)
			status_box.set_padding (-3)
			main_container.extend (status_box)
			update_status_box

			-- Build player status box.
			create player_status_box.make_from_position_and_size (Margin, Margin + Map_area_height - 150, Map_area_width, 150, " ")
			player_status_box.set_font (theme.Status_font)
			player_status_box.set_title_font (theme.Big_player_status_font)
			player_status_box.set_color (theme.player_status_color)
			player_status_box.set_padding (-3)
			player_status_box.set_visible (False)
			main_container.extend (player_status_box)
			
			-- Build the menus.
			build_pause_menu
			build_game_over_menu
			
			-- Build the overlay for when the game is `paused'
			theme.bitmap_factory.create_bitmap_from_image (theme.Image_directory + "scanlines.png")
			overlay := theme.bitmap_factory.last_bitmap

			last_clicked_button := Void
			display_players
		ensure then
			last_clicked_button_void: last_clicked_button = Void
			big_container_added: main_container.has (big_map_widget)
			status_box_added: main_container.has (status_box)
			player_status_box_added: main_container.has (player_status_box)
		end
	
	create_players_from_list (a_player_list: ARRAYED_LIST [PLAYER]) is
			-- Create views for players on the scene.
		require
			a_player_list_not_void: a_player_list /= Void
			a_player_list_valid: a_player_list.count >= 2
		local
			i: INTEGER
			cur_button_x: INTEGER
			cur_button_y: INTEGER
			tmp_button: BUTTON
			tmp_agent_displayer: ESTATE_AGENT_DISPLAYER
			tmp_player_displayer: PLAYER_DISPLAYER
		do
			cur_button_x := Margin
			cur_button_y := Window_height - Margin - theme.Estate_agent_button_pic.height
			from
				i := 1
			until
				i > a_player_list.count
			loop
				if i <= 1 then
					tmp_button := create {BUTTON}.make_with_picture (theme.Estate_agent_button_pic)
					create tmp_agent_displayer.make_from_player (a_player_list.first, theme.Estate_agent_pic, traffic_map, big_map_widget)
					tmp_agent_displayer.set_last_visible_location_picture (theme.Estate_agent_lvl_pic)
					tmp_player_displayer := tmp_agent_displayer
				else
					tmp_button := create {BUTTON}.make_with_picture (theme.Flat_hunter_button_pics.item (i-1))
					tmp_player_displayer := create {FLAT_HUNTER_DISPLAYER}.make_from_player (a_player_list.i_th (i), theme.Flat_hunter_pics.item (i-1), traffic_map, big_map_widget)
				end
				tmp_button.subscribe_for_click (agent process_clicked_player_button)
				tmp_button.set_x_y (cur_button_x, cur_button_y)
				cur_button_x := cur_button_x + tmp_button.width
				hash_from_button_to_player_displayer.extend (tmp_player_displayer, tmp_button)
				player_displayers.extend (tmp_player_displayer)
				i := i + 1
			end
		ensure
			player_displayers_correct: player_displayers.count = a_player_list.count
			hash_button2displayer_correct: hash_from_button_to_player_displayer.count = a_player_list.count
		end

feature -- Access
			
	player_displayers: ARRAYED_LIST [PLAYER_DISPLAYER]
			-- Holds all player displayers.

	big_map_widget: TRAFFIC_2D_MAP_WIDGET
			-- Map widget to visualize `traffic_map'
			-- for big zoomable map.
			
	update_status_box is
			-- Update the overview status box.
		do
			if status_box /= Void then
				status_box.set_text (status)
			end
		end

	update_player_status_box (current_player_index: INTEGER) is
			-- Update the player status box.
		do
			if player_status_box /= Void and then player_status_box.is_visible and then player_status_box.title.value.has_substring (player_displayers.i_th (current_player_index).out) then
				player_status_box.set_title ("Status of " + player_displayers.i_th (current_player_index).out)
				player_status_box.set_text (player_displayers.i_th (current_player_index).statistics)							
			end
		end

	center_on_player (a_player: PLAYER) is
			-- Center map on `a_player'.
		do
			big_map_widget.center_on (a_player.position)
		end
		
	display_end_game is
			-- Display game over stats and the `game_over_menu'.
		do
			main_container.extend (game_over_menu_container)
			game_over := True
		ensure
			gom_container_added: main_container.has (game_over_menu_container)
			game_over_set: game_over = True
		end
		
feature -- Status setting

	set_traffic_map (a_traffic_map: like traffic_map) is
			-- Set `traffic_map' to `a_traffic_map'.
		require
			a_traffic_map_exists: a_traffic_map /= Void
		do
			traffic_map := a_traffic_map
		ensure
			traffic_map_correct: traffic_map = a_traffic_map
		end
		
	set_number_of_hunters (a_hunter_count: like hunter_count) is
			-- Set `hunter_count' to `a_hunter_count'.
		require
			a_hunter_count_valid: (1 <= a_hunter_count) and (a_hunter_count <= 8)			
		do
			hunter_count := a_hunter_count
		ensure
			hunter_count_correct: hunter_count = a_hunter_count
		end

	set_status (a_status: STRING) is
			-- Set `status' to `a_status'.
		require
			a_status_exists: a_status /= Void
		do
			status := a_status
		ensure
			status_set: status = a_status
		end

	set_pause_callback (a_callback: PROCEDURE [ANY, TUPLE [BOOLEAN]]) is
			-- set `pause_callback' to `a_callback'.
		require
			a_callback_exists: a_callback /= Void
		do
			pause_callback := a_callback
		ensure
			pause_callback_set: pause_callback = a_callback
		end		
		
feature {NONE} -- Event Handling

	handle_key_down_event (a_keyboard_event: EM_KEYBOARD_EVENT) is
			-- Handle keyboard events.
		do
			Precursor {FLAT_HUNT_SCENE} (a_keyboard_event)
			if paused then
				pause_menu.handle_key_down_event (a_keyboard_event)
			elseif game_over then
				game_over_menu.handle_key_down_event (a_keyboard_event)	
			else
				if a_keyboard_event.key = Sdlk_p then
					-- Set game to pause mode and show pause menu
					paused := True
					if pause_callback /= Void then
						pause_callback.call ([paused])						
					end
					main_container.extend (overlay)
					main_container.extend (pause_menu_container)
				end
			end
		end
		
	process_clicked_player_button (a_button: BUTTON) is
			-- What to do when user clicked on a player button.
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
				player_status_box.set_visible (True)
				player_status_box.set_title ("Status of " + tmp_player_displayer.out)
				player_status_box.set_text (tmp_player_displayer.statistics)
			end
		ensure
			last_clicked_button_set: a_button /= old last_clicked_button implies last_clicked_button = a_button
		end

feature {NONE} -- Menu Handling

	pause_menu: NORMAL_MENU
		-- Menu to be shown when game is `paused'.
		
	game_over_menu: NORMAL_MENU
		-- Menu to be shown when game over.
			
	pause_menu_container: TEXT_BOX
		-- Container in which `pause_menu' gets displayed.
	
	game_over_menu_container: TEXT_BOX
		-- Container in which `game_over_menu' gets displayed.		
		
	overlay: EM_DRAWABLE
		-- To be blended over the whole game scene when game is `paused'.

	build_pause_menu is
			-- Build `pause_menu'.
		do	
			create pause_menu.make_with_custom_fonts (theme.Small_menu_font, theme.Small_menu_selected_font)
			pause_menu.add_entry ("continue", agent continue_callback, True)
			pause_menu.add_entry ("new game", agent newgame_callback, False)
			pause_menu.add_entry ("quit", agent quit_callback, False)
			pause_menu.set_alignment (theme.Centered)
			pause_menu.set_x_y (20, 90)

			create pause_menu_container.make_from_position_and_size ((Window_width - pause_menu.width) // 2 - 25, (Window_height - pause_menu.height) // 2 - 10, pause_menu.width + 50, pause_menu.height + 20, " ")
			pause_menu_container.set_font (theme.Black_status_font)
			pause_menu_container.set_color (theme.dialog_color)
			pause_menu_container.set_auto_resize (False)
			pause_menu_container.set_text ("The game is paused.")
			pause_menu_container.extend (pause_menu)
		end
		
	build_game_over_menu is
			-- Build `game_over_menu'.
		do
			create game_over_menu.make_with_custom_fonts (theme.small_menu_font, theme.small_menu_selected_font)
			game_over_menu.add_entry ("new game", agent newgame_callback, False)
			game_over_menu.add_entry ("quit", agent quit_callback, False)
			game_over_menu.set_alignment (theme.Centered)
			game_over_menu.set_x_y (20, 90)

			create game_over_menu_container.make_from_position_and_size ((window_width - game_over_menu.width) // 2 - 25, (window_height - game_over_menu.height) // 2 - 10, game_over_menu.width + 50, game_over_menu.height + 20, " ")
			game_over_menu_container.set_font (theme.black_status_font)
			game_over_menu_container.set_color (theme.dialog_color)
			game_over_menu_container.set_auto_resize (False)
			game_over_menu_container.set_text ("G A M E   O V E R")
			game_over_menu_container.extend (game_over_menu)
		end
		
	continue_callback is
			-- What happens when "Continue" is selected in the `pause_menu'.
		do
			paused := False
			if pause_callback /= Void then
				pause_callback.call ([paused])				
			end
			-- Remove the `pause_menu_container' from the scene
			main_container.remove_last
			-- Remove the `overlay' from the scene
			main_container.remove_last
		end
		
	newgame_callback is
			-- What happens when "New game" is selected in a menu.
		do
			next_scene := create {START}.make_scene
			event_loop.stop
		end

	quit_callback is
			-- What happens when "Quit" is selected in a menu.
		do
-- Music playing causes problems!		
--			music_player.dispose
			next_scene := Void
			event_loop.stop
		end		
		
feature {NONE} -- Views

	little_map_widget: TRAFFIC_2D_MAP_WIDGET
			-- Map widget to visualize 'traffic_map'
			-- for little navigation map.
			
	navigation_widget: NAVIGATOR
			-- Widget to navigate in `big_zoomable_widget'
			-- using `little_map_widget'.
		
feature {NONE} -- Implementation

	traffic_map: TRAFFIC_MAP
			-- Reference to the map where the game takes place.
			
	hunter_count: INTEGER
			-- Reference to number of hunters.

	paused: BOOLEAN
			-- Is game paused?
			
	game_over: BOOLEAN
			-- Is the game over?
			
	status: STRING
			-- Current game status, to be displayed in `status_box'.
			
	status_box: TEXT_BOX
			-- Status box to display state of current player and general overview.
			
	player_status_box: TEXT_BOX
			-- Status box to be displayed when a player button gets clicked.

	hash_from_button_to_player_displayer: HASH_TABLE [PLAYER_DISPLAYER, BUTTON]
			-- Hash table to show correct status box when button clicked.

	last_clicked_button: BUTTON
			-- The player button that was last clicked.

	pause_callback: PROCEDURE [ANY, TUPLE [BOOLEAN]]
			-- Gets called when game paused
			
	display_players is
			-- Visualize players on the scene.
		do
			from
				hash_from_button_to_player_displayer.start	
			until
				hash_from_button_to_player_displayer.after
			loop
				big_map_widget.extend (hash_from_button_to_player_displayer.item_for_iteration)
				main_container.extend (hash_from_button_to_player_displayer.key_for_iteration)
				hash_from_button_to_player_displayer.forth
			end
		end

	build_big_map_widget is
			-- Build `big_map_widget' inside `big_zoomable_widget'
			-- to visualize `traffic_map' within a dedicated box
		require
			traffic_map_not_void: traffic_map /= Void
		local
			tmp_place_renderer: TRAFFIC_PLACE_RENDERER
		do			
			create big_map_widget.make_with_map (map_area_width, map_area_height, traffic_map)
			big_map_widget.set_x_y (Margin, Margin)
			big_map_widget.set_background_color (create {EM_COLOR}.make_white)
			big_map_widget.calculate_object_area
			big_map_widget.set_background_color (create {EM_COLOR}.make_white)
			big_map_widget.scroll_and_zoom_to_rectangle (big_map_widget.object_area)
			big_map_widget.enable_scroll_and_zoom_by_mouse

			create tmp_place_renderer.make_with_map (traffic_map)
			tmp_place_renderer.set_place_color (theme.default_place_color)
			big_map_widget.line_section_renderer.traffic_type_line_widths.put (8, "rail")
			big_map_widget.line_section_renderer.traffic_type_colors.put (theme.Rail_color, "rail")
			big_map_widget.line_section_renderer.traffic_type_line_widths.put (2, "bus")
			big_map_widget.set_default_place_renderer (tmp_place_renderer)
			big_map_widget.render

			main_container.extend (big_map_widget)		
		end		

	build_little_map_widget is
			-- Build `little_map_widget' to visualize `traffic_map' 
			-- within a dedicated box and add it to `main_container'
		require
			traffic_map_not_void: traffic_map /= Void
		local
			tmp_place_renderer: TRAFFIC_PLACE_RENDERER
		do	
			create little_map_widget.make_with_map (Window_width - Map_area_width - 3 * Margin , Window_width - Map_area_width - 3 * Margin, traffic_map)
			little_map_widget.set_x_y (map_area_width + 2 * margin, margin)
			little_map_widget.set_background_color (create {EM_COLOR}.make_white)
			little_map_widget.calculate_object_area
			little_map_widget.scroll_and_zoom_to_rectangle (little_map_widget.object_area)

			-- Customize map widget and render (to affect changes)
			little_map_widget.line_section_renderer.traffic_type_line_widths.put (8, "rail")
			little_map_widget.line_section_renderer.traffic_type_colors.put (theme.Rail_color, "rail")
			little_map_widget.line_section_renderer.traffic_type_colors.put (theme.Tram_color, "tram")
			create tmp_place_renderer.make_with_map (traffic_map)
			tmp_place_renderer.set_place_color (theme.default_place_color)
			little_map_widget.set_default_place_renderer (tmp_place_renderer)
			little_map_widget.render

			main_container.extend (little_map_widget)		
		end	

invariant
	traffic_map_exists: traffic_map /= Void
	hunter_count_valid: hunter_count > 0 and hunter_count <= 8
	status_exists: status /= Void
	big_map_widget_exists: big_map_widget /= Void
	hash_button2displayer_exists: hash_from_button_to_player_displayer /= Void
	player_displayers_exist: player_displayers /= Void

end
