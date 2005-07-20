indexing
	description: "Objects that ..."
	author: "Ursina Caluori, ucaluori@student.ethz.ch"
	date: "$Date$"
	revision: "$Revision$"

deferred class
	
	MENU_SCENE

inherit
	
--	SHARED_MUSIC_PLAYER
--		undefine
--			default_create
--		end
	
	SHARED_SCENES
		undefine
			default_create
		end
	
	ESDL_SCENE
		redefine
			handle_key_down_event
		end
		
--	ESDL_BITMAP_FACTORY
--		undefine
--			default_create
--		end
		
	THEME
		undefine
			default_create
		end

feature -- Initialization		

	make is
			-- Creation procedure
		do
			default_create
			create menu.make_with_default_fonts (agent on_select)
			create option_menus.make (0)
		end
		

	initialize_scene is
			-- Initialize menu scene
		do
			main_container.extend (Background_picture)
			main_container.extend (Flathunt_logo)
		end

feature -- Event handling		

	handle_key_down_event (a_keyboard_event: ESDL_KEYBOARD_EVENT) is
			-- Handle keyboard events
		do
			menu.handle_key_down_event (a_keyboard_event)
		end

	on_select is
			-- Agent that gets called when menu entry is selected
		require
			scenes_not_void: menu.scenes /= Void
			scenes_has_selected_entry_scene: menu.scenes.has (menu.selected_entry)
		do
			next_scene := menu.scenes @ (menu.selected_entry)
			event_loop.stop
		ensure
			next_scene_set: next_scene = menu.scenes @ (menu.selected_entry)
		end
		
	on_option_select is
				-- What to do when an option is selected
			do
				-- Since we don't want to do anything when return is hit
				-- on an option menu, we need this dummy procedure that
				-- does nothing
				-- TODO: better way ??
			end

feature -- Attributes

	menu: NORMAL_MENU
		-- The menu

	option_menus: HASH_TABLE [OPTION_MENU, INTEGER]
		-- The option menus for selecting options
		
	active_menu: INTEGER
		-- Index of active menu

feature {NONE} -- Implementation

	add_option_menu (a_list: ARRAYED_LIST [STRING]; a_callback: PROCEDURE [ANY, TUPLE]; an_x, a_y: INTEGER) is
			-- Add an option menu to the scene
		require
			a_list_not_void: a_list /= Void
			a_list_not_empty: not a_list.is_empty
			a_callback_not_void: a_callback /= Void
			option_menus_not_void: option_menus /= Void
		do
			option_menus.extend (create {OPTION_MENU}.make_with_default_fonts (a_callback), option_menus.count + 1)
			from
				a_list.start
			until
				a_list.after
			loop
				option_menus.item (option_menus.count).add_entry (a_list.item, Void, false)
				a_list.forth
			end
			option_menus.item (option_menus.count).set_x_y (an_x, a_y)
			option_menus.item (option_menus.count).show_pics
			option_menus.item (option_menus.count).deactivate
		ensure
			option_menu_added: option_menus.count = old option_menus.count + 1
--			option_menu_positioned: option_menus.item (option_menus.count).x = an_x and option_menus.item (option_menus).y = a_y
		end

	display_option_menus is
			-- Display the option menus of the scene
		require
			option_menus_not_void: option_menus /= Void
		do
			from
				option_menus.start
			until
				option_menus.after
			loop
				option_menus.item_for_iteration.deactivate
				main_container.extend (option_menus.item_for_iteration)
				option_menus.forth
			end
		end
		
end
