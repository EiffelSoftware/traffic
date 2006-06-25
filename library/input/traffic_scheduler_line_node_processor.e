indexing
	description: "XML processors for <schedulerline> nodes."
	author: "Adrian Helfenstein, adrianh@student.ethz.ch"
	date: "23.06.2006"
	revision: "$Revision$"

class
	TRAFFIC_SCHEDULER_LINE_NODE_PROCESSOR

inherit
	TRAFFIC_NODE_PROCESSOR
	
create
	make
	
feature -- Access

	Name: STRING is "sline"
			-- Name of node to process.
			
	Mandatory_attributes: ARRAY [STRING] is
			-- Table of mandatory attributes.
		once
			Result := << "name" >>
			Result.compare_objects
		end

feature -- Basic operations

	process is
			-- Process node
		do
			if has_attribute ("name") then
				schedule_factory.add_line (attribute ("name"))
			end
			
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
