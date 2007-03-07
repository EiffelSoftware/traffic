indexing
	description: "Class to fill in example 'road creation'"
	date: "$Date$"
	revision: "$Revision$"

class ROAD_CREATION

inherit

	TOURISM
	TOUCH_ROAD

feature -- Example

	explore_on_click is
			-- Create a road and animate it.
		local
			tram_1, tram_2a, tram_2b, walk, rail: TRAFFIC_PATH_SECTION
			a_path: TRAFFIC_PATH
		do

			Paris.display

			create a_path.make

			--create the path-sections
			create walk
			walk.make_walk (Road_Place_de_la_Nation)
			create tram_1
			tram_1.make_tram (Place_Nation_Place_Republique)
			create tram_2a
			tram_2a.make_tram (Place_Republique_Place_Hotel_de_Ville)
			create tram_2b
			tram_2b.make_tram (Place_Hotel_de_Ville_Place_Chatelet)
			create rail
			rail.make_rail (Place_Chatelet_Place_Opera)

			tram_2a.extend (tram_2b)

			--build the path
			a_path.set_first(walk)
			walk.set_next (tram_1)
			tram_1.set_next (tram_2a)
			tram_2a.set_next (rail)

			--add the path to the map of Paris
			Paris.add_path (a_path)

			--redraw Paris, now with the white path
			Paris.redraw

			end



end
