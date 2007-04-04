indexing
	description: "Deferred class for vehicles serving a line and pursuing a schedule."
	date: "$Date: 2006/06/06 12:23:40$"
	revision: "$Revision$"

deferred class
	TRAFFIC_LINE_VEHICLE

inherit

	TRAFFIC_VEHICLE
		redefine
			set_coordinates
		end

feature --Access

	line: TRAFFIC_LINE
			-- Line on which 'Current' moves

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

	line_count: INTEGER is
			-- Number of stops
		do
			Result := line.count
		end

	place (stop: INTEGER): TRAFFIC_PLACE is
			-- Place at position `stop' on the line
		require
			stop <= line_count
		local
			i: INTEGER
		do
			from
				i := 1
				line.start
			until
				i = stop or
				line.after
			loop
				line.forth
				i := i + 1
			end
			if i < stop then
				line.back
				Result := line.item.destination
			else
				Result := line.item.origin
			end
		end

feature -- Status report

	schedule_active: BOOLEAN
			-- Is the schedule active or is the status in waiting?

	is_after (entry: TRAFFIC_LINE_SCHEDULE_ENTRY): BOOLEAN is
			-- Is it past the start time?
		do
			Result := (traffic_time.actual_time.hour > entry.start_time.hour) or else ((entry.start_time.hour = traffic_time.actual_time.hour) and (traffic_time.actual_time.minute >= entry.start_time.minute))
		end

feature -- Basic operations

	take_tour is
			-- Take a tour using no schedule.
			-- If there is a schedule, use an other movement code for the schedule.
		local
			entry: TRAFFIC_LINE_SCHEDULE_ENTRY
			direction: EM_VECTOR_2D
			seconds_passed: INTEGER
			travel_distance: DOUBLE
		do
			-- If we don't have a schedule, fall back to the normal movement code
			if schedule = Void then
				move
			else
				if schedule_active = True then
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
						polypoints.wipe_out
						polypoints.append (entry.line_section.polypoints)
						polypoints.start

						-- Set correct speed and initial position
						schedule_speed := entry.speed
						set_speed (schedule_speed.rounded)
						set_coordinates
						set_angle

						-- If we arrived at the end, go to the beginning and wait for the next day							
						if schedule_index > schedule.count then
							schedule_day := schedule_day + 1
							schedule_active := False
							schedule_index := 1
						end
					end
				else
					-- The tram is waiting until it's schedule is active again
					entry := schedule.first
					if (schedule_day <= traffic_time.actual_day) and is_after(entry) then
						schedule_day := traffic_time.actual_day
						schedule_active := True
					end
				end

				if not polypoints.after then
					direction := destination - origin
					seconds_passed := (traffic_time.actual_time.hour * 3600 + traffic_time.actual_time.minute * 60 + traffic_time.actual_time.second - last_update)
					travel_distance := (schedule_speed * seconds_passed)

					if ((position.x - destination.x).abs < travel_distance) and ((position.y - destination.y).abs < travel_distance) then
						origin := map_to_gl_coords (polypoints.item)
						position := map_to_gl_coords (polypoints.item)
						polypoints.forth
						if not polypoints.after then
							destination := map_to_gl_coords (polypoints.item)
							set_angle
						end
					else
						position := position + (direction / direction.length) * travel_distance
					end
				end

				last_update := traffic_time.actual_time.hour * 3600 + traffic_time.actual_time.minute * 60 + traffic_time.actual_time.second
			end
		end

	set_to_place (a_place: TRAFFIC_PLACE) is
			-- Set the line vehicle to 'a_place'.
		require
			a_place_not_void: a_place /= Void
		local
			was_found: BOOLEAN
		do
			from
				line.start
			until
				was_found or line.after
			loop
				if line.item.origin.position = a_place.position then
					from
						polypoints.start
					until
						polypoints.after or was_found
					loop
							polypoints.forth
							polypoints.forth
							polypoints.forth
							was_found := True
							set_coordinates
							set_angle
					end
				else
					line.forth
				end

			end
		end

feature{NONE} --Implementation		

	set_line_route_from_roads(a_line: TRAFFIC_LINE) is
			-- Set the polypoints to follow the route given by the line.
		require
			line_not_void: a_line /= void
		local
			pp: ARRAYED_LIST[EM_VECTOR_2D]
		do
			pp:=a_line.road_points
			-- Add the whole section item (origin and destination)
			polypoints.append (pp)
			-- Repetition of the las polypoint to stop also there for a short time.
			polypoints.extend (pp.last)
			polypoints.extend (pp.last)
			polypoints.extend (pp.last)

			polypoints.start

			-- Not wait at starting point therefore omit first three points
			polypoints.forth
			polypoints.forth
			polypoints.forth
		ensure
			valid_polypoints: polypoints.count >= old polypoints.count
		end

	set_coordinates is
		-- Set the positions to the corresponding ones of the line section.
		do
			-- Hopefully this will give a bit performance to the journey
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
			else
				polypoints.forth
				if polypoints.after then
					is_traveling_back := True
					polypoints.back
					set_coordinates
				else
					destination := map_to_gl_coords (polypoints.item)
				end
			end
		end

invariant

	line_set: line /= void
	correct_line_count: line_count = line.count

end
