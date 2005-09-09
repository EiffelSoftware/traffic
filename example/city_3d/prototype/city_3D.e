indexing
	description: "City 3D example. Uses OpenGL to display a city."
	date: "$Date$"
	revision: "$Revision$"

class CITY_3D

inherit

	EM_APPLICATION

create
	
	make
	
feature {NONE} -- Initialization
	
	make is
			-- Create the main application.
		do
			video_subsystem.set_video_surface_width (width)
			video_subsystem.set_video_surface_height (height)
			video_subsystem.set_video_bpp (resolution)
			video_subsystem.set_opengl (true)
			initialize_screen
			set_application_name ("EiffelMedia City 3D")
			
			-- Create first scene.
			if
				video_subsystem.is_enabled
			then
				screen := video_subsystem.video_surface

				from
					scene := create {MAP}.make_scene
				until
					scene = Void
				loop
					scene.initialize_scene
					scene.run (screen)
					scene := scene.next_scene
					full_collect
						-- Free memory now instead in the middle of the game
				end
				video_subsystem.disable
			else
				print ("Video mode could not be enabled!%N")
			end
--			create first_scene.make_scene
--
--			-- Set and launch the first scene.
--			set_scene (first_scene)
--			launch
--			video_subsystem.disable
		end

feature {NONE} -- Implementation
		
	width: INTEGER is 800 --1024
		-- The width of the surface
		
	height: INTEGER is 600 --768
		-- The height of the surface
		
	resolution: INTEGER is 24
		-- The resolution of the surface

end
