indexing
	description: "Root class for application MapEditor"
	date: "$Date: 2006-03-27 17:13:45 +0200 (Mon, 27 Mar 2006) $"
	revision: "$Revision: 578 $"

class ME_APPLICATION

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
			-- Initialize all subsystems of em and launch the first scene.
		local
			keyboard: EM_KEYBOARD
		do
			-- Initialise screen
			video_subsystem.set_video_surface_width (800)
			video_subsystem.set_video_surface_height (traffic_window_height)
			video_subsystem.set_video_bpp (traffic_screen_resolution)
			video_subsystem.set_fullscreen (Fullscreen)
			video_subsystem.set_opengl (True)
			video_subsystem.enable
			initialize_screen

			-- Enable unicode characters and repeating keyboard events
			create keyboard.make_snapshot
			keyboard.enable_unicode_characters
			keyboard.enable_repeating_key_down_events (200, 100)

			set_window_icon ("../image/traffic_icon.png")
			set_window_title ("TrafficMapEditor")
			set_application_id ("map_editor")

			-- Set widget theme and options
			widget_options.disable_transparency_refresh
			load_eclipse_theme
			theme_colors.set_selected_background (create {EM_COLOR}.make_with_rgb (38, 52, 112))

			set_scene (create {ME_SCENE}.make)
			launch
			full_collect
		end

end
