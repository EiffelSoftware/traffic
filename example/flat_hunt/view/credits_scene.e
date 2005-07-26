indexing
	description: "Scene that displays the credits."
	author: "Ursina Caluori, ucaluori@student.ethz.ch"
	date: "$Date$"
	revision: "$Revision$"

class
	CREDITS_SCENE
inherit
	MENU_SCENE
		redefine
			initialize_scene
		end

create
	make
	
feature -- Initialization

	initialize_scene is
			-- Build 'main_container' containing the startup scene
		local
			background_box: STATUS_BOX
			inner_boxes: HASH_TABLE [STATUS_BOX, INTEGER]
			i: INTEGER
		do
			Precursor

			menu.add_entry ("back", start_menu_scene, true)
			menu.set_x_y ((Window_width - 100) // 2, Window_height - 100)
			main_container.extend (menu)

			create background_box.make_from_coordinates (50, 160, Window_width - 50, Window_height - 100, "credits")
			background_box.set_title_font (menu_font)
			background_box.set_color (menu_color)
			background_box.set_opacity (70)
			main_container.extend (background_box)			

			create inner_boxes.make (0)
			inner_boxes.extend (create {STATUS_BOX}.make_at_position (background_box.box.x + 50, background_box.box.y + 60, "Code"), 1)
			inner_boxes.extend (create {STATUS_BOX}.make_at_position (background_box.box.x + 430, background_box.box.y + 100, "Graphics"), 2)
			inner_boxes.extend (create {STATUS_BOX}.make_at_position (background_box.box.x + 620, background_box.box.y + 200, "Sound"), 3)
			inner_boxes.extend (create {STATUS_BOX}.make_at_position (background_box.box.x + 200, background_box.box.height, "Created with"), 4)
			inner_boxes.extend (create {STATUS_BOX}.make_at_position (background_box.box.x + 170, background_box.box.y + 250, "Assistant"), 5)

			inner_boxes.item (1).add_line ("Ursina Caluori")
			inner_boxes.item (1).add_line ("   Marcel Kessler   ")  -- TODO: remove bug in STATUS_BOX, that requires this nonsense
			inner_boxes.item (1).add_line ("Rolf Bruderer")
			
			inner_boxes.item (2).add_line ("Ursina Caluori")
			
			inner_boxes.item (3).add_line ("teh s0unDm4st0r")
			
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

--				inner_boxes.item (i).box.set_size (inner_boxes.item (i).max_line_width + 2 * inner_boxes.item (i).horizontal_margin, inner_boxes.item (i).text_height +  + 2 * inner_boxes.item (i).vertical_margin)

				main_container.extend (inner_boxes.item (i))
				inner_boxes.forth
				i := i + 1
			end
		ensure then
			menu_not_void: menu /= Void
		-- TODO: other postconditions ?
		end

end
