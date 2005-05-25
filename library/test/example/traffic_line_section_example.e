indexing
	description: "Example use of TRAFFIC_LINE_SECTION class."
	author: "Sibylle Aregger, ETH Zurich"
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_LINE_SECTION_EXAMPLE

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
		end
		
feature -- Basic operation

	run is
			-- Run example demonstration.
	local
		station, home: TRAFFIC_PLACE
		station_home: TRAFFIC_LINE_SECTION
		collision_state: TRAFFIC_LINE_SECTION_STATE
 	do 		
 		-- create station and home place
 		create station.make ("rail station")
 		create home.make ("sweet home")
 		
 		-- create line section from station to home
 		create station_home.make (station, home, type)		
 	
		-- display line
		text := text + "initial line section: " + station_home.out
		
		-- create collision state
		create collision_state.make
		collision_state.set_state (collision_state.State_collision)
		
		-- set collision on line section
		station_home.set_state (collision_state)
		
		-- display new line
		text := text + "%Nchanged line section: " + station_home.out
	end
	
feature -- Access

	text: STRING
			-- Text output of test.

feature {NONE} -- Implementation

	type: TRAFFIC_TYPE_BUS
			-- Bus type.

invariant
	text_exists: text /= Void
			
end -- class TRAFFIC_LINE_SECTION_EXAMPLE
