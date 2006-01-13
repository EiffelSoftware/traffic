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
			background_box: TEXT_BOX
			inner_boxes: LINKED_LIST [TEXT_BOX]
		do
			Precursor
			
			-- Build menu.
			menu.add_entry ("back", agent back_callback, True)
			menu.set_x_y ((Window_width - 100) // 2, Window_height - 70)
			main_container.extend (menu)

			-- Build big background box.
			create background_box.make_from_coordinates (Margin, 120, Window_width - Margin, Window_height - 120, "credits")
			background_box.set_title_font (theme.Menu_font)
			background_box.set_line_color (theme.Menu_color)
			background_box.set_fill_color (theme.Menu_color)
			background_box.set_opacity (70)
			main_container.extend (background_box)			

			-- Build inner status boxes.
			create inner_boxes.make
			inner_boxes.extend (create {TEXT_BOX}.make_at_position (background_box.x + 20, background_box.y + 40, "Code"))
			inner_boxes.last.set_text ("Ursina Caluori%NMarcel Kessler%NRolf Bruderer")	
			inner_boxes.extend (create {TEXT_BOX}.make_at_position (background_box.x + 280, background_box.y + 80, "Graphics"))
			inner_boxes.last.set_text ("Ursina Caluori")
			inner_boxes.extend (create {TEXT_BOX}.make_at_position (background_box.x + 530, background_box.y + 40, "Sound"))
			inner_boxes.last.set_text ("Marc Ammann")
			inner_boxes.extend (create {TEXT_BOX}.make_at_position (background_box.x + 100, background_box.height - 80, "Created with"))
			inner_boxes.last.set_text ("TRAFFIC by Michela Pedroni and others%NEiffelMedia by Till G. Bay and others%NEiffel by Bertrand Meyer%NPhotoshop")
			inner_boxes.extend (create {TEXT_BOX}.make_at_position (background_box.x + 507, background_box.y + 125, "Assistant"))
			inner_boxes.last.set_text ("Michela Pedroni")

			-- Set visualization details for all inner boxes and display them.
			from
				inner_boxes.start
			until
				inner_boxes.after
			loop	
				inner_boxes.item.set_auto_resize (True)
				inner_boxes.item.set_font (theme.Small_credits_font)
				inner_boxes.item.set_title_font (theme.Small_menu_font)
				inner_boxes.item.set_line_color (theme.Credits_color)
				inner_boxes.item.set_fill_color (theme.Credits_color)
				inner_boxes.item.set_opacity (50)
				inner_boxes.item.set_alignment (theme.Centered)
				inner_boxes.item.set_padding (-20)				
				
				main_container.extend (inner_boxes.item)
				inner_boxes.forth
			end			
		ensure then
			menu_not_empty: not menu.is_empty
		end

feature -- Event Handling

	handle_key_down_event (a_keyboard_event: EM_KEYBOARD_EVENT) is
			-- Handle keyboard events.
		do
			Precursor {MENU_SCENE} (a_keyboard_event)
			menu.handle_key_down_event (a_keyboard_event)
		end

feature {NONE} -- Implementation

	back_callback is
		-- Callback for back button.
		do
			next_scene := create {START}.make_scene
			event_loop.stop
		end

end
