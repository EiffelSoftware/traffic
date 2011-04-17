note
	description: "Cable car as kind of transportation."

class
	CABLE_TRANSPORT

inherit
	TRANSPORT_KIND

feature -- Access

	name: STRING = "cable car"
			-- Name.

	speed: REAL_64 = 10.0
			-- Average speed of cable cars (km/h).

end
