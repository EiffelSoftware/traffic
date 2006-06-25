indexing
	description: "Objects that ..."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_SCHEDULER_LINES_NODE_PROCESSOR
inherit
	TRAFFIC_NODE_PROCESSOR
	
create
	make
	
feature -- Access

	Name: STRING is "slines"
			-- Name of node to process.
			
	Mandatory_attributes: ARRAY [STRING] is
			-- Table of mandatory attributes.
		once
			Result := <<  >>
			Result.compare_objects
		end

feature -- Basic operations

	process is
			-- Process node
		do
			if has_subnodes then
				process_subnodes
			end
		end		
		
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
