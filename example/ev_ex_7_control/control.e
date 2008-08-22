indexing
	description: "Control class (Chapter 7, Touch of Class)"
	date: "$Date$"
	revision: "$Revision$"

class
	CONTROL

inherit

	TOURISM

feature -- Path building

	explore is
			-- Build a new path.
		do
			Paris.display

			-- Path
			create walking_1.make_walk (road_place_etoile)
			create metro_1.make_tram (Line6_Etoile_to_Trocadero)
			metro_1.extend (Line6_Trocadero_to_Champs_De_Mars)
			create walking_2.make_walk (road_station_champs_de_mars_to_tour_eiffel)
			walking_1.set_next (metro_1)
			metro_1.set_next (walking_2)
			create full
			full.set_first (walking_1)
			Paris.routes.put_last (full)
			full.illuminate

			-- Loop
			from
				Line8.start
			variant
				Line8.count - Line8.index + 1
			until
				Line8.is_after
			loop
				if Line8.item.is_hub then
					show_big_red_spot (Line8.item.position)
				elseif Line8.item.is_exchange then
					show_green_spot (Line8.item.position)
				else
					show_spot (line8.item.position)
				end
				Line8.forth
			end
		end

	full: TRAFFIC_ROUTE
	walking_1, walking_2, metro_1: TRAFFIC_ROUTE_SECTION

end
