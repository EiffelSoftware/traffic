indexing
	description: "Menu with all menu entries visible. Use up and down arrow keys to navigate."
	date: "$Date$"
	revision: "$Revision$"

class
	NORMAL_MENU

inherit
	MENU

create
	make_with_default_fonts, make_with_custom_fonts		
	
feature {NONE} -- Implementation

	set_entry_position (i: INTEGER) is
			-- Set position of entry at index `i'.
		local
			next_y: INTEGER
		do
			-- Calculate and set y position of entry.
			if i = 1 then
				next_y := 0
			else
				next_y := item (i - 1).y + item (i).height // 2
			end
			item (i).set_y (next_y)
			
			-- Calculate and set x position of entry based on `alignment'.
			if alignment = Left then
				item (i).set_x (0)
			elseif alignment = Right then
				item (i).set_x (max_entry_width - item (i).width)
			else -- alignment = Centered.
				item (i).set_x ((max_entry_width - item (i).width) // 2)
			end		
		ensure then
			item_y_set: i = 1 implies item (i).y = 0
						i /= 1 implies item (i).y = item (i - 1).y + item (i).height // 2
			item_x_set:	alignment = Left implies item (i).x = 0
						alignment = Right implies item (i).x = max_entry_width - item (i).width
						not ((alignment = Left) or (alignment = Right)) implies item (i).x = (max_entry_width - item (i).width) // 2
		end
		
end
