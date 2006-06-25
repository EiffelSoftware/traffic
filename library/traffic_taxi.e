indexing
	description: "Objects that ..."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

deferred class
	TRAFFIC_TAXI
	inherit TRAFFIC_TRANSPORTATION 
	
feature -- Access
	office: TRAFFIC_TAXI_OFFICE is deferred end
		-- associated taxi office. taxi office the taxi works for.
		
feature -- Status report
	busy: BOOLEAN
		--is taxi busy
		
feature -- Basic operations
	
	take(from_location: EM_VECTOR_2D; to_location: EM_VECTOR_2D) is deferred end
		-- take and serve a request. Pick up somebody at from_location and
		-- bring him or her to  to_location

feature{NONE} --Implementation

	set_request_information (from_location: EM_VECTOR_2D; to_location: EM_VECTOR_2D) is
		-- set the origin and destination of a request to pick up somebody at from_location and
		-- bring him or her to to_location
		require
			valid_from_location: from_location /= void
			valid_to_locaton: to_location /= void
		local
			new_polypoints: ARRAYED_LIST [EM_VECTOR_2D]
		do
			--new polypoint to travel through from from_location to to_location
				create new_polypoints.make(0)
			--wait so that passenger can board
				new_polypoints.extend(from_location)
				new_polypoints.extend(from_location)
				new_polypoints.extend(from_location)
				new_polypoints.extend(from_location)
				new_polypoints.extend(from_location)
				new_polypoints.extend(from_location)
				new_polypoints.extend(from_location)
			--wait so that passenger can deboard
				new_polypoints.extend(to_location)
				new_polypoints.extend(to_location)
				new_polypoints.extend(to_location)
				new_polypoints.extend(to_location)
				new_polypoints.extend(to_location)
				new_polypoints.extend(to_location)
				new_polypoints.extend(to_location)
				polypoints := new_polypoints
				polypoints.start
			--set the new origin and destination
				origin := position
				destination := map_to_gl_coords (from_location)
				set_reiterate (false)
		end

feature --Constants
	default_virtual_speed: REAL is 0.7
		--the default speed a taxi drives on the average			
	
invariant
	office_not_void: office /= void
end
