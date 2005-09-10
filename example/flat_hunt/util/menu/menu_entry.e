indexing
	description: "Customizable menu entry"
	date: "$Date$"
	revision: "$Revision$"

class
	MENU_ENTRY

inherit
	EM_DRAWABLE_CONTAINER [EM_DRAWABLE]

create
	make_from_string
	
feature -- Initialization
	
	make_from_string (a_text: STRING; a_font, a_selected_font: EM_FONT; a_callback: PROCEDURE [ANY, TUPLE]) is
			-- Create menu entry from string `a_text' with callback `a_callback'
		require
			a_text_exists: a_text /= Void
			a_font_exists: a_font /= Void
			a_selected_font_exists: a_selected_font /= Void
		do
			set_font (a_font)
			set_selected_font (a_selected_font)
			text := create {EM_STRING}.make (a_text, font)
			callback := a_callback
			make
			extend (text)
		ensure
			font_set: font = a_font
			text_not_void: text /= Void
			text_added: has (text)
			callback_set: callback = a_callback
		end

feature -- Access

	set_font (a_font: EM_FONT) is
			-- Set font for this entry
		require
			a_font_not_void: a_font /= Void
		do
			font := a_font
		ensure
			font_set: font = a_font
		end

	set_selected_font (a_font: EM_FONT) is
			-- Set font for this entry
		require
			a_font_not_void: a_font /= Void
		do
			selected_font := a_font
		ensure
			selected_font_set: selected_font = a_font
		end		

	update (selected: BOOLEAN) is
			-- Update this entry
		do
			if selected then
				text.set_font (selected_font)
			else
				text.set_font (font)
			end
		ensure 
			font_set: selected implies text.font = selected_font
					  not selected implies text.font = font
		end

feature -- Attributes
		
	font: EM_FONT
		-- Font to be used for this entry
	
	selected_font: EM_FONT
		-- Font to be used for this entry when selected
		
	text: EM_STRING
		-- Text to be displayed for this entry
		
	callback: PROCEDURE [ANY, TUPLE]
		-- Callback that gets called when menu entry selected

end
