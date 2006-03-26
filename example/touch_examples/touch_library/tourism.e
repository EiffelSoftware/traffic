indexing
	description: "[
					Contains all the predefines and classes to run 'explore'.
					NOTE: 'Paris', 'Line8', 'Louvre' are not of the type of any TRAFFIC class.
					]"
	date: "2005/08/25"
	revision: "1.0"

deferred class
	TOURISM
	
inherit
	
	TOUCH_PARIS_OBJECTS

feature -- Access

	run (a_map_widget: TOUCH_3D_MAP_WIDGET; a_console: TOUCH_CONSOLE) is
			-- Run the example code defined in `explore'.
		require
			a_map_widget_exists: a_map_widget /= Void
			a_console_exists: a_console /= Void
		do  		
			map_widget := a_map_widget
			console := a_console
			
			explore

		end
		
feature  -- Example main feature

	explore is
			-- Executed on startup.
		deferred
		end
		
	explore_on_button_click is
			-- Executed when the button is clicked.
		deferred
		end
		
feature -- Access

	map_widget: TOUCH_3D_MAP_WIDGET
			-- Map widget that also contains all 3d objects for displaying the map
			
	console: TOUCH_CONSOLE
			-- Console for output
			
feature -- Status report

	is_zurich_loaded: BOOLEAN
			-- Is the Zurich map loaded?

feature -- Access (Paris)

	Paris: TOUCH_MAP is		
			-- Object representing the city of Paris
		require else
			map_widget_exists: map_widget /= Void
		local
			loader: TRAFFIC_MAP_LOADER
		once
			create loader.make ("../map/paris.xml")
			if not loader.has_error then
				loader.load_map
				if not loader.has_error then
					map_widget.set_map (loader.map)
					create Result.make (map_widget)
					map_widget.enable_map_hidden
					is_paris_loaded := True
					is_zurich_loaded := False									
				end
			end
		end

	Zurich: TOUCH_MAP is		
			-- Object representing the city of Zurich
		require else
			map_widget_exists: map_widget /= Void
		local
			loader: TRAFFIC_MAP_LOADER
		once
			create loader.make ("../map/zurich_big.xml")
			if not loader.has_error then
				loader.load_map
				if not loader.has_error then
					map_widget.set_map (loader.map)
					create Result.make (map_widget)
					map_widget.enable_map_hidden
					is_paris_loaded := True
					is_zurich_loaded := False									
				end
			end
		end

end -- class TOURISM
