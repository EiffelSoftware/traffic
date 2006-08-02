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
			-- Initialize `Current'
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
feature -- Status report

feature -- Status setting

feature -- Cursor movement

feature -- Element change

feature -- Removal

feature -- Resizing

feature -- Transformation

feature -- Conversion

feature -- Duplication

feature -- Miscellaneous

feature -- Basic operations

feature -- Obsolete

feature -- Inapplicable

feature {NONE} -- Implementation



invariant
	invariant_clause: True -- Your invariant here

end
