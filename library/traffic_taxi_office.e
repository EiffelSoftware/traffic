indexing
	description: "Objects that ..."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

deferred class
	TRAFFIC_TAXI_OFFICE
	inherit
		DOUBLE_MATH
		TRAFFIC_3D_CONSTANTS export {NONE} all end
	
feature -- Access
	available_taxi_list: ARRAYED_LIST[TRAFFIC_TAXI]
		-- available taxis that work for the taxi office
	
feature -- Basic operations

	call(from_location:EM_VECTOR_2D; to_location:EM_VECTOR_2D) is
			-- determines the nearest taxi to the from_location place
			-- and passes the request on to this taxi.
			require
				from_location_not_void: from_location /= void
				to_location_not_void: to_location /= void
			local
				nearest_taxi: TRAFFIC_TAXI
				minimum_distance: REAL
				temp_distance: REAL
				position: EM_VECTOR_2D
			do
				if available_taxi_list.count > 0 then 
					nearest_taxi := available_taxi_list.first
					position := gl_to_map_coords (nearest_taxi.position)
					minimum_distance := sqrt((from_location.x - position.x)^2 + (from_location.y - position.y)^2)
					from 
						available_taxi_list.start
						available_taxi_list.forth
						--to start on second item on taxi_list
					until
						available_taxi_list.after
					loop
						--TODO: determine nearest point algorithm that uses streets.
						position :=gl_to_map_coords (available_taxi_list.item.position)
						temp_distance := sqrt((from_location.x - position.x)^2 + (from_location.y - position.y)^2)
						if minimum_distance > temp_distance then
							minimum_distance := temp_distance
							nearest_taxi := available_taxi_list.item
						end
						available_taxi_list.forth
					end
					nearest_taxi.take(from_location, to_location)
				end
			end
		
feature{TRAFFIC_TAXI}  	-- operations for taxi to communicate with their office.
						-- TRAFFIC_DISPATCHER_TAXIs call them by client relation.
						-- TRAFFIC_EVENT_TAXIs call events that will be handled by these operations.

	enlist(taxi: TRAFFIC_TAXI) is
			-- called on taxi_available event to put taxi in the available_taxi_list
			require
				taxi_not_busy: taxi.busy = false
			do
				available_taxi_list.extend(taxi)
				
			ensure
				taxi_added: available_taxi_list.count = old available_taxi_list.count + 1
			end
			
	delist(taxi: TRAFFIC_TAXI) is
			-- called on taxi_busy event to take taxi out of the available_taxi_list
			require
				taxi_not_available: taxi.busy = true
			do
				if available_taxi_list.has(taxi)
					then 
						available_taxi_list.prune_all(taxi)
					end
			end

	reject(taxi: TRAFFIC_TAXI; from_location: EM_VECTOR_2D; to_location: EM_VECTOR_2D) is 
				-- for taxis to reject a request because they got busy. 
			require
				taxi_not_void: taxi /= void
				from_location_not_void: from_location /= void
				to_location_not_void: to_location /= void
			deferred
			end

invariant
	available_taxi_list_not_void: available_taxi_list /= void
end
