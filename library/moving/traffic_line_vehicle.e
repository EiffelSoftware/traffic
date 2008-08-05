indexing
	description: "Deferred class for vehicles serving a line and pursuing a schedule."
	date: "$Date: 2006/06/06 12:23:40$"
	revision: "$Revision$"

deferred class
	TRAFFIC_LINE_VEHICLE

inherit

	TRAFFIC_VEHICLE
		redefine
			update_coordinates,
			move
		end

feature -- Element change

	set_line (a_line: TRAFFIC_LINE) is
			-- Set `line' to `a_line' and initialize position, etc.
		require
			a_line_exists: a_line /= Void
		do
			line := a_line

			create line_cursor.make (a_line)
			line_cursor.start
			create poly_cursor.make (line_cursor.item_for_iteration.polypoints)
			poly_cursor.start
			update_coordinates
			update_angle
		ensure
			line_set: line = a_line
		end

	set_to_station (a_station: TRAFFIC_STATION) is
			-- Set the line vehicle to `a_station'.
		require
			a_station_not_void: a_station /= Void
			-- todo has_station_in_line: line.has_station (a_station)
		local
			found: BOOLEAN
		do
			if a_station = line.terminal_2 then
				line_cursor.set_cursor_direction (False)
				line_cursor.start
				create poly_cursor.make (line_cursor.item_for_iteration.polypoints)
				poly_cursor.start

				update_coordinates
				update_angle
			else
				from
					line_cursor.start
				until
					line_cursor.after or found
				loop
					if line_cursor.item_for_iteration.origin = a_station then
						create poly_cursor.make (line_cursor.item_for_iteration.polypoints)
						poly_cursor.start

						update_coordinates
						update_angle
						found := True
					else
						line_cursor.forth
					end
				end
			end
		end

feature --Access

	line: TRAFFIC_LINE
			-- Line on which `Current' moves

	next_station: TRAFFIC_STATION
			-- Next station the line vehicle stops at

	schedule: TRAFFIC_LINE_SCHEDULE
			-- Schedule to pursue

	schedule_offset_minutes: INTEGER
			-- Number of minutes the object will travel behind the schedule

	schedule_index: INTEGER
			-- Index of the schedule where we are at

	schedule_day: INTEGER
			-- Day on which the schedule is used

	schedule_speed: DOUBLE
			-- Speed to fullfill the schedule

	last_update: INTEGER
			-- Last second the position was updated

feature -- Status report

	is_schedule_active: BOOLEAN
			-- Is the schedule active or is the status in waiting?

	is_after (entry: TRAFFIC_LINE_SCHEDULE_ENTRY): BOOLEAN is
			-- Is it past the start time?
		do
			Result := (time.actual_time.hour > entry.start_time.hour) or else ((entry.start_time.hour = time.actual_time.hour) and (time.actual_time.minute >= entry.start_time.minute))
		end

	is_valid_line (a_line: TRAFFIC_LINE): BOOLEAN is
			-- Is `a_line' a valid line for `Current'?
		require
			a_line_exists: a_line /= Void
		deferred
		end


feature -- Basic operations

	move is
			-- Take a tour using no schedule.
			-- If there is a schedule, use an other movement code for the schedule.
		local
			entry: TRAFFIC_LINE_SCHEDULE_ENTRY
			direction: TRAFFIC_COORDINATE
			seconds_passed: INTEGER
			travel_distance: DOUBLE
		do
			-- If we don't have a schedule, fall back to the normal movement code
			if schedule = Void then
				Precursor
			else
				if is_schedule_active = True then
					-- The tram is traveling on schedule
					entry := schedule.i_th (schedule_index)

					if is_after (entry) then
						-- The start time of the actual schedule entry is in the past

						-- Iterate on the schedule until we find the index of the first entry which starts in the future
						from
						until
							schedule_index > schedule.count or else not is_after (schedule.i_th (schedule_index))
						loop
							schedule_index := schedule_index + 1
						end

						-- Active entry is the entry before the first entry in the future
						entry := schedule.i_th (schedule_index - 1)

						-- Use the polypoints of the schedule entry
						create poly_cursor.make (entry.line_section.polypoints)
						poly_cursor.start

						-- Set correct speed and initial position
						schedule_speed := entry.speed
						set_speed (schedule_speed.rounded)
						update_coordinates
						update_angle

						-- If we arrived at the end, go to the beginning and wait for the next day							
						if schedule_index > schedule.count then
							schedule_day := schedule_day + 1
							is_schedule_active := False
							schedule_index := 1
						end
					end
				else
					-- The tram is waiting until it's schedule is active again
					entry := schedule.first
					if (schedule_day <= time.actual_day) and is_after(entry) then
						schedule_day := time.actual_day
						is_schedule_active := True
					end
				end

				if not poly_cursor.after then
					direction := destination - origin
					seconds_passed := (time.actual_time.hour * 3600 + time.actual_time.minute * 60 + time.actual_time.second - last_update)
					travel_distance := (schedule_speed * seconds_passed)

					if ((position.x - destination.x).abs < travel_distance) and ((position.y - destination.y).abs < travel_distance) then
						origin := poly_cursor.item
						position := poly_cursor.item
						poly_cursor.forth
						if not poly_cursor.after then
							destination := poly_cursor.item
							update_angle
						end
					else
						position := position + (direction / direction.length) * travel_distance
					end
				end

				last_update := time.actual_time.hour * 3600 + time.actual_time.minute * 60 + time.actual_time.second
			end
		end


feature{NONE} --Implementation		

	update_coordinates is
			-- Set the positions to the corresponding ones of the line section.
		do
			origin :=  poly_cursor.item
			position := poly_cursor.item

			-- Do not distinguish between traveling_back and traveling_forward
			poly_cursor.forth
			if poly_cursor.after then
				if not line_cursor.after  then
					-- Set line cursor correctly
					line_cursor.forth
				end
				if line_cursor.after then
					if is_reiterating and line_cursor.line.connection_count >= 1 then
						line_cursor.set_cursor_direction (not line_cursor.is_cursor_one_direction)
						line_cursor.start
						create poly_cursor.make (line_cursor.item_for_iteration.polypoints)
						poly_cursor.start
						destination := poly_cursor.item
					else
						has_finished := True
					end
				else
					create poly_cursor.make (line_cursor.item_for_iteration.polypoints)
					poly_cursor.start
					destination := poly_cursor.item
				end
			else
				destination := poly_cursor.item
			end

		end

	line_cursor: TRAFFIC_LINE_CURSOR
			-- Line section on which the line vehicle is moving currently

invariant

	line_set: line /= void
	line_cursor_exists: line_cursor /= Void

end
