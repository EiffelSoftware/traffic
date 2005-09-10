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
			make_with_custom_fonts (Small_menu_font, Small_menu_selected_font)
		end
		
feature -- Event handling

	handle_key_down_event (a_keyboard_event: EM_KEYBOARD_EVENT) is
			-- Handle keyboard events.
		do
			if active then
				if a_keyboard_event.key = Sdlk_left then
					-- Deselect current entry, select previous entry.					
					selected_entry := selected_entry - 1
					if selected_entry < 1 then
						selected_entry := count
					end
				elseif a_keyboard_event.key = Sdlk_right then
					-- Deselect current entry, select next entry.					
					selected_entry := selected_entry + 1
					if selected_entry > count then
						selected_entry := 1
					end
				elseif a_keyboard_event.key = Sdlk_return then
					on_select				
				end
				update
			end
		end

feature {NONE} -- Implementation

	set_entry_position (i: INTEGER) is
			-- Set position of entry at index `i'.
		require else
			entries_has_entry_i: has (item (i))			
		do
			-- Set y position of entry.
			item (i).set_y (0)
			
			-- Calculate and set x position of entry based on `alignment'.
			if alignment = Left then
				item (i).set_x (0)
			elseif alignment = Right then
				item (i).set_x (max_entry_width - item (i).width)
			else -- alignment = Centered.
				item (i).set_x ((max_entry_width - item (i).width) // 2)
			end	
		ensure then
			item_y_set: item (i).y = 0
			item_x_set:	alignment = Left implies item (i).x = 0
						alignment = Right implies item (i).x = max_entry_width - item (i).width
						not ((alignment = Left) or (alignment = Right)) implies item (i).x = (max_entry_width - item (i).width) // 2			
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
			
			-- Draw all contained entries that are visible.
			cursor := new_cursor
			from
				cursor.start
			until
				cursor.off
			loop
				-- Draw only visible entries.
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
