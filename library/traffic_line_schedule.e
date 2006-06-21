indexing
	description: "A schedule for a object traveling on a line"
	author: "Michael Kaeser <kaeserm@student.ethz.ch>"
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_LINE_SCHEDULE
	
inherit
	
	LINKED_LIST [TRAFFIC_LINE_SCHEDULE_ENTRY]
		rename 
			make as make_linked_list
		export 
		{ANY} start, finish, after, before, off, forth, back, item, count, i_th, wipe_out, has
		end

create
	make_for_line
	
feature -- Intialisation

	make_for_line (a_line: TRAFFIC_LINE) is
			-- Create an automatic schedule for a traffic line
			-- This method uses an automatich generator which generates a schedule
			-- where a tram moves along the line from 06:00 to 22:00
			-- It could be extended to use an xml file which provies the real data
			-- of the tram schedule of i.e. zurich
		require
			valid_line: a_line /= Void
		local
			act_hour: INTEGER
			act_minute: INTEGER
			entry: TRAFFIC_LINE_SCHEDULE_ENTRY
		do
			make_linked_list
			
			from
				-- Start at 06:00
				act_hour := 6
				act_minute := 0
			until
				-- Travel both directions until 22:00
				act_hour >= 22	
			loop
				-- First direction
				from
					a_line.start
				until
					a_line.after
				loop
					-- Create schedule entry
					create entry.make_with_line_section(a_line.item, false)
					entry.set_start_time(act_hour, act_minute)
					
					
				end
			end
		end
end
