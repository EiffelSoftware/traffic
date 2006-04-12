indexing
	description: "Objects that forward calls to traffic_line to traffic_3d_line_representation"
	date: "$14.02.2006$"
	revision: "$Revision$"

class TOUCH_LINE
	
inherit
	
	ANY
		redefine 
			out 
		end
		
	TOUCH_TIMING
		undefine
			out
		end

create make_with_line_and_representation
	
feature -- Initialization
	
	make_with_line_and_representation(a_line: TRAFFIC_LINE; a_rep: TRAFFIC_3D_LINE_REPRESENTATION) is 
			-- Set `internal_line' to `a_line' (line for which this proxy is built) and allow access via `a_rep' to the visuals of the line.
		require
			a_line /= Void
			a_rep /= Void		
		do 
			internal_line := a_line
			internal_rep := a_rep
		ensure
			internal_line /= Void
			internal_rep /= Void
		end

feature -- Access

	name: STRING is 
		do 
			Result := internal_line.name
		end

	type: TRAFFIC_TYPE is
			-- Type of line.
		do
			Result := internal_line.type
		end

	terminal_1: TRAFFIC_PLACE is
			-- Terminal of line in one direction.
		do
			Result := internal_line.terminal_1
		end
		
	terminal_2: TRAFFIC_PLACE is
			-- Terminal of line in other direction.
		do
			Result := internal_line.terminal_2
		end
		
	color: TRAFFIC_COLOR is
			-- Line color.
			-- Used as color represenation.
		do
			Result := internal_line.color
		end		

	start_to_terminal (a_terminal: TRAFFIC_PLACE): TRAFFIC_PLACE is
			-- The start place to existing terminal `a_terminal'.
		require
			a_terminal_exists: a_terminal /= Void
			a_terminal_valid: is_terminal (a_terminal)
		do
			Result := internal_line.start_to_terminal (a_terminal)
		ensure
			result_exists: Result /= Void
		end

	item: TRAFFIC_LINE_SECTION is
			-- Current item
		do
			Result := internal_line.item
		end

	i_th alias "[]", infix "@" (i: INTEGER): TRAFFIC_LINE_SECTION is
			-- Item at `i'-th position
		do
			Result := internal_line.i_th (i)
		end

	first: TRAFFIC_LINE_SECTION is
			-- Item at first position
		do
			Result := internal_line.first
		end

	last: TRAFFIC_LINE_SECTION is
			-- Item at last position
		do
			Result := internal_line.last
		end

	has (a_line_section: TRAFFIC_LINE_SECTION): BOOLEAN is
			-- Does chain include `a_line_section'?
		do
			Result := internal_line.has (a_line_section)
		end

feature -- Measurement

	count: INTEGER is
			-- Number of items
		do
			Result := internal_line.count
		end

	hash_code: INTEGER is
			-- Hash code value.
		do
			Result := internal_line.hash_code
		end

feature -- Element change

	set_color (a_color: TRAFFIC_COLOR) is
			-- Set color to `a_color'.
		require
			a_color_exists: a_color /= Void
		do
			internal_line.set_color (a_color)
		ensure
			color_set: equal(color, a_color)
		end

	remove_color is
			-- Remove color.
		do
			internal_line.remove_color
		ensure
			color_removed: color = Void
		end
		
	highlight is 
			-- Highlight the line.
		do 
			internal_rep.highlight_single_line(internal_line)
		end
		
	unhighlight is
			-- Unhighlight the line.
		do
			internal_rep.unhighlight_single_line (internal_line)
		end		
		
	highlight_for_5_seconds is 
			-- Highlight the line for five seconds.
		do
			highlight
			wait(5000)
			unhighlight
		end	

feature -- Status report

	is_empty: BOOLEAN is
			-- Is structure empty?
		do
			Result := internal_line.is_empty
		end

	after: BOOLEAN is
			-- Is there no valid cursor position to the right of cursor?
		do
			Result := internal_line.after
		end

	before: BOOLEAN is		
			-- Is there no valid cursor position to the left of cursor?
		do
			Result := internal_line.before
		end

	off: BOOLEAN is
			-- Is there no current item?
		do
			Result := internal_line.off
		end

	is_terminal (a_terminal: TRAFFIC_PLACE): BOOLEAN is
			-- Is `a_terminal' a terminal of line?
		require
			a_terminal_exists: a_terminal /= Void
		do
			Result := internal_line.is_terminal (a_terminal)
		end

	one_direction_exists: BOOLEAN is
			-- Does line have line section(s) in one direction?
		do
			Result := internal_line.one_direction_exists
		end
		
	other_direction_exists: BOOLEAN is
			-- Does line have line section(s) in other direction?
		do
			Result := internal_line.other_direction_exists
		end

	is_valid_for_insertion (a_line_section: TRAFFIC_LINE_SECTION): BOOLEAN is
			-- Can `a_line_section' be added to line?
			--
			-- This is the case if it can be added in front or back of an existing direction,
			-- or at least one direction does not yet exists.
			-- The destination of `a_line_section' is
			-- not place allready use in this direction (circle).
			-- A line section can not be added twice to the same line.
			-- A line section can not be added to two lines at the same time.
		require
			a_line_section_exists: a_line_section /= Void
		do
			Result := internal_line.is_valid_for_insertion (a_line_section)
		end
	
	is_valid_insertion (a_origin, a_destination: TRAFFIC_PLACE): BOOLEAN is
			-- Can a line_section from `a_origin' to `a_destination' be added 
			-- in front or back of this line?
		require
			a_origin_exists: a_origin /= Void
			a_destination_exists: a_destination /= Void
		do
			Result := internal_line.is_valid_insertion (a_origin, a_destination)
		end

feature -- Cursor movement

	start is
			-- Move cursor to first position.
		do
			internal_line.start
		ensure then
			empty_convention: is_empty implies after
		end

	finish is
			-- Move cursor to last position.
			-- (Go before if empty)
		do
			internal_line.finish
		ensure then
			Empty_convention: is_empty implies before
		end

	forth is
			-- Move cursor to next position.
		do
			internal_line.forth
		end

	back is
			-- Move to previous item.
		do
			internal_line.back
		end

feature -- Basic operations

	extend (a_line_section: TRAFFIC_LINE_SECTION) is
			-- Add `a_line_section' at beginning or end of existing direction(s).
		require else
			a_line_section_exists: a_line_section /= Void
			a_line_section_valid_for_insertion: is_valid_for_insertion (a_line_section)
		do
			internal_line.extend (a_line_section)
		ensure
			a_line_section_in_line: has (a_line_section)
			line_added_to_line_section: a_line_section.line = internal_line
		end

feature -- Output
		
	out: STRING is
			-- Textual representation
		do
			Result := internal_line.out
		end
		
feature {NONE} -- Implementation

	internal_line: TRAFFIC_LINE
			-- Traffic line that gets all the calls

	internal_rep: TRAFFIC_3D_LINE_REPRESENTATION
			-- Visualization of `internal_line' that gets calls concerning visualization changes
		
invariant

	name_not_void: name /= Void 
	name_not_empty: not name.is_empty
	type_exists: type /= Void

end
