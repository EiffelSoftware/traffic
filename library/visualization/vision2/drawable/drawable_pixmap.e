indexing

	description: "Sub pixmaps for use with EV_CANVAS, scaling"
	status:	"See notice at end of class"
	author: "Till G. Bay"
	date: "$Date: 2004/10/20 10:03:03 $"
	revision: "$Revision: 1.3 $"

class DRAWABLE_PIXMAP inherit

	DRAWABLE_OBJECT

	MEMORY
		undefine
			is_equal,
			copy
		end

create

	make

feature -- Initialization

	make (a_sub_pixmap: EV_PIXMAP; a_pixmap_position: REAL_COORDINATE) is
			-- Create `a_pixmap_position' at `a_pixmap_position'
		require
			a_pixmap_position_not_void: a_pixmap_position /= Void
			a_sub_pixmap_not_void: a_sub_pixmap /= Void
		do
			pixmap:= a_sub_pixmap
			create bounding_box.make_from_reals
				(a_pixmap_position.x, a_pixmap_position.y,
				a_pixmap_position.x + pixmap.width,
				a_pixmap_position.y + pixmap.height)
			set_color (create {EV_COLOR}.make_with_rgb (0.0,0.0,0.0))
			create stretched_pixmap
			is_shown := True
		ensure
			bounding_box_exists: bounding_box /= Void
			pixmap_set: pixmap = a_sub_pixmap
			shown: is_shown
		end

feature -- Access

	bounding_box: REAL_RECTANGLE
			-- Bounding box of the pixmap

