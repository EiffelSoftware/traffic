indexing
	description: "A simple Bitmap Label"
	date: "2005/08/31"
	revision: "1.0"

class
	TOUCH_BITMAP_STATIC

inherit
	EM_DRAWABLE_CONTAINER [EM_DRAWABLE]

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
			-- Build the label
		require
			image_not_void: an_image_file /= Void
		local			
			ratio_x, ratio_y: DOUBLE
		do

			make	
			
			bitmap_factory.create_bitmap_from_image (an_image_file)
			
			bitmap := bitmap_factory.last_bitmap

			ratio_x := a_width / bitmap.width;
			ratio_y := a_height / bitmap.height;
			
			bitmap_factory.create_stretched_bitmap (bitmap, ratio_x, ratio_y)
			bitmap := bitmap_factory.last_bitmap

			Current.extend (bitmap)

		end
		
feature {NONE} -- Implementation
	bitmap: EM_BITMAP

end -- class TOUCH_BITMAP_STATIC
