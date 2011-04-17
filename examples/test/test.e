note
	description : "Testing traffic library"

class
	TEST

create
	execute

feature {NONE} -- Initialization

	execute
			-- Run application.
		local
			city: CITY
			route: ROUTE
			finder: ROUTE_FINDER
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

			create finder.make (city)
			route := finder.shortest_route (city.stations ["Bahnhofquai/HB"], city.stations ["ETH/Universitaetsspital"])
			print (route)

			city.remove_station ("Central")
			city.remove_line (10)
		end

end
