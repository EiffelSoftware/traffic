indexing
	description: "Constants describing the game mode and state."
	date: "$Date$"
	revision: "$Revision$"

deferred class
	GAME_CONSTANTS


feature -- General constants
			
	Default_number_of_rounds: INTEGER is 24
			-- Maximum number of rounds		

feature -- Mode constants

	Hunt, Escape, Versus, Demo: INTEGER is unique
			-- Constants for the four meaningful game modes.

	game_mode: INTEGER
			-- Default actual game mode.
			-- Possible game modes: `Hunt', `Escape', `Versus' or `Demo'.

feature -- State constants

	state: INTEGER
			-- Current game state.
	
	is_game_over: BOOLEAN is
			-- `True' if agent stuck, caught or escaped.
		do
			Result := (state = Agent_stuck or state = Agent_caught or state = Agent_escapes)
		end
		
	Agent_stuck, Agent_caught, Agent_escapes, Prepare_state, Play_state, Move_state: INTEGER is unique
			-- Possible states of the game.
	
end
