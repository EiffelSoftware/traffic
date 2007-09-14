indexing
	description: "Control class (Chapter 7, Touch of Class)"
	date: "$Date$"
	revision: "$Revision$"

class
	CONTROL

inherit

	TOURISM

feature -- Path building

	explore_on_click is
			-- Build a new path.
		do
			Paris.display

			wait
			-- Path
			create walking_1.make_walk (road_place_etoile)
			create metro_1.make_tram (tram6_place_etoile_place_trocadero)
			metro_1.extend (tram6_place_trocadero_place_champs_de_mars)
			create walking_2.make_walk (road_station_champs_de_mars_to_tour_eiffel)
			walking_1.set_next (metro_1)
			metro_1.set_next (walking_2)
			create full
			full.set_first (walking_1)
			Paris.paths.put_last (full)
			full.illuminate

			-- Loop
			from
				Line8.start
			variant
				Line8.count - Line8.index + 1
			until
				Line8.after
			loop
				Line8.item.highlight
				wait
				Line8.item.unhighlight
				Line8.forth
			end
		end

	full: TRAFFIC_PATH
	walking_1, walking_2, metro_1: TRAFFIC_PATH_SECTION

end
