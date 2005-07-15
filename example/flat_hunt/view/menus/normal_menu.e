indexing
	description: ""
	author: "Ursina Caluori, ucaluori@student.ethz.ch"
	date: "$Date$"
	revision: "$Revision$"

class
	NORMAL_MENU

inherit
	MENU

create
	make_with_default_fonts, make_with_custom_fonts		
	
feature {NONE} -- Implementation
	
	update_entry (i: INTEGER) is
			-- Update entry at position `i'
		require else
			entries_has_entry_i: entries.has (i)
		do
			if i = selected_entry then
				entries.item (i).set_font (selected_font)
			else
				entries.item (i).set_font (font)
			end
			display_entry (i)
		ensure then
			-- TODO: font_set: ???
		end

	set_entry_position (i: INTEGER) is
			-- Set position of entry at index `i'
		local
			next_y: INTEGER
		do
			if i = 1 then
				next_y := 0
			else
				next_y := entries.item (i - 1).y + entries.item (i).height // 2
			end
			if alignment = Left then
				entries.item (i).set_x_y (0, next_y)
			elseif alignment = Right then
				entries.item (i).set_x_y (max_entry_width - entries.item (i).width, next_y)
			else -- alignment = Centered
				entries.item (i).set_x_y ((max_entry_width - entries.item (i).width) // 2, next_y)
			end		
		ensure then
			-- TODO: postcondition to ensure position of entries.item (i) set correctly
			-- How ???
		end
end
