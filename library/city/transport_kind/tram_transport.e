note
	description: "Trams as kind of transportation."

class
	TRAM_TRANSPORT

inherit
	TRANSPORT_KIND

feature -- Access
	name: STRING = "tram"
			-- Name.

	speed: REAL_64 = 50.0
			-- Average speed of trams (km/h).

end
