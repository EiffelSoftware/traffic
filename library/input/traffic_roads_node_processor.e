indexing
	description: "XML processors for <places> elements."
		 
	date: "$Date: 2006-03-27 20:01:11 +0200 (lun, 27 mar 2006) $"
	revision: "$Revision: 602 $"

class
	TRAFFIC_ROADS_NODE_PROCESSOR
	
inherit
	TRAFFIC_NODE_PROCESSOR

create
	make

feature -- Access

	Name: STRING is "roads"
			-- Name of node to process
			
	Mandatory_attributes: ARRAY [STRING] is
			-- Table of mandatory attributes
		once
			Result := << >>
			Result.compare_objects
		end

feature -- Basic operations

	process is
			-- Process node.
		do
			io.putstring("Processing roads%N")
			if has_subnodes then
				process_subnodes
			end
		end

end
