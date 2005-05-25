indexing
		description: "[
						Simple ESDL TRAFFIC Example with a simple interactive TRAFFIC scene. (with two maps)
					]"
	author: "Rolf Bruderer, bruderol@computerscience.ch"
	date: "2005/03/11"
	revision: "1.0"

class
	MAP_WIDGET_APPLICATION

inherit 	
	ESDL_APPLICATION
		undefine
			default_create
		end
		
	ESDL_SHARED_STANDARD_FONTS
		
create	
	make_and_launch
	
feature -- Initialization
	
	make_and_launch is
			-- Create and execute the application.
		local
			first_scene: MAP_WIDGET_SCENE
		do
			-- Initialize the screen.
			initialize_screen
			set_application_name ("ESDL TRAFFIC example")
						
			-- Setup font directory.
			standard_fonts.set_font_dirname ("./font")
			
			-- Create first scene.
			create first_scene
						
			-- Set and launch the first scene.
			set_scene (first_scene)
			launch
			video_subsystem.disable
		end

end
