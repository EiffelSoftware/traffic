indexing
	description: "A Road of the city."

class
	TRAFFIC_ROAD

inherit
	TRAFFIC_CONNECTION

create
	make



feature{NONE} -- Creation

	make (a_origin, a_destination: TRAFFIC_STOP; a_type: TRAFFIC_TYPE_ROAD; an_id: INTEGER; a_direction:STRING) is
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
			origin := a_origin
			destination := a_destination
			id:=an_id
			type := a_type
			if a_direction.is_equal("directed") then
				is_directed:=true
			else
				is_directed:=false
			end
			create polypoints.make (2)
			polypoints.extend (a_origin.position)
			polypoints.extend (a_destination.position)
		ensure
			origin_set: origin = a_origin
			destination_set: destination = a_destination
			type_set: type = a_type
			polypoints_exists: polypoints /= Void
		end



feature -- Basic operation


	hash_code: INTEGER is
			-- Hash code value
		do
			Result := ([origin, destination, id]).hash_code
		end

feature -- Access

	type: TRAFFIC_TYPE_ROAD
		-- Type of the Road

	id: INTEGER

	is_directed: BOOLEAN


end
