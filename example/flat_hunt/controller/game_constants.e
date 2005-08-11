indexing
	description: "Constants describing the game mode"
	status:	"See notice at end of class"
	date: "$Date$"
	revision: "$Revision$"

deferred class
	GAME_CONSTANTS


feature -- General constants
			
	default_number_of_rounds: INTEGER is 24
			-- Maximum number of rounds
	
--	nr_of_hunters: INTEGER
--			-- Default number of flat hunters in game
--			-- Possible number of hunters: 1 <= nr_of_hunters <= 8
	
--	set_nr_of_hunters (n: INTEGER) is
--			-- Set `nr_of_hunter' to n
--		require
--			valid_n: n >= 1 and n <= 8
--		do
--			nr_of_hunters.set_item (n)
--		ensure
--			nr_of_hunters_set: nr_of_hunters = n
--		end

--	map_size: INTEGER
--			-- Size of the map to load, possible values: `Little', `Big'
--	
--	Little, Big: INTEGER is unique
--			-- Constants for map size		

feature -- Mode constants

	Hunt, Escape, Versus, Demo: INTEGER is unique
			-- Constants for the four meaningful game modes.

	game_mode: INTEGER
			-- Default actual game mode.
			-- Possible game modes: `Hunt', `Escape', `Versus' or `Demo'.
			
--	set_game_mode (a_mode: INTEGER) is
--			-- Set `game_mode' to `a_mode'
--		require
--			valid_game_mode: a_mode >= Hunt and a_mode <= Demo
--		do
--			game_mode.set_item (a_mode)
--		ensure
--			game_mode_set: game_mode = a_mode
--		end

feature -- State constants

	state: INTEGER
	
	is_game_over: BOOLEAN is
			-- `True' if agent stuck, caught or escaped.
		do
			Result := (state = Agent_stuck or state = Agent_caught or state = Agent_escapes)
		end
		
	Agent_stuck, Agent_caught, Agent_escapes, Prepare_state, Play_state, Move_state: INTEGER is unique
	
end
