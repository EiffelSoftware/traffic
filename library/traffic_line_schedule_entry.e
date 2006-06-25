indexing
	description: "An entry for the schedule of an object traveling on a line"
	author: "Michael Kaeser <kaeserm@student.ethz.ch>"
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_LINE_SCHEDULE_ENTRY
	
create
	make_with_line_section
	
feature -- Initialisation
	
	make_with_line_section(a_line_section: TRAFFIC_LINE_SECTION) is
			-- Create the object for a given line section
		require
			valid_line_section: a_line_section /= Void
		do
			line_section := a_line_section
		ensure
			line_section_set: line_section /= Void and then line_section = a_line_section
		end
		
	
feature -- Access
	start_time: TIME
		-- The time the object starts traveling

	end_time: TIME
		-- The time the object has to arrive at the target

	line_section: TRAFFIC_LINE_SECTION
		-- The line section which the object will travel on¨
				
	set_start_time(a_time: TIME) is
			-- Set the start time
		require
			valid_time: a_time /= Void
		do
			start_time := a_time
		ensure
			time_set: start_time = a_time
		end
		
	set_end_time(a_time: TIME) is
			-- Set the end time
		require
			valid_time: a_time /= Void
		do
			end_time := a_time
		ensure
			time_set: end_time = a_time
		end
		
	speed:INTEGER is
			-- Calculate the speed we need to travel the line section
			-- Note: We cannot have total exact values, but we have a waiting time at the station
			-- where all small errors are catched
		local
			total_distance: DOUBLE
			last_position: EM_VECTOR_2D
			seconds: INTEGER
		once
			-- Get the total distance we have by adding the distances of all polypoints
			from
				line_section.polypoints.start
				last_position := line_section.polypoints.first
				total_distance := 0
			until
				line_section.polypoints.after
			loop
				total_distance := total_distance + last_position.distance (line_section.polypoints.item).abs
				last_position := line_section.polypoints.item
			end

			-- How many seconds do we have?
			seconds := end_time.seconds_in_day - start_time.seconds_in_day
			
			-- Speed is distance / time
			Result := (total_distance.rounded) // seconds
		end
		
end
