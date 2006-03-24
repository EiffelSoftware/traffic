indexing
	description: "Objects that forward calls to a TRAFFIC_SIMPLE_LINE and to its representation"
	date: "$14.02.2006$"
	revision: "$Revision$"

class TOUCH_SIMPLE_LINE

inherit
	
	ANY
		redefine 
			out 
		end

create 
	make_with_line_and_representation
	
feature -- Initialization
	
	make_with_line_and_representation(a_line: TRAFFIC_SIMPLE_LINE; a_rep: TRAFFIC_LINE_REPRESENTATION) is 
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

	start_to_terminal (a_terminal: TRAFFIC_PLACE): TRAFFIC_PLACE is
			-- The start place to existing terminal `a_terminal'
		do
			Result := internal_line.start_to_terminal (a_terminal)
		end
		
	name: STRING is 
			-- Name of the line
		do 
			Result := internal_line.name
		end

	type: TRAFFIC_TYPE is
			-- Type of line
		do
			Result := internal_line.type
		end

	has (a_place: TRAFFIC_PLACE): BOOLEAN is
			-- Does line include `a_line_section'?
		do
			Result := internal_line.has (a_place)	
		end

	item: TRAFFIC_PLACE is
			-- Current place
		do
			Result := internal_line.item			
		end		

	i_th (i: INTEGER): TRAFFIC_PLACE is
			-- Place at `i'-th position
		require
			i_correct_index: i >= 1 and then i <= count
		do
			Result := internal_line.i_th (i)			
		ensure
			result_not_void: Result /= Void
		end		
		
	one_end: TRAFFIC_PLACE is
			-- One end of the line
		do
			Result := internal_line.one_end
		end
		
	other_end: TRAFFIC_PLACE is
			-- Other end of the line
		do
			Result := internal_line.other_end
		end	
				
feature -- Status report

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

feature -- Measurement
		
	count: INTEGER is
			-- Number of places
		do
			Result := internal_line.count
		end
		
feature -- Cursor movement

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

	start is
			-- Move cursor to first position.
		do
			internal_line.start
		end
		
	finish is
			-- Move cursor to last position.
			-- (Go before if empty)
		do
			internal_line.finish
		end

feature -- Basic operations

	remove_all_sections is
			-- Remove all line sections but keep the first place
		do
			internal_line.remove_all_sections
		end
		
	extend (a_line_section: TRAFFIC_LINE_SECTION) is
			-- Add `a_line_section' at beginning or end of existing direction(s).
		do
			internal_line.extend (a_line_section)
		end

	extend_place (a_place: TRAFFIC_PLACE) is
			-- Extend the simple line by a place.
			-- Line sections in both directions are added to the line if there
			-- is at least one place in the line
		require
			a_place_not_void: a_place /= Void
			a_place_not_in_places_of_line: not has (a_place)
		do
			internal_line.extend_place (a_place)
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
			internal_rep.highlight_single_line_for_5sec(internal_line)
		end	

feature -- Output
		
	out: STRING is
			-- Textual representation
		do
			Result := internal_line.out
		end
		
feature {NONE} -- Implementation

	internal_line: TRAFFIC_SIMPLE_LINE
			-- Traffic line that gets all the calls

	internal_rep: TRAFFIC_LINE_REPRESENTATION
			-- Visualization of `internal_line' that gets calls concerning visualization changes
		
invariant

	name_not_void: name /= Void 
	name_not_empty: not name.is_empty 
	type_exists: type /= Void
	stations_at_right_place: count >= 2 implies one_end = i_th(1) and other_end = i_th(count)

end
