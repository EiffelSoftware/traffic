indexing
	description: "Example use of TRAFFIC_COLOR class."
	author: "Sibylle Aregger, ETH Zurich"
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_COLOR_EXAMPLE

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
		b: BOOLEAN
 	do 		
 		-- create blue color
		create color.make (0, 0, 255)
 	
		-- display color
		text := text + "initial color: " + color.out
		
		-- test if an integer is a valid  part of a color
		b := color.is_valid_rgb_part (300)
		text := text + "%N300 is a " + b.out + " part of a color!"

		-- create new composition of color resulting in green color
		color.set_red (0)
		color.set_green (255)
		color.set_blue (0)
		
		-- display new color
		text := text + "%Nnewly created color: " + color.out
	end
	
feature -- Access

	text: STRING
			-- Text output of test.

feature {NONE} -- Implementation

	color: TRAFFIC_COLOR
			-- Example instance.

invariant
	text_exists: text /= Void
			
end -- class TRAFFIC_COLOR_EXAMPLE
