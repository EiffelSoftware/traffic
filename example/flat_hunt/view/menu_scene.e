indexing
	description: "[
					Scene with basic menu features. 
					Every scene that contains a menu/menus should inherit from this class.
				]"
	date: "$Date$"
	revision: "$Revision$"

deferred class
	
	MENU_SCENE

inherit
	FLAT_HUNT_SCENE
		redefine
			make_scene, handle_key_down_event
		end

feature -- Initialization		

	make_scene is
			-- Creation procedure.
		do
			Precursor
			create menu.make_with_default_fonts
			create option_menus.make (0)
		end	

	initialize_scene is
			-- Initialize scene.
		do
			main_container.extend (Background_picture)
			main_container.extend (Flathunt_logo)
		ensure then
			extended: main_container.has (Background_picture) and main_container.has (Flathunt_logo)
		end

feature -- Access

	menu: NORMAL_MENU
		-- The menu.

	option_menus: HASH_TABLE [OPTION_MENU, INTEGER]
		-- The option menus for selecting options.
		
	active_menu: INTEGER
		-- Index of active menu.

feature -- Event handling		

	handle_key_down_event (a_keyboard_event: EM_KEYBOARD_EVENT) is
			-- Handle keyboard events.
		do
			Precursor {FLAT_HUNT_SCENE} (a_keyboard_event)
		end

feature {NONE} -- Implementation

	add_option_menu (a_list: ARRAYED_LIST [STRING]; an_x, a_y: INTEGER) is
			-- Add an option menu to the scene.
		require
			a_list_exists: a_list /= Void
			a_list_not_empty: not a_list.is_empty
			option_menus_exist: option_menus /= Void
		do
			option_menus.extend (create {OPTION_MENU}.make_with_default_fonts, option_menus.count + 1)
			from
				a_list.start
			until
				a_list.after
			loop
				option_menus.item (option_menus.count).add_entry (a_list.item, Void, False)
				a_list.forth
			end
			option_menus.item (option_menus.count).set_x_y (an_x, a_y)
			option_menus.item (option_menus.count).deactivate
			main_container.extend (option_menus.item (option_menus.count))
			add_arrow_pics (option_menus.count)
		ensure
			option_menu_added: option_menus.count = old option_menus.count + 1
			option_menu_displayed: main_container.has (option_menus.item (option_menus.count))
		end	

	add_arrow_pics (i: INTEGER) is
			-- Create arrow pics for option menu `i'.
		local
			left_arrow_pic: EM_DRAWABLE
			right_arrow_pic: EM_DRAWABLE
			left_x, right_x, left_y, right_y: INTEGER
		do
			-- Create arrow pics.
			bitmap_factory.create_bitmap_from_image (Left_arrow)
			left_arrow_pic := bitmap_factory.last_bitmap
			bitmap_factory.create_bitmap_from_image (Right_arrow)
			right_arrow_pic := bitmap_factory.last_bitmap				
			
			-- Calculate positions for arrow pics.
			left_x := option_menus.item (i).x - 2 * left_arrow_pic.width
			right_x := option_menus.item (i).x + option_menus.item (i).max_entry_width + right_arrow_pic.width
			left_y := option_menus.item (i).y + (option_menus.item (i).height - left_arrow_pic.height) // 2
			right_y := option_menus.item (i).y + (option_menus.item (i).height - right_arrow_pic.height) // 2
			
			-- Set positions of arrow pics.
			left_arrow_pic.set_x_y (left_x, left_y)
			right_arrow_pic.set_x_y (right_x, right_y)
			
			-- Display arrow pics.
			main_container.extend (left_arrow_pic)
			main_container.extend (right_arrow_pic)
		end

invariant
	menu_exists: menu /= Void
	option_menus_exist: option_menus /= Void
		
end
