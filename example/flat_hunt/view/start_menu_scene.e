indexing
	description: "Start menu scene that is displayed when you launch the application."
	author: "Ursina Caluori, ucaluori@student.ethz.ch"
	date: "$Date$"
	revision: "$Revision$"

class
	START_MENU_SCENE

inherit
	MENU_SCENE
		redefine
			initialize_scene, handle_key_down_event, on_select
		end

	SHARED_MAIN_CONTROLLER
		undefine
			default_create
		end

create
	make
	
feature -- Initialization

	initialize_scene is
			-- Initialize menu scene
		local
			background_box: STATUS_BOX
			list: ARRAYED_LIST [STRING]
			options_position_x, options_position_y: INTEGER
		do
			Precursor
			
			music_player.play_game_music

			create background_box.make_from_coordinates (50, 95, Window_width - 50, 450, "options")
			background_box.set_color (menu_color)
			background_box.set_title_font (menu_font)
			background_box.set_font (small_menu_font)
			background_box.set_opacity (70)
			background_box.set_auto_resize (false)
			
			menu.add_entry ("start game", Void, true)
			menu.add_entry ("credits", credits_scene, false)
			menu.add_entry ("quit", Void, false)
			menu.set_alignment (Right)
			menu.set_x_y (window_width - menu.width - 50, window_height - menu.height)

			options_position_x := 550
			options_position_y := 175
			create list.make (0)

			background_box.add_line ("game mode :")
			background_box.lines.last.set_x_y (options_position_x - 400, options_position_y - background_box.y)
			
			list.extend ("hunt")
			list.extend ("escape")
			list.extend ("versus")
			list.extend ("demo")
			add_option_menu (list, agent on_option_select, options_position_x, options_position_y)

			options_position_y := options_position_y + option_menus.item (option_menus.count).height
			
			background_box.add_line ("nr of hunters :")
			background_box.lines.last.set_x_y (options_position_x - 400, options_position_y - background_box.y)
			
			list.wipe_out
			list.extend ("one")
			list.extend ("two")
			list.extend ("three")
			list.extend ("four")
			list.extend ("five")
			list.extend ("six")
			list.extend ("seven")
			list.extend ("eight")
			add_option_menu (list, agent on_option_select, options_position_x, options_position_y)

			options_position_y := options_position_y + option_menus.item (option_menus.count).height

			background_box.add_line ("map size :")
			background_box.lines.last.set_x_y (options_position_x - 400, options_position_y - background_box.y)

			list.wipe_out	
			list.extend ("little")			
			list.extend ("big")
			add_option_menu (list, agent on_option_select, options_position_x, options_position_y)

			options_position_y := options_position_y + option_menus.item (option_menus.count).height			

			background_box.add_line ("characters :")
			background_box.lines.last.set_x_y (options_position_x - 400, options_position_y - background_box.y)

			list.wipe_out			
			list.extend ("glass")
			list.extend ("white")
			add_option_menu (list, agent on_option_select, options_position_x, options_position_y)
			
			main_container.extend (background_box)
			display_option_menus
			main_container.extend (menu)
			
			main_container.extend (create {EM_STRING}.make ("use tab to toggle between main menu and option settings", small_credits_font))
			main_container.last.set_x_y (50, 510)
			
			-- Set active menu to normal menu
			active_menu := option_menus.count + 1
		ensure then
			menu_not_void: menu /= Void
			menu_displayed: main_container.has (menu)
			menu_positioned: menu.x = window_width - menu.width - 50 and menu.y = window_height - menu.height
			option_menus_not_void: option_menus /= Void
			option_menus_not_empty: not option_menus.is_empty
		-- TODO: option_menus_displayed, option_menus_positioned: necessary? and how to do it if not one by one?
		end

feature -- Event handling

	handle_key_down_event (a_keyboard_event: EM_KEYBOARD_EVENT) is
			-- Handle keyboard events
		do			
			Precursor {MENU_SCENE} (a_keyboard_event)

			-- Toggle between main menu and option menus
			if a_keyboard_event.key = sdlk_tab then
				if active_menu = option_menus.count + 1 then
					active_menu := 1
					menu.deactivate
					option_menus.item (active_menu).activate
				else
					option_menus.item (active_menu).deactivate
					menu.activate
					active_menu := option_menus.count + 1
				end
			end
			
			-- Main menu event handling
			if active_menu = option_menus.count + 1 then
				menu.handle_key_down_event (a_keyboard_event)
				
			-- Option menu event handling
			elseif active_menu > 0 and active_menu <= option_menus.count then
				if a_keyboard_event.key = sdlk_down then
					option_menus.item (active_menu).deactivate
					active_menu := active_menu + 1
					if active_menu > option_menus.count then
						active_menu := 1
					end
					option_menus.item (active_menu).activate
				elseif a_keyboard_event.key = sdlk_up then
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
		
	on_select is
			-- Agent that gets called when menu entry is selected
		local
			a_game_scene: GAME_SCENE
			a_game: GAME
			a_map_file: TRAFFIC_MAP_FILE
		do
			if menu.selected_entry = 1 then
				-- Create game with settings from option menus.
				create a_game.make
				a_game.set_game_mode (option_menus.item (1).selected_entry)
				a_game.set_number_of_hunters (option_menus.item (2).selected_entry)
				a_map_file := create {TRAFFIC_MAP_FILE}.make_from_file ("./map/zurich_" + option_menus.item (3).entries.item (option_menus.item (3).selected_entry).text.value + ".xml")
				a_game.set_traffic_map (a_map_file.traffic_map)

				-- Create scene that displays the game.
				a_game_scene := create {GAME_SCENE}.make (a_map_file.traffic_map, option_menus.item (2).selected_entry)
				a_game_scene.set_last_scene (Current)

				-- Load correct player pics
				player_pic_directory.wipe_out
				player_pic_directory.append_string (Image_directory + "player/" + option_menus.item (4).entries.item (option_menus.item (4).selected_entry).text.value + "/")

				main_controller.initialize_with_game_and_scene (a_game, a_game_scene)
				main_controller.start_game
				
				next_scene := a_game_scene
				event_loop.stop
			elseif menu.selected_entry = 2 then
				credits_scene.set_last_scene (Current)
				next_scene := credits_scene
				event_loop.stop
			elseif menu.selected_entry = 3 then
				quit
			end

		end


end
