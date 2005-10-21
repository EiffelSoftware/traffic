indexing
	description: ", used for assignment 2."
	date: "$Date$"
	revision: "$Revision$"

class
	START

inherit
	START_MENU_SCENE
		redefine
			show_options_and_play_music
		end
			
	GAME_CONSTANTS
	
create
	make_scene
	
feature -- Initialization

	show_options_and_play_music is
			-- Show the option panel and play music
		do
--			-- Show the option panel
--			option_panel.show
--
--			-- Begin playing the game music.
--			music_player.play_game_music
		end
		
end
