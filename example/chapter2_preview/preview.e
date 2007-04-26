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

--	Paris.display
--			Zurich.map_widget.place_buildings_randomly(1)
			Zurich.display
			--Zurich.map_widget.place_buildings_randomly (3)
--			Console.show ("Louver.highlight start")
--			Louvre.lighten
--			Console.show ("Route1.animate start")
--			Route1.animate
--			Console.show ("Route1.animate start")
--			Line8.spotlight
--			Paris.build
			Zurich.add_tram_per_line (2)
--			Zurich.time.pause_time
--			Console.show (Line8)
--			Console.show (Place_balard)
--			io.put_string (Paris.lines.out)
--			io.put_string (Paris.places.out)
		end

end
