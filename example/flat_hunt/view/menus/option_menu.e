indexing
	description: ""
	author: "Ursina Caluori, ucaluori@student.ethz.ch"
	date: "$Date$"
	revision: "$Revision$"

class
	OPTION_MENU

inherit
	MENU
		redefine
			make_with_default_fonts, make_with_custom_fonts, add_entry, display_entry, handle_key_down_event
		end

create
	make_with_default_fonts, make_with_custom_fonts		

feature -- Initialization

	make_with_default_fonts (a_callback: PROCEDURE [ANY, TUPLE]) is
			-- Create menu with default fonts
		do
			make_with_custom_fonts (small_menu_font, small_menu_selected_font, a_callback)
		end
		

	make_with_custom_fonts (a_font, a_selected_font: ESDL_FONT; a_callback: PROCEDURE [ANY, TUPLE]) is
			-- Create menu with user specified fonts
		do
			Precursor {MENU} (a_font, a_selected_font, a_callback)
			bitmap_factory.create_bitmap_from_image (Left_arrow)
			left_arrow_pic := bitmap_factory.last_bitmap
			bitmap_factory.create_bitmap_from_image (Right_arrow)
			right_arrow_pic := bitmap_factory.last_bitmap
		end
		
feature -- Access

	add_entry (a_text: STRING; a_scene: ESDL_SCENE; selected: BOOLEAN) is
			-- Add an entry to the menu
		local
			new_left_x, new_right_x, new_y: INTEGER
		do
			Precursor {MENU} (a_text, a_scene, selected)
			
			new_y := (entries.item (entries.count).width) // 4			
			new_left_x := 0
			new_right_x := 4 * left_arrow_pic.width + max_entry_width

			left_arrow_pic.set_x_y (new_left_x, new_y)
			right_arrow_pic.set_x_y (new_right_x, new_y)
		ensure then
		-- 	TODO: why can local variables not be used in postconditions? (the lines below produced errors when compiled)
		--	left_arrow_pic_positioned: left_arrow_pic.x = new_left_x and left_arrow_pic.y = new_y
		--	right_arrow_pic_positioned: right_arrow_pic.x = new_right_x and right_arrow_pic.y = new_y
		end
		
	show_pics is
			-- Show arrow pictures
		do			
			if not has (left_arrow_pic) then
				extend (left_arrow_pic)				
			end
			if not has (right_arrow_pic) then
				extend (right_arrow_pic)
			end
		ensure
			pics_shown: has (left_arrow_pic) and has (right_arrow_pic)
		end
		
feature -- Event handling

	handle_key_down_event (a_keyboard_event: ESDL_KEYBOARD_EVENT) is
			-- Handle keyboard events.
		do
			if active then
				if a_keyboard_event.key = sdlk_left then
					selected_entry := selected_entry - 1
					if selected_entry < 1 then
						selected_entry := entries.count
					end
				elseif a_keyboard_event.key = sdlk_right then
					selected_entry := selected_entry + 1
					if selected_entry > entries.count then
						selected_entry := 1						
					end
				elseif a_keyboard_event.key = sdlk_return then
					on_select				
				end
				update
			end
		end

feature {NONE} -- Implementation

	left_arrow_pic: ESDL_DRAWABLE
		-- Picture of left arrow
		
	right_arrow_pic: ESDL_DRAWABLE
		-- Picture of right arrow
	
	update_entry (i: INTEGER) is
			-- Update entry at position i
		require else
			entries_has_entry_i: entries.has (i)
		do
			if i = selected_entry then
				entries.item (i).set_font (selected_font)
				set_entry_position (i)
				display_entry (i)
			end
		ensure then
-- TODO: violation, why?			font_set: entries.item (i).font = selected_font
		end

	set_entry_position (i: INTEGER) is
			-- Set position of entry at index `i'
		require else
			entries_has_entry_i: entries.has (i)			
		do
			if alignment = Left then
				entries.item (i).set_x_y (2 * left_arrow_pic.width, 0)
			elseif alignment = Right then
				entries.item (i).set_x_y (2 * left_arrow_pic.width + max_entry_width - entries.item (i).width, 0)
			else -- alignment = Centered
				entries.item (i).set_x_y (2 * left_arrow_pic.width + (max_entry_width - entries.item (i).width) // 2, 0)
			end	
		ensure then
			-- TODO: entry_i_positioned: ???
		end
		
	display_entry (i: INTEGER) is
			-- Display entry at index `i'
		do
			if count < 1 then
				put (entries.item (i), 1)
			else
				replace (entries.item (i), 1)
			end
		end		
		
invariant
	arrow_pics_not_void: left_arrow_pic /= Void and right_arrow_pic /= Void
	
end
