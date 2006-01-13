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
			make_scene, handle_key_down_event, initialize_scene
		end

feature -- Initialization		

	make_scene is
			-- Creation procedure.
		do
			Precursor
			create menu.make_with_default_fonts
		end	

	initialize_scene is
			-- Initialize scene.
		do
			main_container.extend (theme.Background_picture)
			main_container.extend (theme.Flathunt_logo)
		ensure then
			extended: main_container.has (theme.Background_picture) and main_container.has (theme.Flathunt_logo)
		end

feature -- Access

	menu: NORMAL_MENU
		-- The menu.

	active_menu: INTEGER
		-- Index of active menu.

feature -- Event handling		

	handle_key_down_event (a_keyboard_event: EM_KEYBOARD_EVENT) is
			-- Handle keyboard events.
		do
			Precursor {FLAT_HUNT_SCENE} (a_keyboard_event)
		end


invariant
	menu_exists: menu /= Void
end
