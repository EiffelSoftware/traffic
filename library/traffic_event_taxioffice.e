indexing
	description: "Objects that ..."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_EVENT_TAXI_OFFICE

inherit
DOUBLE_MATH 
TRAFFIC_3D_CONSTANTS
		export {NONE} all end

create
		make
		
feature -- Creation procedure
		make is
				-- creates a taxi office that communicates with its clients and taxis through events.
				do
					create taxi_list.make(100)
					create request
					create taxi_available
					create taxi_busy
					
					request.subscribe(agent receive_call(?, ?))
					taxi_available.subscribe(agent enlist(?))
					taxi_busy.subscribe(agent delist(?))
					
				ensure
					taxi_list_not_void: taxi_list /= void
					request_not_void: request /= void
					taxi_available_not_void: taxi_available /= void
					taxi_busy_not_void: taxi_busy /= void
				end
				
			
feature -- Access
	taxi_list: ARRAYED_LIST[TRAFFIC_EVENT_TAXI]
		-- available taxis that work for the taxi office

feature -- Events
	request: EVENT_TYPE[TUPLE[EM_VECTOR_2D, EM_VECTOR_2D]]
			-- event when a taxi is needed 
			-- containing the address and the intended destination as em_vector_2d.
	taxi_available: EVENT_TYPE[TUPLE[TRAFFIC_EVENT_TAXI]]
			-- event when a taxi gets available.
	taxi_busy: EVENT_TYPE[TUPLE[TRAFFIC_EVENT_TAXI]]
			-- event when a taxi gets busy.
			
feature{NONE} -- Event handlers

	enlist(taxi: TRAFFIC_EVENT_TAXI) is
			-- called on taxi_available event to put taxi in the taxi_list
			do
				taxi_list.force(taxi)
			end
			
	delist(taxi: TRAFFIC_EVENT_TAXI) is
			-- called on taxi_busy event to take taxi out of the taxi_list
			do
				if taxi_list.has(taxi)
					then 
						taxi_list.prune_all(taxi)
					end
			end
		
	receive_call(address:EM_VECTOR_2D; dest:EM_VECTOR_2D) is
			
			-- used to handle a call_event, determines the nearest taxi to the address place
			-- and passes the request on to this taxi.
			require
				dest_not_void: dest /= void
				address_not_void: address /= void
			local
				nearest_taxi: TRAFFIC_EVENT_TAXI
				distance: REAL
				item_distance: REAL
				position: EM_VECTOR_2D
			do
				if taxi_list.count > 0 then 
				
				nearest_taxi := taxi_list.first
				position := gl_to_map_coords (nearest_taxi.position)
				distance := sqrt((address.x - position.x)^2 + (address.y - position.y)^2)
				from 
					taxi_list.start
				until
					taxi_list.after
				loop
					--TODO: determine nearest point algorithm that uses streets.
					position :=gl_to_map_coords (taxi_list.item.position)
					item_distance := sqrt((address.x - position.x)^2 + (address.y - position.y)^2)
					if distance > item_distance then
						distance := item_distance
						nearest_taxi := taxi_list.item
					end
					taxi_list.forth
				end
				nearest_taxi.take(address, dest)
				end
			end
			
feature {TRAFFIC_EVENT_TAXI} -- communication from the taxis to their office
		
		reject(taxi: TRAFFIC_EVENT_TAXI; address: EM_VECTOR_2D; dest: EM_VECTOR_2D) is
				-- for taxis to reject a request because they got busy. 
			require
				taxi_not_void: taxi /= void
				address_not_void: address /= void
				dest_not_void: dest /= void
			do	
				delist(taxi)
				request.publish([address, dest])
			end
		

feature {NONE} -- Implementation

invariant
	taxi_list_not_void: taxi_list /= void
	request_not_void: request /= void
	taxi_available_not_void: taxi_available /= void
	taxi_busy_not_void: taxi_busy /= void
end
