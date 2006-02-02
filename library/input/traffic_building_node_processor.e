indexing
	description: "XML processors for <building> nodes."
	author: "Fabian W�est"
	date: "28.01.2006"
	revision: "0.1"

class
	TRAFFIC_BUILDING_NODE_PROCESSOR

inherit
	TRAFFIC_NODE_PROCESSOR

create
	make

feature -- Access

	Name: STRING is "building"
			-- Name of element to process
		
	Mandatory_attributes: ARRAY [STRING] is
			-- Table of mandatory attributes
		do
			Result := << "name", "x1", "x2", "y1", "y2", "height" >>
			Result.compare_objects
		end
		
feature -- Basic operations

	process is
			-- Process node.
		local
			building: TRAFFIC_BUILDING
			
			x1,x2: DOUBLE
			y1,y2: DOUBLE
			height: DOUBLE
			building_name: STRING
		do

			if not has_attribute ("name") then
				set_error (Mandatory_attribute_missing, << "name" >>)
			elseif not has_attribute ("x1") then
				set_error (Mandatory_attribute_missing, << "x1" >>)
			elseif not has_attribute("x2") then
				set_error (Mandatory_attribute_missing, << "x2" >>)
			elseif not has_attribute ("y1") then
				set_error (Mandatory_attribute_missing, << "y1" >>)			
			elseif not has_attribute ("y2") then
				set_error (Mandatory_attribute_missing, << "y2" >>)
			elseif not (is_attribute_integer ("x1") and is_attribute_integer ("x2") and
						(is_attribute_integer ("y1") and is_attribute_integer ("y2")) or
						(is_attribute_double ("x1") and is_attribute_double ("x2")) and
						is_attribute_double ("y1") and is_attribute_double ("y2"))
			then
				set_error (Wrong_attribute_type, << "x", "y" >>)
			elseif not has_attribute ("height") then
				set_error (Mandatory_attribute_missing, << "height" >>)
			else
				x1:= attribute_double("x1")
				x2:= attribute_double("x2")
				y1:= attribute_double("y1")
				y2:= attribute_double("y2")
				height:= attribute_double("height")
				building_name:= attribute ("name")
				create building.make(x1,x2,y1,y2,building_name)
				building.set_height(height)
				internal_map.add_building (building)
			end
		end

end