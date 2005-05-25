indexing
	description: "Example use of TRAFFIC_LINE_SECTION_STATE class."
	author: "Sibylle Aregger, ETH Zurich"
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_LINE_SECTION_STATE_EXAMPLE

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
		state: TRAFFIC_LINE_SECTION_STATE
 	do 		
 		-- create state
		create state.make
 	
		-- display state
		text := text + "initial state: " + state.out
		
		-- change state to collision
		state.set_state (state.State_collision)
		
		-- display new state
		text := text + "%Nnewly created state: " + state.out
	end
	
feature -- Access

	text: STRING
			-- Text output of test.

invariant
	text_exists: text /= Void
			
end -- class TRAFFIC_LINE_SECTION_STATE_EXAMPLE
