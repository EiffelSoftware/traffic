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
		make is
				-- creates a taxi office that clients and taxis communicate with by events.
				do
					create available_taxi_list.make(1)
					create request
					create taxi_available
					create taxi_busy
					
					request.subscribe(agent call(?, ?))
					taxi_available.subscribe(agent enlist(?))
					taxi_busy.subscribe(agent delist(?))
					
				end
				

feature -- Events
	request: EVENT_TYPE[TUPLE[EM_VECTOR_2D, EM_VECTOR_2D]]
			-- event when a taxi is needed 
			-- containing the from location and the intended destination as em_vector_2d.
	taxi_available: EVENT_TYPE[TUPLE[TRAFFIC_TAXI]]
			-- event when a taxi gets available.
	taxi_busy: EVENT_TYPE[TUPLE[TRAFFIC_TAXI]]
			-- event when a taxi gets busy.
			
		
			
feature {TRAFFIC_EVENT_TAXI} -- communication from the taxis to their office
		
		reject(taxi: TRAFFIC_EVENT_TAXI; from_location: EM_VECTOR_2D; to_location: EM_VECTOR_2D) is
				-- for taxis to reject a request because they got busy. 
			do	
				delist(taxi)
				request.publish([from_location, to_location])
			end
		

invariant
	request_not_void: request /= void
	taxi_available_not_void: taxi_available /= void
	taxi_busy_not_void: taxi_busy /= void
end
