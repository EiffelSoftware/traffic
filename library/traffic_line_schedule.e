indexing
	description: "A schedule for a object traveling on a line"
	author: "Michael Kaeser <kaeserm@student.ethz.ch>"
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_LINE_SCHEDULE
	
inherit		
	TWO_WAY_LIST [TRAFFIC_LINE_SCHEDULE_ENTRY]
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
			-- where a tram moves along the line from 05:00 to 23:00
			-- It could be extended to use an xml file which provies the real data
			-- of the tram schedule of i.e. zurich
		require
			valid_line: a_line /= Void
		local
			act_time: TIME
			distance: DOUBLE
			entry: TRAFFIC_LINE_SCHEDULE_ENTRY
		do
			make_linked_list
			
			from
				-- Start at 05:00
				create act_time.make (5, 0, 0)
			until
				-- Travel both directions until ~23:00
				-- Watch that there is enough time for another roundtrip
				-- TODO: Fix that 23:00 works
				act_time.hour > 8
			loop
				-- First direction
				from	
					a_line.start				
				until
					a_line.after
				loop
					-- Create schedule entry
					create entry.make_with_line_section(a_line.item)
					entry.set_start_time(act_time.twin)
					
					-- Add time for traveling
					distance := a_line.item.origin.position.distance (a_line.item.destination.position).abs
					act_time.minute_add ((distance.rounded) // 80)
					
					-- Set end time in schedule entry
					entry.set_end_time (act_time.twin)
					
					-- Add entry to our schedule
					extend (entry)
					
					-- Add 2 minutes waiting time at the place
					act_time.minute_add (2)
					
					-- Next stop
					a_line.forth
				end
			end
		end
end
