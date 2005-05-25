indexing
	description: "State of line section."
	author: "Sibylle Aregger, ETH Zurich"
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_LINE_SECTION_STATE 
	
inherit
	TRAFFIC_LINE_SECTION_STATE_CONSTANTS
		rename
			out as state_out
		end
		
create
	make
	
feature {NONE} -- Inititalization
	
	make is
			-- Set state to normal.
		do
			value := State_normal
		ensure
			value_set: value /= Void
			value_valid: is_valid_state_value (value)
		end
		
feature -- Access

	value: INTEGER
			-- Current state.
			
feature -- Element change

	set_state (a_value: INTEGER) is
			-- Set `value' to `a_value'.
		require
			is_valid_state_value (a_value)
		do
			value := a_value
		ensure
			value_set: value = a_value
		end
			
feature -- Basic operation

	out: STRING is
			-- Textual representation
		do
			Result := "state: " + value_to_string (value)
		end

invariant
	value_set: value /= Void -- State value exists.
	value_valid: is_valid_state_value (value) -- Valid state value.

end -- class TRAFFIC_LINE_SECTION_STATE
