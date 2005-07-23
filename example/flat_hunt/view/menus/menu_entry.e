indexing
	description: "Objects that ..."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

-- TODO: Is this class really necessary?
-- pro: 
--		more customizable (e.g. possible to add pics to a menu entry)
-- con: 
--		could just use a EM_STRING instead, if no pictures and the like are used in a menu entry
-- 
-- Conclusion: neat but essentially unnecessary -> Remove! and use EM_STRING instead

class
	MENU_ENTRY

inherit
	EM_DRAWABLE_CONTAINER[EM_DRAWABLE]

create
	make_from_string
	
feature -- Initialization
	
	make_from_string (a_text: STRING; a_font: EM_FONT) is
			-- Create menu entry from string `a_text'
		require
			a_text_not_void: a_text /= Void
			a_font_not_void: a_font /= Void
		do
			font := a_font
			text := create {EM_STRING}.make (a_text, font)
			make
			extend (text)
		ensure
			font_set: font = a_font
			text_not_void: text /= Void
			text_added: has (text)
		end

feature -- Access

	set_font (a_font: EM_FONT) is
			-- Set font for this entry
		require
			a_font_not_void: a_font /= Void
		do
			font := a_font
			text.set_font (font)
			update
		ensure
			font_set: font = a_font
			text_font_set: text.font = font
		end
		
	update is
			-- Update this entry
		do			
			replace (text, 1)
		end


feature -- Attributes
		
	font: EM_FONT
		-- Font to be used for this entry
		
	text: EM_STRING
		-- Text to be displayed for this entry

end
