indexing
	description: "Taxi office objects that clients and passengers communicate with using events."
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_EVENT_TAXI_OFFICE inherit
		TRAFFIC_TAXI_OFFICE
		rename 	delist as delist_taxi,
				enlist as enlist_taxi end
		
create
		make
		
feature -- Initialization
		make(number_of_taxis: INTEGER; a_seed: INTEGER) is
				-- Event taxi office. Creates event for taxi communication.
				-- Add 'number' taxis to the taxi_list of the office. 
				-- Use 'a_seed' to create random taxis.
				local
					i:INTEGER
				do
					create available_taxi_list.make(1)
					-- create Events.
					create request
					create taxi_available
					create taxi_busy
					create reject_request
					-- Subscribe for Events.
					request.subscribe(agent call(?, ?))
					taxi_available.subscribe(agent enlist(?))
					taxi_busy.subscribe(agent delist(?))
					reject_request.subscribe(agent recall(?,?))
					from 
						i:= 1
					until
						i > number_of_taxis
					loop
						-- Add to i to a_seed in each loop to ensure that each taxi will use 
						-- another seed for the random generation
						available_taxi_list.extend( create {TRAFFIC_EVENT_TAXI}.make_random(Current, a_seed + i, number_of_taxis))
						i := i +1
					end	
				end
				

feature -- Events
	request: EM_EVENT_CHANNEL[TUPLE[EM_VECTOR_2D, EM_VECTOR_2D]]
			-- Event when a taxi is needed 
			-- Containing the from location and the intended destination as em_vector_2d.
	taxi_available: EM_EVENT_CHANNEL[TUPLE[TRAFFIC_EVENT_TAXI]]
			-- Event when a taxi gets available.
	taxi_busy: EM_EVENT_CHANNEL[TUPLE[TRAFFIC_EVENT_TAXI]]
			-- Event when a taxi gets busy.
	reject_request: EM_EVENT_CHANNEL[TUPLE[EM_VECTOR_2D, EM_VECTOR_2D]]
			-- Event when a taxi rejects to take a request
			-- Containing the from location and the intended destination as em_vector_2d.
						
feature {TRAFFIC_EVENT_TAXI} -- communication from the taxis to their office
		
		recall(from_location: EM_VECTOR_2D; to_location: EM_VECTOR_2D) is
				-- Publish the request again.
			do	
				request.publish([from_location, to_location])
			end
			
		enlist(a_taxi: TRAFFIC_EVENT_TAXI) is
			-- Put 'a_taxi' in the available list.
			require
				a_taxi_not_busy: a_taxi.busy = false
			do
				available_taxi_list.extend(a_taxi)
				
			ensure
				a_taxi_added: available_taxi_list.count = old available_taxi_list.count + 1
			end
			
		delist(a_taxi: TRAFFIC_EVENT_TAXI) is
			-- Take a_taxi out of the available_taxi_list
			require
				a_taxi_not_available: a_taxi.busy = true
			do
				if available_taxi_list.has(a_taxi)
					then 
						available_taxi_list.prune_all(a_taxi)
					end
			end
		

invariant
	request_not_void: request /= void
	taxi_available_not_void: taxi_available /= void
	taxi_busy_not_void: taxi_busy /= void
end
