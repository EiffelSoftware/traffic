indexing
	description	: "Root class for the Flat Hunt Map Editor (EiffelMedia Application)"
	author		: "Fabio Maninchedda and Daniel Saner"
	date		: "$Date: 2006/1/3 15:13:55 $"
	revision	: "1.0.0"

class
	ROOT_CLASS

inherit
	EM_APPLICATION
	
	EM_SHARED_THEME
		export {NONE} all end
		
	EM_SHARED_WIDGET_OPTIONS
		export {NONE} all end

create
	make

feature {NONE} 		-- Application initialization

	make is
			-- Root Procedure
		do
			-- Start the video subsystem
			video_subsystem.set_doublebuffered (True)								-- Activate video double buffer
			video_subsystem.set_video_surface_width (initial_window_width)			-- Set the window dimensions
			video_subsystem.set_video_surface_height (initial_window_height)
			video_subsystem.set_resizeable (False)									-- Deactivate resizing because EM's resize event is faulty
			video_subsystem.enable													-- Enable the created video system
			set_window_title ("Flat Hunt Map Editor")
			set_application_id ("flat_hunt_map_editor")								-- Not sure what this is for.
			set_window_icon ("meicon.png")											-- This icon never actually shows up. Gay.
			initialize_screen
			load_eclipse_theme														-- Load the prettier widget theme
			
			-- Create and launch the scene
			set_scene (create {MAP_EDITOR_SCENE}.make)
			launch
			video_subsystem.disable
		end
		
feature
	-- Constants and variables
	
	initial_window_width: INTEGER is 1024
			-- Main application window width
			
	initial_window_height: INTEGER is 768
			-- Main application window height

end -- class ROOT_CLASS
