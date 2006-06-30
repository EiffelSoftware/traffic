indexing
	description: "Taxi objects using event based communication"
	date: "$Date: 6/6/2006$"
	revision: "$Revision$"

class
	TRAFFIC_EVENT_TAXI inherit 
		TRAFFIC_TAXI

create
	make_random
	
feature -- Initialization
	make_random (a_taxi_office: TRAFFIC_EVENT_TAXI_OFFICE; a_seed: INTEGER; stops: INTEGER;) is		
			-- Taxi with an associated 'a_taxi_office'.
			-- Stop at 'stops' random positions.
			-- Random speed and destination using 'a_seed' as seed for the random number.
			require
				a_taxi_office_not_void: a_taxi_office /= void
				valid_seed: a_seed >= 0
				valid_number_of_stops: stops >= 2
			do
				traffic_type := create {TRAFFIC_TYPE_EVENT_TAXI}.make
				create polypoints.make (stops)
				create random_number.set_seed(a_seed)
				add_random_polypoints (stops)
				
				office := a_taxi_office
				-- Inform the office that the taxi is available to get requests.
				office.taxi_available.publish([Current])
				
				set_reiterate (true)
				set_coordinates
				set_angle
				virtual_speed := random_number.double_item	
			end

feature -- Access
	office : TRAFFIC_EVENT_TAXI_OFFICE
		-- Taxi office the taxi works for.
		
feature -- Basic operations
			
		take(from_location: EM_VECTOR_2D; to_location: EM_VECTOR_2D) is
			-- Take a request. Pick up somebody at 'from_location' and bring him or her to 'to_location'
			-- If busy inform the taxi office to recall it.
			do
				if not busy then
					-- Set new destination and origin.
					set_request_information(from_location, to_location)
					-- Set taxi busy and fire taxi_busy event to inform the taxi office.
					busy := True
					office.taxi_busy.publish ([Current])
					-- Is_marked is set to true so that the view will draw the busy taxi marked.
					is_marked := True
				else
					office.reject_request.publish([from_location, to_location])
				end
			end
			
		take_tour is
			-- Take a tour on the map.
			-- Set new random directions and if 'Current' has done a request and is available again .
				do
					move
					if has_finished and busy then
						-- Taxi has fullfilled a request.
						-- Add new random directions.
						polypoints.wipe_out
						add_random_polypoints (7)
						-- set new destination
						origin := position
						destination := map_to_gl_coords (polypoints.first)
						has_finished := false
						set_reiterate (true)
						-- Publish taxi_available event to inform the taxi office
						busy := false
						office.taxi_available.publish([Current])
						-- Set is_marked to false so that the view will draw the taxi normally.
						is_marked := false
					end
				end

invariant
	random_number_not_void: random_number /= void
end
