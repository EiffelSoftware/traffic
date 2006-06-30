indexing
	description: "Deferred class for taxis working for a taxi office."
	date: "$Date$"
	revision: "$Revision$"

deferred class
	TRAFFIC_TAXI inherit 
		TRAFFIC_VEHICLE
	
feature -- Access
	office: TRAFFIC_TAXI_OFFICE is deferred end
		-- Taxi office the taxi works for.
		
feature -- Status report
	busy: BOOLEAN
		--Is taxi busy.
		
feature -- Basic operations
	
	take(from_location: EM_VECTOR_2D; to_location: EM_VECTOR_2D)
	is 
		-- Take a request. 
		-- Pick up somebody at from_location and bring him or her to  to_location.
	require 
	from_location_not_void: from_location /= void
	to_location_not_void: to_location /= void
	deferred
	end

feature{NONE} --Implementation

	set_request_information (from_location: EM_VECTOR_2D; to_location: EM_VECTOR_2D) is
		-- Set the origin and destination of a request. 
		-- Set new point to drive from from_location to to_location.
		require
			valid_from_location: from_location /= void
			valid_to_locaton: to_location /= void
		local
			new_polypoints: ARRAYED_LIST [EM_VECTOR_2D]
		do
				-- New polypoint to travel through.
				create new_polypoints.make(0)
				-- Wait so that passenger can board.
				new_polypoints.extend(from_location)
				new_polypoints.extend(from_location)
				new_polypoints.extend(from_location)
				new_polypoints.extend(from_location)
				new_polypoints.extend(from_location)
				new_polypoints.extend(from_location)
				new_polypoints.extend(from_location)
				-- Wait so that passenger can deboard.
				new_polypoints.extend(to_location)
				new_polypoints.extend(to_location)
				new_polypoints.extend(to_location)
				new_polypoints.extend(to_location)
				new_polypoints.extend(to_location)
				new_polypoints.extend(to_location)
				new_polypoints.extend(to_location)
				polypoints := new_polypoints
				polypoints.start
				-- Set the new origin and destination.
				origin := position
				destination := map_to_gl_coords (from_location)
				set_reiterate (false)
		end	
	
invariant
	office_not_void: office /= void
end
