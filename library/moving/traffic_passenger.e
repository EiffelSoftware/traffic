indexing
	description: "Objects that use a vehicle to travel"
	date: "$Date: 6/6/2006$"
	revision: "$Revision$"

class
	TRAFFIC_PASSENGER

inherit
		TRAFFIC_MOVING
			redefine
				move
			end

create
	make_with_path, make_with_points
	--make_random,make_directed,

feature -- Initialization

	make_with_path (a_path: TRAFFIC_PATH; a_speed: DOUBLE) is
			-- Set passenger's path to be `a_path'.
		require
			a_path_not_void: a_path /= Void
		local
			list: DS_ARRAYED_LIST [EM_VECTOR_2D]
			path_conns: ARRAYED_LIST [TRAFFIC_CONNECTION]
			evening_time, sleep_time: DOUBLE
		do
			path := a_path
			position := a_path.origin.position
			path_conns := a_path.connections
			create list.make (path_conns.count + 1)
			from
				path_conns.start
			until
				path_conns.off
			loop
				list.append_last (path_conns.item.polypoints)
				path_conns.forth
			end
			polypoints := list
			create poly_cursor.make (polypoints)
			poly_cursor.start
			traffic_type := a_path.first.type
			update_coordinates
			update_angle
			speed := a_speed
		end

	make_with_points (a_list: DS_ARRAYED_LIST [EM_VECTOR_2D]; a_speed: DOUBLE) is
			-- Set passengers route as `a_list' and speed to `a_speed'.
			-- `a_list' is the list of the points where the passenger will go through.
		require
			a_list_not_void: a_list /= Void
			a_speed_not_negative: a_speed >= 0
		do
			traffic_type := create {TRAFFIC_TYPE_WALKING}.make
			polypoints := a_list
			polypoints.start
			position := polypoints.first
			update_coordinates
			update_angle
			speed := a_speed
		end

feature -- Access

	path: TRAFFIC_PATH
			-- Path to take

	intended_line: TRAFFIC_LINE
			-- Line to use next

	current_vehicle: TRAFFIC_VEHICLE
			-- Vehicle passenger is traveling by
			-- Void if passenger uses no means of transportation

	boarding_stop: INTEGER
			-- Stop where passenger intends to board
			-- Number of stops from line start until where to board

	deboarding_stop: INTEGER
			-- Stop where passenger intends to get off
			-- Number of stops from line start until where to get off

feature -- Status report

	direction_line_back: BOOLEAN
			-- In which direction to travel?
			-- If the deboarding_stop is less than the boarding_stop the passenger has to use
			-- a vehicle that travels back on its line.


--	make_random (stops: INTEGER; a_seed: INTEGER; ) is
--			-- Stop at 'stops' random positions and give random speed.
--			-- 'a_seed' to set the random numbers seed, e. g. use time ticks.
--		require
--			a_seed_not_negative: a_seed >= 0
--			valid_number_of_stops: stops >= 2
--		do
--			traffic_type := create {TRAFFIC_TYPE_WALKING}.make
--			create polypoints.make (0)
--			create random_number.set_seed(a_seed)
--			add_random_polypoints(stops)
--			set_coordinates
--			set_angle
--			speed := random_number.double_item
--			random_number.forth
--		end

feature -- Basic operations

--	set_polypoints (a_list: DS_ARRAYED_LIST [EM_VECTOR_2D]) is
--			-- Set polypoints to travel through to `a_list'.
--		require
--			a_list_valid: a_list /= Void and then a_list.count >= 2 and then not a_list.has (Void)
--		do
--			polypoints := a_list
--			polypoints.start
--			update_coordinates
--			update_angle
--		end

	take_tour is
			-- Take a tour on the map.
		do
			move
		end

	move is
			--
		local
			direction: EM_VECTOR_2D
		do
			direction := destination - origin
			if not has_finished then

				if ((position.x - destination.x).abs < speed) and ((position.y - destination.y).abs < speed) or direction.length <= 0 then
					update_coordinates
					update_angle
				else
					position := position + (direction / direction.length) * speed
				end
			end
		end


	set_intended_line_info (a_line: TRAFFIC_LINE; a_boarding_stop: INTEGER; a_deboarding_stop: INTEGER) is
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

	board (a_line_transport: TRAFFIC_LINE_VEHICLE) is
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

	deboard is
			-- Deboard current_vehicle.
		require
			current_vehicle /= void
		do
			current_vehicle.unload(1)
			current_vehicle := void
		ensure
			current_transportatoin_not_set: current_vehicle = void
		end

end

