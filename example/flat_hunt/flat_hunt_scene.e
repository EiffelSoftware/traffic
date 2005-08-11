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
			handle_key_down_event, handle_outside_event, run, default_create
		end
		
	EM_KEY_CONSTANTS
		undefine
			default_create
		end
		
	SHARED_MUSIC_PLAYER
		undefine
			default_create
		end

feature -- Initialization

	default_create is
		do
			Precursor {EM_SCENE}
			events_initialized := False
		end
		

	run (a_screen: EM_SURFACE) is
		local
			last_running_scene: EM_SCENE
		do
			if display_frame_counter then
				create frame_counter.make	
			end
			screen := a_screen			
			
--			if not events_initialized then
				event_loop.key_down_event.subscribe (agent handle_key_down_event (?))
				event_loop.key_up_event.subscribe (agent handle_key_up_event (?))
				event_loop.mouse_button_down_event.subscribe (agent handle_mouse_button_down_event (?))			
				event_loop.mouse_button_up_event.subscribe (agent handle_mouse_button_up_event (?))			
				event_loop.mouse_motion_event.subscribe (agent handle_mouse_motion_event (?))			
				event_loop.quit_event.subscribe (agent handle_quit_event (?))
				event_loop.quit_event.subscribe (agent quit)
				event_loop.outside_event.subscribe (agent handle_outside_event)
				event_loop.outside_event.subscribe (agent animate)
				event_loop.outside_event.subscribe (agent redraw)
				if main_container /= Void then 
					event_loop.mouse_button_down_event.subscribe (agent main_container.publish_mouse_event)
					event_loop.mouse_button_up_event.subscribe (agent main_container.publish_mouse_event)
					event_loop.mouse_motion_event.subscribe (agent main_container.publish_mouse_event)
				end
				events_initialized := True
--			end
			is_running := True
			last_running_scene := running_scene
			set_running_scene (Current)
			event_loop.dispatch
			set_running_scene (last_running_scene)  -- TODO: necessary, or better not?
			is_running := False
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

			-- other
			if a_keyboard_event.key = sdlk_q then
				next_scene := Void
				event_loop.stop
			end
		end

	handle_outside_event is
		do
			if not music_player.is_music_playing then
				music_player.play_next_song
			end
		end
		
feature -- Settings

	set_last_scene (a_scene: like last_scene) is
			-- Set `last_scene' to `a_scene'
		do
			last_scene := a_scene
		end
		

feature -- Attributes

	last_scene: FLAT_HUNT_SCENE
		-- Scene that was running before Current

	events_initialized: BOOLEAN
		-- True if events already initialized

end
