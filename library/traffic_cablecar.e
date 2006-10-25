indexing
	description: "Vehicles of type cablecar"
	date: "$Date: 6/6/2006$"
	revision: "$Revision$"

class
	TRAFFIC_CABLECAR

inherit
	TRAFFIC_TRAM

invariant

	wagon_limited: wagon_limitation = 0

end

