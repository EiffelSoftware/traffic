indexing
	description: "Path building class (Chapter 6, Touch of Class)"
	date: "$Date$"
	revision: "$Revision$"

class
	PATH_BUILDING

inherit

	TOURISM

feature -- Path building

	explore_on_click is
			-- Build a new path.
		do
			Paris.display

			wait

			create fancy_path

			create section1
			section1.extend (tram11_place_republique_place_hotel_de_ville)
			section1.extend (tram11_place_hotel_de_ville_place_chatelet)

			create section2.make_rail (rerb_place_chatelet_place_notre_dame)

			create section3.make (rerca_place_notre_dame_place_invalides)
			section3.extend (rerca_place_invalides_place_champs_de_mars)

			create section4.make_walk (road_station_champs_de_mars_to_tour_eiffel)


			section1.set_next (section2)
			section2.set_next (section3)

			fancy_path.set_first (section1)

			Paris.paths.put_last (fancy_path)
			fancy_path.illuminate
			Console.show (fancy_path)
		end

	fancy_path: TRAFFIC_PATH
	section1, section2, section3, section4: TRAFFIC_PATH_SECTION

end
