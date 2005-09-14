indexing
	description: ", used for assignment 2."
	date: "$Date$"
	revision: "$Revision$"

class
	START

inherit
	START_MENU_SCENE
		redefine
			start
		end
			
	GAME_CONSTANTS
	
create
	make_scene
	
feature -- Initialization

		start is
			-- Adjust the game settings and start the game.
		do
--			POSSIBLE ASSIGNMENT (sample solution):
--			set_map ("./map/zurich_little.xml")
--			set_game_mode (Hunt)
--			set_number_of_hunters (3)
			-- If `start_game' is left out, you will be stuck on the start menu scene, because no 
			-- game will be started, even if you hit enter on "start game".
			start_game
		end
		
end
