indexing
	description: "Default application class. Use`make' as creation procedure for descendants."
	date: "$Date$"
	revision: "$Revision$"

deferred class TOUCH_3D_APPLICATION

inherit

	EM_APPLICATION
	
	EM_SHARED_THEME
		export {NONE} all end
	
	EM_SHARED_WIDGET_OPTIONS
		export {NONE} all end
		
	TOUCH_3D_CONSTANTS
		export {NONE} all end
	
feature -- Initialization

	make is
			-- Creation procedure
		local
			keyboard: EM_KEYBOARD
		do
			-- Initialise screen
			video_subsystem.set_video_surface_width (window_width)
			video_subsystem.set_video_surface_height (window_height)
			video_subsystem.set_video_bpp (Screen_resolution)
			video_subsystem.set_fullscreen (Fullscreen)
			video_subsystem.set_opengl (True)
			video_subsystem.enable
			initialize_screen
			
			-- Enable unicode characters and repeating keyboard events
			create keyboard.make_snapshot
			keyboard.enable_unicode_characters
			keyboard.enable_repeating_key_down_events (200, 100)
			
			set_window_icon ("../image/traffic_icon.png")
			set_application_specifics			
			
			-- Set widget theme and options
			widget_options.disable_transparency_refresh
			load_eclipse_theme
			
			set_first_scene
			
			launch
			full_collect	
			video_subsystem.disable		
		end
		
	set_first_scene is
			-- Effect this feature to specify what scene to execute first.
		deferred
		ensure
			scene_exists: scene /= Void
		end
		
	set_application_specifics is
			-- Effect this feature to specify the window title and application id.
		deferred
		ensure
			window_title_exists: window_title /= Void
			application_id_exists: application_id /= Void
		end

end
