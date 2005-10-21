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
		do
			Precursor

			-- Build menu.
			menu.add_entry ("start game", agent start_callback, True)
			menu.add_entry ("credits", agent credits_callback, False)
			menu.add_entry ("quit", agent quit_callback, False)
			menu.set_alignment (Right)
			menu.set_x_y (Window_width - menu.width - Margin, Window_height - menu.height)
			main_container.extend (menu)

			-- Build option panel.
			create option_panel.make_at_position (Window_width - 2* Margin, 345, "options", "use tab to toggle between main menu and option settings")
			option_panel.set_x_y (Margin, 95)
			option_panel.add_option_menu (<< "hunt", "escape", "versus", "demo" >>, "game mode: ")
			option_panel.add_option_menu (<< "one", "two", "three", "four", "five", "six", "seven", "eight" >>, "nr of hunters: ")
			option_panel.add_option_menu (<< "little", "big" >>, "map size: ")
			option_panel.add_option_menu (<< "glass", "white" >>, "characters: ")
			option_panel.hide
			main_container.extend (option_panel)
			
			-- Set active menu to normal menu.
			active_menu := option_panel.option_menus.count + 1
			
			-- Show the option panel and play music.
			show_options_and_play_music
		ensure then
			menu_displayed: main_container.has (menu)
			menu_positioned: menu.x = Window_width - menu.width - Margin and menu.y = Window_height - menu.height
		end

feature -- Event handling

	handle_key_down_event (a_keyboard_event: EM_KEYBOARD_EVENT) is
			-- Handle keyboard events.
		do			
			Precursor {MENU_SCENE} (a_keyboard_event)

			-- Main menu event handling.
			if active_menu = option_panel.option_menus.count + 1 then
				menu.handle_key_down_event (a_keyboard_event)
			end
			
			if not option_panel.is_hidden then
				-- Toggle between main menu and option menus.
				if a_keyboard_event.key = Sdlk_tab then
					if active_menu = option_panel.option_menus.count + 1 then
						-- Main menu is currently active -> switch to option menus.
						active_menu := 1
						menu.deactivate
						option_panel.option_menus.item (active_menu).activate
					else
						-- An option menu is currently active -> switch to main menu.
						option_panel.option_menus.item (active_menu).deactivate
						menu.activate
						active_menu := option_panel.option_menus.count + 1
					end
				-- Option menu event handling.
				elseif active_menu > 0 and active_menu <= option_panel.option_menus.count then
					if a_keyboard_event.key = Sdlk_down then
						-- Switch to next option menu.
						option_panel.option_menus.item (active_menu).deactivate
						active_menu := active_menu + 1
						if active_menu > option_panel.option_menus.count then
							active_menu := 1
						end
						option_panel.option_menus.item (active_menu).activate
					elseif a_keyboard_event.key = Sdlk_up then
						-- Switch to previous option menu.
						option_panel.option_menus.item (active_menu).deactivate
						active_menu := active_menu - 1
						if active_menu < 1 then
							active_menu := option_panel.option_menus.count
						end
						option_panel.option_menus.item (active_menu).activate
					end
					option_panel.option_menus.item (active_menu).handle_key_down_event (a_keyboard_event)
				end	
			end	
		end

feature -- For the exercise

	show_options_and_play_music is
			-- Show the options menu and play music.
		do
			-- Do nothing.
		end
		
		
feature {NONE} -- Implementation

	Flathunt_mode: INTEGER
			-- Game mode (1: hunt, 2:escape, 3: versus, 4: demo)
	
	Flathunt_hunter_number: INTEGER
			-- Number of hunters (between 1 and 8)
	
	Flathunt_map: STRING
			-- Map name ("little" or "big")
	
	Flathunt_theme: STRING
			-- Theme ("glass" or "white")

	option_panel: OPTION_PANEL
			-- Panel with the option menus		

	game: GAME
			-- The game logic.
			
	game_scene: GAME_SCENE
			-- Visualization of the game.

	start_callback is
			-- Callback for `start game' entry.
		do
			if not option_panel.is_hidden then
				flathunt_mode := option_panel.option_menus.item (1).selected_entry
				flathunt_hunter_number := option_panel.option_menus.item (2).selected_entry
				flathunt_map := "./map/zurich_" + option_panel.option_menus.item (3).item (option_panel.option_menus.item (3).selected_entry).text.value + ".xml"
				flathunt_theme := option_panel.option_menus.item (4).item (option_panel.option_menus.item (4).selected_entry).text.value
			else
				flathunt_mode := 1
				flathunt_hunter_number := 2
				flathunt_map := "./map/zurich_little.xml"
				flathunt_theme := "glass"
			end

			-- Create a `game' with the appropriate settings.
			create game.make (flathunt_mode, flathunt_hunter_number, flathunt_map, False)
			
			-- Start the game.
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
			game_scene := create {GAME_SCENE}.make_scene (game.traffic_map, flathunt_hunter_number)

			-- Load correct player pics according to settings.
			Player_pic_directory.wipe_out
			Player_pic_directory.append_string (Image_directory + "player/" + flathunt_theme + "/")

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
