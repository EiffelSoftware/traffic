indexing
	description: "[
					The Touch-Application: A Framework for examples and exercises
				]"
	date: "2005/08/31"
	revision: "1.0"

class
	TOUCH_APPLICATION

inherit 	
	EM_APPLICATION
		undefine
			default_create
		end
		
	EM_SHARED_STANDARD_FONTS
		
create	
	make_and_launch
	
feature -- Initialization
	make_and_launch is
			-- Create and execute the application.
		local
			first_scene: EM_SCENE
		do
			-- Initialize the screen.
			initialize_screen
			set_application_name ("Eiffelmedia Touch")
						
			-- Setup font directory. (does not work anymore)
			--standard_ttf_fonts.set_font_dirname ("font")
			
			-- Create first scene.
			first_scene := create {TOUCH_EXAMPLE_SELECTION_SCENE}.make_scene
						
			-- Set and launch the first scene.
			set_scene (first_scene)
			launch
			video_subsystem.disable
		end
end
