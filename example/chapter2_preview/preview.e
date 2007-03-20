indexing
	description: "The first example from TOUCH"
	date: "$Date: 2006/03/02 18:57:05 $"
	revision: "$Revision: 1.26 $"

class PREVIEW

inherit

	TOURISM

feature	 -- Example

	explore_on_click is
			-- Execute preview example.
		do

			Paris.display
			Paris.map_widget.place_buildings_randomly(3)
			--Zurich.display
			--Zurich.map_widget.place_buildings_randomly (3)
			--Louvre.lighten
			--Route1.animate
			--Line8.spotlight
			--Paris.build
			--Paris.equip
			--Console.show (Line8)
			--Console.show (Place_balard)
		end

end
