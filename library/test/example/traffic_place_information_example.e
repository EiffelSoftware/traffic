indexing
	description: "Example use of TRAFFIC_PLACE_INFORMATION class."
	author: "Sibylle Aregger, ETH Zurich"
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_PLACE_INFORMATION_EXAMPLE

create
	make
	
feature  -- Initialization

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
		home_information: TRAFFIC_PLACE_INFORMATION
 	do 		
 		-- create  home information
		create home_information.make
 	
		-- display home_information
		text := "initial place_information: " + home_information.out
		
		-- add a description
		home_information.set_description ("my home sweet home")

		-- add a picture
		home_information.extend_picture ("my_home_path")

		-- display new place_information
		text := text + "%Nplace_information: " + home_information.out
	end
	
feature -- Access

	text: STRING
			-- Text output of test.

invariant
	text_exists: text /= Void
			
end -- class TRAFFIC_PLACE_INFORMATION_EXAMPLE
