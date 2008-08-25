indexing
	description: "Deferred class for moving items in the city"
	date: "$Date$"
	revision: "$Revision$"

deferred class
	TRAFFIC_MOVING

inherit

	DOUBLE_MATH
		export {NONE} all end

	TRAFFIC_SHARED_TIME

	TRAFFIC_CITY_ITEM

feature -- Access

	position: TRAFFIC_POINT
			-- Current position

	origin: TRAFFIC_POINT
			-- Origin position

	destination: TRAFFIC_POINT
			-- Destination position

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

feature -- Basic operations

	start is
			-- Start taking a tour.
		do
			time.add_callback_tour (agent move)
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

	move is
			-- Move from origin to destination.
		local
			direction: TRAFFIC_POINT
			diff: DOUBLE
		do
			direction := destination - origin

			if not has_finished and last_move_time /= Void then
				current_move_time.make_by_fine_seconds (time.actual_time.fine_seconds)
				if not current_move_time.is_equal (last_move_time) then
					diff := (time.duration (last_move_time, current_move_time).fine_seconds_count)*speed/time.default_scale_factor
					if ((position.x - destination.x).abs < diff) and ((position.y - destination.y).abs < diff) or direction.length <= 0 then
						update_coordinates
						update_angle
					else
						position := position + (direction / direction.length) * diff
					end


					last_move_time.make_by_fine_seconds (time.actual_time.fine_seconds)
				end
			else
				create last_move_time.make_by_fine_seconds (time.actual_time.fine_seconds)
				create current_move_time.make_by_fine_seconds (time.actual_time.fine_seconds)
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

	update_angle is
			-- Set the angles to the x- and y-axis respectively.
		local
			x_difference, y_difference, hypo, quad: DOUBLE
		do
			-- as the x-axis is turned by 180° we have to take this into account
			-- we need the x- and the y difference to calculate the norm
			x_difference := destination.x - origin.x
			y_difference := destination.y - origin.y
			hypo := sqrt ((x_difference * x_difference) + (y_difference * y_difference))

			if hypo /= 0 then
				-- arc_sine in radian
				quad := 0
				angle_x := arc_sine (x_difference/hypo)
				if  (x_difference >= 0) and (y_difference >= 0) then
					angle_x := arc_sine (x_difference/hypo)
					angle_x := pi + angle_x
				elseif (x_difference < 0) and (y_difference >= 0) then
					x_difference := x_difference.abs
					y_difference := y_difference.abs
					angle_x := arc_sine (x_difference/hypo)
					angle_x := pi - angle_x
				elseif (x_difference < 0) and (y_difference < 0) then
					x_difference := x_difference.abs
					y_difference := y_difference.abs
					angle_x := arc_sine (x_difference/hypo)
				elseif (x_difference >= 0) and (y_difference < 0) then
					x_difference := x_difference.abs
					y_difference := y_difference.abs
					angle_x := arc_sine (x_difference/hypo)
					angle_x := 2*pi - angle_x
				end
			end
		end

feature {NONE} -- Implementation

	poly_cursor: DS_ARRAYED_LIST_CURSOR [TRAFFIC_POINT]
			-- Cursor that guides the moving object

	last_move_time: TIME
			-- Time of the last move

	current_move_time: TIME
			-- Now (when a step is taken)

invariant
	origin_exists: origin /= Void
	destination_exists: destination /= Void
	position_exists: position /= Void
	speed_valid: speed >= 0
	poly_cursor_exists: poly_cursor /= Void
	poly_cursor.container.count >= 2
end

