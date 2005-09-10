indexing
	description: "Menu with only the currently selected entry visible. Use right and left arrow keys to navigate."
	date: "$Date$"
	revision: "$Revision$"

class
	OPTION_MENU

inherit
	MENU
		redefine
			make_with_default_fonts, handle_key_down_event, draw
		end

create
	make_with_default_fonts, make_with_custom_fonts		

feature -- Initialization

	make_with_default_fonts is
			-- Create menu with default fonts
		do
			make_with_custom_fonts (small_menu_font, small_menu_selected_font)
		end
		
feature -- Event handling

	handle_key_down_event (a_keyboard_event: EM_KEYBOARD_EVENT) is
			-- Handle keyboard events.
		do
			if active then
				if a_keyboard_event.key = sdlk_left then
					selected_entry := selected_entry - 1
					if selected_entry < 1 then
						selected_entry := count
					end
				elseif a_keyboard_event.key = sdlk_right then
					selected_entry := selected_entry + 1
					if selected_entry > count then
						selected_entry := 1						
					end
				elseif a_keyboard_event.key = sdlk_return then
					on_select				
				end
				update
			end
		end

feature {NONE} -- Implementation

	set_entry_position (i: INTEGER) is
			-- Set position of entry at index `i'
		require else
			entries_has_entry_i: has (item (i))			
		do
			if alignment = Left then
				item (i).set_x_y (0, 0)
			elseif alignment = Right then
				item (i).set_x_y (max_entry_width - item (i).width, 0)
			else -- alignment = Centered
				item (i).set_x_y ((max_entry_width - item (i).width) // 2, 0)
			end	
		ensure then
			-- TODO: entry_i_positioned: ???
		end
		
	draw (a_surface: EM_SURFACE) is
			-- Draw `Current' to `a_surface'
		local
			cursor: DS_LINKED_LIST_CURSOR [MENU_ENTRY]
			translation: EM_VECTOR_2D
			old_clipping_area, clipping_area: EM_ORTHOGONAL_RECTANGLE
		do
			-- Translate coordinate system for drawing all contained objects.
			create translation.make (x, y)
			a_surface.translate_coordinates (translation)
			
			-- Change clipping area to clip all objects to container boundaries.
			old_clipping_area := a_surface.coordinate_area
			create clipping_area.make_from_coordinates (0, 0, width, height)
			clipping_area := clipping_area.intersection (old_clipping_area)
			a_surface.clip_coordinates (clipping_area)			
			
			-- Draw all contained objects.
			cursor := new_cursor
			from
				cursor.start
			until
				cursor.off
			loop
				if cursor.index = selected_entry then
					a_surface.draw_object (cursor.item)	
				end
				cursor.forth				
			end	
			
			-- Reset coordinate system.
			a_surface.clip_coordinates (old_clipping_area)
			a_surface.translate_coordinates (- translation)			
		end	
	
end
