indexing
	description: "Example use of TRAFFIC_ROUTE class."
	author: "Sibylle Aregger, ETH Zurich"
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_ROUTE_EXAMPLE

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
			map: TRAFFIC_MAP
			home, station, eth: TRAFFIC_PLACE
			station_home, eth_station, home_eth: TRAFFIC_LINE_SECTION
			route: TRAFFIC_ROUTE
			type: TRAFFIC_TYPE_WALKING
		do
			-- create map
			create map.make ("simple map")
			
			-- create places
			create home.make_with_position ("home", 10, 10)
			create station.make_with_position ("station", 0, 1)
			create eth.make_with_position ("eth", 1, 0)

			-- add places to map
			map.add_place (home)
			map.add_place (station)
			map.add_place (eth)
			
			-- create line sections
			create type.make
			create station_home.make (station, home, type)
			create eth_station.make (eth, station, type)
			create home_eth.make (home, eth, type)
			
			-- add line sections to map
			map.add_line_section (station_home)
			map.add_line_section (eth_station)
			map.add_line_section (home_eth)
			
			-- create route
			create route.make_empty (map)
			route.extend (eth)
			route.extend (home)
			
			-- calculate shortest way from eth home
			route.calculate_shortest_path

			-- display route
			text := "%Nroute: " + route.out
		end
	
feature -- Access

	text: STRING
			-- Text output of test.
			
invariant
	text_exists: text /= Void
			
end -- class TRAFFIC_ROUTE_EXAMPLE
