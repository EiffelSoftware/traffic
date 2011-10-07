note
	description: "Building with an address in the city."

class
	BUILDING

create
	make

feature {NONE} -- Initialization

	make (a_address: STRING; a, b: VECTOR)
			-- Create a building at address `a_address'
			-- and opposite corners located at `a' and `b'.
		require
			address_exists: a_address /= Void
			corners_exists: a /= Void and b /= Void
		do
			address := a_address
			corner_a := a
			corner_b := b
		ensure
			address_set: address = a_address
			corners_set: corner_a = a and corner_b = b
		end

feature -- Access

	address: STRING
			-- Street address.

	corner_a, corner_b: VECTOR
			-- Positions of two opposite corners.

	name: STRING
			-- Name (can be Void).

feature -- Modification

	set_name (a_name: STRING)
			-- Set `name' to `a_name'.
		do
			name := a_name
		end

invariant
	address_exists: address /= Void
	corners_exists: corner_a /= Void and corner_b /= Void
end
