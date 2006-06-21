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
			create start_time
			create end_time
			
			line_section := a_line_section
			opposite_direction := is_opposite_direction
		ensure
			start_time_created: start_time /= Void
			end_time_created: end_time /= Void
			line_section_set: line_section /= Void and then line_section = a_line_section
			direction_set: opposite_direction = is_opposite_direction
		end
		
	
feature -- Access
	start_time: TUPLE[INTEGER, INTEGER]
		-- The time the object starts traveling [hour, minute]
	
	end_time: TUPLE[INTEGER, INTEGER]
		-- The time the object has to arrive at the target
		
	line_section: TRAFFIC_LINE_SECTION
		-- The line section which the object will travel on¨
		
	opposite_direction: BOOLEAN
		-- Destination and origin of line section are switched
		
	set_start_time(hour: INTEGER; minute: INTEGER) is
			-- Set the start time
		require
			valid_hour_1: hour >= 0
			valid_hour_2: hour < 24
			valid_minute_1: minute >= 0
			valid_minute_2: minute < 60
		do
			start_time.put(hour, 0)
			start_time.put(minute, 1)
		ensure
			hour_set: start_time @ 1 = hour
			minute_set: start_time @ 2 = minute
		end
		
	set_end_time(hour: INTEGER; minute: INTEGER) is
			-- Set the end time
		require
			valid_hour_1: hour >= 0
			valid_hour_2: hour < 24
			valid_minute_1: minute >= 0
			valid_minute_2: minute < 60
		do
			end_time.put(hour, 0)
			end_time.put(minute, 1)
		ensure
			hour_set: end_time @ 1 = hour
			minute_set: end_time @ 2 = minute
		end
end
