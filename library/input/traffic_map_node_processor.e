indexing
	description: "XML processors for <map> nodes."

	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_MAP_NODE_PROCESSOR

inherit
	TRAFFIC_NODE_PROCESSOR
	
create
	make
	
feature -- Access

	Name: STRING is "map"
			-- Name of node to process.
			
	Mandatory_attributes: ARRAY [STRING] is
			-- Table of mandatory attributes.
		once
			Result := << "name" >>
			Result.compare_objects
		end

feature -- Basic operations

	process is
			-- Process node.
		local
			description: STRING
		do
			if has_attribute ("name") then
				map_factory.build_map (attribute ("name"))
			end
			
			if has_subnodes then
				process_subnodes
			end
			description ?= data
			if not has_error and description /= Void then
				map_factory.map.set_description (description)		
			end
		end		
		
end
