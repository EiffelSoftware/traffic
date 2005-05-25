indexing
	description: "Example use of TRAFFIC_MAP class."
	author: "Sibylle Aregger, ETH Zurich"
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_MAP_EXAMPLE

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
		station_home, home_station: TRAFFIC_LINE_SECTION
		station, home: TRAFFIC_PLACE
		vip_line: TRAFFIC_LINE
		type: TRAFFIC_TYPE_BUS
 	do
	 	-- create map
		create map.make ("vip map")

 		-- create type
 		create type.make
	
 		-- create station and home place
 		create station.make ("rail station")
 		create home.make ("sweet home")
 		
 		-- add places to map
 		map.add_place (station)
 		map.add_place (home)
 		
		-- create line sections
 		create station_home.make (station, home, type)
 		create home_station.make (home, station, type)
 		
 		-- create line
 		create vip_line.make ("vip bus shuffle", type)

		-- add line sections to line
		vip_line.extend (station_home)
		vip_line.extend (home_station)

		-- display map
		text := text + "initial map: " + map.out
 	
 		-- create line
		create vip_line.make ("VIP bus", type)
		
		-- add line to map
		map.add_line (vip_line)
		
		-- display new map
		text := text + "%Nmap with line: " + map.out
	end
	
feature -- Access

	text: STRING
			-- Text output of test.
invariant
	text_exists: text /= Void
			
end -- class TRAFFIC_MAP_EXAMPLE
