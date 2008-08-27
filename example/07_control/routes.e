indexing
	description: "Routes class (Chapter 7, Touch of Class)"
	date: "$Date$"
	revision: "$Revision$"

class
	ROUTES

inherit

	TOURISM

feature -- Path building

	traverse is
			-- Build a new path.
		local
			b: TRAFFIC_BUILDING_RANDOMIZER
			g: TRAFFIC_GRID
			p: TRAFFIC_POINT_RANDOMIZER
			r: TRAFFIC_ROUTE_CALCULATOR
			rr: TRAFFIC_ROUTE_RANDOMIZER
		do
			Paris.display

			-- Path
			create walking_1.make_walk (Elysee_palace, Station_Charles_de_Gaulle_Etoile)
			create metro_1.make_metro (Station_Charles_de_Gaulle_Etoile, Station_Champs_de_Mars_Tour_Eiffel_Bir_Hakeim)
			create walking_2.make_walk (Station_Champs_de_Mars_Tour_Eiffel_Bir_Hakeim, Eiffel_Tower)
			create full.make_empty
			full.extend (walking_1)
			full.extend (metro_1)
			full.extend (walking_2)
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
					show_big_red_spot (Line8.item.location)
				elseif Line8.item.is_exchange then
					show_green_spot (Line8.item.location)
				else
					show_spot (line8.item.location)
				end
				Line8.forth
			end
		end

	full: TRAFFIC_ROUTE
	walking_1, walking_2, metro_1: TRAFFIC_LEG

end
