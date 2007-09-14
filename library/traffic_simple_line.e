indexing
	description: "Transportation lines (not showing contracts)"
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_SIMPLE_LINE

create
	make

feature {NONE} -- Initialization

	make (a_name: STRING; a_type: TRAFFIC_TYPE_LINE) is
			-- Create a line with name `a_name' of type `a_type'.
		do
		end

feature -- Measurement

	connection_count: INTEGER is
			-- Number of connections per direction in line
		do
		end

	count: INTEGER is
			-- Number of stations in this line
		do
		end

feature -- Access

	index: INTEGER
			-- Internal cursor index

	i_th (i: INTEGER): TRAFFIC_PLACE is
			-- The station of index i on this line		
		do
		end

	item: TRAFFIC_PLACE is
			-- Item at internal cursor position of line
		do
		end

	hash_code: INTEGER is
			-- Hash code value
		do
		end

	name: STRING
			-- Name of line

	type: TRAFFIC_TYPE_LINE
			-- Type of line

	old_terminal_1: TRAFFIC_PLACE
			-- Old terminal (after deletion via `remove_all_connections')

	terminal_1: TRAFFIC_PLACE
			-- Terminal of line in one direction

	terminal_2: TRAFFIC_PLACE
			-- Terminal of line in other direction

	color: TRAFFIC_COLOR
			-- Line color
			-- Used as color represenation

	road_points: DS_ARRAYED_LIST[TRAFFIC_COORDINATE] is
			-- Polypoints from the roads belonging to this line
		do
		end

feature -- Cursor movement

	start is
			-- Move internal cursor to first position.
		do
		end

	forth is
			-- Move internal cursor to next position.
		do
		end

feature -- Status report

	has (v: TRAFFIC_LINE_CONNECTION): BOOLEAN
			-- Does list include `v'?
		do
		end

	is_empty: BOOLEAN is
			-- Is container empty?
		do
		end

	after: BOOLEAN is
			-- Is there no valid position to right of internal cursor?
		do
		end

feature -- Element change

	highlight is
			-- Highlight all line sections
		do
		end

	unhighlight is
			-- Highlight all line sections
		do
		end

	set_color (a_color: TRAFFIC_COLOR) is
			-- Set color to `a_color'.
		do
		end

feature {TRAFFIC_MAP_ITEM_LINKED_LIST} -- Basic operations (map)

	add_to_map (a_map: TRAFFIC_MAP) is
			-- Add `Current' and all nodes to `a_map'.
		do
		end

	remove_from_map is
			-- Remove all nodes from `a_map'.
		do
		end

feature -- Removal

	remove_all_connections, wipe_out is
			-- Remove all connections (keep `terminal_1').
		do
		end

	remove_color is
			-- Remove color.
		do
		end

	remove_last is
			-- Remove end of the line.
		do
		end

	remove_first is
			-- Remove start of the line.
		do
		end

feature -- Status report


	is_insertable (a_map: TRAFFIC_MAP): BOOLEAN is
			-- Is `Current' insertable into `a_map'?
			-- E.g. are all needed elements already inserted in the map?
		do
		end

	is_removable: BOOLEAN is
			-- Is `Current' removable from `a_map'?
		do
		end

	is_terminal (a_terminal: TRAFFIC_PLACE): BOOLEAN is
			-- Is `a_terminal' a terminal of line?
		do
		end

feature -- Basic operations

	put_first (l1, l2: TRAFFIC_LINE_CONNECTION) is
			-- Add l1 and l2 at beginning (l2 connects the same two places in reverse order).
		do
		end

	put_last (l1, l2: TRAFFIC_LINE_CONNECTION) is
			-- Add l1 and l2 at end (l2 connects the same two places in reverse order).
		do
		end

	extend (a_place: TRAFFIC_PLACE) is
			-- Add connection to `a_place' at end.
		do
		end

	prepend (a_place: TRAFFIC_PLACE) is
			-- Add connection from `a_place' to the beginning of the line.
		do
		end

feature {TRAFFIC_LINE_CURSOR} -- Implementation

	one_direction, other_direction: DS_LINKED_LIST [TRAFFIC_LINE_CONNECTION]

	angle(st,dest: TRAFFIC_COORDINATE):DOUBLE is
			-- Set the angles to the x- and y-axis respectively.
		do
		end

end
