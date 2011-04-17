note
	description: "[
		Two-demensional vector that represents 
		either a difference between two locations in the city 
		or a location in the city (as its difference to the city center).
		The class is immutable.
		]"

class
	VECTOR

inherit
	ANY
		redefine
			is_equal,
			out
		end

inherit {NONE}
	DOUBLE_MATH
		export {NONE}
			all
		redefine
			is_equal,
			out
		end

	DOUBLE_COMPARISON
		export {NONE}
			all
		redefine
			is_equal,
			out
		end

create
	make,
	make_from_tuple

convert
	make_from_tuple ({TUPLE [REAL_64, REAL_64]})

feature {NONE} -- Initialization

	make (a_x, a_y: REAL_64)
			-- Create a vector with coordinates `a_x' and `a_y'.
		do
			x := a_x
			y := a_y
		end

	make_from_tuple (t: TUPLE [x: REAL_64; y: REAL_64])
			-- Create a vector with coordinates `t.x' and `t.y'.
		do
			make (t.x, t.y)
		end

feature -- Access

	x: REAL_64
			-- Eastward coordinate (meters).

	y: REAL_64
			-- Northward coordinate (meters).

feature -- Comparison

	is_equal (other: like Current): BOOLEAN
			-- Are coordinates of `other' approximately equal to coordinates of `Current'?
		do
			Result := approx_equal (x, other.x) and approx_equal (y, other.y)
		end

feature -- Basic operations

	length: REAL_64
			-- Length (meters).
		do
			Result := sqrt (x * x + y * y)
		end

	sum alias "+" (other: VECTOR): VECTOR
			-- Vector addition.
		do
			create Result.make (x + other.x, y + other.y)
		end

	difference alias "-" (other: VECTOR): VECTOR
			-- Vector subtraction.
		do
			create Result.make (x - other.x, y - other.y)
		end

	opposite alias "-": VECTOR
			-- Vector with the same length and opposite direction.
		do
			create Result.make (- x, - y)
		end

	product alias "*" (k: REAL_64): VECTOR
			-- Multiplication by a scalar `k'.
		do
			create Result.make (k * x, k * y)
		end

feature -- Output

	out: STRING
			-- Textual representation.
		do
			Result := "(" + x.out + ", " + y.out + ")"
		end

invariant
	non_negative_length: length >= 0
end
