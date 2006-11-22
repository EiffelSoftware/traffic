indexing
	description: " A simple 1D-Vector. "

	date: "$Date: 2006/08/28 17:03:36 $"
	revision: "$Revision: 1.6 $"

class
	EM_VECTOR1F_REF

inherit
	EM_ABSTRACT_VECTOR1[REAL]
	rename
		make_from_tuplef as make_from_tuple
	end

create
	make,
	default_create

feature -- Initialization

	make_from_tuplei( t: TUPLE[INTEGER] ) is
			-- Create a vector from a tuple eg. [1,2]
		do
			x := t.integer_item(1)
		end

	make_from_tuple( t: TUPLE[REAL] ) is
			-- Create a vector from a tuple eg. [1,2]
		do
			x := t.real_item(1).rounded
		end

	make_from_tupled( t: TUPLE[DOUBLE] ) is
			-- Create a vector from a tuple eg. [1,2]
		do
			x := t.double_item(1)
		end

	make_from_reference ( vec: EM_VECTOR1F_REF ) is
			-- create the vector from a ref
		do
			make( vec.x )
		ensure then
			x_set: x = vec.x
		end

	fill_d, make_filled_d ( a_value: DOUBLE ) is
			-- Fill vector with 'a_value'
		do
			x := a_value
		ensure then
			x_set: x = a_value
		end

	default_create is
			-- creates a vector set to 0
		do
			x := 0
		ensure then
			x_set: x = 0
		end

feature -- Access
	zero: like Current is
		do
			create Result.make(0)
		end

	one: like Current is
		do
			create Result.make(1)
		end

feature -- Commands

	length alias "||": REAL is
			-- returns the length of the vector
		do
			Result := sqrt(norm)
		end

	scaled alias "*" ( factor: REAL ) : like Current is
			-- returns the length of the vector
		do
			create result.make( factor*x )
		end

	scale_d ( factor: DOUBLE) is
			-- Scales the vector.
		do
			x := factor * x
		end

	scaled_d ( factor: DOUBLE) : like Current is
			-- Returns a new scaled vector
		do
			create Result.make((factor * x).rounded)
		end

	dot_product ( other: like Current ): REAL is
			-- not mutch to say here
		do
			result := x*other.x
		end

	ew_multiplied  ( other: like Current ): like Current is
			-- Multiplies two vectors element wise
		do
			create result.make( x*other.x )
		end

	ew_divided  ( other: like Current ): like Current is
			-- Divides two vectors element wise
		do
			create result.make( x/other.x )
		end

	infix "+", ew_added ( other: like Current ): like Current is
			-- Adds two vectors.
		do
			create result.make( x+other.x )
		end

	infix "-", ew_subtracted ( other: like Current ): like Current is
			-- Subtracts two vectors.
		do
			create result.make( x-other.x )
		end

	prefix "-" : like Current is
			-- Negates the vector
		do
			create result.make( -x )
		end


feature -- Conversion
	to_vector1i: EM_VECTOR1I is
			-- convert to a 1d vector
		do
			Result.set(x.rounded)
		end

	to_vector2i: EM_VECTOR2I is
			-- convert to a 2d vector
		do
			Result.set(x.rounded, 0)
		end

	to_vector3i: EM_VECTOR3I is
			-- convert to a 3d vector
		do
			result.set(x.rounded, 0, 0)
		end

	to_vector4i: EM_VECTOR4I is
			-- convert to a 4d vector
		do
			result.set(x.rounded,0,0,0)
		end

	to_vector1d: EM_VECTOR1D is
			-- convert to a 1d vector
		do
			Result.set(x)
		end

	to_vector2d: EM_VECTOR2D is
			-- convert to a 2d vector
		do
			Result.set(x, 0)
		end

	to_vector3d: EM_VECTOR3D is
			-- convert to a 3d vector
		do
			result.set(x, 0, 0)
		end

	to_vector4d: EM_VECTOR4D is
			-- convert to a 4d vector
		do
			result.set(x,0,0,0)
		end


	to_vector1f: EM_VECTOR1F is
			-- convert to a 1f vector
			-- There might be a data loss
		do
			result.set(x)
		end

	to_vector2f: EM_VECTOR2F is
			-- convert to a 2f vector
			-- There might be a data loss
		do
			result.set(x,0)
		end

	to_vector3f: EM_VECTOR3F is
			-- convert to a 3f vector
			-- There might be a data loss
		do
			result.set(x,0,0)
		end

	to_vector4f: EM_VECTOR4F is
			-- convert to a 4f vector
			-- There might be a data loss
		do
			result.set(x,0,0,0)
		end

	to_reference: EM_VECTOR1F_REF is
			-- Associated reference of Current
		do
			create Result.make(x)
		end

end
