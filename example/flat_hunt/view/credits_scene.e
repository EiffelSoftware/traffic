indexing
	description: "Scene that displays the credits."
	date: "$Date$"
	revision: "$Revision$"

class
	CREDITS_SCENE
inherit
	MENU_SCENE
		redefine
			initialize_scene, handle_key_down_event
		end

create
	make_scene
	
feature -- Initialization

	initialize_scene is
			-- Build 'main_container' containing the startup scene
		local
			background_box: STATUS_BOX
			inner_boxes: HASH_TABLE [STATUS_BOX, INTEGER]
			i: INTEGER
		do
			Precursor

			menu.add_entry ("back", agent back_callback, true)
			menu.set_x_y ((Window_width - 100) // 2, Window_height - 100)
			main_container.extend (menu)

			create background_box.make_from_coordinates (50, 95, Window_width - 50, Window_height - 165, "credits")
			background_box.set_title_font (menu_font)
			background_box.set_color (menu_color)
			background_box.set_opacity (70)
			main_container.extend (background_box)			

			create inner_boxes.make (0)
			inner_boxes.extend (create {STATUS_BOX}.make_at_position (background_box.x + 40, background_box.y + 100, "Code"), 1)
			inner_boxes.extend (create {STATUS_BOX}.make_at_position (background_box.x + 380, background_box.y + 130, "Graphics"), 2)
			inner_boxes.extend (create {STATUS_BOX}.make_at_position (background_box.x + 620, background_box.y + 230, "Sound"), 3)
			inner_boxes.extend (create {STATUS_BOX}.make_at_position (background_box.x + 200, background_box.height - 100, "Created with"), 4)
			inner_boxes.extend (create {STATUS_BOX}.make_at_position (background_box.x + 150, background_box.y + 280, "Assistant"), 5)

			inner_boxes.item (1).add_line ("Ursina Caluori")
			inner_boxes.item (1).add_line ("Marcel Kessler")
			inner_boxes.item (1).add_line ("Rolf Bruderer")
			
			inner_boxes.item (2).add_line ("Ursina Caluori")
			
			inner_boxes.item (3).add_line ("under construction")
			
			inner_boxes.item (4).add_line ("TRAFFIC by Michela Pedroni and others")
			inner_boxes.item (4).add_line ("EiffelMedia by Till G. Bay and others")
			inner_boxes.item (4).add_line ("Eiffel by Bertrand Meyer")
			inner_boxes.item (4).add_line ("Photoshop")
			
			inner_boxes.item (5).add_line ("Michela Pedroni")
			
			i := 1
			from
				inner_boxes.start
			until
				inner_boxes.after
			loop	
				inner_boxes.item (i).set_auto_resize (true)
				inner_boxes.item (i).set_font (small_credits_font)
				inner_boxes.item (i).set_title_font (big_credits_font)
				inner_boxes.item (i).title_font.set_color (menu_color)
				inner_boxes.item (i).set_color (credits_color)
				inner_boxes.item (i).set_opacity (50)
				inner_boxes.item (i).set_alignment (Centered)
				
				main_container.extend (inner_boxes.item (i))
				inner_boxes.forth
				i := i + 1
			end
		ensure then
			menu_not_void: menu /= Void
		-- TODO: other postconditions ?
		end

feature -- Event Handling

	handle_key_down_event (a_keyboard_event: EM_KEYBOARD_EVENT) is
			-- Handle keyboard events
		do
			Precursor {MENU_SCENE} (a_keyboard_event)
			
			menu.handle_key_down_event (a_keyboard_event)
		end

	back_callback is
		-- Callback for back button
		require else
			last_scene_not_void: last_scene /= Void
		do
			next_scene := last_scene
			event_loop.stop
		end

end