feature -- Element change

	set_position (a_coordinate: REAL_COORDINATE) is
			-- Set center of icon to `a_coordinate'.
		require
			a_coordinate_exists: a_coordinate /= Void
		do
			create bounding_box.make_from_reals
				(a_coordinate.x, a_coordinate.y,
				a_coordinate.x + pixmap.width,
				a_coordinate.y + pixmap.height)

		end

feature {EV_CANVAS} -- Display

	draw_object is
			-- Draw the sub pixmap
		local
			copied_pixmap_coordinate : EV_COORDINATE
			canvas_pixmap_coordinate: REAL_COORDINATE

			-- size to which the copied pixmap should be stretched
			stretch_size_x, stretch_size_y: INTEGER

			-- lower left and upper right corners of the area that we
			-- copy out of the full pixmap
			-- unit: coordinate system of the pixmap
			lower_left_x, lower_left_y, upper_right_x, upper_right_y, copy_area_height, copy_area_width: INTEGER
		do
			if is_shown then
				-- calculate lower left corner of copy_area rounded towards the lower integer
				-- in order to be outside the canvas.visible_area
				lower_left_x:= real_to_integer_x_floor (canvas.visible_area.left_bound - bounding_box.left_bound).max (0)
				lower_left_y:= real_to_integer_y_floor (canvas.visible_area.lower_bound - bounding_box.lower_bound).max (0)

				-- calculate upper right corner of copy_area rounded towards the upper integer
				-- in order to be outside the canvas.visible_area
				upper_right_x:= real_to_integer_x_ceiling (canvas.visible_area.right_bound - bounding_box.left_bound).min (pixmap.width)
				upper_right_y:= real_to_integer_y_ceiling (canvas.visible_area.upper_bound - bounding_box.lower_bound).min (pixmap.height)

				-- calculate height and width of the copy_area
				copy_area_height:= upper_right_x - lower_left_x
				copy_area_width:= upper_right_y - lower_left_y

				-- create the coordinate of the pixmap part that will be copied
				create canvas_pixmap_coordinate.make (((lower_left_x * bounding_box.width) / pixmap.width) + bounding_box.left_bound,
											   ((upper_right_y * bounding_box.height) / pixmap.height) + bounding_box.lower_bound)

				-- copy a part from the pixmap
				stretched_pixmap.clear
				stretched_pixmap.set_size ((copy_area_height).max (1), (copy_area_width).max (1))
				stretched_pixmap.draw_sub_pixmap (0, 0, pixmap,
												 create {EV_RECTANGLE}.make (lower_left_x, pixmap.height - upper_right_y, copy_area_height.abs, copy_area_width.abs))

				-- calculate the size to which the copied pixmap should be stretched
				stretch_size_x:= (canvas.width * integer_to_real_x (copy_area_height) / canvas.visible_area.width).rounded.max (1)
				stretch_size_y:= (canvas.height * integer_to_real_y (copy_area_width) / canvas.visible_area.height).rounded.max (1)
				stretched_pixmap.stretch (stretch_size_x, stretch_size_y)

				collect

				-- draw the copied and stretched pixmap on the canvas
				copied_pixmap_coordinate:= real_to_integer_coordinate (canvas_pixmap_coordinate)
				canvas.draw_sub_pixmap (copied_pixmap_coordinate.x, copied_pixmap_coordinate.y, stretched_pixmap,
										create {EV_RECTANGLE}.make (0, 0, stretched_pixmap.width,stretched_pixmap.height))
			end
		end

feature {NONE} -- Implementation/Calculations

	integer_to_real_x (an_integer_x: INTEGER): REAL is
			-- Convert `an_integer_x' to an x value in world coordinates
		do
			Result := (an_integer_x * bounding_box.width)/pixmap.width
		ensure
			definition: Result = (an_integer_x * bounding_box.width)/pixmap.width
		end

	integer_to_real_y (an_integer_y: INTEGER): REAL is
			-- Convert `an_integer_y' to an y value in world coordinates
		do
			Result:= (an_integer_y * bounding_box.height)/pixmap.height
		ensure
			definition: Result = (an_integer_y * bounding_box.height)/pixmap.height
		end

	real_to_integer_x_floor (a_real_x: REAL): INTEGER	is
			-- Convert `a_real_x' to an x value in screen coordinates, rounding down
		do
			Result := ((a_real_x * pixmap.width) / bounding_box.width).floor
		ensure
			definition: Result = ((a_real_x * pixmap.width) / bounding_box.width).floor
		end

	real_to_integer_x_ceiling (a_real_x: REAL): INTEGER	is
			-- Convert `a_real_x' to an x value in screen coordinates, rounding up
		do
			Result := ((a_real_x * pixmap.width) / bounding_box.width).ceiling
		ensure
			definition: Result = ((a_real_x * pixmap.width) / bounding_box.width).ceiling
		end

	real_to_integer_y_floor (a_real_y: REAL): INTEGER	is
			-- Convert `a_real_y' to an y value in screen coordinates, rounding down
		do
			Result := ((a_real_y * pixmap.height) / bounding_box.height).floor
		ensure
			definition: Result = ((a_real_y * pixmap.height) / bounding_box.height).floor
		end

	real_to_integer_y_ceiling (a_real_y: REAL): INTEGER	is
			-- Convert `a_real_y' to an y value in screen coordinates, rounding up
		do
			Result := ((a_real_y * pixmap.height) / bounding_box.height).ceiling
		ensure
			definition: Result = ((a_real_y * pixmap.height) / bounding_box.height).ceiling
		end

feature {NONE} -- Implementation

	pixmap: EV_PIXMAP
			-- The pixmap

	stretched_pixmap: EV_PIXMAP
			-- The stretched pixmap

invariant

	pixmap_not_void: pixmap /= Void
	stretched_pixmap_not_void: stretched_pixmap /= Void
	bounding_box_not_void: bounding_box /= Void

end


--|--------------------------------------------------------
--| This file is Copyright (C) 2003 by ETH Zurich.
--|
--| For questions, comments, additions or suggestions on
--| how to improve this package, please write to:
--|
--|     Till G. Bay <tillbay@student.ethz.ch>
--|
--|--------------------------------------------------------
