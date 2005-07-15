indexing
	description: "Objects that ..."
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
	
feature -- Initialization

	initialize_scene is
			-- Initialize menu scene
		local
			background_box: STATUS_BOX
			list: ARRAYED_LIST [STRING]
			options_position_x, options_position_y: INTEGER
		do
			Precursor

			create background_box.make_from_coordinates (50, 160, Window_width - 50, 515, "options")
			background_box.set_color (menu_color)
			background_box.set_title_font (menu_font)
			background_box.set_font (small_menu_font)
			background_box.set_opacity (70)
			background_box.set_auto_resize (false)
			
			create menu.make_with_default_fonts (agent on_select)
			menu.add_entry ("start game", game_scene, true)
			menu.add_entry ("credits", credits_scene, false)
			menu.add_entry ("quit", Void, false)
			menu.set_alignment (Right)
			menu.set_x_y (window_width - menu.width - 50, window_height - menu.height)

			create options.make (0)	
			options_position_x := 550
			options_position_y := 175
			create list.make (0)

			background_box.add_line ("game mode :")
			background_box.lines.last.set_x_y (options_position_x - 400, options_position_y)
			
			list.extend ("hunt")
			list.extend ("escape")
			list.extend ("versus")
			list.extend ("demo")
			add_option (list, agent on_option_select, options_position_x, options_position_y)

			options_position_y := options_position_y + options.item (options.count).height
			
			background_box.add_line ("nr of hunters :")
			background_box.lines.last.set_x_y (options_position_x - 400, options_position_y)
			
			list.wipe_out
			list.extend ("one")
			list.extend ("two")
			list.extend ("three")
			list.extend ("four")
			list.extend ("five")
			list.extend ("six")
			list.extend ("seven")
			list.extend ("eight")
			add_option (list, agent on_option_select, options_position_x, options_position_y)

			options_position_y := options_position_y + options.item (options.count).height

			background_box.add_line ("map size :")
			background_box.lines.last.set_x_y (options_position_x - 400, options_position_y)

			list.wipe_out	
			list.extend ("little")			
			list.extend ("big")
			add_option (list, agent on_option_select, options_position_x, options_position_y)

			options_position_y := options_position_y + options.item (options.count).height			

			background_box.add_line ("characters :")
			background_box.lines.last.set_x_y (options_position_x - 400, options_position_y)

			list.wipe_out			
			list.extend ("glass")
			list.extend ("white")
			add_option (list, agent on_option_select, options_position_x, options_position_y)
			
			main_container.extend (background_box)
			from
				options.start
			until
				options.after
			loop
				options.item_for_iteration.deactivate
				main_container.extend (options.item_for_iteration)
				options.forth
			end
			main_container.extend (menu)
			
			main_container.extend (create {ESDL_STRING}.make ("use tab to toggle between main menu and option settings", small_credits_font))
			main_container.last.set_x_y (50, 510)
			
			-- Set active menu to normal menu
			active_menu := options.count + 1
		ensure then
			menu_not_void: menu /= Void
			menu_displayed: main_container.has (menu)
			menu_positioned: menu.x = window_width - menu.width - 50 and menu.y = window_height - menu.height
			options_not_void: options /= Void
			options_not_empty: not options.is_empty
		-- TODO: options_displayed, options_positioned: necessary? and how to do it if not one by one?
		end

feature -- Event handling

	handle_key_down_event (a_keyboard_event: ESDL_KEYBOARD_EVENT) is
			-- Handle keyboard events
		do
			if a_keyboard_event.key = sdlk_q then
				next_scene := Void
				event_loop.stop
			end
			-- Toggle between main menu and option menus
			if a_keyboard_event.key = sdlk_tab then
				if active_menu = options.count + 1 then
					active_menu := 1
					menu.deactivate
					options.item (active_menu).activate
				else
					options.item (active_menu).deactivate
					menu.activate
					active_menu := options.count + 1
				end
			end
			
			-- Main menu event handling
			if active_menu = options.count + 1 then
				menu.handle_key_down_event (a_keyboard_event)
				
			-- Option menu event handling
			elseif active_menu > 0 and active_menu <= options.count then
				if a_keyboard_event.key = sdlk_down then
					options.item (active_menu).deactivate
					active_menu := active_menu + 1
					if active_menu > options.count then
						active_menu := 1
					end
					options.item (active_menu).activate
				elseif a_keyboard_event.key = sdlk_up then
					options.item (active_menu).deactivate
					active_menu := active_menu - 1
					if active_menu < 1 then
						active_menu := options.count
					end
					options.item (active_menu).activate
				end
				options.item (active_menu).handle_key_down_event (a_keyboard_event)
			end
		end
		
	on_select is
			-- Agent that gets called when menu entry is selected
		do
			if menu.selected_entry = 1 then
				game_scene.set_game_constants (options.item (1).selected_entry, options.item (2).selected_entry, options.item (3).selected_entry)
--				menu.scenes @ (1).set_game_constants (options.item (1).selected_entry, options.item (2).selected_entry, options.item (3).selected_entry)
--				set_game_mode (options.item (1).selected_entry)
--				set_nr_of_hunters (options.item (2).selected_entry)
--
----				game_mode := options.item (1).selected_entry
----				nr_of_hunters := options.item (2).selected_entry
--				map_size := options.item (3).selected_entry
				player_pic_directory.wipe_out
				player_pic_directory.append_string (Image_directory + "player/" + options.item (4).entries.item (options.item (4).selected_entry).text.value + "/")				
			end
			
			next_scene := menu.scenes @ (menu.selected_entry)
			event_loop.stop
		end
			
	on_option_select is
				-- What to do when a option is selected
			do
				-- Since we don't want to do anything when return is hit
				-- on an option menu, we need this dummy procedure that
				-- does nothing
				-- TODO: better way ??
			end
			

feature {NONE} -- Attributes

	options: HASH_TABLE [OPTION_MENU, INTEGER]
		-- The option menus for selecting options
		
	active_menu: INTEGER
		-- Index of active menu

feature {NONE} -- Implementation

	add_option (a_list: ARRAYED_LIST [STRING]; a_callback: PROCEDURE [ANY, TUPLE]; an_x, a_y: INTEGER) is
			-- Add an option menu to the scene
		require
			a_list_not_void: a_list /= Void
			a_list_not_empty: not a_list.is_empty
			a_callback_not_void: a_callback /= Void
			options_not_void: options /= Void
		do
			options.extend (create {OPTION_MENU}.make_with_default_fonts (a_callback), options.count + 1)
			from
				a_list.start
			until
				a_list.after
			loop
				options.item (options.count).add_entry (a_list.item, start_menu_scene, false)
				a_list.forth
			end
			options.item (options.count).set_x_y (an_x, a_y)
			options.item (options.count).show_pics
			options.item (options.count).deactivate
		ensure
			option_menu_added: options.count = old options.count + 1
			option_menu_positioned: options.item (options.count).x = an_x and options.item (options.count).y = a_y
		end

end
