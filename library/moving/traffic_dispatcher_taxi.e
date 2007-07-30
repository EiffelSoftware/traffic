indexing
	description: "Taxi used for taxi dispatcher application using method call communication"
	date: "$Date: 6/6/2006$"
	revision: "$Revision$"

class
	TRAFFIC_DISPATCHER_TAXI inherit
		TRAFFIC_TAXI
			redefine
				make_random, move
			end
create
	make_random

feature -- Initialization

	make_random (a_taxi_office: TRAFFIC_DISPATCHER_TAXI_OFFICE; a_point_list: DS_ARRAYED_LIST [TRAFFIC_COORDINATE]) is
			-- Create a taxi with an associated 'a_taxi_office'.
			-- Random speed and stops at 'stops' random positions.
			-- Set seed of random_number to 'a_seed'.
		do
			create polypoints.make_from_linear (a_point_list)
			create poly_cursor.make (polypoints)
			poly_cursor.start

			office := a_taxi_office
			office.enlist(Current)

			set_reiterate (true)
			update_coordinates
			update_angle

			speed := 17
			start
		end

feature -- Access

	office : TRAFFIC_DISPATCHER_TAXI_OFFICE
			-- Taxi office 'Current' works for.

feature -- Basic operations

	take (from_location: TRAFFIC_COORDINATE; to_location: TRAFFIC_COORDINATE) is
			-- Take a request. Pick somebody up at from_location and bring him or her to to_location.
			-- If busy inform the taxi office to recall it.
		do
			if not busy then
				-- Set taxi busy and take it out of the available_taxi_list of the office.
				set_request_information (from_location, to_location)
				busy := True
				-- Set is_marked to true so that the view will draw the busy taxi marked.
				is_marked := True
				office.delist(Current)
				update_angle
			else
				office.recall(from_location, to_location)
			end
		end

	move is
			-- Take a tour on the map.
			-- Set new random directions and if 'Current' has done a request and is available again.
		do
			Precursor
			if has_finished and busy then
					-- Taxi has fullfilled a request.
					-- Add new random directions.
					-- TODO
--					polypoints.wipe_out
--					add_random_polypoints (7)
					-- Set new destination
					origin := position
					destination := polypoints.first
					has_finished := false
					set_reiterate (true)
					-- Taxi is available again.
					busy := false
					is_marked := false
					office.enlist(Current)
			end
		end

end
