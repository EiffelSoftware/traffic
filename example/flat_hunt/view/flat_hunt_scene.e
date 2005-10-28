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
	EM_DRAWABLE_SCENE
		redefine
			handle_key_down_event
		end
		
	EM_KEY_CONSTANTS
		undefine
			default_create
		end

-- Music playing causes problems!		
--	SHARED_MUSIC_PLAYER
--		undefine
--			default_create
--		end
		
	THEME
		undefine
			default_create
		end
		
feature {NONE} -- Event Handling

	handle_key_down_event (a_keyboard_event: EM_KEYBOARD_EVENT) is
			-- Handle keyboard events.
		do
-- Music playing causes problems!		
--			-- Music player control			
--			if a_keyboard_event.key = Sdlk_pageup then
--				music_player.forth
--			end
--			if a_keyboard_event.key = Sdlk_pagedown then
--				music_player.back
--			end
--			if a_keyboard_event.key = Sdlk_s then
--				music_player.set_shuffle (not music_player.shuffle)
--			end			
--			if a_keyboard_event.key = Sdlk_v then
--				if a_keyboard_event.is_shift_pressed then
--					music_player.increase_volume
--				else
--					music_player.decrease_volume
--				end
--			end
		end
		
end
