indexing
	description: "Objects that forward calls to traffic_line to traffic_line_representation"
	author: ""
	date: "$14.02.2006$"
	revision: "$Revision$"

class
	TOUCH_LINE

create make_with_line_and_representation
	
feature 
	
	make_with_line_and_representation(a_line: TRAFFIC_LINE; a_rep: TRAFFIC_LINE_REPRESENTATION) is 
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

feature -- Element change
	highlight is 
		do 
			internal_rep.highlight_single_line(internal_line)
		end
		
	highlight_for_5_seconds is 
		do
			internal_rep.highlight_single_line(internal_line)
			
			internal_rep.un_highlight_single_line(internal_line)
--			internal_rep.highlight_single_line_for_5sec(internal_line)
		end
	

feature {NONE} -- Implementation

	internal_line: TRAFFIC_LINE

	internal_rep: TRAFFIC_LINE_REPRESENTATION

end -- class TOUCH_LINE
