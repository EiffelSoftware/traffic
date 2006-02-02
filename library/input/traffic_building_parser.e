indexing
	description: "Objects that ..."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_BUILDING_PARSER

inherit
	TRAFFIC_XML_INPUT_FILE_PARSER
		
	TRAFFIC_NODE_PROCESSOR_REGISTRY

create
	make_with_map
	
feature

	make_with_map(a_map:TRAFFIC_3D_MAP_WIDGET)  is
		do
			make
			from
				Processor_registry.start
			until
				Processor_registry.off
			loop
				Processor_registry.item_for_iteration.set_map(a_map)
				Processor_registry.forth
			end
		end
	
	can_process: BOOLEAN is
			-- 
		do
			Result := is_parsed and then has_processor (root_element.name)
		end
		
	process is
			-- Process document tree.
		local
			p: TRAFFIC_NODE_PROCESSOR
		do
			p := processor (root_element.name)
			p.set_source (root_element)
			if p.has_error then
				set_error (p.error_code, p.slots)
				is_parsed := False
			end
			if not has_error then
				p.process
				if p.has_error then
					set_error (p.error_code, p.slots)
					is_parsed := False
				end
			end
		end		
	
end