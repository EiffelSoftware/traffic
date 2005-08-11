indexing
	description: "Customizable menu entry"
	date: "$Date$"
	revision: "$Revision$"

class
	MENU_ENTRY

inherit
	EM_DRAWABLE_CONTAINER[EM_DRAWABLE]

create
	make_from_string
	
feature -- Initialization
	
	make_from_string (a_text: STRING; a_font: EM_FONT; a_callback: PROCEDURE [ANY, TUPLE]) is
			-- Create menu entry from string `a_text' with callback `a_callback'
		require
			a_text_not_void: a_text /= Void
			a_font_not_void: a_font /= Void
		do
			font := a_font
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
			update
		ensure
			font_set: font = a_font
			text_font_set: text.font = font
		end
		
	update is
			-- Update this entry
		do			
			text.set_font (font)
			replace (text, 1)
		end


feature -- Attributes
		
	font: EM_FONT
		-- Font to be used for this entry
		
	text: EM_STRING
		-- Text to be displayed for this entry
		
	callback: PROCEDURE [ANY, TUPLE]
		-- Callback that gets called when menu entry selected

end
