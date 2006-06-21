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
	
	make_with_line_section(a_line_section: TRAFFIC_LINE_SECTION; is_opposite_direction: BOOLEAN) is
			-- Create the object for a given line section
		require
			valid_line_section: a_line_section /= Void
		do
			line_section := a_line_section
			opposite_direction := is_opposite_direction
		ensure
			line_section_set: line_section /= Void and then line_section = a_line_section
			direction_set: opposite_direction = is_opposite_direction
		end
		
	
feature -- Access
	start_time_hour: INTEGER
		-- The hour the object starts traveling

	start_time_minute: INTEGER
		-- The minute the object starts traveling
			
	end_time_hour: INTEGER
		-- The hour the object has to arrive at the target

	end_time_minute: INTEGER
		-- The minute the object has to arrive at the target		
		
	line_section: TRAFFIC_LINE_SECTION
		-- The line section which the object will travel on¨
		
	opposite_direction: BOOLEAN
		-- Destination and origin of line section are switched
		
	set_start_time(hour: INTEGER; minute: INTEGER) is
			-- Set the start time
		require
			valid_hour: hour >= 0 and hour < 24
			valid_minute: minute >= 0 and minute < 60
		do
			start_time_hour := hour 
			start_time_minute := minute
		ensure
			hour_set: start_time_hour = hour
			minute_set: start_time_minute = minute
		end
		
	set_end_time(hour: INTEGER; minute: INTEGER) is
			-- Set the end time
		require
			valid_hour: hour >= 0 and hour < 24
			valid_minute: minute >= 0 and minute < 60
		do
			end_time_hour := hour 
			end_time_minute := minute
		ensure
			hour_set: end_time_hour = hour
			minute_set: end_time_minute = minute
		end
end
