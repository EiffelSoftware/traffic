indexing
	description: "Objects that ..."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TOUCH_BITMAP_STATIC

inherit
	ESDL_DRAWABLE_CONTAINER [ESDL_DRAWABLE]

	ESDL_SHARED_BITMAP_FACTORY
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
			
			bitmap_factory.create_bitmap_from_image (an_image_file)
			
			bitmap := bitmap_factory.last_bitmap

			ratio_x := a_width / bitmap.width;
			ratio_y := a_height / bitmap.height;
			
			bitmap_factory.create_stretched_bitmap (bitmap, ratio_x, ratio_y)
			bitmap := bitmap_factory.last_bitmap

			Current.extend (bitmap)

		end
feature {NONE} -- Implementation
	bitmap: ESDL_BITMAP
invariant
	invariant_clause: True -- Your invariant here

end -- class TOUCH_BITMAP_STATIC
