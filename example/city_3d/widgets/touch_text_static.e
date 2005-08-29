indexing
	description: "Objects that ..."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

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
			-- Build Background.
--			create background.make_from_coordinates (0, 0, a_width, a_height)
--			background.set_fill_color (create {EM_COLOR}.make_with_rgb (180, 180, 180))
--			Current.extend (background)

			--Build border
--			create border.make_from_position_and_size (0, 0, a_width, a_height)
--			border.set_line_color (white)
--			border.set_line_width (3)
--			border.set_filled (false)
--			Current.extend (border)		
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
			--a_font.set_color (black)
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
--	border: EM_RECTANGLE
--	background: EM_RECTANGLE

end -- class TOUCH_TEXT_STATIC

