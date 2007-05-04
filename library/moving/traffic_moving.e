indexing
	description: "Deferred class for moving items on the map"
	date: "$Date$"
	revision: "$Revision$"

deferred class
	TRAFFIC_MOVING

inherit
--	MATH_CONST
--		export {NONE} all end

	DOUBLE_MATH
		export {NONE} all end

--	TRAFFIC_3D_CONSTANTS
--		export {NONE} all end

	TRAFFIC_SHARED_TIME
--		rename
--			time as traffic_time
--		end

feature -- Access

--	traffic_type: TRAFFIC_TYPE
			-- Type of moving item

--	traffic_info: STRING
--			-- Some info on moving item

	position: EM_VECTOR_2D
			-- Current position on map

	origin: EM_VECTOR_2D
			-- Origin position on map

	destination: EM_VECTOR_2D
			-- Destination position on map

	speed: DOUBLE
			-- Speed in m/s

	angle_x: DOUBLE
			-- Angle in respect to the x-axis

feature -- Status report

	is_reiterating: BOOLEAN
			-- Does it turn around if the destination is reached?

	is_traveling_back: BOOLEAN
			-- Is 'Current' traveling back through polypoints?

	has_finished: BOOLEAN
			-- Has it finished his journey?	

	is_marked: BOOLEAN
			-- Is the moving marked, highlighted?

	is_waiting: BOOLEAN
			-- Is the moving waiting?

