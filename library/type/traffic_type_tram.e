indexing
	description: "Tram type."
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_TYPE_TRAM

inherit
	TRAFFIC_TYPE_LINE
	redefine is_allowed_type end

create
	make

feature -- Creation

	make is
			-- Create new tram type.
		do
			name := "tram"
		end

feature -- Basic

	is_allowed_type(a_moving: TRAFFIC_MOVING): BOOLEAN is
			-- Is 'a_moving' allowed to go on a walk road?
		local
			tram: TRAFFIC_PASSENGER
		do
			tram?=a_moving
			if tram/=Void then
				Result:=true
			end
		end

end
