indexing
	description: "XML processors for <onroad> nodes."


class
	TRAFFIC_ONROAD_NODE_PROCESSOR

inherit
	TRAFFIC_NODE_PROCESSOR

create
	make

feature -- Access

	Name: STRING is "onroad"
			-- Name of node to process

	Mandatory_attributes: ARRAY [STRING] is
			-- Table of mandatory attributes
		once
			Result := << "id", "back" >>
			Result.compare_objects
		end

feature -- Basic operations

	process is
			-- Process node.
		local
			a_map:TRAFFIC_MAP
		do
			if not has_attribute ("id") then
				set_error (Mandatory_attribute_missing, << "id" >>)
			else
				a_map:=map_factory.map
				-- retrieve the corresponding instance of TRAFFIC_ROAD
				if (a_map.roads.has (attribute("id").to_integer)) and attribute ("back").is_equal ("false") then
					parent.send_data (a_map.roads.item (attribute("id").to_integer).one_way)
				elseif (a_map.roads.has (attribute("id").to_integer)) and attribute ("back").is_equal ("true") then
					parent.send_data (a_map.roads.item (attribute("id").to_integer).other_way)
				else
					set_error(No_road_with_given_id_exists,<<"id">>)
					parent.send_data(Void)
				end
			end

			if not has_error and has_subnodes then
				process_subnodes
			end
		end
end
