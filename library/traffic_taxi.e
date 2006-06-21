indexing
	description: "Taxi used for taxi dispatcher application using method call communication"
	date: "$Date: 6/6/2006$"
	revision: "$Revision$"

class
	TRAFFIC_DISPATCHER_TAXI
	inherit TRAFFIC_TRANSPORTATION
	redefine 
		take_tour end
	create
		make_random
	
feature -- Creation procedure
	make_random (taxi_office: TRAFFIC_DISPATCHER_TAXI_OFFICE; stops: INTEGER; a_seed: INTEGER;) is		
			-- create a taxi with an associated taxi office taxi_office
			-- which stops at 'stops' random positions.
			-- a_seed is used as seed for the random generator.
			require
				taxi_office_not_void: taxi_office /= void
				valid_seed: a_seed >= 0
				valid_number_of_stops: stops >= 2
			do
				traffic_type := create {TRAFFIC_TYPE_TAXI}.make
				create polypoints.make (stops)
				create random_direction.set_seed(a_seed)
				add_random_polypoints (stops)
				
				office := taxi_office
				office.enlist(Current)
				
				set_coordinates
				set_angle
				virtual_speed := maximum_virtual_speed
				--TODO if needed random_speed: virtual_speed := random_direction.double_item	
			end

feature -- Access
	office : TRAFFIC_DISPATCHER_TAXI_OFFICE
		-- associated taxi office. taxi office the taxi works for.
		
feature -- Status report

	busy: BOOLEAN
		--is taxi busy
		--TODO: may be remove redundancy (taxi_list from office)
		
feature -- Basic operations
			
	take(from_location: EM_VECTOR_2D; to_location: EM_VECTOR_2D) is
			-- take and serve a request. Pick up somebody at from_location and
			-- bring him or her to  to_location
			require
				valid_from_location: from_location /= void
				valid_to_locaton: to_location /= void
			local
				new_polypoints: ARRAYED_LIST [EM_VECTOR_2D]
			do
				if not busy then
				--set taxi busy and take it out of the available_taxi_list of the office.
					busy := True
					office.delist(Current)
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
					
				else
					office.reject(Current, from_location, to_location)
				end
			end
			
			take_tour is
			-- take a tour on the map
				do
					Precursor
					if has_finished and busy then
						-- taxi has fullfilled a request
						-- first: prepare for available state of the taxi:
						-- add new random directions
							polypoints.wipe_out
							add_random_polypoints (7)
						-- set new destination
							origin := position
							destination := map_to_gl_coords (polypoints.first)
							has_finished := false
							set_reiterate (true)
						-- second: taxi is available again, that must be published
							busy := false
							office.enlist(Current)
					end
				end
feature --Constants
	maximum_virtual_speed: REAL is 1.5
		--the maximum speed a taxi is allowed to drive

invariant
	office_not_void: office /= void
	random_direction_not_void: random_direction /= void
	speed_limitation: virtual_speed <= maximum_virtual_speed

end
