indexing
	description: "A simple Button with Text"
	date: "2005/08/31"
	revision: "1.0"

class
	TOUCH_TEXT_BUTTON

inherit
	TOUCH_BUTTON
		redefine
			on_button_up,
			on_button_down
		end

create
	make_with_title_and_width_and_height
	
feature -- Initialization
	make_with_title_and_width_and_height (a_text: STRING; a_width, a_height: INTEGER) is
			-- Creation
		do
			make
			set_title_width_height (a_text, a_width, a_height)
		end
		
feature {NONE} -- Implementation		
	set_title_width_height (a_text: STRING; a_width, a_height: INTEGER) is
		require
			a_title_not_void: a_text /= Void
		local			
			tx, ty: INTEGER	
			color_gray: EM_COLOR
			font: EM_COLOR_TTF_FONT
			zoomable_container: EM_ZOOMABLE_CONTAINER
			text_length: INTEGER
		do
			create color_gray.make_with_rgb (180, 180, 180)
			
			-- Build Background.
			create background.make_from_coordinates (0, 0, a_width, a_height)
			background.set_fill_color (color_gray)
			Current.extend (background)

			create zoomable_container.make (a_width, a_height)

			-- Build Title text.
			create font.make_from_ttf_font (standard_ttf_fonts.bitstream_vera_sans (a_height // 2))
			font.set_color (black)
			text_length := text_max_length (a_text, font, a_width)
			
			create title.make (a_text.substring (1, text_length), font)

			-- Set text centered in box.
			tx := (a_width - title.width) // 2
			ty := (a_height - title.height) // 2
			title.set_x_y (tx, ty)	

			Current.extend (title)
			
			--Build border
			create border.make_from_position_and_size (0, 0, a_width, a_height)
			border.set_line_color (white)
			border.set_line_width (3)
			border.set_filled (false)
			Current.extend (border)

		end

feature {NONE} -- Button State Change
	on_button_down (me: EM_MOUSE_EVENT) is
		do
			title.set_x_y (title.x + 3, title.y + 3)				
			border.set_line_color (create {EM_COLOR}.make_with_rgb (255, 125, 0))	
		end
		
	on_button_up (me: EM_MOUSE_EVENT) is
		do
			title.set_x_y (title.x - 3, title.y - 3)
			border.set_line_color (create {EM_COLOR}.make_white)		
		end

feature {NONE} -- Implementation
	title: EM_STRING
	
	border: EM_RECTANGLE
	
	background: EM_RECTANGLE

end -- class TOUCH_TEXT_BUTTON
