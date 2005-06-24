indexing
	description: "Constants describing the game state"
	status:	"See notice at end of class"
	author: "Marcel Kessler, ETH Zurich"
	date: "$Date$"
	revision: "$Revision$"

deferred class
	GAME_STATE_CONSTANTS

feature

	state: INTEGER
	
	is_game_over: BOOLEAN is
			-- `True' if agent stuck, caught or escaped.
		do
			Result := (state = Agent_stuck or state = Agent_caught or state = Agent_escapes)
		end
		
	Agent_stuck, Agent_caught, Agent_escapes, Prepare_state, Play_state, Move_state: INTEGER is unique
	
end

--|--------------------------------------------------------
--| This file is Copyright (C) 2004 by ETH Zurich.
--|
--| For questions, comments, additions or suggestions on
--| how to improve this package, please write to:
--|
--|     Marcel Kessler <kesslema@student.ethz.ch>
--|     Michela Pedroni <michela.pedroni@inf.ethz.ch>
--| 	Rolf Bruderer <bruderer@computerscience.ch>
--|
--|--------------------------------------------------------
