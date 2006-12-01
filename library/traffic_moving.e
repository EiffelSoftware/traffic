indexing
	description: "Deferred class for moving items on the map"
	date: "$Date$"
	revision: "$Revision$"

deferred class
	TRAFFIC_MOVING

inherit
	MATH_CONST
		export {NONE} all end

	DOUBLE_MATH
		export {NONE} all end

	TRAFFIC_3D_CONSTANTS
		export {NONE} all end

feature -- Access

	traffic_type: TRAFFIC_TYPE
			-- Type of moving item

	traffic_info: STRING
			-- Some info on moving item

	position: EM_VECTOR_2D
			-- Current position on map

	origin: EM_VECTOR_2D
			-- Origin position on map

	destination: EM_VECTOR_2D
			-- Destination position on map

	speed: DOUBLE
			-- Speed on the map TODO: speed := distance(take-tour) / time(from one point to another)

	index: INTEGER
			-- Index of moving

	time: DOUBLE
			-- Time for one minute

	polypoints: ARRAYED_LIST [EM_VECTOR_2D]
			-- All points to be traveled through

	virtual_speed: DOUBLE
			-- Virtual speed of the object on the map

	angle_x: DOUBLE
			-- Angle in respect to the x-axis

	light_time: TUPLE[DOUBLE, DOUBLE]
			-- the timerange in which the traveler is lit


feature -- Status report

	is_reiterating: BOOLEAN
			-- Does it turn around if the destination is reached?

	is_traveling_back: BOOLEAN
			-- Is 'Current' traveling back through polypoints?

	has_finished: BOOLEAN
			-- Has it finished his journey?	

	is_marked: BOOLEAN
			-- Is the moving marked, highlighted?

feature -- Basic operations

	take_tour is
			-- Take a tour on the map.
		deferred
		end

feature -- Element change

	set_index (an_index: INTEGER) is
			-- Give the object an index.
		do
			index := an_index
		ensure
			index_set: index = an_index
		end


	set_traffic_info (a_type: STRING) is
			-- Set the traffic info.
		require
			a_type_exists: a_type /= Void
		do
			traffic_info := a_type
		ensure
			info_set: traffic_info = a_type
		end

	set_speed (a_speed: DOUBLE) is
			-- Set the speed to 'a_speed'.
		require
			a_speed_valid: a_speed >= 0
		do
			speed := a_speed
		ensure
			speed_set: speed = a_speed
		end

	set_time (a_time: DOUBLE) is
			-- Set time to 'a_time'.
		require
			a_time_valid: a_time > 0
		do
			time := a_time
		ensure
			time_set: time = a_time
		end

	set_reiterate (a_boolean: BOOLEAN) is
			-- Set the moving reiterating his itinerary.
		do
			is_reiterating := a_boolean
		ensure
			reiterating_set: is_reiterating = a_boolean
		end

feature {NONE} -- Implementation

	move is
			-- Move from origin to destination.
		local
			direction: EM_VECTOR_2D
		do
			direction := destination - origin
			if not has_finished then

				if ((position.x - destination.x).abs < speed) and ((position.y - destination.y).abs < speed) or direction.length <= 0 then
					set_coordinates
					set_angle
				else
					position := position + (direction / direction.length) * speed
				end
			end
		end

	set_coordinates is
			-- Set the positions to the corresponding ones of the line section.
		require
			not polypoints.after
			not polypoints.before
		do
			-- hopefully this will give a bit performance to the journey
			-- otherwise just clear out the map_to_gl_coords
			origin :=  map_to_gl_coords (polypoints.item)
			position := map_to_gl_coords (polypoints.item)

			if is_traveling_back then
				polypoints.back
				if polypoints.before then
					is_traveling_back := False
					polypoints.forth
					set_coordinates
				else
					destination := map_to_gl_coords (polypoints.item)
				end

			elseif is_reiterating then
				polypoints.forth
				if polypoints.after then
					is_traveling_back := True
					polypoints.back
					set_coordinates
				else
					destination := map_to_gl_coords (polypoints.item)
				end
			else
				polypoints.forth
				if polypoints.after then
					has_finished := True
				else
					destination := map_to_gl_coords (polypoints.item)
				end
			end

		ensure
			origin /= Void
			position /= Void
			destination /= Void
		end

	tour_helper is
			-- Help during the tour to get the next destination if there is any.
		do
			if not polypoints.after and not polypoints.before then

				if not is_traveling_back then
					polypoints.forth
					origin := destination
					position := destination
					destination := polypoints.item
				elseif is_traveling_back then
					polypoints.back
					origin := destination
					position := destination
					destination := polypoints.item
				end

			elseif polypoints.after and is_reiterating then
				is_traveling_back := True
				polypoints.back
				origin := destination
				position := destination

			elseif polypoints.before and is_reiterating and is_traveling_back then
				is_traveling_back := False
				polypoints.forth
				origin := destination
				position := destination
				destination := polypoints.item
			else
				has_finished := True
			end
		end

	set_angle is
			-- Set the angles to the x- and y-axis respectively.
		local
			x_difference, y_difference, hypo, quad: DOUBLE
		do
			-- as the x-axis is turned by 180° we have to take this into account
			-- we need the x- and the y difference to calculate the norm
			x_difference := origin.x - destination.x
			y_difference := origin.y - destination.y
			hypo := sqrt ((x_difference * x_difference) + (y_difference * y_difference))

			if hypo /= 0 then
				-- arc_sine in radian
				quad := 0
				if  (x_difference >= 0) and (y_difference >= 0) then
					angle_x := arc_sine (x_difference/hypo)
						-- the same in degree
					angle_x := angle_x * 180 / pi
					angle_x := 180 + angle_x
				elseif (x_difference < 0) and (y_difference >= 0) then
					x_difference := x_difference.abs
					y_difference := y_difference.abs
					angle_x := arc_sine (x_difference/hypo)
						-- the same in degree
					angle_x := angle_x * 180 / pi
					angle_x := 180 - angle_x
				elseif (x_difference < 0) and (y_difference < 0) then
					x_difference := x_difference.abs
					y_difference := y_difference.abs
					angle_x := arc_sine (x_difference/hypo)
						-- the same in degree
					angle_x := angle_x * 180 / pi
				elseif (x_difference >= 0) and (y_difference < 0) then
					x_difference := x_difference.abs
					y_difference := y_difference.abs
					angle_x := arc_sine (x_difference/hypo)
						-- the same in degree
					angle_x := angle_x * 180 / pi
					angle_x := 360 - angle_x
				end

				if angle_x < 0 then
					angle_x := 360 + angle_x
				elseif angle_x > 360 then
					angle_x := angle_x - 360
				end
			end

		end

	random_number: RANDOM
		-- Make a direction out of this genererator	

	give_random_direction is
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

	add_random_polypoints(num: INTEGER) is
		--  Add to the polypoints 'num' random destinations.
		require
			random_number_not_void: random_number /= void
		local
			i: INTEGER
		do
			random_number.forth
			from
				i := 1
			until
				i >= num
			loop
				random_number.forth
				give_random_direction
				polypoints.extend (destination)
				random_number.forth
				polypoints.extend (destination)
				i := i+1
			end
			polypoints.start
		ensure
			polypoints_extended: polypoints.count = old polypoints.count + (2* (num-1))
		end

invariant
	polypoints_exist: polypoints /= Void
	origin_exists: origin /= Void
	destination_exists: destination /= Void
	position_exists: position /= Void
	speed_valid: speed >= 0
end

