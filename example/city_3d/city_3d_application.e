indexing
	description	: "System's root class"
	note		: "Initial version automatically generated"

class
	CITY_3D_APPLICATION

inherit
	EM_APPLICATION
	
	EM_SHARED_THEME
		export {NONE} all end
	
	EM_SHARED_WIDGET_OPTIONS
		export {NONE} all end
create
	make

feature -- Initialization

	make is
			-- Creation procedure.
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

--			set_application_icon ("images/icon.png")
			set_application_name ("Widget Browser")
			
			-- Set widget theme and options
			widget_options.disable_transparency_refresh
			load_eclipse_theme
			
--			set_scene (create {TEST_COMPONENT_SCENE}.make)
--			set_scene (create {WIDGET_BROWSER_SCENE}.make)
			
			launch
		end
		
feature{NONE} -- Implementation
		
	Window_width: INTEGER is 1024 --740
			-- Window width
			
	Window_height: INTEGER is 768 --700
			-- Window height
			
	Screen_resolution: INTEGER is 32
			-- Screen resolution
			
	Fullscreen: BOOLEAN is false
			-- Fullscreen?

end -- class CITY_3D_APPLICATION
