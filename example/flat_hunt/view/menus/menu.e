indexing
	description: "Menu with basic features. Every custom menu should inherit from this class."
	date: "$Date$"
	revision: "$Revision$"

deferred class
	
	MENU

inherit
	
	EM_DRAWABLE_CONTAINER [MENU_ENTRY]
	
	THEME
		undefine
			default_create, copy, is_equal
		end
		
feature -- Initialization
		
	make_with_default_fonts is
			-- Create menu with default fonts.
		do
			make_with_custom_fonts (menu_font, menu_selected_font)
		end		
		
	make_with_custom_fonts (a_font, a_selected_font: EM_FONT) is
			-- Create menu with user specified fonts.
		require
			a_font_exists: a_font /= Void
			a_selected_exists: a_selected_font /= Void
		do
			make
			font := a_font
			selected_font := a_selected_font
			
			-- Set defaults.
			active := true
			alignment := Centered
			max_entry_width := 0
			selected_entry := 1
		ensure
			font_set: font = a_font
			selected_font_set: selected_font = a_selected_font
		end
		

feature -- Access

	add_entry (a_text: STRING; a_callback: PROCEDURE [ANY, TUPLE]; selected: BOOLEAN) is
			-- Add an entry to the menu.
		require
			a_text_exists: a_text /= Void
		do			
			extend (create {MENU_ENTRY}.make_from_string (a_text, font, selected_font, a_callback))
			if selected then
				last.update (true)
				selected_entry := count
			end

			if last.width > max_entry_width then 
				max_entry_width := last.width
			end

			update_positions
			update
		ensure
			entry_added: count = old count + 1
		end

	deactivate is
			-- Deactivate menu.
		do
			active := false
			from
				start
			until
				after
			loop
				item_for_iteration.update (false)
				forth
			end
		end

	activate is
			-- Activate menu.
		do
			active := true
			item (selected_entry).update (true)
		end		

feature -- Settings

	set_alignment (an_alignment: like alignment) is
			-- Set alignment of entries.
		require
			an_alignment_valid: an_alignment >= 0 and an_alignment < 4
		do
			alignment := an_alignment
			update_positions
		ensure
			alignment_set: alignment = an_alignment
		end

feature -- Event handling
		
	handle_key_down_event (a_keyboard_event: EM_KEYBOARD_EVENT) is
			-- Handle keyboard events.
		do
			if active then
				if a_keyboard_event.key = sdlk_up then
					selected_entry := selected_entry - 1
					if selected_entry < 1 then
						selected_entry := count
					end
				elseif a_keyboard_event.key = sdlk_down then
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
		
	on_select is
			-- Action taken when entry selected.
		do
			if item (selected_entry).callback /= Void then
				item (selected_entry).callback.call([])
			end
		end


feature -- Attributes

	selected_entry: INTEGER
		-- Index of selected entry in menu.

	alignment: INTEGER
		-- Alignment of entries.

	font: EM_FONT
		-- Font for unselected items.
	
	selected_font: EM_FONT
		-- Font for selected item.
	
	max_entry_width: INTEGER
		-- Maximum width of menu entries.

	active: BOOLEAN
		-- Is the menu currently active?


feature {NONE} -- Implementation

	update is
			-- Update whole menu.
		local
			i: INTEGER
		do
			i := 1
			from
				start
			until
				after
			loop
				if i = selected_entry then
					item (i).update (true)
				else
					item (i).update (false)
				end
				forth
				i := i + 1
			end			
		end

	set_entry_position (i: INTEGER) is
			-- Set position of entry at index `i'.
		require
			valid_index: i > 0 and i <= count
		deferred
		end
		
	update_positions is
			-- Update positions of all entries according to current alignment.
		local
			i: INTEGER
		do
			from
				i := 1
			until
				i > count
			loop
				set_entry_position (i)
				i := i + 1
			end
		end
		
invariant
	font_exists: font /= Void
	selected_font_exists: selected_font /= Void
	alignment_valid: alignment >= Left and alignment <= Centered
end
