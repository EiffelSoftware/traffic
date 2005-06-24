indexing
	description: "[
						Controller that steers the application's behavior and mediates 
						between visual input/output and changes of the city model
					]"
	author: "Ursina Caluori, ucaluori@student.ethz.ch"
	date: "$Date$"
	revision: "$Revision$"
	
class
	MAIN_CONTROLLER

inherit
	ESDL_APPLICATION
		undefine
			default_create
		end
		
	ESDL_SHARED_STANDARD_FONTS
	
	DISPLAY_CONSTANTS
		
create
	make_and_launch

feature -- Initialization
	make_and_launch is
			-- Create and execute the application.
		local
			startup_scene: GAME_SCENE
		do
			-- Video subsystem settings
--			video_subsystem.set_fullscreen (true)
--			video_subsystem.show_cursor
			video_subsystem.set_video_surface_width (Window_width)			
			video_subsystem.set_video_surface_height (Window_height)
			
			-- Initialize the screen.
			initialize_screen
			set_application_name (My_application_name)
--			set_application_icon (Application_icon)
						
			-- Setup font directory.
			standard_fonts.set_font_dirname ("./resources/font")
			
			-- Create first scene.
			create startup_scene
			
			-- Set and launch the first scene.
			set_scene (startup_scene)
			launch
			video_subsystem.disable
		end
		
end
