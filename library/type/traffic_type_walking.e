note
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

	make
			-- Create new walking type.
		do
			name := "walking"
		end


feature -- Basic

	is_allowed_type(a_moving: TRAFFIC_MOVING): BOOLEAN
			-- Is 'a_moving' allowed to go on a walk road?
		local
			passenger: TRAFFIC_PASSENGER
		do
			passenger?=a_moving
			if passenger/=Void then
				Result:=true
			end
		end

end
