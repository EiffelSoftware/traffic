indexing
	description: "XML processors for background <file> elements."

	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_FILE_NODE_PROCESSOR
	
inherit
	TRAFFIC_NODE_PROCESSOR

create
	make

feature -- Access

	Name: STRING is	
			-- Name of element to process
		do
			Result := "file"
		end

	Mandatory_attributes: ARRAY [STRING] is
			-- Table of mandatory attributes
		once
			Result := << "name" >>
			Result.compare_objects
		end

feature -- Basic operations

	process is
			-- Process node.
		do
			if has_attribute ("name") then
				create file.make_from_string (attribute ("name"))
--				parent.send_data (file)
			else
				set_error (Mandatory_attribute_missing, << "name" >>)
			end
		end
	
	file: STRING
			-- String in which the filename is stored

end
