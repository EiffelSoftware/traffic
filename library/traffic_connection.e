indexing
	description: "Objects that ..."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

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
			polypoints.copy (a_polypoints)
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






feature{NONE} -- Implementation



feature -- Basic operation





feature -- Access
		
	type: TRAFFIC_TYPE
			-- Type of line section.
		
	origin: TRAFFIC_PLACE
			-- Place of origin.
			
	destination: TRAFFIC_PLACE
			-- Place of destination.
	
	state: TRAFFIC_LINE_SECTION_STATE
			-- State of line section.
			
	polypoints: ARRAYED_LIST [EM_VECTOR_2D]
			-- position representation of line section.

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
	
end	
