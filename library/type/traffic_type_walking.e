indexing
	description: "Walking type."
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_TYPE_WALKING

inherit
	TRAFFIC_TYPE_LINE
	redefine
		is_allowed_type
	end

create
	make

feature -- Creation

	make is
			-- Create new walking type.
		do
			name := "walking"
		end


feature -- Basic

	is_allowed_type(a_moving: TRAFFIC_MOVING): BOOLEAN is
			-- Is 'a_moving' allowed to go on a walk road?
		do
			Result := {passenger: TRAFFIC_PASSENGER} a_moving
		end

end
