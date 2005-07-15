indexing

	description: "Music player"
	date: "$Date$"
	revision: "$Revision$"

-- If I use this class, there is a C compilation error.
-- Common bug, or just my compiler (bcb55) ?

class

	MUSIC_PLAYER

inherit

	ESDL_SOUND_PLAYER
	
--	DISPLAY_CONSTANTS
--		undefine
--			default_create
--		end

create
	make
	
feature -- Basic operations

	load_game_music is
			-- Load the default background music.
		do
--			open_file (background_music)			
		end
		
end
