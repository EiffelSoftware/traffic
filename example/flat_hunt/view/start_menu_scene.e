indexing
	description: "Start menu scene that is displayed when you launch the application."
	date: "$Date$"
	revision: "$Revision$"

class
	START_MENU_SCENE

inherit
	MENU_SCENE
		redefine
			initialize_scene, handle_key_down_event
		end

create
	make_scene
	
feature -- Initialization

	initialize_scene is
			-- Initialize menu scene.
		local
			background_box: TEXT_BOX
			list: ARRAYED_LIST [STRING]
			options_position_x, options_position_y: INTEGER
		do
			Precursor

			-- Build background box.
			create background_box.make_from_coordinates (Margin, 95, Window_width - Margin, 445, "options")
			background_box.set_color (Menu_color)
			background_box.set_title_font (Menu_font)
			background_box.set_font (Small_menu_font)
			background_box.set_opacity (70)
			background_box.set_auto_resize (False)
			main_container.extend (background_box)
			
			-- Build menu.
			menu.add_entry ("start game", agent start_callback, True)
			menu.add_entry ("credits", agent credits_callback, False)
			menu.add_entry ("quit", agent quit_callback, False)
			menu.set_alignment (Right)
			menu.set_x_y (Window_width - menu.width - Margin, Window_height - menu.height)
			main_container.extend (menu)

			-- Calculate position of first option menu.			
			options_position_x := 550
			options_position_y := 175

			-- Build caption for first option menu.
			background_box.extend (create {EM_STRING}.make ("game mode: ", Small_menu_font))
			background_box.last.set_x_y (options_position_x - 400, options_position_y - background_box.y)
			
			-- Build first option menu.
			create list.make (0)
			list.extend ("hunt")
			list.extend ("escape")
			list.extend ("versus")
			list.extend ("demo")
			add_option_menu (list, options_position_x, options_position_y)

			-- Calculate position of second option menu.
			options_position_y := options_position_y + option_menus.item (option_menus.count).height
			
			-- Build caption for second option menu.
			background_box.extend (create {EM_STRING}.make ("nr of hunters: ", Small_menu_font))
			background_box.last.set_x_y (options_position_x - 400, options_position_y - background_box.y)
			
			-- Build second option menu.
			list.wipe_out
			list.extend ("one")
			list.extend ("two")
			list.extend ("three")
			list.extend ("four")
			list.extend ("five")
			list.extend ("six")
			list.extend ("seven")
			list.extend ("eight")
			add_option_menu (list, options_position_x, options_position_y)

			-- Calculate position of third option menu.
			options_position_y := options_position_y + option_menus.item (option_menus.count).height

			-- Build caption for third option menu.
			background_box.extend (create {EM_STRING}.make ("map size: ", Small_menu_font))
			background_box.last.set_x_y (options_position_x - 400, options_position_y - background_box.y)

			-- Build third option menu.
			list.wipe_out	
			list.extend ("little")			
			list.extend ("big")
			add_option_menu (list, options_position_x, options_position_y)

			-- Calculate position of fourth option menu.
			options_position_y := options_position_y + option_menus.item (option_menus.count).height			

			-- Build caption for fourth option menu
			background_box.extend (create {EM_STRING}.make ("characters: ", Small_menu_font))
			background_box.last.set_x_y (options_position_x - 400, options_position_y - background_box.y)

			-- Build fourth option menu.
			list.wipe_out			
			list.extend ("glass")
			list.extend ("white")
			add_option_menu (list, options_position_x, options_position_y)

			-- Build info text and display it below option menu status box.
			main_container.extend (create {EM_STRING}.make ("use tab to toggle between main menu and option settings", small_credits_font))
			main_container.last.set_x_y (Margin, 510)
			
			-- Set active menu to normal menu.
			active_menu := option_menus.count + 1

		ensure then
			menu_displayed: main_container.has (menu)
			menu_positioned: menu.x = Window_width - menu.width - Margin and menu.y = Window_height - menu.height
			option_menus_not_empty: not option_menus.is_empty
		end

feature -- Event handling

	handle_key_down_event (a_keyboard_event: EM_KEYBOARD_EVENT) is
			-- Handle keyboard events.
		do			
			Precursor {MENU_SCENE} (a_keyboard_event)

			-- Toggle between main menu and option menus.
			if a_keyboard_event.key = Sdlk_tab then
				if active_menu = option_menus.count + 1 then
					-- Main menu is currently active -> switch to option menus.
					active_menu := 1
					menu.deactivate
					option_menus.item (active_menu).activate
				else
					-- An option menu is currently active -> switch to main menu.
					option_menus.item (active_menu).deactivate
					menu.activate
					active_menu := option_menus.count + 1
				end
			end
			
			-- Main menu event handling.
			if active_menu = option_menus.count + 1 then
				menu.handle_key_down_event (a_keyboard_event)
				
			-- Option menu event handling.
			elseif active_menu > 0 and active_menu <= option_menus.count then
				if a_keyboard_event.key = Sdlk_down then
					-- Switch to next option menu.
					option_menus.item (active_menu).deactivate
					active_menu := active_menu + 1
					if active_menu > option_menus.count then
						active_menu := 1
					end
					option_menus.item (active_menu).activate
				elseif a_keyboard_event.key = Sdlk_up then
					-- Switch to previous option menu.
					option_menus.item (active_menu).deactivate
					active_menu := active_menu - 1
					if active_menu < 1 then
						active_menu := option_menus.count
					end
					option_menus.item (active_menu).activate
				end
				option_menus.item (active_menu).handle_key_down_event (a_keyboard_event)
			end
		end

feature {NONE} -- Implementation

	game: GAME
			-- The game logic.
			
	game_scene: GAME_SCENE
			-- Visualization of the game.

	start_callback is
			-- Callback for `start game' entry.
		do
			-- Create a `game' with the settings from the start menu.
			create game.make (option_menus.item (1).selected_entry, option_menus.item (2).selected_entry, "./map/zurich_" + option_menus.item (3).item (option_menus.item (3).selected_entry).text.value + ".xml", False)
			
			-- Start the game.
			start
		end

	start is
			-- Adjust the game settings and start the game.
		do
			-- Redefined in class START.
			start_game
		end

	start_game is
			-- Start the game.
		local
			main_controller: MAIN_CONTROLLER
		do
			-- Since we didn't create the map at creation of `game', we need to do that now.
			game.create_map
			
			-- Create scene that displays the game.
			game_scene := create {GAME_SCENE}.make_scene (game.traffic_map, option_menus.item (2).selected_entry)

			-- Load correct player pics according to settings.
			Player_pic_directory.wipe_out
			Player_pic_directory.append_string (Image_directory + "player/" + option_menus.item (4).item (option_menus.item (4).selected_entry).text.value + "/")

			-- Initialize `main_controller' and start a new game.
			create main_controller.make (game, game_scene)
			main_controller.start_game

			-- Go to the above created game scene.			
			next_scene := game_scene
			event_loop.stop			
		end
		
	credits_callback is
			-- Callback for `credits' entry.
		do
			next_scene := create {CREDITS_SCENE}.make_scene
			event_loop.stop				
		end
		
	quit_callback is
			-- Callback for `quit' entry.
		do
			music_player.dispose
			next_scene := Void
			event_loop.stop
		end

end
