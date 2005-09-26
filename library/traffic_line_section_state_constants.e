indexing
	description: "State constants definition."
	author: "Sibylle Aregger, ETH Zurich"
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_LINE_SECTION_STATE_CONSTANTS

feature -- Access

	State_normal, State_collision: INTEGER is unique
			-- State constants.

feature -- Status report

	is_valid_state_value (a_state_value: INTEGER): BOOLEAN is
			-- Is `a_state_value' a state constants?
		do
			Result := False
			
			inspect 
				a_state_value
			when State_normal then 
				Result := True
			when State_collision then 
				Result := True
			end
		end
		
feature -- Basic operation

	value_to_string (a_state_value: INTEGER): STRING is
			-- String representation of state `a_state_value'
		require
			a_state_value_valid: is_valid_state_value (a_state_value)
		do
			inspect
				a_state_value
			when State_normal then
				Result := "normal"
			when State_collision then
				Result := "collision"
			else
				Result := "not defined"
			end
		end
		
end -- class TRAFFIC_LINE_SECTION_STATE_CONSTANTS
