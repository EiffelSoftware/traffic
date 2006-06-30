indexing
	description: "Objects that ..."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_TROLLEYBUS

inherit
	TRAFFIC_TRAM
		select capacity, engine_capacity end
	TRAFFIC_BUS
		rename
					unit_capacity as bus_unit_capacity,
					Default_virtual_speed as bus_speed,
					capacity as bus_capacity,
	 				make_default_with_line as bus_make end

end
