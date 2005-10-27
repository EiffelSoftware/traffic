indexing
	description: "Objects that ..."
	author: ""
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
			-- 
		do
			make
			rectangle := a_rectangle
			place_label := a_place_label 
			extend (rectangle)
			extend (place_label)
		end
		

	rectangle: EM_RECTANGLE

	place_label: EM_STRING
	
	draw (a_surface: EM_SURFACE) is
			-- 
		do
			rectangle.draw (a_surface)
			place_label.draw (a_surface)
		end
		
end
