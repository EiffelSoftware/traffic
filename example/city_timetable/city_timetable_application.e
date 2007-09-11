
indexing
	description: "Root class for application CityTimeTable"
	date: "$Date: 2006-03-27 17:13:45 +0200 (Mon, 27 Mar 2006) $"
	revision: "$Revision: 578 $"

class CITY_TIMETABLE_APPLICATION

inherit

	EM_APPLICATION

	EM_SHARED_THEME
		export {NONE} all end

	EM_SHARED_WIDGET_OPTIONS
		export {NONE} all end

	TRAFFIC_CONSTANTS
		export {NONE} all end

create
	make

feature -- Initialization

	make is
			-- Initialize all subsystems of em and launch the first scene.
		local
			keyboard: EM_KEYBOARD
		do
			-- Initialise screen
			video_subsystem.set_video_surface_width (800)
			video_subsystem.set_video_surface_height (600)
			video_subsystem.set_video_bpp (32)
			video_subsystem.set_fullscreen (False)
			video_subsystem.set_opengl (True)
			video_subsystem.enable
			initialize_screen

			-- Enable unicode characters and repeating keyboard events
			create keyboard.make_snapshot
			keyboard.enable_unicode_characters
			keyboard.enable_repeating_key_down_events (200, 100)

			set_window_icon ("../image/traffic_icon.png")
			set_window_title ("City TimeTable")
			set_application_id ("city_timetable")

			-- Set widget theme and options
			widget_options.disable_transparency_refresh
			load_eclipse_theme

			set_scene (create {CITY_TIMETABLE_SCENE}.make)
			launch
			full_collect
		end

end
