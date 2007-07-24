indexing
	description: "Objects that ..."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	DRAWABLE_RECTANGLE

inherit

	DRAWABLE_OBJECT

create

	make

feature -- Creation

	make (a_point_a, a_point_b: REAL_COORDINATE) is
			-- Create a rounded_rectangle  from `a_point_a' and `a_point_b'
		require
			a_point_a_not_void: a_point_a /= Void
			a_point_b_not_void: a_point_b /= Void
		do
			replace_points (a_point_a, a_point_b)
			set_edge_color (create {EV_COLOR}.make_with_rgb (0.0, 1.0, 0.0))
			set_color (create {EV_COLOR}.make_with_rgb (0.0,0.0,0.0))
			filled := True
			is_shown := True
		ensure
			point_a_set: point_a = a_point_a
			point_b_set: point_b = a_point_b
			shown: is_shown
		end

feature -- Commands

	replace_points (a_new_point_a, a_new_point_b: REAL_COORDINATE) is
			-- Replace the rounded rectangel's points with `a_new_point_a' and `a_new_point_b'.
			require
				a_new_point_a_not_void: a_new_point_a /= Void
				a_new_point_b_not_void: a_new_point_b /= Void
			do
				point_a:= a_new_point_a
				point_b:= a_new_point_b
			ensure
				a_new_point_a_set: point_a = a_new_point_a
				a_new_point_b_set: point_b = a_new_point_b
			end

	set_edge_color (a_color: EV_COLOR) is
			-- Set the color of the rounded rectangle's edge to `a_color'
			require
				a_color_not_void: a_color /= Void
			do
				edge_color:= a_color
			ensure
				new_edge_color: edge_color = a_color
			end

	set_unfilled is
			-- Turn the unfilled feature on.
		do
			filled := False
		end

feature -- Queries

	bounding_box : REAL_RECTANGLE is
			-- The bounding box of the rounded_rectangle
		do
			create Result.make (point_a, point_b)
		end

feature{EV_CANVAS} -- Display

	draw_object is
			-- Draws the polygon.
		local
			point_to_draw_a : EV_COORDINATE
			point_to_draw_b : EV_COORDINATE
			relative_point_a: EV_RELATIVE_POINT
			relative_point_b: EV_RELATIVE_POINT
			rectangle: EV_FIGURE_RECTANGLE
		do
			point_to_draw_a := real_to_integer_coordinate (point_a)
			point_to_draw_b := real_to_integer_coordinate (point_b)
			create relative_point_a.make_with_position (point_to_draw_a.x, point_to_draw_a.y)
			create relative_point_b.make_with_position (point_to_draw_b.x, point_to_draw_b.y)
			create rectangle.make_with_points (relative_point_a, relative_point_b)
			rectangle.set_foreground_color (edge_color)
			if filled then
				rectangle.set_background_color (color)
			else
				rectangle.remove_background_color
			end
			canvas.projector.draw_figure_rectangle (rectangle)
		end

feature {NONE} -- Implementation

	point_a: REAL_COORDINATE
		-- One point of the rounded_rectangle

	point_b: REAL_COORDINATE
		-- The other point of the rounded_rectangle

	edge_color: EV_COLOR
		-- The color of the rounded rectangles edge

	filled: BOOLEAN
		-- Is the rounded rectangle filled?
invariant

	point_a_exists: point_a /= Void
	point_b_exists: point_b /= Void
	edge_color_exists: edge_color /= Void

end
