indexing
	description: "Objects that ..."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	CITY_TAXI_APPLICATION

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

feature -- Initialization

	make is
			-- Initialize subsystems of em and start first scene.
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
			set_window_title ("City TAXI")
			set_application_id ("city_taxi")
			
			-- Set widget theme and options
			widget_options.disable_transparency_refresh
			load_eclipse_theme
			
			set_scene (create {CITY_TAXI_SCENE}.make)
			launch
			full_collect
		end

end
