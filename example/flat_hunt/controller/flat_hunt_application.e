indexing
	description: "[
						Controller that steers the application's behavior and mediates 
						between visual input/output and changes of the city model
					]"
	author: "Ursina Caluori, ucaluori@student.ethz.ch"
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
		
create
	make_and_launch

feature -- Initialization
	make_and_launch is
			-- Create and execute the application.
		do
			-- Video subsystem settings
			video_subsystem.enable
--			video_subsystem.set_fullscreen (true)
--			video_subsystem.show_cursor
			video_subsystem.set_video_surface_width (Window_width)			
			video_subsystem.set_video_surface_height (Window_height)
		
			-- Audio subsystem settings
			audio_subsystem.enable
			audio_subsystem.mixer.open (Em_default_frequency, Em_audio_format_s16sys, Em_stereo, Em_default_chunk_size)

			-- Initialize the screen.
			initialize_screen
			set_application_name (My_application_name)
--			set_application_icon (Application_icon)
			
			-- Set and launch the first scene.
			set_scene (start_menu_scene)
			launch
			video_subsystem.disable
		end
		
end
