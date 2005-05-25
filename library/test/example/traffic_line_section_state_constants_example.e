indexing
	description: "Example use of TRAFFIC_LINE_SECTION_STATE_CONSTANTS class."
	author: "Sibylle Aregger, ETH Zurich"
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_LINE_SECTION_STATE_CONSTANTS_EXAMPLE

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
		constants: TRAFFIC_LINE_SECTION_STATE_CONSTANTS
 	do 	
 		-- create constants class
 		create constants
 		
		-- display normal state
		text := text + "normal state: " + constants.value_to_string (constants.State_normal)
		
		-- display collision state
		text := text + "%Nnormal state: " + constants.value_to_string (constants.State_collision)
	end
	
feature -- Access

	text: STRING
			-- Text output of test.

feature {NONE} -- Implementation

	line_section_state_constants: TRAFFIC_LINE_SECTION_STATE_CONSTANTS
			-- Example instance.

invariant
	text_exists: text /= Void
			
end -- class TRAFFIC_LINE_SECTION_STATE_CONSTANTS_EXAMPLE
