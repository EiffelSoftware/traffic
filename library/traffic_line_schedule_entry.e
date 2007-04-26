indexing
	description: "An entry for the schedule of an object traveling on a line"
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_LINE_SCHEDULE_ENTRY

inherit
	TRAFFIC_3D_CONSTANTS

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
			-- Time the object starts traveling

	end_time: TIME
			-- Time the object has to arrive at the target

	line_section: TRAFFIC_LINE_SECTION
			-- Line section which the object will travel on¨

feature -- Status report

	speed: DOUBLE is
			-- Speed needed to travel the line section
			-- Note: We cannot have total exact values, but we have a waiting time at the station
			-- where all small errors are catched
		local
			total_distance: DOUBLE
			last_position: EM_VECTOR_2D
			seconds: INTEGER
		do
			-- Get the total distance we have by adding the distances of all polypoints
			from
				line_section.polypoints.start
--				last_position := map_to_gl_coords (line_section.polypoints.first)
				last_position := line_section.polypoints.first
				total_distance := 0
			until
				line_section.polypoints.after
			loop
--				total_distance := total_distance + last_position.distance (map_to_gl_coords (line_section.polypoints.item)).abs
				total_distance := total_distance + last_position.distance (line_section.polypoints.item_for_iteration).abs

--				last_position := map_to_gl_coords (line_section.polypoints.item)
				last_position := line_section.polypoints.item_for_iteration

				line_section.polypoints.forth
			end

			-- How many minutes do we have?
			seconds := (end_time.hour * 3600 + end_time.minute * 60) - (start_time.hour * 3600 + start_time.minute * 60)

			-- Speed is distance / time			
			if seconds > 0 then
				Result := (total_distance.rounded) / seconds
			else
				Result := 1
			end
		end

feature -- Element change

	set_start_time (a_time: TIME) is
			-- Set the start time to `a_time'.
		require
			valid_time: a_time /= Void
		do
			start_time := a_time
		ensure
			time_set: start_time = a_time
		end

	set_end_time (a_time: TIME) is
			-- Set the end time to `a_time'.
		require
			valid_time: a_time /= Void
		do
			end_time := a_time
		ensure
			time_set: end_time = a_time
		end

end
