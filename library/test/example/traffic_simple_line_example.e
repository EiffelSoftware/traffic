indexing
	description: "Example use of TRAFFIC_SIMPLE_LINE class."
	author: "Sibylle Aregger, ETH Zurich"
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_SIMPLE_LINE_EXAMPLE

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
		simple_line: TRAFFIC_SIMPLE_LINE
		blue: TRAFFIC_COLOR
		station_home: TRAFFIC_LINE_SECTION
		station, home: TRAFFIC_PLACE
		map: TRAFFIC_MAP
		type: TRAFFIC_TYPE_BUS
 	do 		
 		-- create map
 		create map.make ("simple map")
 		
 		-- create station and home place
 		create station.make ("rail station")
 		create home.make ("sweet home")
 		
 		-- add places to map
 		map.add_place (station)
 		map.add_place (home)
 		
 		-- create bus type
 		create type.make
 		
 		-- create simple line
		create simple_line.make ("simple VIP bus", type, map)
		
		-- if station-home is a valid insertion, create line section 
		-- from station to home and add it to the line
		if simple_line.is_valid_insertion (station, home) then
	 		create station_home.make (station, home, type)		
			-- add line section
			simple_line.extend (station_home)
		end
 	
		-- display line
		text := text + "initial line: " + simple_line.out
		
		-- create blue color
		create blue.make (0, 0, 255)
		-- set the line's color to blue
		simple_line.set_color (blue)
		
		-- display new line
		text := text + "%Nchanged line: " + simple_line.out
	end
	
feature -- Access

	text: STRING
			-- Text output of test.

invariant
	text_exists: text /= Void
			
end -- class TRAFFIC_SIMPLE_LINE_EXAMPLE
