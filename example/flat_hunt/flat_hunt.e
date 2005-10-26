indexing
	description: "Application settings and launch."
	date: "$Date$"
	revision: "$Revision$"
	
class
	FLAT_HUNT

inherit
	EM_APPLICATION
	
	EM_AUDIO_CONSTANTS
	
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
		local
			start_menu_scene: START
		do
			-- Video subsystem settings.
			video_subsystem.enable
			video_subsystem.set_doublebuffered (True)			
			video_subsystem.set_video_surface_width (Window_width)			
			video_subsystem.set_video_surface_height (Window_height)
		
			-- Audio subsystem settings.
--			audio_subsystem.enable
--			audio_subsystem.mixer.open (Em_default_frequency, Em_audio_format_s16sys, Em_stereo, Em_default_chunk_size)

			-- Initialize the screen.
			initialize_screen
			set_window_icon ("icon.png")
			set_window_title ("Flat Hunt v2")
			set_application_id ("flat_hunt_v2")
			
			-- Set and launch the first scene.
			create start_menu_scene.make_scene
			set_scene (start_menu_scene)	
			launch
			music_player.dispose
			video_subsystem.disable
		end

end
