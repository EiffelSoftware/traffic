indexing
	description: "Objects that forward calls to traffic_line to traffic_line_representation"
	author: "Susanne Kasper"
	date: "$14.02.2006$"
	revision: "$Revision$"

class
	TOUCH_LINE

create make
	
feature 
	
	make(a_line: TRAFFIC_LINE; a_rep: TRAFFIC_LINE_REPRESENTATION) is 
	do 
		internal_line := a_line
		internal_rep := a_rep
	end


feature {NONE}

	internal_line: TRAFFIC_LINE

	internal_rep: TRAFFIC_LINE_REPRESENTATION


feature -- Access
	name: STRING is 
		do 
			Result := internal_line.name
		end

feature -- Element change

	highlight is 
		do 
	--		internal_rep.highlight_single_line(a_line)
		end

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
