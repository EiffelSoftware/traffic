indexing
	description: "Basic Node in Traffic"
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_NODE

inherit
	HASHABLE

create
	make

feature {NONE} -- Create

	make (a_place: TRAFFIC_PLACE; a_position: EM_VECTOR_2D) is
			-- Initialize `Current'.
		require
			place_not_void: a_place /= Void
			position_not_void: a_position /= Void
		do
			place := a_place
			position := a_position
		end

feature -- Access

	place: TRAFFIC_PLACE

	position: EM_VECTOR_2D
			-- Position of the node in the map

feature -- Element change

	set_position (a_position: EM_VECTOR_2D) is
			-- Set position to `a_position'.
		do
			position := a_position
		ensure
			position_set: position = a_position
		end

feature -- Measurement

	hash_code: INTEGER is
			-- Hash code value.
		do
			Result := place.hash_code
		end

invariant
	place_not_void: place /= Void
	position_not_void: position /= Void

end
