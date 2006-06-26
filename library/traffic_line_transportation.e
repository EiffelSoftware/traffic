indexing
	description: "A deferred class for transportations serving a line and pursuing a schedule."
	date: "$Date: 2006/06/06 12:23:40$"
	revision: "$Revision$"

deferred class
	TRAFFIC_LINE_TRANSPORTATION

inherit
	TRAFFIC_TRANSPORTATION
	
	redefine 
		set_coordinates,
		take_tour
	end
	
	TRAFFIC_SHARED_TIME
	rename
		time as traffic_time
	end
	

		
feature --Access

	line: TRAFFIC_LINE
		-- line on which 'Current' will travel.
			
	schedule: TRAFFIC_LINE_SCHEDULE
		-- the scheme to pursue

	schedule_offset_minutes: INTEGER
		-- the number of minutes the object will travel behind the schedule
		
	schedule_index: INTEGER
		-- the index of the schedule where we are at
	
	schedule_day: INTEGER
		-- we will use the schedule on this day
		
	schedule_speed: DOUBLE
		-- the speed we have to use to fullfill the schedlue
	
	schedule_active: BOOLEAN
		-- are we traveling or are we waiting
	
	last_update: INTEGER
		-- last second the position was updated
		
	line_count: INTEGER is
			-- returns the 'Current's number of stops.
			do
				Result := line.count
			end
		
	
feature -- Basic operations

	take_tour is
			-- If there is a schedule, use an other movement code for the schedul
			local
				entry: TRAFFIC_LINE_SCHEDULE_ENTRY
				direction: EM_VECTOR_2D
				seconds_passed: INTEGER
				travel_distance: DOUBLE
			do
				-- If we don't have a schedule, fall back to the normal movement code
				if schedule = Void then
					Precursor
				else
					if schedule_active = True then
						-- The tram is traveling on schedule
						entry := schedule.i_th (schedule_index)
					
						if is_after (entry) then
							-- If we are at the end of the schedule, disable the schedule and wait for the next day
							if schedule_index = schedule.count then
								schedule_day := schedule_day + 1
								schedule_active := False
							else
								schedule_index := schedule_index + 1
							
								from
									polypoints.start
								until
									polypoints.after or polypoints.item = entry.line_section.polypoints.first
								loop
									polypoints.forth
								end
	
								polypoints.forth
								polypoints.forth
								polypoints.forth								
								
								schedule_speed := schedule.i_th (schedule_index).speed
								set_speed (schedule_speed.rounded)
								set_coordinates
								set_angle
							end
						else
							direction := destination - origin
							seconds_passed := (traffic_time.actual_hour * 3600 + traffic_time.actual_minute * 60 + traffic_time.actual_second - last_update)
							travel_distance := (schedule_speed * seconds_passed)
							
							if not has_finished then								
								if ((position.x - destination.x).abs < travel_distance) and ((position.y - destination.y).abs < travel_distance) then
									set_coordinates
									set_angle
								else									
									position := position + (direction / direction.length) * travel_distance
								end
							end
						end
					else
						-- The tram is waiting until it's schedule is active again
						entry := schedule.first						
						if (schedule_day = traffic_time.actual_day) and is_after(entry) then
							schedule_active := True
						end						
					end
					
					last_update := traffic_time.actual_hour * 3600 + traffic_time.actual_minute * 60 + traffic_time.actual_second
				end
			end

	is_after (entry: TRAFFIC_LINE_SCHEDULE_ENTRY): BOOLEAN is
			-- Return true if the traffic time is later than the start time
			do
				Result := (traffic_time.actual_hour > entry.start_time.hour) or else ((entry.start_time.hour = traffic_time.actual_hour) and (traffic_time.actual_minute >= entry.start_time.minute))	
			end
		
				
	set_to_place (a_place: TRAFFIC_PLACE) is
			-- set the line transportation to 'a_place'.
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
							if polypoints.item = line.item.polypoints.first then
								polypoints.forth
								polypoints.forth
								polypoints.forth								
								was_found := True
								set_coordinates
								set_angle	
							else
								polypoints.forth
							end
						end
					else
						line.forth
					end
					
				end
			end
		
		
get_place (stop: INTEGER): TRAFFIC_PLACE is
			-- returns the place at number 'stop' in line.
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

		
feature{NONE} --Implementation		
		
		set_line_route(a_line: TRAFFIC_LINE) is
				-- set the points of the line in the polypoints to follow the route given by the line.
			require
				line_not_void: a_line /= void
			do
				from 
					a_line.start
				until
					a_line.after
				loop
					-- add the first polypoint of the line item as a line item is a section
					-- containing a origin polypoint and a destination polypoint.
					-- the repetition is done that a tram stops for a short time at each place
					polypoints.extend (a_line.item.polypoints.first)
					polypoints.extend (a_line.item.polypoints.first)
					polypoints.extend (a_line.item.polypoints.first)
					-- add the whole section item (origin and destination)
					polypoints.append (a_line.item.polypoints)
					line.forth
				end
				-- repetition of the las polypoint to stop also there for a short time.
				polypoints.extend (polypoints.last)
				polypoints.extend (polypoints.last)
				polypoints.extend (polypoints.last)	
				
				polypoints.start
				
				-- not wait at starting point therefore omit first three points
				polypoints.forth
				polypoints.forth
				polypoints.forth
				
			ensure
				valid_polypoints: polypoints.count >= old polypoints.count
			end		
		
		set_coordinates is
			-- set the positions to the corresponding ones of the line section.
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
