indexing
	description: "Schedule factory (this class needs reworking!)"
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_SCHEDULE_FACTORY

obsolete "Needs reworking"

create
	make
feature -- Access

	make is
			-- Initialize factory.
		do
			create line_list.make
		end


	add_line (line: STRING) is
			-- Add a new line.
		require
			line_exists: line /= Void
		local
			new_line: TUPLE[STRING,LINKED_LIST[TUPLE[STRING,INTEGER,INTEGER]]]
			entrylist: LINKED_LIST[TUPLE[STRING,INTEGER,INTEGER]];
		do
			create new_line
			new_line.put (line,1)
			create entrylist.make
			new_line.put (entrylist,2)
			line_list.put_front (new_line)
		end

	put_entry (station: STRING; arrival, departure: INTEGER) is
			-- Add a new schedule entry to the last added line.
		local
			act_line :TUPLE[STRING,LINKED_LIST[TUPLE[STRING,INTEGER,INTEGER]]]
			entry_list : LINKED_LIST[TUPLE[STRING,INTEGER,INTEGER]]
			new_entry : TUPLE[STRING,INTEGER,INTEGER]
		do
			act_line := line_list.first
			entry_list ?= act_line.item (2)
			create new_entry
			new_entry.put (Station,1)
			new_entry.put (arrival,2)
			new_entry.put (departure,3)
			entry_list.put_front (new_entry)
		end

	line_list:LINKED_LIST[TUPLE[STRING,LINKED_LIST[TUPLE[STRING,INTEGER,INTEGER]]]]
			-- List of lines and schedules

end
