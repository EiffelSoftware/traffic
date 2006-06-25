indexing
	description: "Objects that ..."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_EVENT_TAXI_OFFICE

inherit
	TRAFFIC_TAXI_OFFICE

create
		make
		
feature -- Creation procedure
		make(number_of_taxis: INTEGER; a_seed: INTEGER) is
				-- creates a taxi office that clients and taxis communicate with by events.
				-- add 'number' taxis to this office available_taxi_list
				local
					i:INTEGER
				do
					create available_taxi_list.make(1)
					create request
					create taxi_available
					create taxi_busy
					create reject_request
					
					request.subscribe(agent call(?, ?))
					taxi_available.subscribe(agent enlist(?))
					taxi_busy.subscribe(agent delist(?))
					reject_request.subscribe(agent reject(?,?))
					
					from 
						i:= 1
					until
						i > number_of_taxis
					loop
						-- add to i to a_seed in each loop to ensure that each taxi will use 
						-- another seed for the random generation
						available_taxi_list.extend( create {TRAFFIC_EVENT_TAXI}.make_random(Current, a_seed + i, number_of_taxis))
						i := i +1
					end	
				end
				

feature -- Events
	request: EM_EVENT_CHANNEL[TUPLE[EM_VECTOR_2D, EM_VECTOR_2D]]
			-- event when a taxi is needed 
			-- containing the from location and the intended destination as em_vector_2d.
	taxi_available: EM_EVENT_CHANNEL[TUPLE[TRAFFIC_TAXI]]
			-- event when a taxi gets available.
	taxi_busy: EM_EVENT_CHANNEL[TUPLE[TRAFFIC_TAXI]]
			-- event when a taxi gets busy.
	reject_request: EM_EVENT_CHANNEL[TUPLE[EM_VECTOR_2D, EM_VECTOR_2D]]
			-- event when a taxi rejects to take a request
			-- containing the from location and the intended destination as em_vector_2d.
						
feature {TRAFFIC_EVENT_TAXI} -- communication from the taxis to their office
		
		reject(from_location: EM_VECTOR_2D; to_location: EM_VECTOR_2D) is
				-- event taxi office publishes the request again.
			do	
				request.publish([from_location, to_location])
			end
		

invariant
	request_not_void: request /= void
	taxi_available_not_void: taxi_available /= void
	taxi_busy_not_void: taxi_busy /= void
end
