indexing
	description: "A Simple Bitmap Button"
	date: "2005/08/31"
	revision: "1.0"

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
		do

			make	
			
			-- Subscribe to Mouse Events
			Current.mouse_button_down_event.subscribe (agent process_mouse_down)
			Current.mouse_button_up_event.subscribe (agent process_mouse_up)
			Current.mouse_motion_event.subscribe (agent process_mouse_motion)

			-- Load Bitmap and scale it
			bitmap_factory.create_bitmap_from_image (an_image_file)
			
			bitmap := bitmap_factory.last_bitmap

			ratio_x := a_width / bitmap.width;
			ratio_y := a_height / bitmap.height;
			
			bitmap_factory.create_stretched_bitmap (bitmap, ratio_x, ratio_y)
			bitmap := bitmap_factory.last_bitmap

			
			-- Build border
			create border.make_from_position_and_size (0, 0, a_width, a_height)
			border.set_line_color (white)
			border.set_line_width (3)
			border.set_filled (false)
			
			-- Extend Container with drawables
			Current.extend (bitmap)						
			Current.extend (border)

		end

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

end -- class TOUCH_BITMAP_BUTTON
