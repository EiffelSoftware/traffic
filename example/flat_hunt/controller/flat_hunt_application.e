indexing
	description: "Application settings and launch"
	date: "$Date$"
	revision: "$Revision$"
	
class
	FLAT_HUNT_APPLICATION

inherit
	
	EM_APPLICATION
	
	EM_AUDIO_CONSTANTS
	
	SHARED_SCENES
		undefine
			default_create
		end
		
	EM_SHARED_STANDARD_FONTS
	
	THEME
		undefine
			default_create
		end
	
	SHARED_MUSIC_PLAYER
		
create
	make_and_launch

feature -- Initialization
	make_and_launch is
			-- Create and execute the application.
		do
			-- Video subsystem settings.
			video_subsystem.enable
--			video_subsystem.set_fullscreen (true)
--			video_subsystem.show_cursor
			video_subsystem.set_doublebuffered (true)			
			video_subsystem.set_video_surface_width (Window_width)			
			video_subsystem.set_video_surface_height (Window_height)
		
			-- Audio subsystem settings.
			audio_subsystem.enable
			audio_subsystem.mixer.open (Em_default_frequency, Em_audio_format_s16sys, Em_stereo, Em_default_chunk_size)

			-- Initialize the screen.
			initialize_screen
			set_application_name (My_application_name)
--			set_application_icon (Application_icon)
			
			-- Begin playing the game music.
			music_player.play_game_music
			
			-- Set and launch the first scene.
			set_scene (start_menu_scene)			
			launch
			video_subsystem.disable
		end
		
end
