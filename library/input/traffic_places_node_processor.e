indexing
	description: "XML processors for <places> elements."
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_PLACES_NODE_PROCESSOR

inherit
	TRAFFIC_NODE_PROCESSOR

create
	make

feature -- Access

	Name: STRING is "places"
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
			if has_subnodes then
				process_subnodes
			end
		end

end
