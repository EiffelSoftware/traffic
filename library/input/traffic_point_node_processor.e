indexing
	description: "XML processors for <point> elements. Example: <point x="3.2" y="1.7">."
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_POINT_NODE_PROCESSOR

inherit
	TRAFFIC_NODE_PROCESSOR

create
	make

feature -- Access

	Name: STRING is "point"
			-- Name of node to process

	Mandatory_attributes: ARRAY [STRING] is
			-- Table of mandatory attributes
		once
			Result := << "x", "y" >>
			Result.compare_objects
		end

feature -- Basic operations

	process is
			-- Process node.
		local
			x: INTEGER
			y: INTEGER
			s: STRING
			p: TRAFFIC_POINT
		do
			if not has_attribute ("x") and has_attribute ("y") then
				set_error (Mandatory_attribute_missing, << "x", "y" >>)
			elseif not ((is_attribute_integer ("x") and is_attribute_integer ("y")) or
					(is_attribute_double ("x") and is_attribute_double ("y")))
			then
				set_error (Wrong_attribute_type, << "x", "y" >>)
			else
				x := attribute_integer ("x")
				y := attribute_integer ("y")
				create p.make(x, y)
				parent.send_data (p)
			end
		end

end
