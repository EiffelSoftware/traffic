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
			make_with_custom_fonts (Menu_font, Menu_selected_font)
		end		
		
	make_with_custom_fonts (a_font: like font; a_selected_font: like selected_font) is
			-- Create menu with user specified fonts.
		require
			a_font_exists: a_font /= Void
			a_selected_exists: a_selected_font /= Void
		do
			-- Set defaults.
			active := True
			alignment := Centered
			max_entry_width := 0
			selected_entry := 1
			
			make
			font := a_font
			selected_font := a_selected_font
		ensure
			font_set: font = a_font
			selected_font_set: selected_font = a_selected_font
		end

feature -- Access

	selected_entry: INTEGER
			-- Index of selected entry in menu.
			
	max_entry_width: INTEGER
			-- Maximum width of menu entries.
			
feature -- Status Setting

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

feature -- Basic Operations

	add_entry (a_text: STRING; a_callback: PROCEDURE [ANY, TUPLE]; selected: BOOLEAN) is
			-- Add an entry to the menu.
		require
			a_text_exists: a_text /= Void
		do			
			extend (create {MENU_ENTRY}.make_from_string (a_text, font, selected_font, a_callback))
			
			-- Special handling if entry selected.
			if selected then
				last.update (True)
				selected_entry := count
			end
			
			-- Update max_entry_width.
			if last.width > max_entry_width then 
				max_entry_width := last.width
			end

			-- Update entries.
			update_positions
			update
		ensure
			entry_added: count = old count + 1
		end

	deactivate is
			-- Deactivate menu.
		do
			active := False
			from
				start
			until
				after
			loop
				item_for_iteration.update (False)
				forth
			end
		ensure
			active_set: active = False
		end

	activate is
			-- Activate menu.
		do
			active := True
			item (selected_entry).update (True)
		ensure
			active_set: active = True
		end					

feature -- Event handling
		
	handle_key_down_event (a_keyboard_event: EM_KEYBOARD_EVENT) is
			-- Handle keyboard events.
		do
			if active then
				if a_keyboard_event.key = Sdlk_up then
					-- Deselect current entry, select previous entry.
					selected_entry := selected_entry - 1
					if selected_entry < 1 then
						selected_entry := count
					end
				elseif a_keyboard_event.key = Sdlk_down then
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
		
	on_select is
			-- Action taken when entry selected.
		do
			item (selected_entry).call
		end

feature {NONE} -- Implementation

	alignment: INTEGER
			-- Alignment of entries.

	font: EM_FONT
			-- Font for unselected items.
	
	selected_font: EM_FONT
			-- Font for selected item.

	active: BOOLEAN
			-- Is the menu currently active?

	update is
			-- Update whole menu.
		local
			i: INTEGER
		do
			from
				start
				i := 1
			until
				after
			loop
				if i = selected_entry then
					item (i).update (True)
				else
					item (i).update (False)
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
