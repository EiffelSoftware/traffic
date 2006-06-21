indexing
	description: "Objects that ..."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_DISPATCHER_TAXI_OFFICE
inherit
DOUBLE_MATH
TRAFFIC_3D_CONSTANTS
		export {NONE} all end
create
		make
		
feature -- Creation procedure
		make is
				--TODO: better comment
				-- creates a taxi office that clients and taxis communicate with by client call.
				do
					create available_taxi_list.make(1)
				end		
				
feature -- Access
	available_taxi_list: ARRAYED_LIST[TRAFFIC_DISPATCHER_TAXI]

feature -- Basic operations

	call(from_location: EM_VECTOR_2D; to_location: EM_VECTOR_2D) is
			-- used by passenger to call the taxi office to get a taxi from from_location
			-- to go to to_location.
			-- 'Current' determines the nearest taxi to the from_location and 
			-- passes the request on to this taxi.
			require
				from_location_not_void: from_location /= void
				to_location_not_void: to_location /= void
			local
				nearest_taxi: TRAFFIC_DISPATCHER_TAXI
				minimum_distance: REAL
				temp_distance: REAL
				temp_position: EM_VECTOR_2D
			do
				if available_taxi_list.count > 0 then 
					nearest_taxi := available_taxi_list.first
					temp_position := gl_to_map_coords (nearest_taxi.position)
					minimum_distance := sqrt((from_location.x - temp_position.x)^2 + (from_location.y - temp_position.y)^2)
					from 
						available_taxi_list.start
						available_taxi_list.forth
						-- to start loop on second item in available_taxi_list
					until
						available_taxi_list.after
					loop
						--TODO: determine nearest point algorithm that uses streets.
						temp_position :=gl_to_map_coords (available_taxi_list.item.position)
						temp_distance := sqrt((from_location.x - temp_position.x)^2 + (from_location.y - temp_position.y)^2)
						if minimum_distance > temp_distance then
							minimum_distance := temp_distance
							nearest_taxi := available_taxi_list.item
						end
						available_taxi_list.forth
					end
					nearest_taxi.take(from_location, to_location)
				end
			end
		
	enlist(taxi: TRAFFIC_DISPATCHER_TAXI) is
			-- used by a taxi to enlist itself when it gets available.
			-- busy taxis may not enlist in available_taxi_list.
			require
				taxi_not_busy: taxi.busy = false
			do
				available_taxi_list.extend(taxi)
			ensure
				taxi_added: available_taxi_list.count = old available_taxi_list.count + 1
			end
			
	delist(taxi: TRAFFIC_DISPATCHER_TAXI) is
			-- used by a taxi to delist itself when it gets busy.
			-- available taxis may not delist.
			require
				taxi_not_available: taxi.busy = true
			do
				if available_taxi_list.has(taxi)
					then 
						available_taxi_list.prune_all(taxi)
					end
			end
feature {TRAFFIC_DISPATCHER_TAXI} -- communication from the taxis to their office
		
		reject(taxi: TRAFFIC_DISPATCHER_TAXI; address: EM_VECTOR_2D; dest: EM_VECTOR_2D) is
				--TODO: change variable names from, to abbreviation once
				--TODO: may be remove this for simplicity or as return type of taxi.take
				-- for taxis to reject a request because they got busy. 
			require
				taxi_not_void: taxi /= void
				address_not_void: address /= void
				dest_not_void: dest /= void
			do	
				delist(taxi)
				call(address,dest)
			end

feature {NONE} -- Implementation

invariant
	available_taxi_list_not_void: available_taxi_list /= void

end
