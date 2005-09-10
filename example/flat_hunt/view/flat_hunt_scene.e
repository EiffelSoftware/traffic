indexing
	description: "[
					Essentially the same as an EM_SCENE but with some customization 
					used throughout the application.
				]"
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
			-- Handle keyboard events.
		do
			-- Music player control			
			if a_keyboard_event.key = Sdlk_pageup then
				music_player.play_next_song
			end
			if a_keyboard_event.key = Sdlk_pagedown then
				music_player.play_previous_song
			end
			if a_keyboard_event.key = Sdlk_s then
				music_player.toggle_shuffle
			end			
			if a_keyboard_event.key = Sdlk_v then
				if a_keyboard_event.is_shift_pressed then
					music_player.increase_volume
				else
					music_player.decrease_volume
				end
			end
		end

	handle_outside_event is
			-- Handle outside events.
		do
			if not music_player.is_music_playing then
				music_player.play_next_song
			end
			full_collect
		end
		
--feature -- Settings
--
--	set_last_scene (a_scene: like last_scene) is
--			-- Set `last_scene' to `a_scene'
--		do
--			last_scene := a_scene
--		ensure
--			scene_set: last_scene = a_scene
--		end
--		
--
--feature -- Attributes
--
--	last_scene: FLAT_HUNT_SCENE
		-- Scene that was running before Current

end
