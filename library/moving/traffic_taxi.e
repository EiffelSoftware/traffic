indexing
	description: "Deferred class for taxis working for a taxi office"
	date: "$Date$"
	revision: "$Revision$"

deferred class
	TRAFFIC_TAXI

inherit

	TRAFFIC_VEHICLE

feature {NONE} -- Initialization

	make_random (a_taxi_office: TRAFFIC_TAXI_OFFICE; stops: INTEGER) is
			-- Taxi with an associated 'a_taxi_office'.
			-- Stop at 'stops' random positions.
			-- The taxi drives around the center in a certain radius (makes sure that it doesn't disappear)
		require
			a_taxi_office_not_void: a_taxi_office /= void
			valid_number_of_stops: stops >= 2
		deferred
		ensure
			taxi_office_set: office /= Void
			polypoints_not_empty: polypoints /= Void and then polypoints.count >= stops
		end

feature -- Access

	office: TRAFFIC_TAXI_OFFICE is deferred end
			-- Taxi office the taxi works for

feature -- Status report

	busy: BOOLEAN
			--Is taxi busy?

feature -- Basic operations

	take(from_location: EM_VECTOR_2D; to_location: EM_VECTOR_2D) is
			-- Pick up somebody at from_location and bring him or her to  to_location.
		require
			from_location_not_void: from_location /= void
			to_location_not_void: to_location /= void
		deferred
		end

feature{NONE} --Implementation

	set_request_information (from_location: EM_VECTOR_2D; to_location: EM_VECTOR_2D) is
			-- Set new origin and destination, new points to drive from from_location to to_location.
		require
			valid_from_location: from_location /= void
			valid_to_locaton: to_location /= void
		local
			new_polypoints: DS_ARRAYED_LIST [EM_VECTOR_2D]
		do
			-- New polypoint to travel through.
			create new_polypoints.make(0)
			-- Wait so that passenger can board.
			new_polypoints.force_last(from_location)
			new_polypoints.force_last(from_location)
			new_polypoints.force_last(from_location)
			new_polypoints.force_last(from_location)
			new_polypoints.force_last(from_location)
			new_polypoints.force_last(from_location)
			new_polypoints.force_last(from_location)
			-- Wait so that passenger can deboard.
			new_polypoints.force_last(to_location)
			new_polypoints.force_last(to_location)
			new_polypoints.force_last(to_location)
			new_polypoints.force_last(to_location)
			new_polypoints.force_last(to_location)
			new_polypoints.force_last(to_location)
			new_polypoints.force_last(to_location)
			polypoints := new_polypoints
			polypoints.start
			-- Set the new origin and destination.
			origin := position
--			destination := map_to_gl_coords (from_location)
			destination := from_location
			set_reiterate (false)
		end

	add_random_polypoints(num: INTEGER) is
		--  Add to the polypoints 'num' random destinations.
		local
			i: INTEGER
			random_number: RANDOM
			t: TIME
			temp_x, temp_y: DOUBLE
		do
			create t.make_now
			create random_number.set_seed (t.fine_seconds.floor)
			random_number.forth
			from
				i := 1
			until
				i > num
			loop
				temp_x := random_number.double_item
				random_number.forth
				temp_y := random_number.double_item
				create destination.make (1500 * temp_x - 67, 1500 * temp_y - 32)
				-- approximated places so that they are on the map
				random_number.forth
				polypoints.force_last (destination)
				i := i+1
			end
			polypoints.start
		ensure
			polypoints_extended: polypoints.count = old polypoints.count + num
		end

	give_random_direction (random_number: RANDOM) is
			-- Give a random destination.
		require
			random_number /= Void
		local
			temp_x, temp_y: DOUBLE
		do
			temp_x := random_number.double_item
			random_number.forth
			temp_y := random_number.double_item
			create destination.make (1500 * temp_x - 67, 1500 * temp_y - 32)
			-- approximated places so that they are on the map
			random_number.forth
		ensure
			destination.x < 1433
			destination.x > -67
			destination.y < 1468
			destination.y > -32
		end

invariant

	office_not_void: office /= void

end
