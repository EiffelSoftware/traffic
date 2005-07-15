indexing
	description: "Objects that ..."
	author: "Ursina Caluori, ucaluori@student.ethz.ch"
	date: "$Date$"
	revision: "$Revision$"

deferred class
	
	MENU_SCENE

inherit
	
	ESDL_SCENE
		redefine
			initialize_scene, handle_key_down_event
		end
	
	SHARED_SCENES
		undefine
			default_create
		end
		
	ESDL_BITMAP_FACTORY
		undefine
			default_create
		end
		
	THEME
		undefine
			default_create
		end

feature -- Initialization		

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

feature -- Attributes

	menu: NORMAL_MENU
		-- The menu
		

end
