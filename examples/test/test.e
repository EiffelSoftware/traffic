note
	description : "Testing traffic library"

class
	TEST

create
	execute

feature {NONE} -- Initialization

	execute
			-- Run application.
		do
--			create_explicitly
			create_from_file
			if city /= Void then
				find_shortest_route
			end
		end

feature
	city: CITY
			-- Example city.	

feature -- Tests
	create_explicitly
			-- Test that creates a city explicitly.
		do
			create city.make ("Zurich")

			city.add_station ("Central", [100.0, 0.0])
			city.add_station ("Bahnhofplatz/HB", [-200.0, 0.0])
			city.add_station ("Bahnhofstrasse/HB", [-100.0, -50.0])
			city.add_station ("Bahnhofquai/HB", [-100.0, 100.0])
			city.add_station ("Haldenegg", [300.0, 200.0])
			city.add_station ("ETH/Universitaetsspital", [500.0, 50.0])
			city.add_station ("Sonneggstrasse", [300.0, 400.0])
			city.add_station ("Rudolf-Brun-Bruecke", [100.0, -100.0])

			city.add_line (4, create {TRAM_TRANSPORT})
			city.connect_station (4, "Bahnhofquai/HB")
			city.connect_station (4, "Central")
			city.connect_station (4, "Rudolf-Brun-Bruecke")

			city.add_line (6, create {TRAM_TRANSPORT})
			city.connect_station (6, "Bahnhofstrasse/HB")
			city.connect_station (6, "Central")
			city.connect_station (6, "Haldenegg")
			city.connect_station (6, "ETH/Universitaetsspital")

			city.add_line (7, create {TRAM_TRANSPORT})
			city.connect_station (7, "Bahnhofstrasse/HB")
			city.connect_station (7, "Central")
			city.connect_station (7, "Haldenegg")
			city.connect_station (7, "Sonneggstrasse")

			city.add_line (10, create {TRAM_TRANSPORT})
			city.connect_station (10, "Bahnhofplatz/HB")
			city.connect_station (10, "Central")
			city.connect_station (10, "Haldenegg")
			city.connect_station (10, "ETH/Universitaetsspital")

			city.add_line (15, create {TRAM_TRANSPORT})
			city.connect_station (15, "Sonneggstrasse")
			city.connect_station (15, "Haldenegg")
			city.connect_station (15, "Central")
			city.connect_station (15, "Rudolf-Brun-Bruecke")
		end

	create_from_file
			-- Test that reads a city from an xml file.
		local
			reader: XML_READER
		do
			create reader.read ("..\map\zurich.xml")
			if reader.has_error then
				print (reader.error_message)
			else
				city := reader.city
			end
		end

	find_shortest_route
			-- Test that finds a shortest route in `city'.
		local
			route: ROUTE
			finder: ROUTE_FINDER
		do
			create finder.make (city)
			route := finder.shortest_route (city.stations ["Paradeplatz"], city.stations ["ETH/Universitaetsspital"])
			print (route)
		end

end
