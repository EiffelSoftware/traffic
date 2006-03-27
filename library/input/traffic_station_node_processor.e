indexing
	description: 
		"[
			XML processors for <station> nodes.
		 ]"
		 
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_STATION_NODE_PROCESSOR

inherit
	TRAFFIC_NODE_PROCESSOR

create
	make

feature -- Access

	Name: STRING is "station"
			-- Name of node to process
			
	place: TRAFFIC_PLACE
			-- Reference to node

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
			if not has_attribute ("name") then
				set_error (Mandatory_attribute_missing, << "name" >>)
			elseif city_factory.city.has_place (attribute ("name")) then
				set_error (Duplicate_name, << attribute ("name") >>)
			else
				city_factory.build_station (attribute ("name"), city)
				set_target (city_factory.station)
			end

			if has_subnodes then
				process_subnodes
			end
		end

end