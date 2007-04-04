indexing
	description: "A Road of the city."
	date: "$Date: 2006-03-27 19:42:12 +0200 (Mon, 27 Mar 2006) $"
	revision: "$Revision: 601 $"

class
	TRAFFIC_ROAD

inherit
	TRAFFIC_CONNECTION
		redefine
			type
		end

create
	make



feature{NONE} -- Creation

	make (a_origin, a_destination: TRAFFIC_NODE; a_type: TRAFFIC_TYPE_ROAD; an_id: INTEGER; a_direction:STRING) is
			-- Initialize `Current'.
			-- If `a_list' is Void, a list of polypoints with the coordinate of `a_origin' and
			-- `a_destination' are generated.
		require
			a_origin_exists: a_origin /= Void
			a_destination_exists: a_destination /= Void
			a_type_exists: a_type /= Void
			an_id_is_valid: an_id>=0
			a_direction_exists: a_direction/=Void
		do
			origin_impl := a_origin
			destination_impl := a_destination
			id:=an_id
			type := a_type
			if a_direction.is_equal("directed") then
				is_directed:=true
			else
				is_directed:=false
			end
			create polypoints.make (2)
			polypoints.extend (a_origin.place.position)
			polypoints.extend (a_destination.place.position)
		ensure
			origin_set: origin_impl = a_origin
			destination_set: destination_impl = a_destination
			type_set: type = a_type
			polypoints_exists: polypoints /= Void
		end

feature -- Access

	hash_code: INTEGER is
			-- Hash code value
		do
			Result := ([origin, destination, id]).hash_code
		end

	type: TRAFFIC_TYPE_ROAD
			-- Road type

	id: INTEGER
			-- Id of road

end
