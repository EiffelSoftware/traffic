indexing
	description: "Example use of TRAFFIC_MAP_FACTORY class."
	author: "Sibylle Aregger, ETH Zurich"
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_MAP_FACTORY_EXAMPLE

create
	make
	
feature -- Initialization

	make is
			-- Create `Current'.
		do
			create text.make_empty -- emty text
		ensure
			text_exists: text /= Void
		end
		
feature -- Basic operation

	run is
			-- Run example demonstration.
	local
		map_factory: TRAFFIC_MAP_FACTORY
		station, home: TRAFFIC_PLACE
		type: TRAFFIC_TYPE_BUS
 	do
	 	-- create map_factory
		create map_factory.make

 		-- create type
 		map_factory.build_traffic_type ("bus")
 		type ?= map_factory.traffic_type
 		
 		-- create map
 		map_factory.build_map ("simple vip map")
	
 		-- create station and home place
 		map_factory.build_place ("rail station", map_factory.map)
 		station := map_factory.place
 		map_factory.build_place_with_position ("sweet home", 5, 5, map_factory.map)
 		home := map_factory.place
 		
 		-- create line
 		map_factory.build_line("vip bus shuffle", type.name, map_factory.map)

		-- create line sections
		map_factory.build_line_section (station.name, home.name, Void, map_factory.map, map_factory.line)
		map_factory.build_line_section (home.name, station.name, Void, map_factory.map, map_factory.line)

		-- display created map
		text := "created map: " + map_factory.map.out
	end
	
feature -- Access

	text: STRING
			-- Text output of test.
invariant
	text_exists: text /= Void
			
end -- class TRAFFIC_MAP_FACTORY_EXAMPLE
