indexing
	description: "Menu with menu entries all visible. Use up and down arrow keys to navigate."
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
			-- Set position of entry at index `i'
		local
			next_y: INTEGER
		do
			if i = 1 then
				next_y := 0
			else
				next_y := item (i - 1).y + item (i).height // 2
			end
			if alignment = Left then
				item (i).set_x_y (0, next_y)
			elseif alignment = Right then
				item (i).set_x_y (max_entry_width - item (i).width, next_y)
			else -- alignment = Centered
				item (i).set_x_y ((max_entry_width - item (i).width) // 2, next_y)
			end		
		ensure then
			-- TODO: postcondition to ensure position of item (i) set correctly
			-- How ???
		end
end
