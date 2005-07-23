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
		
	SHARED_MUSIC_PLAYER
		undefine
			default_create
		end
		
feature -- Event Handling

	handle_key_down_event (a_keyboard_event: EM_KEYBOARD_EVENT) is
		do
			-- Music player control			
			if a_keyboard_event.key = sdlk_pageup then
				music_player.play_next_song
			end
			if a_keyboard_event.key = sdlk_pagedown then
				music_player.play_previous_song
			end
			if a_keyboard_event.key = sdlk_s then
				music_player.toggle_shuffle
			end			
			if a_keyboard_event.key = sdlk_v then
				if a_keyboard_event.is_shift_pressed then
					music_player.increase_volume
				else
					music_player.decrease_volume
				end
			end
--			if a_keyboard_event.key = sdlk_m then
--				music_player.toggle_mute
--			end
		end

	handle_outside_event is
		do
			if not music_player.is_music_playing then
				music_player.play_next_song
			end
		end

end
