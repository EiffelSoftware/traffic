indexing
	description: "Objects that use a vehicle to travel"
	date: "$Date: 6/6/2006$"
	revision: "$Revision$"

class
	TRAFFIC_PASSENGER inherit
		TRAFFIC_MOVING
create
	make_directed, make_random

feature --Access

	intended_line: TRAFFIC_LINE
		-- line to use next

	current_vehicle: TRAFFIC_VEHICLE
		-- Vehicle passenger is traveling by
		-- Void if passenger uses no means of transportation

	boarding_stop: INTEGER
		-- Stop where passenger intends to board
		-- Number of stops from line start until where to board

	deboarding_stop: INTEGER
		-- Stop where passenger intends to get off
		-- Number of stops from line start until where to get off

	direction_line_back: BOOLEAN
		-- In which direction to travel?
		-- If the deboarding_stop is less than the boarding_stop the passenger has to use
		-- a vehicle that travels back on its line.

feature -- Initialization

	make_directed (an_itinerary: ARRAYED_LIST [EM_VECTOR_2D];  a_speed: DOUBLE) is
			-- Set passengers route as 'an_itinerary' and speed to 'a_speed'.
			-- 'an_itinerary' is the list of the points where the passenger will go through.
			require
				an_itinerary_not_void: an_itinerary /= Void
				a_speed_not_negative: a_speed >= 0
			do
				traffic_type := create {TRAFFIC_TYPE_WALKING}.make
				polypoints := an_itinerary
				polypoints.start
				position := polypoints.first
				set_coordinates
				set_angle
				virtual_speed := a_speed
			end

	make_random (stops: INTEGER; a_seed: INTEGER; ) is
			-- Stop at 'stops' random positions and give random speed.
			-- 'a_seed' to set the random numbers seed, e. g. use time ticks.
			require
				a_seed_not_negative: a_seed >= 0
				valid_number_of_stops: stops >= 2
			do
				traffic_type := create {TRAFFIC_TYPE_WALKING}.make
				create polypoints.make (0)
				create random_number.set_seed(a_seed)
				add_random_polypoints(stops)
				set_coordinates
				set_angle
				virtual_speed := random_number.double_item
				random_number.forth
			end

feature -- Basic operations

	take_tour is
			-- Take a tour on the map.
			do
				move
			end

	set_intended_line_info(a_line: TRAFFIC_LINE; a_boarding_stop: INTEGER; a_deboarding_stop: INTEGER) is
			-- Set where 'Current' intends to board and to get off.
			require
				line_not_empty: a_line /= Void
				valid_stop: a_boarding_stop > 0 and a_boarding_stop <= a_line.count
				valid_stop: a_deboarding_stop > 0 and a_deboarding_stop <= a_line.count
			do
				intended_line := a_line
				boarding_stop := a_boarding_stop
				deboarding_stop := a_deboarding_stop
				if a_deboarding_stop < a_boarding_stop then
						direction_line_back := true
					else
						direction_line_back := false
				end

			ensure
				line_set: intended_line /= Void
				stop_set: boarding_stop > 0
				stop_set: deboarding_stop > 0
			end


	board(a_line_transport: TRAFFIC_LINE_VEHICLE) is
			-- Board 'a_line_transportation'.
				require
					inteded_line: a_line_transport.line = intended_line
					intended_direction: a_line_transport.is_traveling_back = direction_line_back
				do
					current_vehicle := a_line_transport
					current_vehicle.load (1)
				ensure
					vehicle_set: current_vehicle = a_line_transport
				end

	deboard() is
			-- Deboard current_vehicle.
			require
				current_vehicle /= void
			do
				current_vehicle.unload(1)
				current_vehicle := void
			ensure
				current_transportatoin_not_set: current_vehicle = void
			end

			-- TODO: check for additional invariants.

end

