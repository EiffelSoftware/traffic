indexing
	description: "Objects that ..."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_LINE_CURSOR

create
	make

feature {NONE} -- Initialization

	make (a_line: TRAFFIC_LINE) is
			--
		do
			create internal_cursor.make (a_line.one_direction)

			line := a_line
		end

feature -- Access

	item_for_iteration: TRAFFIC_LINE_CONNECTION is
			-- Item at internal cursor position of line
		require
			not_after: not after
		do
			Result := internal_cursor.item
		end

	line: TRAFFIC_LINE

feature -- Cursor movement

	set_cursor_direction (forward: BOOLEAN) is
			--
		do
			if forward then
				create internal_cursor.make (line.one_direction)
			else
				create internal_cursor.make (line.other_direction)
			end
		end

	start is
			-- Move internal cursor to first position.
		do
			internal_cursor.start
		end

	forth is
			-- Move internal cursor to next position.
		require
			not_after: not after
		do
			internal_cursor.forth
		end

feature -- Status report

	is_cursor_one_direction: BOOLEAN is
			-- Is the cursor currently working on the direction from `terminal_1' to `terminal_2'?
		do
			Result := internal_cursor.container = line.one_direction
		end

	after: BOOLEAN is
			-- Is there no valid position to right of internal cursor?
		do
			Result := internal_cursor.after
		end

feature {NONE} -- Implementation

	internal_cursor: DS_LINKED_LIST_CURSOR [TRAFFIC_LINE_CONNECTION]

end
