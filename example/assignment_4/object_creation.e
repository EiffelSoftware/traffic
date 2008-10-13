indexing
	description: "Creation class (Assignment 4)"
	date: "$Date$"
	revision: "$Revision$"

class
	OBJECT_CREATION

inherit

	TOURISM

feature -- Explore Paris

	explore is
			-- Create new objects for Paris.
		do
			Paris.display

			create passenger.make_with_route (Route3, 1.5)
			passenger.go
			passenger.set_reiterate (True)
			Paris.put_passenger (passenger)

			create tram.make_with_line (Line1)
			tram.start
			Paris.put_tram (tram)

			create point_randomizer.make (Paris.center, Paris.radius)
			point_randomizer.generate_point_array (5)

			create free_moving.make_with_points (point_randomizer.last_array, 10.0)
			free_moving.start
			Paris.put_free_moving (free_moving)

			point_randomizer.generate_point_array (10)

			create taxi.make_random (point_randomizer.last_array)
			taxi.start
			Paris.put_taxi (taxi)

			create coordinate.make (station_gare_de_lyon.location.x, station_gare_de_lyon.location.y)
			create landmark.make (coordinate, "Gare de lyon", "train_station.png")
			Paris.put_landmark (landmark)

			create line_type.make
			create tourist_line.make_with_terminal ("Tourist line", line_type, station_gare_de_lyon)
			create color.make_with_rgb (255, 160, 0)
			tourist_line.set_color (color)
			tourist_line.extend (station_st_michel_notre_dame)
			tourist_line.extend (station_champs_de_mars_tour_eiffel_bir_hakeim)
			tourist_line.extend (station_charles_de_gaulle_etoile)
			tourist_line.extend (station_palais_royal_musee_du_louvre)
			Paris.put_line (tourist_line)

			create bus.make_with_line (tourist_line)
			bus.start
			bus.set_reiterate (True)
			Paris.put_bus (bus)

		end

	passenger: TRAFFIC_PASSENGER
		-- Passenger moving along Route3

	tram: TRAFFIC_TRAM
		-- Tram

	landmark: TRAFFIC_LANDMARK
		-- Landmark

 	tourist_line : TRAFFIC_LINE
		-- Tourist bus line

	line_type : TRAFFIC_TYPE_BUS
		-- Bus type

	bus: TRAFFIC_BUS
		-- Bus for tourist_line

	coordinate: TRAFFIC_POINT
		-- Coordinate for landmarks

	taxi: TRAFFIC_TAXI
		-- Taxi

	point_randomizer: TRAFFIC_POINT_RANDOMIZER
		-- Point list generator

	color: TRAFFIC_COLOR
		-- Color for tourist_line

	free_moving: TRAFFIC_FREE_MOVING
		-- Free moving

end
