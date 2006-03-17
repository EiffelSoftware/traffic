indexing
	description: "[
					Contains all the predefines and classes to run 'explore'.
					NOTE: 'Paris', 'Line8', 'Louvre' are not of the type of any TRAFFIC class.
					]"
	date: "2005/08/25"
	revision: "1.0"

deferred class
	TOURISM

feature -- Access

	run (a_map_widget: TOUCH_3D_MAP_WIDGET; a_console: TOUCH_CONSOLE) is
			-- Run the example code defined in `explore'.
		require
			a_map_widget_exists: a_map_widget /= Void
			a_console_exists: a_console /= Void
		do  		
			-- Create Paris
			map_widget := a_map_widget
			console := a_console
			
			explore

		end

feature  -- Example main feature

	explore is
		deferred
		end
		
feature -- Access

	map_widget: TOUCH_3D_MAP_WIDGET
			-- Map widget that also contains all 3d objects for displaying the map
			
	console: TOUCH_CONSOLE
			-- Console for output
			
feature -- Status report

	is_paris_loaded: BOOLEAN
			-- Is the Paris map loaded?
			
	is_zurich_loaded: BOOLEAN
			-- Is the Zurich map loaded?

feature -- Paris

	Line8: TOUCH_SIMPLE_LINE is 
			-- Line 8 of the Paris map
		require
			Paris_exists: Paris /= Void
		once
			Result := Paris.simple_line("tram 8")  
		end
	
	Paris: TOUCH_MAP is		
			-- Object representing the city of Paris
		require
			map_widget_exists: map_widget /= Void
		once
				map_widget.load_map ("../map/paris.xml")
				create Result.make (map_widget)
				map_widget.enable_map_hidden
		end
					
end -- class TOURISM
