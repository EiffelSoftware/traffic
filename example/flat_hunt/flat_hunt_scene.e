indexing
	description: "Essentially the same as an EM_SCENE but with some customization used throughout the application"
	author: "Ursina Caluori, ucaluori@student.ethz.ch"
	date: "$Date$"
	revision: "$Revision$"

deferred class
	FLAT_HUNT_SCENE

inherit
	EM_SCENE
		redefine
			handle_key_down_event, handle_outside_event
		end
		
	EM_KEY_CONSTANTS
		undefine
			default_create
		end
		
--	SHARED_MUSIC_PLAYER
--		undefine
--			default_create
--		end
		
feature -- Event Handling

	handle_key_down_event (a_keyboard_event: EM_KEYBOARD_EVENT) is
			-- Handle key down event.
		do
			-- Music player control			
--			if a_keyboard_event.key = sdlk_pageup then
--				music_player.play_next_song
--			end
--			if a_keyboard_event.key = sdlk_pagedown then
--				music_player.play_previous_song
--			end
--			if a_keyboard_event.key = sdlk_s then
--				music_player.toggle_shuffle
--			end			
		end

	handle_outside_event is
			-- Handle the outside event.
		do
--			if not music_player.is_music_playing then
--				music_player.play_next_song
--			end
		end

end
