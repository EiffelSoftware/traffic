indexing
	description: "Objects that ..."
	author: "Ursina Caluori, ucaluori@student.ethz.ch"
	date: "$Date$"
	revision: "$Revision$"

class
	STARTUP_SCENE
inherit
	FLAT_HUNT_SCENE
	
	EM_TIME_SINGLETON
		undefine
			default_create
		end
	
	EM_SHARED_BITMAP_FACTORY
		undefine
			default_create
		end	
		
	THEME
		undefine
			default_create
		end
	
feature {NONE} -- Initialization
	initialize_scene is
			-- Build 'main_container' containing the startup scene
		local 
			flat_hunt_intro: EM_DRAWABLE
		do
			-- general settings
			background_color.make_black
			set_frame_counter_visibility (true)
			
			-- set flat hunt logo as picture to be displayed on the welcome scene
			bitmap_factory.create_bitmap_from_image (Image_directory + "flat_hunt_intro.png")
			flat_hunt_intro := bitmap_factory.last_bitmap
			flat_hunt_intro.set_x_y ((Window_width - flat_hunt_intro.width) // 2, (Window_height - flat_hunt_intro.height) // 2)

			main_container.extend(flat_hunt_intro)

			draw_alpha_blended_circle (300, 300, 150)
			draw_alpha_blended_circle (400, 300, 50)
			draw_alpha_blended_circle (410, 305, 70)
			
			-- after a given amount of time switch to next scene (start_menu)
--			time.add_timed_callback (5000, agent goto_next_scene)
		end
		
--	goto_next_scene(delay: INTEGER) : INTEGER is
			-- Go to 'next_scene'
--			do
--				next_scene := create {CREDITS}	
--				Result := -1
--			end


feature -- Testing (will be removed in final version)
	draw_alpha_blended_circle(a_x, a_y, an_alpha: INTEGER) is
			-- for testing purposes
		local
			some_figure: EM_CIRCLE
			center: EM_VECTOR_2D			
		do
			create center.make(a_x, a_y)
			create some_figure.make (center, 20.0)
			some_figure.fill_color.make_with_rgb (100, 0, 200)
			some_figure.fill_color.set_alpha (an_alpha)
			main_container.extend(some_figure)
		end
		
end
