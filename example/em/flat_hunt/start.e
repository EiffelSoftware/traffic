indexing
	description: ", used for assignment 2."
	date: "$Date$"
	revision: "$Revision$"

class
	START

inherit
	START_MENU_SCENE
		redefine
			fill_options
		end
			
	GAME_CONSTANTS
	
create
	make_scene
	
feature -- Initialization

	fill_options is
			-- Fill the option panel
		do
			-- Show the option panel
			option_panel.add_option_menu (options_list_game_mode, option_title_game_mode)
			option_panel.add_option_menu (options_list_number_of_flathunters, option_title_number_of_flathunters)
			option_panel.add_option_menu (options_list_map_size, option_title_map_size)
			option_panel.add_option_menu (options_list_characters, option_title_characters)
		end
		
end
