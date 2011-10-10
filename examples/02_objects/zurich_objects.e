note
	description: "Helps exploring Zurich."

class
	ZURICH_OBJECTS

inherit
	KL_SHARED_FILE_SYSTEM
		export {NONE}
			all
		redefine
			default_create
		end

feature {NONE} -- Initialization
	default_create
			-- Create Zurich and its map.
		do
			create console.make
			console.output ("Welcome to Traffic!")
			load_city
			if Zurich /= Void then
				create Zurich_map.make (Zurich)
				Zurich_map.set_time_speedup (3)
			end
		end

feature -- Access

	Zurich: CITY
			-- Model of Zurich.

	Zurich_map: MAP
			-- Visualization of Zurich.

	console: TRAFFIC_CONSOLE
			-- Console for text output.

feature -- Predefined city objects

	Bahnhofplatz_HB: STATION
			-- Station "Bahnhofplatz/HB".
		do
			Result := Zurich.station ("Bahnhofplatz/HB")
		end

	Central: STATION
			-- Station "Central".
		do
			Result := Zurich.station ("Central")
		end

	ETH_Universitaetsspital: STATION
			-- Station "ETH/Universitaetsspital".
		do
			Result := Zurich.station ("ETH/Universitaetsspital")
		end

	Haldenbach: STATION
			-- Station "Haldenbach".
		do
			Result := Zurich.station ("Haldenbach")
		end

	Haldenegg: STATION
			-- Station "Haldenegg".
		do
			Result := Zurich.station ("Haldenegg")
		end

	Opernhaus: STATION
			-- Station "Opernhaus".
		do
			Result := Zurich.station ("Opernhaus")
		end

	Polyterrasse: STATION
			-- Station "Polyterrasse".
		do
			Result := Zurich.station ("Polyterrasse")
		end

	Polybahn_line_number: INTEGER = 24
			-- Line number of Polybahn.

	Polybahn: LINE
			-- Line 24.
		do
			Result := Zurich.line (Polybahn_line_number)
		end

	Line4: LINE
			-- Line 4.
		do
			Result := Zurich.line (4)
		end

	Line10: LINE
			-- Line 10.
		do
			Result := Zurich.line (10)
		end

	Central_view: STATION_VIEW
			-- View of station "Central".
		do
			Result := Zurich_map.station_views ["Central"]
		end

	Polyterrasse_view: STATION_VIEW
			-- View of station "Polyterrasse".
		do
			Result := Zurich_map.station_views ["Polyterrasse"]
		end

	Polybahn_view: LINE_VIEW
			-- View of line 24.
		do
			Result := Zurich_map.line_views [Polybahn_line_number]
		end

feature {NONE} -- Parameters

	file_name: KL_PATHNAME
			-- Path to map.
		do
			create Result.make
			Result.set_relative (True)
			Result.append_parent
			Result.append_name ("map")
			Result.append_name ("zurich.xml")
		end

feature {NONE} -- Implementation

	wait (n: INTEGER)
			-- Wait `n' seconds.
		local
			stopwatch: DT_STOPWATCH
			application: EV_APPLICATION
		do
			Zurich_map.refresh
			create stopwatch.make
			application := (create {EV_ENVIRONMENT}).application
			from
				stopwatch.start
			until
				stopwatch.elapsed_time.second >= n or application.is_destroyed
			loop
				application.process_events
			end
		end

	load_city
			-- Load `Zurich' from file `file_name'.
		local
			reader: XML_READER
		do
			create reader.read (file_system.pathname_to_string (file_name))
			if reader.has_error then
				console.output (reader.error_message)
			else
				Zurich := reader.city
			end
		end

end
