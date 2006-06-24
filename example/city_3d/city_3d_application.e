indexing
	description: "Root class for application City3D"
	date: "$Date$"
	revision: "$Revision$"

class CITY_3D_APPLICATION

inherit
	
	EM_APPLICATION
	
	EM_SHARED_THEME
		export {NONE} all end
	
	EM_SHARED_WIDGET_OPTIONS
		export {NONE} all end
		
	TRAFFIC_3D_CONSTANTS
		export {NONE} all end
	
create
	make

feature -- Initializationasasas

	make is
			-- Initialize all subsystems of em and launch the first scene.
		local
			keyboard: EM_KEYBOARD
		do
			-- Initialise screen
			video_subsystem.set_video_surface_width (1000)
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
			set_window_title ("City 3D")
			set_application_id ("city_3d")
			
			-- Set widget theme and options
			widget_options.disable_transparency_refresh
			load_eclipse_theme
			
			set_scene (create {CITY_3D_SCENE}.make)
			launch
			full_collect
		end

end
