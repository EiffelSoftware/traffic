indexing
	description: "Objects that ..."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TOUCH_TEXT_BUTTON

inherit
	TOUCH_BUTTON

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
			
			zoomable_container: ESDL_ZOOMABLE_CONTAINER
		do
			
			
			create color_gray.make_with_rgb (180, 180, 180)
			-- Build Background.
			create background.make_from_coordinates (0, 0, a_width, a_height)
			background.set_fill_color (color_gray)
			--zoomable_container.extend (background)
			Current.extend (background)


			create zoomable_container.make (a_width, a_height)
			Current.extend (zoomable_container)

			-- Build Title text.
			create title.make (a_text, standard_fonts.small_font)

			-- Set text centered in box.
			tx := (a_width - title.width) // 2
			ty := (a_height - title.height) // 2
			title.set_x_y (tx, ty)	

			zoomable_container.extend (title)
			
			
			--Build border
			create border.make_from_position_and_size (0, 0, a_width, a_height)
			border.set_line_color (white)
			border.set_line_width (3)
			border.set_filled (false)
			--zoomable_container.extend (border)
			Current.extend (border)

			ratio := a_width.to_double / title.width.to_double
			
			if ratio < 1 then
				zoomable_container.set_zoom_factor (ratio)			
			end
			
			zoomable_container.calculate_object_area			
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

feature -- Miscellaneous
		
feature -- Obsolete

feature -- Inapplicable

feature {NONE} -- Implementation
	
	title: ESDL_STRING
	border: ESDL_RECTANGLE
	background: ESDL_RECTANGLE
	


invariant
	invariant_clause: True -- Your invariant here

end -- class TOUCH_TEXT_BUTTON
