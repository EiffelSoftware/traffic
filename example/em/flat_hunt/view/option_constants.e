indexing
	description: "Constants for the option panel"
	date: "$Date$"
	revision: "$Revision$"

class
	OPTION_CONSTANTS
	
feature -- Constants

	Option_title_number_of_flathunters: STRING is "nr of hunters: "
	
	Option_title_game_mode: STRING is "game mode: "

	Option_title_map_size: STRING is "map size: "

	Option_title_characters: STRING is "characters: "
	
feature -- Constants

	Options_list_number_of_flathunters: ARRAY [STRING] is
			-- List of all valid options for the number of flathunters
		do
			Result := << "one", "two", "three", "four", "five", "six", "seven", "eight" >>
		end

	Options_list_game_mode: ARRAY [STRING] is
			-- List of all valid options for the number of flathunters
		do
			Result := << "hunt", "escape", "versus", "demo" >>
		end

	Options_list_map_size: ARRAY [STRING] is
			-- List of all valid options for the number of flathunters
		do
			Result := << "little", "big" >>
		end

	Options_list_characters: ARRAY [STRING] is
			-- List of all valid options for the number of flathunters
		do
			Result := << "glass", "white" >>
		end
		
end
