indexing
	description: "A schedule for a object traveling on a line"
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_LINE_SCHEDULE

inherit
	ARRAYED_LIST [TRAFFIC_LINE_SCHEDULE_ENTRY]
		rename
			make as make_list
		export
		{ANY} item, i_th, first, last, back, after, forth
		end

create
	make_for_line

feature -- Intialization

	make_for_line (a_line: TRAFFIC_LINE;scheduler: TRAFFIC_SCHEDULE_LOADER) is
			-- Create an automatic schedule for a traffic line.
			-- This method uses an automatich generator which generates a schedule
			-- where a tram moves along the line from 05:00 to 23:00
			-- It could be extended to use an xml file which provies the real data
			-- of the tram schedule of i.e. zurich
		require
			valid_line: a_line /= Void
		local
			act_time: TIME
			distance: DOUBLE
			new_entry: TRAFFIC_LINE_SCHEDULE_ENTRY
			llist : LINKED_LIST[TUPLE[STRING,LINKED_LIST[TUPLE[STRING,INTEGER,INTEGER]]]]
			line : TUPLE[STRING,LINKED_LIST[TUPLE[STRING,INTEGER,INTEGER]]]
			line_name : STRING

		do
			make_list (0)

			llist := scheduler.schedule.line_list

			from
				llist.start
			until
				llist.after or line_name = a_line.name
			loop
				line := llist.item
				line_name ?= line.item (1)
				llist.forth
			end

			if false then
				-- hier könnte die timetable für 'line' zugeordnet werden
			else
				from
					-- Start at 06:00
					create act_time.make (6, 0, 0)
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
						create new_entry.make_with_line_section(a_line.item)
						new_entry.set_start_time(act_time.twin)

						-- Add time for traveling
						distance := a_line.item.origin.position.distance (a_line.item.destination.position).abs
						act_time.minute_add (((distance.rounded) // 80).max(1))

						-- Set end time in schedule entry
						new_entry.set_end_time (act_time.twin)

						-- Add entry to our schedule
						extend (new_entry)

						-- Add 2 minutes waiting time at the place
						act_time.minute_add (2)

						-- Next stop
						a_line.forth
					end
				end
			end
		end
end
