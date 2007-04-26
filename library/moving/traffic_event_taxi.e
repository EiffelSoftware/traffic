indexing
	description: "Taxi objects using event based communication"
	date: "$Date: 6/6/2006$"
	revision: "$Revision$"

class
	TRAFFIC_EVENT_TAXI inherit
		TRAFFIC_TAXI
			redefine
				make_random
			end

create
	make_random

feature -- Initialization

	make_random (a_taxi_office: TRAFFIC_EVENT_TAXI_OFFICE; stops: INTEGER) is
			-- Taxi with an associated 'a_taxi_office'.
			-- Stop at 'stops' random positions.
		local
			evening_time, morning_time: DOUBLE
			random: RANDOM
		do
			traffic_type := create {TRAFFIC_TYPE_EVENT_TAXI}.make
			create polypoints.make (stops)
			add_random_polypoints (stops)
			create poly_cursor.make (polypoints)
			poly_cursor.start

			office := a_taxi_office
			-- Inform the office that the taxi is available to get requests.
			office.taxi_available.publish([Current])

			set_reiterate (true)
			update_coordinates
			update_angle

			speed := 17
			start
--			virtual_speed := 17

			-- set lit time
--			create random.make
--			random.set_seed (out.hash_code)
--			evening_time := 16.0 +(random.double_item*(2).to_double) --18 + interval[0,2]
--			random.forth
--			morning_time := 32.00 + (random.double_item*(4).to_double) --8 + interval[0,4]
--			light_time := [evening_time, morning_time]
		end

feature -- Access

	office : TRAFFIC_EVENT_TAXI_OFFICE
		-- Taxi office the taxi works for

feature -- Basic operations

	take(from_location: EM_VECTOR_2D; to_location: EM_VECTOR_2D) is
			-- Take a request. Pick up somebody at 'from_location' and bring him or her to 'to_location'.
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
				update_angle
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
				destination := polypoints.first
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

--	random_number_not_void: random_number /= void

end
