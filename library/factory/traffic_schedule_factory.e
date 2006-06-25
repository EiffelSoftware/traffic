indexing
	description: "Objects that ..."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_SCHEDULE_FACTORY
create
	make
feature -- Access
	
	make	is
			-- creation
	do	
		create line_list.make;	
	end
	
	
	add_line(line: STRING) is
			-- add a new line
	local
		new_line : TUPLE[STRING,LINKED_LIST[TUPLE[STRING,INTEGER,INTEGER]]]
		entrylist: LINKED_LIST[TUPLE[STRING,INTEGER,INTEGER]];
	do
		create new_line
		new_line.put (line,1)
		create entrylist.make
		new_line.put (entrylist,2)
		line_list.put_front (new_line)		
	end
	
	put_entry(Station:STRING;arrival,departure:INTEGER) is
			-- add a new schedule entry to the last added line
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
feature -- Measurement

feature -- Status report

feature -- Status setting

feature -- Cursor movement

feature -- Element change

feature -- Removal

feature -- Resizing

feature -- Transformation

feature -- Conversion

feature -- Duplication

feature -- Miscellaneous

feature -- Basic operations

feature -- Obsolete

feature -- Inapplicable

feature {NONE} -- Implementation

invariant
	invariant_clause: True -- Your invariant here

end
