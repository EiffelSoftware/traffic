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
			-- where a tram moves along the line from 06:00 to 22:00
			-- It could be extended to use an xml file which provies the real data
			-- of the tram schedule of i.e. zurich
			--
			-- TODO: Time between stops is always 10 minutes
			-- TODO: Better time handling :/
			-- TODO: Remove repetion for directions
		require
			valid_line: a_line /= Void
		local
			act_hour: INTEGER
			act_minute: INTEGER
			entry: TRAFFIC_LINE_SCHEDULE_ENTRY
		do
			make_linked_list
			a_line.start
			
			from
				-- Start at 06:00
				act_hour := 6
				act_minute := 0
			until
				-- Travel both directions until ~23:00
				-- Watch that there is enough time for another roundtrip
				act_hour >= 7
			loop
				-- First direction
				from					
				until
					a_line.after
				loop
					-- Create schedule entry
					create entry.make_with_line_section(a_line.item, false)
					entry.set_start_time(act_hour, act_minute)
					
					-- Add time for traveling
					act_minute := act_minute + 3
					
					if (act_minute >= 60) then
						act_minute := act_minute - 60
						act_hour := act_hour + 1
					end
					
					-- Set end time in schedule entry
					entry.set_end_time (act_hour, act_minute)
					
					-- Add entry to our schedule
					extend (entry)
					
					-- Add 2 minutes waiting time
					act_minute := act_minute + 2
					
					if (act_minute >= 60) then
						act_minute := act_minute - 60
						act_hour := act_hour + 1
					end
					
					-- Next stop
					a_line.forth
				end

				-- Other direction
				from
					a_line.back
					a_line.back
				until
					a_line.before
				loop
					-- Create schedule entry
					create entry.make_with_line_section(a_line.item, true)
					entry.set_start_time(act_hour, act_minute)
					
					-- Add time for traveling
					act_minute := act_minute + 3
					
					if (act_minute >= 60) then
						act_minute := act_minute - 60
						act_hour := act_hour + 1
					end
					
					-- Set end time in schedul entry
					entry.set_end_time (act_hour, act_minute)
					
					-- Add entry to our schedule
					extend (entry)
					
					-- Add 2 minutes waiting time
					act_minute := act_minute + 2
					
					if (act_minute >= 60) then
						act_minute := act_minute - 60
						act_hour := act_hour + 1
					end
					
					-- Next stop
					a_line.back
				end
				
				-- Go to 
				a_line.forth
				a_line.forth
			end
		end
end
