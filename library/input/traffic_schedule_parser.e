indexing
	description: "Objects that ..."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_SCHEDULE_PARSER
	
inherit
	TRAFFIC_XML_INPUT_FILE_PARSER
	TRAFFIC_NODE_PROCESSOR_REGISTRY
	
create
	make_with_factory

feature -- Initialization

	make_with_factory (a_traffic_schedule_factory: TRAFFIC_SCHEDULE_FACTORY) is
			-- Create parser with `a_traffic_map_factory'.
		require
			a_traffic_schedule_factory_exists: a_traffic_schedule_factory /= Void
		do
			make
			from
				Processor_registry.start
			until
				Processor_registry.off
			loop
				Processor_registry.item_for_iteration.set_schedule_factory (a_traffic_schedule_factory)
				Processor_registry.forth
			end
		end
		
feature -- Status report

	can_process: BOOLEAN is
			-- Can document tree be processed?
		do
			Result := is_parsed and then has_processor (root_element.name)
		end
	
feature -- Basic operations
	
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
			set_schedule_factory (p.schedule_factory)
		end
				
invariant

	can_process_definition: can_process = (is_parsed and 
			has_processor (root_element.name))

end

