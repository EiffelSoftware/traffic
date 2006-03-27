indexing
	description: "Adaptor used to adapt the city parser to parse and process visualization elements"
		 
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_XML_ADAPTOR

feature -- Basic operations

	adapt_xml_registry (a_map_parser: TRAFFIC_MAP_PARSER) is
			-- Add new node_processors to `a_map_parser'.
		require
			a_map_parser_exists: a_map_parser /= Void
		do
			a_map_parser.register_processor (create {TRAFFIC_PLACE_NODE_PROCESSOR}.make)
			a_map_parser.register_processor (create {TRAFFIC_POINT_NODE_PROCESSOR}.make)
			a_map_parser.register_processor (create {TRAFFIC_COLOR_NODE_PROCESSOR}.make)
			a_map_parser.register_processor (create {TRAFFIC_FILE_NODE_PROCESSOR}.make)
			a_map_parser.register_processor (create {TRAFFIC_DESCRIPTION_NODE_PROCESSOR}.make)
			a_map_parser.register_allowed_subnode ("map", "description")
			a_map_parser.register_allowed_subnode ("place", "file")
			a_map_parser.register_allowed_subnode ("place", "description")
			a_map_parser.register_allowed_subnode ("line", "color")
			a_map_parser.register_allowed_subnode ("line", "line_section")
		end

end
