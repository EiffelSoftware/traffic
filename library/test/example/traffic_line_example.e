indexing
	description: "Example use of TRAFFIC_LINE class."
	author: "Sibylle Aregger, ETH Zurich"
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_LINE_EXAMPLE

create
	make
	
feature -- Initialization

	make is
			-- Create `Current'.
		local
			type_factory: TRAFFIC_TYPE_FACTORY
		do
			create text.make_empty -- emty text
			create type_factory.make
			type_factory.build ("bus")
			type ?= type_factory.traffic_type
		ensure
			text_exists: text /= Void
			type_exists: type /= Void
		end
		
feature -- Basic operation

	run is
			-- Run example demonstration.
	local
		blue: TRAFFIC_COLOR
		station_home, home_station: TRAFFIC_LINE_SECTION
		station, home: TRAFFIC_PLACE
 	do 		
 		-- create station and home place
 		create station.make ("rail station")
 		create home.make ("sweet home")
 		
 		-- create blue line
		create line.make ("VIP bus", type)
		
		-- if station-home is a valid insertion, create line section 
		-- from station to home and add it to the line
		if line.is_valid_insertion (station, home) then
	 		create station_home.make (station, home, type)		
			-- add line section
			line.extend (station_home)
		end
 	
		-- display line
		text := text + "initial line: " + line.out
		
		-- create blue color
		create blue.make (0, 0, 255)
		-- set the line's color to blue
		line.set_color (blue)
		
		-- create line section from home to station
		create home_station.make (home, station, type)
		-- is home-station a valid line section to be 
		-- inserted in line?
		if line.is_valid_for_insertion (home_station) then
			-- add other line section
			line.extend (home_station)
		end
		
		-- display new line
		text := text + "%Nchanged line: " + line.out
	end
	
feature -- Access

	text: STRING
			-- Text output of test.

feature {NONE} -- Implementation

	line: TRAFFIC_LINE
			-- Example instance.
			
	type: TRAFFIC_TYPE_BUS
			-- Bus type.

invariant
	text_exists: text /= Void
	type_exists: type /= Void
			
end -- class TRAFFIC_LINE_EXAMPLE
