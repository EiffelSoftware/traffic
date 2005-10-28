indexing
	description: "A container that contains the rectangle and the string for a place."
	date: "$Date$"
	revision: "$Revision$"

class
	PLACE_VIEW
	
inherit 

	EM_DRAWABLE_CONTAINER [EM_DRAWABLE]
		redefine draw end

	THEME
		undefine copy, is_equal end

create
	make_with_content
	
feature -- Initialization
	
	make_with_content (a_rectangle: EM_RECTANGLE; a_place_label: EM_STRING) is
			-- Extend with `a_rectangle' and `a_place_label'.
		require
			a_rectangle_valid: a_rectangle /= Void
			a_place_label_valid: a_place_label /= Void
		do
			make
			rectangle := a_rectangle
			place_label := a_place_label 
			extend (rectangle)
			extend (place_label)
		ensure
			has_a_rectangle: has (a_rectangle)
			has_a_place_label: has (a_place_label)
		end
		
feature -- Access

	rectangle: EM_RECTANGLE
			-- Rectangle that displays the place

	place_label: EM_STRING
			-- String that shows the place name
	
feature -- Basic operations

	draw (a_surface: EM_SURFACE) is
			-- Draw contents on `a_surface'.
		do
			rectangle.draw (a_surface)
			place_label.draw (a_surface)
		end
		
invariant
	rectangle_exists: rectangle /= Void
	place_label_exists: place_label /= Void
end
