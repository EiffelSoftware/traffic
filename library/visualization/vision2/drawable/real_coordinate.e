indexing

	description: "A position in a 2 dimensional space as REALs (x, y)"
	status:	"See notice at end of class"
	author: "Till G. Bay"
	date: "$Date: 2004/10/20 10:03:03 $"
	revision: "$Revision: 1.3 $"
	
class REAL_COORDINATE inherit
	
	DOUBLE_MATH
		redefine out end

create

	make
	
feature -- Creation

	make (a_x, a_y: REAL) is
			-- Assign `a_x' to `x' and `a_y' to `y'.
		do
			x := a_x
			y := a_y
		ensure
			x_set: x = a_x
			y_set: y = a_y
		end

feature -- Access

	x: REAL
			-- Horizontal position

	y: REAL		
			-- Vertical position

feature -- Calculations

	right_by (a_value: REAL): like Current is
			-- Return a new point `a_value' right of the current point
		do
			create Result.make (x + a_value, y)
		end

	up_by (a_value: REAL) : like Current is
			-- Return a new point `a_value' above of the current point
		do
			create Result.make(x, y + a_value)
		end

	down_by (a_value: REAL) : like Current is
			-- Return a new point `a_value' right of the current point
		do
			create Result.make (x, y - a_value)
		end

	left_by (a_value: REAL) : like Current is
			-- Return a new point `a_value' above of the current point
		do
			create Result.make (x - a_value, y)
		end

	add, infix "+" (other: like Current): like Current is
			-- Add `other' to `Current'
		require
			other_not_void: other /= Void
		do
			create Result.make (x + other.x, y + other.y)
		end
		
	subtract, infix "-" (other: like Current): like Current is
			-- Subtract `other' from `Current'
		require
			other_not_void: other /= Void
		do
			create Result.make (x - other.x, y - other.y)
		end

	multiply, infix "*" (a_factor: REAL): like Current is
			-- Scalar multiplication by `a_factor'
		do
			create Result.make (x * a_factor, y * a_factor)
		end

	distance (a_coordinate: like Current): DOUBLE is
			-- Distance between Current and `a_coordinate'
		local
			c: REAL_COORDINATE
		do
			c := a_coordinate - Current
			Result := sqrt (c.x^2 + c.y^2)
		end

feature -- Output

	out: STRING is
			-- Textual representation
		do
			Result := "(X: " + x.out + ", Y: " + y.out + ")"
		end

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
