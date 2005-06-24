indexing
	description: "Status box for displaying player information"
	author: "Ursina Caluori, ucaluori@student.ethz.ch"
	date: "$Date$"
	revision: "$Revision$"

class
	STATUS_BOX

inherit
	ESDL_RECTANGLE
		redefine
			make,
			make_from_coordinates, 
			make_from_position_and_size,
			make_from_rectangle
		end

	DISPLAY_CONSTANTS
		undefine
			default_create, out
		end

create
	make,
	make_from_coordinates,
	make_from_position_and_size,
	make_from_rectangle

feature -- Initialization

	make (a_point_a, a_point_b: ESDL_VECTOR_2D) is
			-- Initialize with `a_point_a' and `a_point_b' as corners of the rectangle.
		do
			Precursor {ESDL_RECTANGLE}(a_point_a, a_point_b)
			initialize
		end

	make_from_coordinates (x1: DOUBLE; y1: DOUBLE; x2: DOUBLE; y2: DOUBLE) is
			-- Create status box with default values
		do
			Precursor {ESDL_RECTANGLE}(x1, y1, x2, y2)
			initialize
		end
		
	make_from_position_and_size (x1: DOUBLE; y1: DOUBLE; a_width: DOUBLE; a_height: DOUBLE) is
			-- Create status box from position (x1, y1) and size (a_width, a_height)
		do
			Precursor {ESDL_RECTANGLE}(x1, y1, a_width, a_height)
			initialize
		end
		
	make_from_rectangle (a_rectangle: ESDL_ORTHOGONAL_RECTANGLE) is
			-- Create status box from a_rectangle
		do
			Precursor {ESDL_RECTANGLE}(a_rectangle)
			initialize
		end
		
feature -- Access

	set_opacity (an_opacity: INTEGER) is
			-- Set opacity of status box
		require
			an_opacity_not_void: an_opacity /= Void
		do
			opacity.set_item (an_opacity)
			update_color
		end
		
	set_color (a_color: ESDL_COLOR) is
			-- Set color of status box
		do
			color := a_color
			update_color
		end

feature -- Attributes		
	opacity: INTEGER is 100
		-- Opacity of the status box
	
	color: ESDL_COLOR
		-- Color of the status box


feature {NONE} -- Implementation

	initialize is
			-- Initialize color of the status box and its contour
		do
			set_rounded_corner_radius (10)
			color := status_background_color
			set_line_width (1)
			set_line_color (color)
			line_color.set_alpha (255)
			set_fill_color (color)
			fill_color.set_alpha (opacity)
		end
		

	update_color is
			-- Update color of the status box and its contour
		do
			fill_color.set_alpha (opacity)
			fill_color := color
			line_color := color
		end
		

end
