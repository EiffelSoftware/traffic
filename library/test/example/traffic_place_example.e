indexing
	description: "Example use of TRAFFIC_PLACE class."
	author: "Sibylle Aregger, ETH Zurich"
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_PLACE_EXAMPLE

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
		home: TRAFFIC_PLACE
		home_info: TRAFFIC_PLACE_INFORMATION
		position: VECTOR_2D
 	do 		
 		-- create home
		create home.make ("home")
		
		-- display home
		text := text + "initial place: " + home.out

		-- create some home information
		create home_info.make
		home_info.set_description ("home sweet home")

		-- add some description
		home.set_information (home_info)
		
		-- set my homes coordinates
		create position.make (17, 8)
		home.set_position (position)
		
		-- display new home
		text := text + "%Nchanged place: " + home.out
	end
	
feature -- Access

	text: STRING
			-- Text output of test.

feature {NONE} -- Implementation

	place: TRAFFIC_PLACE
			-- Example instance.

invariant
	text_exists: text /= Void
			
end -- class TRAFFIC_PLACE_EXAMPLE
