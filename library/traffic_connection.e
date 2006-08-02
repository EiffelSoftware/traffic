indexing
	description: "Objects of type TRAFFIC_CONNECTION represents connections between TRAFFIC_PLACEs"

deferred class
	TRAFFIC_CONNECTION

inherit
	HASHABLE

feature -- Status setting

	set_polypoints (a_polypoints: ARRAYED_LIST [EM_VECTOR_2D]) is
			-- Set polypoints to `a_polypoints'.
		require
			a_polypoints_exist: a_polypoints /= Void
		do
			polypoints := a_polypoints
		ensure
			equal (polypoints, a_polypoints)
			polypoints_exists: polypoints /= Void
			polypoints_equal: polypoints.count > 0 implies equal (polypoints, a_polypoints)
		end

	remove_polypoints is
			-- Remove polypoints.
		do
			polypoints.wipe_out
		end

feature -- Access

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

	polypoints: ARRAYED_LIST [EM_VECTOR_2D]
			-- position representation of the connection.

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
					Result := Result + polypoints.i_th (i).distance (polypoints.i_th (i + 1))
					i := i + 1
				end
			end
		end

feature {TRAFFIC_MAP} -- Access

	origin_impl: TRAFFIC_NODE

	destination_impl: TRAFFIC_NODE

end
