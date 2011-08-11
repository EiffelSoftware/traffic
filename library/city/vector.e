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
		export
			{NONE} all
		redefine
			is_equal,
			out
		end

	DOUBLE_COMPARISON
		export
			{NONE} all
			{ANY} approx_equal
		redefine
			is_equal,
			out
		end

create
	make,
	make_from_tuple,
	make_polar

convert
	make_from_tuple ({TUPLE [REAL_64, REAL_64]})

feature {NONE} -- Initialization

	make (a_x, a_y: REAL_64)
			-- Create a vector with coordinates `a_x' and `a_y'.
		do
			x := a_x
			y := a_y
		ensure
			x_set: x = a_x
			y_set: y = a_y
		end

	make_from_tuple (t: TUPLE [x: REAL_64; y: REAL_64])
			-- Create a vector with coordinates `t.x' and `t.y'.
		do
			make (t.x, t.y)
		ensure
			x_set: x = t.x
			y_set: y = t.y
		end

	make_polar (a_length, a_angle: REAL_64)
			-- Create a vector with polar coordinates `a_length' and `a_angle'.
		require
			a_length_non_negative: a_length >= 0.0
		do
			x := a_length * cosine (a_angle)
			y := a_length * sine (a_angle)
		ensure
			length_set: approx_equal (length, a_length)
			angle_set: approx_equal (angle, normalized_angle (a_angle))
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

	angle: REAL_64
			-- Angle with horizontal axis (radian).
		require
			length_positive: length > 0.0
		do
			Result := arc_tangent_2 (y, x)
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
		ensure
			rotated: Result ~ rotated (Pi)
		end

	product alias "*" (k: REAL_64): VECTOR
			-- Multiplication by a scalar `k'.
		do
			create Result.make (k * x, k * y)
		ensure
			multiplied_length: approx_equal (Result.length, k.abs * length)
		end

	normalized: VECTOR
			-- Vector with the same direction but with length 1.
		do
			Result := Current * (1 / length)
		ensure
			product: Result ~ Current * (1 / length)
		end

	orthogonal: VECTOR
			-- This vector rotated by Pi / 2 counterclockwise.
		do
			create Result.make (- y, x)
		ensure
			rotated: Result ~ rotated (Pi / 2)
		end

	rotated (a_angle: REAL_64): VECTOR
			-- This vector rotated by `a_angle' radians counterclockwise.
		do
			create Result.make_polar (length, angle + a_angle)
		ensure
			same_length: approx_equal (Result.length, length)
			rotated: approx_equal(Result.angle, normalized_angle (angle + a_angle))
		end

feature -- Output

	out: STRING
			-- Textual representation.
		do
			Result := "(" + x.out + ", " + y.out + ")"
		end

feature -- Helper functions

	normalized_angle (a_angle: REAL_64): REAL_64
			-- Normalized angle in interval [-Pi, Pi].
		do
			Result := Pi - real_modulo(Pi - a_angle, 2 * Pi)
		ensure
			in_range: -Pi <= Result and Result <= Pi
		end

feature {NONE} -- Implementation

	arc_tangent_2 (a_x, a_y: REAL_64): REAL_64
			-- Arctangent of `a_x'/`a_y' in [-Pi, Pi].
		external
			"C signature (double, double): double use <math.h>"
		alias
			"atan2"
		end

	real_modulo (a_numerator, a_denominator: REAL_64): REAL_64
			-- Remainder of `a_numerator' divided by `a_denominator'.
		external
			"C signature (double, double): double use <math.h>"
		alias
			"fmod"
		end

invariant
	non_negative_length: length >= 0
	angle_in_bounds: length > 0.0 implies -Pi <= angle and angle <= Pi
	x_zero: approx_equal (length, 0.0) implies approx_equal (x, 0.0)
	y_zero: approx_equal (length, 0.0) implies approx_equal (y, 0.0)
	x_non_zero: length > 0.0 implies approx_equal (x, length * cosine (angle))
	y_non_zero: length > 0.0 implies approx_equal (y, length * sine (angle))
end
