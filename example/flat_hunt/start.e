indexing
	description: "Start of the application, used for assignment 2."
	date: "$Date$"
	revision: "$Revision$"

class
	START

inherit
	FLAT_HUNT_APPLICATION
		redefine
			adjust_game_settings
		end
	
	GAME_CONSTANTS
	
create
	make_and_launch
	
feature -- Initialization

		adjust_game_settings is
			-- Adjust the game settings and start the game.
		local
			a_map_file: TRAFFIC_MAP_FILE
		do
--			POSSIBLE ASSIGNMENT (sample solution):
--			game.set_game_mode (Hunt)
--			game.set_number_of_hunters (5)
--			Warning: the following lines preload the given traffic map, which leads to some delay
--			in displaying the start menu. Just so you know and won't be shocked :)
--			a_map_file := create {TRAFFIC_MAP_FILE}.make_from_file ("./map/zurich_little.xml")
--			game.set_traffic_map (a_map_file.traffic_map)
		end
		
end
