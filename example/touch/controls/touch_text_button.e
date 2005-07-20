indexing
	description: "Objects that ..."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

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
			-- 
		do
			make
--			default_create
			set_title_width_height (a_text, a_width, a_height)
		end
		
feature {NONE} -- implementation		
	set_title_width_height (a_text: STRING; a_width, a_height: INTEGER) is
		require
			a_title_not_void: a_text /= Void
		local			
			tx, ty: INTEGER	
			ratio: DOUBLE
			color_gray: ESDL_COLOR
			font: ESDL_TTF_FONT
			zoomable_container: ESDL_ZOOMABLE_CONTAINER
			text_length: INTEGER
		do
			
			
			create color_gray.make_with_rgb (180, 180, 180)
			-- Build Background.
			create background.make_from_coordinates (0, 0, a_width, a_height)
			background.set_fill_color (color_gray)
			--zoomable_container.extend (background)
			Current.extend (background)


			create zoomable_container.make (a_width, a_height)
--			Current.extend (zoomable_container)

			-- Build Title text.
			font := standard_ttf_fonts.bitstream_vera_sans (a_height // 2)
			font.set_color (black)
			text_length := text_max_length (a_text, font, a_width)
			
			create title.make (a_text.substring (1, text_length), font)

			-- Set text centered in box.
			tx := (a_width - title.width) // 2
			ty := (a_height - title.height) // 2
			title.set_x_y (tx, ty)	

--			zoomable_container.extend (title)
			Current.extend (title)
			
			--Build border
			create border.make_from_position_and_size (0, 0, a_width, a_height)
			border.set_line_color (white)
			border.set_line_width (3)
			border.set_filled (false)
			Current.extend (border)
			
--			if title.width /= 0 then		
--				ratio := a_width.to_double / title.width.to_double
--				if ratio < 1 then
--					zoomable_container.set_zoom_factor (ratio)			
--				end
--			end			
--			zoomable_container.calculate_object_area			
		end

feature -- Access

feature -- Measurement

feature -- Status report

feature -- Status setting

feature -- Cursor movement

feature -- Element change

feature -- Removal

feature -- Resizing

feature -- Transformation

feature -- Conversion

feature -- Duplication

feature {NONE} -- Button State Change

	text_max_length (a_text: STRING; a_font: ESDL_FONT; max_width: INTEGER): INTEGER is
			--calculate the maximal substring, that if printed with 
			--a_font still fits into max_width
		local 
			summed_width: INTEGER
			char_width: INTEGER
			string_pos: INTEGER
		do
			from
				string_pos := 1
				summed_width := 0
			until
				summed_width >= max_width or else string_pos > a_text.count
			loop
				char_width := a_font.width (a_text.item (string_pos))
				summed_width := summed_width + char_width
				string_pos := string_pos + 1
			end
			if summed_width > max_width then
				summed_width := summed_width - char_width
				string_pos := string_pos - 1
			end
			if string_pos > a_text.count then
				string_pos := string_pos - 1
			end
			
			Result := string_pos
		end
		

	on_button_down (me: ESDL_MOUSE_EVENT) is
		do
			title.set_x_y (title.x + 3, title.y + 3)				
			border.set_line_color (create {ESDL_COLOR}.make_with_rgb (255, 125, 0))	
		end
		
	on_button_up (me: ESDL_MOUSE_EVENT) is
		do
			title.set_x_y (title.x - 3, title.y - 3)
			border.set_line_color (create {ESDL_COLOR}.make_white)		
		end
		
feature -- Obsolete

feature -- Inapplicable

feature {NONE} -- Implementation
	
	title: ESDL_STRING
	border: ESDL_RECTANGLE
	background: ESDL_RECTANGLE

invariant
	invariant_clause: True -- Your invariant here

end -- class TOUCH_TEXT_BUTTON
