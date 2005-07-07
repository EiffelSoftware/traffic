indexing
		description: "[
						The Touch-Application: A Framework for examples and exercises
					]"
	author: "Roger Kueng"
	date: "2005/05/31"
	revision: "alpha"

class
	TOUCH_APPLICATION

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
			first_scene: ESDL_SCENE
		do
			-- Initialize the screen.
			initialize_screen
			set_application_name ("ESDL TOUCH")
						
			-- Setup font directory.
			standard_fonts.set_font_dirname ("./font")
			
			-- Create first scene.
			first_scene := create {TOUCH_EXAMPLE_SELECTION_SCENE}
						
			-- Set and launch the first scene.
			set_scene (first_scene)
			launch
			video_subsystem.disable
		end

feature -- Example Access

end