feature -- Basic operations

	start is
			-- Start taking a tour.
		do
			time.add_callback_tour (agent move)
		end

	wait (a_duration: DURATION) is
			-- Wait for `a_duration' until the next move is made.
		do

		end

feature -- Element change

	set_speed (a_speed: DOUBLE) is
			-- Set the speed to 'a_speed'.
		require
			a_speed_valid: a_speed >= 0
		do
			speed := a_speed
		ensure
			speed_set: speed = a_speed
		end

	set_reiterate (a_boolean: BOOLEAN) is
			-- Set the moving reiterating his itinerary.
		do
			is_reiterating := a_boolean
		ensure
			reiterating_set: is_reiterating = a_boolean
		end

feature {NONE} -- Implementation

--	take_tour is
--			-- Take a tour on the map.
--		deferred
--		end

	move is
			-- Move from origin to destination.
		local
			direction: EM_VECTOR_2D
			step: EM_VECTOR_2D
			diff: DOUBLE
		do
			direction := destination - origin

			if not has_finished and last_move_time /= Void then
				current_move_time.make_by_fine_seconds (time.actual_time.fine_seconds)
				diff := (current_move_time.fine_seconds - last_move_time.fine_seconds)*speed/time.default_scale_factor
				if ((position.x - destination.x).abs < diff) and ((position.y - destination.y).abs < diff) or direction.length <= 0 then
--					io.put_string ("speed: " + speed.out + " " + destination.distance (origin).out + "m in " +
--						(current_move_time.fine_seconds - start_move_time.fine_seconds).out + "s%N"	)
					update_coordinates
					update_angle
--					start_move_time.make_by_fine_seconds (traffic_time.actual_time.fine_seconds)
				else
					position := position + (direction / direction.length) * diff
				end


				last_move_time.make_by_fine_seconds (time.actual_time.fine_seconds)
			else
				create last_move_time.make_by_fine_seconds (time.actual_time.fine_seconds)
				create current_move_time.make_by_fine_seconds (time.actual_time.fine_seconds)
--				create start_move_time.make_by_fine_seconds (traffic_time.actual_time.fine_seconds)
			end
		end

	update_coordinates is
			-- Set the positions to the corresponding ones of the line section.
		require
			poly_cursor_valid: not poly_cursor.after and not poly_cursor.before
			not_finished: not has_finished
		do
			origin :=  poly_cursor.item
			position := poly_cursor.item
			if is_traveling_back then
				poly_cursor.back
				if poly_cursor.before then
					is_traveling_back := False
					poly_cursor.forth
					update_coordinates
				else
					destination := poly_cursor.item
				end
			elseif is_reiterating then
				poly_cursor.forth
				if poly_cursor.after then
					is_traveling_back := True
					poly_cursor.back
					update_coordinates
				else
					destination := poly_cursor.item
				end
			else
				poly_cursor.forth
				if poly_cursor.after then
					has_finished := True
				else
					destination := poly_cursor.item
				end
			end
		ensure
			origin /= Void
			position /= Void
			destination /= Void
		end

--	tour_helper is
--			-- Help during the tour to get the next destination if there is any.
--		do
--			if not poly_cursor.after and not poly_cursor.before then

--				if not is_traveling_back then
--					poly_cursor.forth
--					origin := destination
--					position := destination
--					destination := poly_cursor.item
--				elseif is_traveling_back then
--					poly_cursor.back
--					origin := destination
--					position := destination
--					destination := poly_cursor.item
--				end

--			elseif poly_cursor.after and is_reiterating then
--				is_traveling_back := True
--				poly_cursor.back
--				origin := destination
--				position := destination

--			elseif poly_cursor.before and is_reiterating and is_traveling_back then
--				is_traveling_back := False
--				poly_cursor.forth
--				origin := destination
--				position := destination
--				destination := poly_cursor.item
--			else
--				has_finished := True
--			end
--		end

	update_angle is
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
					angle_x := arc_sine (x_difference/hypo)
				if  (x_difference >= 0) and (y_difference >= 0) then
					angle_x := arc_sine (x_difference/hypo)
						-- the same in degree
--					angle_x := angle_x * 180 / pi
--					angle_x := 180 + angle_x
					angle_x := pi + angle_x
				elseif (x_difference < 0) and (y_difference >= 0) then
					x_difference := x_difference.abs
					y_difference := y_difference.abs
					angle_x := arc_sine (x_difference/hypo)
						-- the same in degree
--					angle_x := angle_x * 180 / pi
--					angle_x := 180 - angle_x
					angle_x := pi - angle_x
				elseif (x_difference < 0) and (y_difference < 0) then
					x_difference := x_difference.abs
					y_difference := y_difference.abs
					angle_x := arc_sine (x_difference/hypo)
						-- the same in degree
--					angle_x := angle_x * 180 / pi
				elseif (x_difference >= 0) and (y_difference < 0) then
					x_difference := x_difference.abs
					y_difference := y_difference.abs
					angle_x := arc_sine (x_difference/hypo)
						-- the same in degree
--					angle_x := angle_x * 180 / pi
--					angle_x := 360 - angle_x
					angle_x := 2*pi - angle_x
				end

--				if angle_x < 0 then
--					angle_x := 360 + angle_x
--				elseif angle_x > 360 then
--					angle_x := angle_x - 360
--				end
			end

		end

--	give_random_direction is
--			-- Give a random destination.
--		require
--			random_number /= Void
--		local
--			temp_x, temp_y: DOUBLE
--		do
--			temp_x := random_number.double_item
--			random_number.forth
--			temp_y := random_number.double_item
--			create destination.make (1500 * temp_x - 67, 1500 * temp_y - 32)
--			-- approximated places so that they are on the map
--			random_number.forth
--		ensure
--			destination.x < 1433
--			destination.x > -67
--			destination.y < 1468
--			destination.y > -32
--		end


feature {NONE} -- Implementation

	poly_cursor: DS_ARRAYED_LIST_CURSOR [EM_VECTOR_2D]
			-- Cursor that guides the moving object

	last_move_time: TIME
			-- Time of the last move

	current_move_time: TIME
			-- Now (when a step is taken)

	wait_duration: DURATION

invariant
	origin_exists: origin /= Void
	destination_exists: destination /= Void
	position_exists: position /= Void
	speed_valid: speed >= 0
	poly_cursor_exists: poly_cursor /= Void
	poly_cursor.container.count >= 2
end

