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
			Result := << "name", "scale_factor", "center_x", "center_y", "radius" >>
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

			if has_attribute ("scale_factor") then
				if not attribute ("scale_factor").is_double then
					set_error (wrong_attribute_type, << "scale_factor" >>)
				end
				map.set_scale_factor (attribute ("scale_factor").to_double)
			end

			if has_attribute ("center_x") and has_attribute ("center_y") and has_attribute ("radius") then
				if not attribute ("center_x").is_double then
					set_error (wrong_attribute_type, << "center_x" >>)
				end
				if not attribute ("center_y").is_double then
					set_error (wrong_attribute_type, << "center_y" >>)
				end
				if not attribute ("radius").is_double then
					set_error (wrong_attribute_type, << "radius" >>)
				end
				if not has_error then
					map.set_center (create {EM_VECTOR_2D}.make (attribute_double ("center_x"), attribute_double ("center_y")))
					map.set_radius (attribute_double ("radius"))
				end

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
