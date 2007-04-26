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

	TOUCH_SHARED_MAP_WIDGET

feature -- Access

	run (a_console: TOUCH_CONSOLE) is
			-- Run the example code defined in `explore'.
		require
			a_console_exists: a_console /= Void
		do
			console := a_console
			explore
		end

feature  -- Example main feature

	explore is
			-- Executed on startup.
		do
		end

	explore_on_click is
			-- Executed when the button is clicked.
		deferred
		end

feature -- Access

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
			s: STRING
			fs: KL_FILE_SYSTEM
		once
			fs := (create {KL_SHARED_FILE_SYSTEM}).file_system
			s := fs.pathname ("..", "map")
			s := fs.pathname (s, "paris.xml")
			create loader.make (s)
			if not loader.has_error then
				loader.load_map
				if not loader.has_error then
					map_widget.set_map (loader.map)
					create Result.make
					map_widget.enable_map_hidden
					is_paris_loaded := True
					is_zurich_loaded := False
				end
			end
		end

	Zurich: TRAFFIC_MAP is
			-- Object representing the city of Zurich
		require else
			map_widget_exists: map_widget /= Void
		local
			loader: TRAFFIC_MAP_LOADER
			s: STRING
			fs: KL_FILE_SYSTEM
		once
			fs := (create {KL_SHARED_FILE_SYSTEM}).file_system
			s := fs.pathname ("..", "map")
			s := fs.pathname (s, "zurich_big.xml")
			create loader.make (s)
			if not loader.has_error then
				loader.load_map
				if not loader.has_error then
					map_widget.set_map (loader.map)
--					create Result.make
					Result := loader.map
					map_widget.enable_map_hidden
					is_paris_loaded := False
					is_zurich_loaded := True
				end
			end
		end

end
