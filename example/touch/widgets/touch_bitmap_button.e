indexing
	description: "Objects that ..."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TOUCH_BITMAP_BUTTON
inherit
		TOUCH_BUTTON
			redefine
				on_button_up,
				on_button_down
			end
			
		EM_SHARED_BITMAP_FACTORY
			undefine
				copy,
				is_equal,
				default_create
			end
	creation
		make_with_image_file_and_width_and_height
		
feature -- Initialization

	make_with_image_file_and_width_and_height (an_image_file: STRING; a_width, a_height: INTEGER) is
			-- 
		require
			image_not_void: an_image_file /= Void
		local			
			ratio_x, ratio_y: DOUBLE
			color_gray: EM_COLOR

			zoomable_container: EM_ZOOMABLE_CONTAINER
		do

			make	
			
			Current.mouse_button_down_event.subscribe (agent process_mouse_down)
			Current.mouse_button_up_event.subscribe (agent process_mouse_up)
			Current.mouse_motion_event.subscribe (agent process_mouse_motion)
			
			
			create color_gray.make_with_rgb (180, 180, 180)

			create zoomable_container.make (a_width, a_height)
			Current.extend (zoomable_container)

			bitmap_factory.create_bitmap_from_image (an_image_file)
			
			bitmap := bitmap_factory.last_bitmap

			ratio_x := a_width / bitmap.width;
			ratio_y := a_height / bitmap.height;
			
			bitmap_factory.create_stretched_bitmap (bitmap, ratio_x, ratio_y)
			bitmap := bitmap_factory.last_bitmap
			
			zoomable_container.extend (bitmap)
			
			
			--Build border
			create border.make_from_position_and_size (0, 0, a_width, a_height)
			border.set_line_color (white)
			border.set_line_width (3)
			border.set_filled (false)
			Current.extend (border)

			zoomable_container.calculate_object_area

--			bitmap_factory.create_bitmap_from_image ("star.bmp")
--			star := bitmap_factory.last_bitmap
--			star.set_x_y ( a_width // 2 - star.width // 2, 0)
--			Current.extend (star)			
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

--	publish_mouse_event (a_mouse_event: EM_MOUSE_EVENT) is
--
--		do
--			if bounding_box.has (a_mouse_event.proportional_position) then
--				dispatch_mouse_event (a_mouse_event)
--				a_mouse_event.set_caught (True)
--			end
--		end

		
feature -- Obsolete

feature -- Inapplicable

feature {NONE} -- Implementation

	border: EM_RECTANGLE
	bitmap: EM_BITMAP


	on_button_down (me: EM_MOUSE_EVENT) is
		do
			bitmap.set_x_y (bitmap.x + 3, bitmap.y + 3)				
			border.set_line_color (create {EM_COLOR}.make_with_rgb (255, 125, 0))	
		end
		
	on_button_up (me: EM_MOUSE_EVENT) is
		do
			bitmap.set_x_y (bitmap.x - 3, bitmap.y - 3)
			border.set_line_color (create {EM_COLOR}.make_white)		
		end

invariant
	invariant_clause: True -- Your invariant here

end -- class TOUCH_BITMAP_BUTTON
