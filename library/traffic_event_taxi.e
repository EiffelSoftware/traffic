indexing
	description: "Taxi using event based communication"
	date: "$Date: 6/6/2006$"
	revision: "$Revision$"

class
	TRAFFIC_EVENT_TAXI
	inherit TRAFFIC_TAXI
	redefine 
		take_tour end
	create
		make_random
	
feature -- Creation procedure
	make_random (taxi_office: TRAFFIC_EVENT_TAXI_OFFICE; a_seed: INTEGER; stops: INTEGER;) is		
			-- create a taxi with an associated taxi office taxi_office
			-- which stops at 'stops' random positions.
			-- a_seed is used as seed for the random generator.
			require
				taxi_office_not_void: taxi_office /= void
				valid_seed: a_seed >= 0
				valid_number_of_stops: stops >= 2
			do
				traffic_type := create {TRAFFIC_TYPE_EVENT_TAXI}.make
				create polypoints.make (stops)
				create random_direction.set_seed(a_seed)
				add_random_polypoints (stops)
				
				office := taxi_office
				-- inform the office that the taxi is available to get requests.
				office.taxi_available.publish([Current])
				
				set_reiterate (true)
				set_coordinates
				set_angle
				virtual_speed := default_virtual_speed
				--TODO if needed random_speed: virtual_speed := random_direction.double_item	
			end

feature -- Access
	office : TRAFFIC_EVENT_TAXI_OFFICE
		-- associated taxi office. taxi office the taxi works for.
		
feature -- Basic operations
			
		take(from_location: EM_VECTOR_2D; to_location: EM_VECTOR_2D) is
			-- take and serve a request. Pick up somebody at from_location and
			-- bring him or her to  to_location
			do
				if not busy then
				--set new destination and origin
					set_request_information(from_location, to_location)
				--set taxi busy and fire taxi_busy event to inform the taxi office.
					busy := True
					office.taxi_busy.publish ([Current])
				-- is_marked is set to true so that the view will draw the busy taxi marked.
					is_marked := True
				else
					office.reject_request.publish([from_location, to_location])
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
						-- second: taxi is available again and publish taxi_available event to
						-- inform the taxi office
							busy := false
							office.taxi_available.publish([Current])
						-- set is_marked to false so that the view will draw the taxi normally.
							is_marked := false
					end
				end

invariant
	random_direction_not_void: random_direction /= void
end
