indexing
	description: "A simple Label with Text"
	date: "2005/08/31"
	revision: "1.0"

class
	TOUCH_TEXT_STATIC

inherit 
	TOUCH_UI_WIDGET
	
create
	make_with_title_and_width_and_height,
	make_with_width_and_height

feature -- Initialization
	make_with_width_and_height (a_width, a_height: INTEGER) is
		do
			widget_width := a_width;
			widget_height := a_height;
		ensure
			size_set: widget_height = a_height and widget_width = a_width
		end
		
	make_with_title_and_width_and_height (a_text: STRING; a_width, a_height: INTEGER) is
			-- 
		do
			make
			
			make_with_width_and_height (a_width, a_height)

			set_title (a_text, standard_ttf_fonts.bitstream_vera_sans (a_height // 2))
		end
		
feature -- Commands
	set_title(a_text: STRING; a_font: EM_TTF_FONT) is
		require
			a_text_not_void: a_text /= Void
			a_font_not_void: a_font /= Void
		local			
			tx, ty: INTEGER	
			text_length: INTEGER
		do
			if title /= Void then
				Current.delete (title)
			end			

			-- Build Title text.
			text_length := text_max_length (a_text, a_font, widget_width)

			create title.make (a_text.substring (1, text_length), a_font)

			-- Set text centered in box.
			tx := (widget_width - title.width) // 2
			ty := (widget_height - title.height) // 2
			title.set_x_y (tx, ty)	

			Current.extend (title)		
		end

feature -- Access
	widget_height, widget_width: INTEGER

feature {NONE} -- Implementation
	title: EM_STRING

end -- class TOUCH_TEXT_STATIC

