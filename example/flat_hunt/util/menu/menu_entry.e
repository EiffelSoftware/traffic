indexing
	description: "Customizable menu entry."
	date: "$Date$"
	revision: "$Revision$"

class
	MENU_ENTRY

inherit
	EM_DRAWABLE_CONTAINER [EM_DRAWABLE]

create
	make_from_string
	
feature -- Initialization
	
	make_from_string (a_text: STRING; a_font: like font; a_selected_font: like selected_font; a_callback: like callback) is
			-- Create menu entry from string `a_text'.
		require
			a_text_exists: a_text /= Void
			a_font_exists: a_font /= Void
			a_selected_font_exists: a_selected_font /= Void
		do
			make
			font := a_font
			selected_font := a_selected_font
			callback := a_callback
			
			-- Create and display `text'.
			create text.make (a_text, font)
			extend (text)			
		ensure
			font_set: font = a_font
			selected_font_set: selected_font = a_selected_font			
			callback_set: callback = a_callback			
			text_not_void: text /= Void
			text_added: has (text)
		end

feature -- Access

	update (selected: BOOLEAN) is
			-- Update this entry.
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

	call is
			-- Call `callback'.
		do
			if callback /= Void then
				callback.call ([])
			end
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

invariant
	font_exists: font /= Void
	selected_font_exists: selected_font /= Void
	text_exists: text /= Void
end
