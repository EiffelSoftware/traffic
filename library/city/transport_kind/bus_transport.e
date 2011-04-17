note
	description: "Bus as transportation kind."

class
	BUS_TRANSPORT

inherit
	TRANSPORT_KIND

feature -- Access
	name: STRING = "bus"
			-- Name.

	speed: REAL_64 = 40.0
			-- Average speed of buses (km/h).
end
