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
		do
			-- Video subsystem settings.
			video_subsystem.enable
			video_subsystem.set_doublebuffered (True)			
			video_subsystem.set_video_surface_width (Window_width)			
			video_subsystem.set_video_surface_height (Window_height)
		
			-- Initialize the screen.
			initialize_screen
			set_window_icon ("icon.png")
			set_window_title ("Flat Hunt v2")
			set_application_id ("flat_hunt_v2")
			
			-- Set and launch the first scene.
			
			set_scene (create {START}.make_scene)	
			launch
			music_player.dispose
			video_subsystem.disable
		end

end
