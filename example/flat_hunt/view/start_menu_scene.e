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

	OPTION_CONSTANTS


create
	make_scene

feature -- Initialization

	initialize_scene is
			-- Initialize menu scene.
		do
			Precursor

			-- Set default values for game options
			flathunt_mode := 1
			flathunt_hunter_number := 2
			flathunt_map := "../map/zurich_little.xml"
			flathunt_theme := "glass"

			-- Build menu.
			menu.add_entry ("start game", agent start_callback, True)
			menu.add_entry ("credits", agent credits_callback, False)
			menu.add_entry ("quit", agent quit_callback, False)
			menu.set_alignment (Right)
			menu.set_x_y (flathunt_window_width - menu.width - Margin, flathunt_window_height - menu.height)
			main_container.extend (menu)

			-- Build option panel.
			create option_panel.make_at_position (flathunt_window_width - 2* Margin, 220, "", "use tab to toggle between main menu and option settings")
			option_panel.set_x_y (Margin, 120)

			-- Fill the option panel
			fill_options

			main_container.extend (option_panel)

			-- Set active menu to normal menu.
			active_menu := option_panel.option_menus.count + 1

		ensure then
			menu_displayed: main_container.has (menu)
			menu_positioned: menu.x = flathunt_window_width - menu.width - Margin and menu.y = flathunt_window_height - menu.height
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

			if option_panel.option_menus.count > 0 then
				-- Toggle between main menu and option menus.
				if a_keyboard_event.key = Sdlk_tab then
					if active_menu = option_panel.option_menus.count + 1 then
						-- Main menu is currently active -> switch to option menus.
						active_menu := 1
						menu.deactivate
						option_panel.option_menus.i_th (active_menu).activate
					else
						-- An option menu is currently active -> switch to main menu.
						option_panel.option_menus.i_th (active_menu).deactivate
						menu.activate
						active_menu := option_panel.option_menus.count + 1
					end
				-- Option menu event handling.
				elseif active_menu > 0 and active_menu <= option_panel.option_menus.count then
					if a_keyboard_event.key = Sdlk_down then
						-- Switch to next option menu.
						option_panel.option_menus.i_th (active_menu).deactivate
						active_menu := active_menu + 1
						if active_menu > option_panel.option_menus.count then
							active_menu := 1
						end
						option_panel.option_menus.i_th (active_menu).activate
					elseif a_keyboard_event.key = Sdlk_up then
						-- Switch to previous option menu.
						option_panel.option_menus.i_th (active_menu).deactivate
						active_menu := active_menu - 1
						if active_menu < 1 then
							active_menu := option_panel.option_menus.count
						end
						option_panel.option_menus.i_th (active_menu).activate
					end
					option_panel.option_menus.i_th (active_menu).handle_key_down_event (a_keyboard_event)
				end
			end
		end

feature -- For the exercise

	fill_options is
			-- Fill the options menu.
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
		local
			fs: KL_FILE_SYSTEM
			s: STRING
		do
			fs := (create {KL_SHARED_FILE_SYSTEM}).file_system
			from
				option_panel.option_menus.start
			until
				option_panel.option_menus.off
			loop
				if option_panel.option_menus.item.title.is_equal (option_title_game_mode) then
					flathunt_mode := option_panel.option_menus.item.selected_entry
				elseif option_panel.option_menus.item.title.is_equal (option_title_number_of_flathunters) then
					flathunt_hunter_number := option_panel.option_menus.item.selected_entry
				elseif option_panel.option_menus.item.title.is_equal (option_title_map_size) then
					s := fs.pathname ("..", "map")
					s := fs.pathname (s, "zurich_")
					flathunt_map := s + option_panel.option_menus.item.item (option_panel.option_menus.item.selected_entry).text.value + ".xml"
				elseif option_panel.option_menus.item.title.is_equal (option_title_characters) then
					flathunt_theme := option_panel.option_menus.item.item (option_panel.option_menus.item.selected_entry).text.value
				end
				option_panel.option_menus.forth
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
			theme.Player_pic_directory.wipe_out
			theme.Player_pic_directory.append_string (theme.Image_directory + "player/" + flathunt_theme + "/")

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
-- Music playing causes problems!		
--			music_player.dispose
			next_scene := Void
			event_loop.stop
		end

end
