indexing
	description: "Railroad type."
	date: "$Date: 6/6/2006$"
	revision: "$Revision$"

class
	TRAFFIC_TYPE_RAILROAD

inherit

	TRAFFIC_TYPE_ROAD
		redefine
			is_allowed_type
		end

create
	make

feature -- Creation

	make is
			-- Create new street type.
		do
			name := "railroad"
		end


feature -- Basic

	is_allowed_type (a_moving: TRAFFIC_MOVING): BOOLEAN is
			-- Is 'a_moving' allowed to go on a walk road?
		do
			Result := {line_vehicle: TRAFFIC_LINE_VEHICLE} a_moving
		end

end
