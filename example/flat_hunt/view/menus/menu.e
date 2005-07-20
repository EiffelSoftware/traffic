indexing
	description: ""
	author: "Ursina Caluori, ucaluori@student.ethz.ch"
	date: "$Date$"
	revision: "$Revision$"

deferred class
	
	MENU

inherit
	
	ESDL_DRAWABLE_CONTAINER [ESDL_DRAWABLE]
	
	THEME
		undefine
			default_create, copy, is_equal
		end
		
feature -- Initialization
		
	make_with_default_fonts(a_callback: PROCEDURE [ANY, TUPLE]) is
			-- Create menu with default fonts
		require
			a_callback_not_void: a_callback /= Void
		do
			make_with_custom_fonts (menu_font, menu_selected_font, a_callback)
		end
		
		
	make_with_custom_fonts (a_font, a_selected_font: ESDL_FONT; a_callback: PROCEDURE [ANY, TUPLE]) is
			-- Create menu with user specified fonts
		require
			a_font_not_void: a_font /= Void
			a_selected_font_not_void: a_selected_font /= Void
			a_callback_not_void: a_callback /= Void
		do
			make
			font := a_font
			selected_font := a_selected_font	
			callback := a_callback
			
			active := true
			alignment := Centered
			selected_entry := 1
			next_index := 1
			max_entry_width := 0
			create entries.make (0)
			create scenes.make (0)
		ensure
			font_set: font = a_font
			selected_font_set: selected_font = a_selected_font
			callback_set: callback = a_callback
		-- TODO: ensure of entries /= Void and scenes /= Void not necessary because of
		-- class invariant, right?
		end
		

feature -- Access

	add_entry (a_text: STRING; a_scene: ESDL_SCENE; selected: BOOLEAN) is
			-- Add an entry to the menu
		require
			a_text_not_void: a_text /= Void
		do			
			if selected then
				entries.extend (create {MENU_ENTRY}.make_from_string (a_text, selected_font), next_index)
				selected_entry := next_index
			else
				entries.extend (create {MENU_ENTRY}.make_from_string (a_text, font), next_index)			
			end

			scenes.extend (a_scene, next_index)	
			
			if entries.item (next_index).width > max_entry_width then
				max_entry_width := entries.item (next_index).width
			end
			
			set_entry_position (next_index)
			next_index := next_index + 1
			update
		ensure
			entries_updated: entries.count = old entries.count + 1
			scenes_updated: scenes.has_item (a_scene)
			next_index_updated: next_index = old next_index + 1
		end
		
	set_alignment (an_alignment: INTEGER) is
			-- Set alignment of entries
		require
			an_alignment_valid: an_alignment >= 0 and an_alignment < 4
		do
			alignment := an_alignment
			update_positions
		ensure
			alignment_set: alignment = an_alignment
		end

	deactivate is
			-- Deactivate menu
		do
			active := false
			from
				entries.start
			until
				entries.after
			loop
				entries.item_for_iteration.set_font (font)
				entries.forth
			end
		ensure
			-- TODO: postcondition to check if font set for every item in entries (necessary?) ?
		end

	activate is
			-- Activate menu
		do
			active := true
			entries.item (selected_entry).set_font (selected_font)
		ensure
			selected_entry_font_set: entries.item (selected_entry).font = selected_font
		end		
		

feature -- Event handling
		
	handle_key_down_event (a_keyboard_event: ESDL_KEYBOARD_EVENT) is
			-- Handle keyboard events.
		do
			if active then
				if a_keyboard_event.key = sdlk_up then
					selected_entry := selected_entry - 1
					if selected_entry < 1 then
						selected_entry := entries.count
					end
				elseif a_keyboard_event.key = sdlk_down then
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
		
	on_select is
			-- Actions taken when entry selected
		do
			if callback /= Void then
				callback.call([])
			end
		end


feature -- Attributes

	selected_entry: INTEGER
		-- Index of selected entry in menu

	alignment: INTEGER
		-- Alignment of entries

	next_index: INTEGER
		-- To keep track at which index the next entry will be added

	entries: HASH_TABLE [MENU_ENTRY, INTEGER]
		-- All the entries in this menu
	
	scenes: HASH_TABLE [ESDL_SCENE, INTEGER]
		-- Scenes corresponding to entries in menu

	font: ESDL_FONT
		-- Font for unselected items
	
	selected_font: ESDL_FONT
		-- Font for selected item
	
	max_entry_width: INTEGER
		-- Maximum width of menu entries
		
	callback: PROCEDURE [ANY, TUPLE]
		-- Procedure that gets called when entry selected
	
	active: BOOLEAN
		-- Is the menu currently active?


feature {NONE} -- Implementation

	update_entry (i: INTEGER) is
			-- Update entry at position i
		require
			valid_index: i > 0 and i <= entries.count
		deferred
		end

	update is
			-- Update whole menu
		local
			i: INTEGER
		do
			i := 1
			from
				entries.start
			until
				entries.after
			loop
				update_entry (i)
				entries.forth
				i := i + 1
			end			
		end

	set_entry_position (i: INTEGER) is
			-- Set position of entry at index `i'
		require
			valid_index: i > 0 and i <= entries.count
		deferred
		end
		
	update_positions is
			-- Update positions of all entries according to current alignment
		local
			i: INTEGER
		do
			from
				i := 1
			until
				i > entries.count
			loop
				set_entry_position (i)
				i := i + 1
			end
		end
		
	display_entry (i: INTEGER) is
			-- Display entry at index `i'
		require
			valid_index: i > 0 and i <= entries.count
		do
			if has (entries.item (i)) then
				replace (entries.item (i), i)
			else
				put (entries.item (i), i)
			end
		ensure
			entry_i_displayed: has (entries.item (i))
		end
		
invariant
	entries_not_void: entries /= Void
	scenes_not_void: scenes /= Void
	font_not_void: font /= Void
	selected_font_not_void: selected_font /= Void
end
