indexing
	description: "Objects of type TRAFFIC_CONNECTION represents connections between TRAFFIC_PLACEs"
	date: "$Date: 2006-03-27 19:42:12 +0200 (Mon, 27 Mar 2006) $"
	revision: "$Revision: 601 $"

deferred class
	TRAFFIC_CONNECTION

inherit
	HASHABLE

feature -- Element change

	set_polypoints (a_polypoints: DS_ARRAYED_LIST [EM_VECTOR_2D]) is
			-- Set polypoints to `a_polypoints'.
		require
			a_polypoints_exist: a_polypoints /= Void
		do
			polypoints.copy (a_polypoints)
		ensure
			polypoints_exists: polypoints /= Void
		end

	remove_polypoints is
			-- Remove polypoints.
		do
			polypoints.wipe_out
		end

feature -- Access

	type: TRAFFIC_TYPE
			-- Type of the line section

	origin: TRAFFIC_PLACE is
			-- Place of origin.
		do
			Result := origin_impl.place
		end

	destination: TRAFFIC_PLACE is
			-- Place of destination.
		do
			Result := destination_impl.place
		end

	polypoints: DS_ARRAYED_LIST [EM_VECTOR_2D]
			-- Position representation of the connection.

	length: DOUBLE is
			-- Length from start of polypoints to end.
			-- If no polypoints exists, distance between origin and destination.
		local
			i: INTEGER
		do
			if polypoints = Void or polypoints.count < 1 then
				Result := origin.position.distance (destination.position)
			else
				Result := 0.0
				from
					i := 1
				until
					i = polypoints.count
				loop
					Result := Result + polypoints.item (i).distance (polypoints.item (i + 1))
					i := i + 1
				end
			end
		end

feature -- Status report

	is_directed: BOOLEAN
			-- Is the road directed?

feature {TRAFFIC_MAP, TRAFFIC_PATH} -- Access

	origin_impl: TRAFFIC_NODE

	destination_impl: TRAFFIC_NODE

invariant

	polypoints_exist: polypoints /= Void

end
