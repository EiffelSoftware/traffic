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
	start_time: TIME
		-- The time the object starts traveling

	end_time: TIME
		-- The time the object has to arrive at the target

	line_section: TRAFFIC_LINE_SECTION
		-- The line section which the object will travel on¨
		
	opposite_direction: BOOLEAN
		-- Destination and origin of line section are switched
		
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
end
