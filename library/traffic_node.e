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

	make (a_place: TRAFFIC_PLACE) is
			-- Initialize `Current'.
		require
			place_not_void: a_place /= Void
		do
			place := a_place
		end

feature -- Access

		place: TRAFFIC_PLACE

feature -- Measurement

	hash_code: INTEGER is
			-- Hash code value.
		do
			Result := place.hash_code
		end

invariant
	place_not_void: place /= Void

end
