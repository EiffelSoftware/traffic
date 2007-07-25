indexing
	description: "State of line section."
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_CONNECTION_STATE

inherit

	ANY
		redefine
			out
		end

create
	make

feature {NONE} -- Inititalization

	make is
			-- Set state to normal.
		do
			value := State_normal
		ensure
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

feature -- Constants

	State_normal, State_collision: INTEGER is unique
			-- State constants

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

	to_string (a_state_value: INTEGER): STRING is
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

feature -- Basic operation

	out: STRING is
			-- Textual representation
		do
			Result := "state: " + to_string (value)
		end

invariant
	value_valid: is_valid_state_value (value) -- Valid state value.

end