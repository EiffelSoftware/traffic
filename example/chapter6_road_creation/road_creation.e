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
			line_sections_1, line_sections_2, line_sections_3: LIST [TRAFFIC_LINE_SECTION]
			ls_1, ls_2, ls_3: TRAFFIC_LINE_SECTION
			tram_nr2, tram_nr3_a, tram_nr3_b: TRAFFIC_PATH_SECTION
			a_path: TRAFFIC_PATH
		do
			Paris.display
			line_sections_1 := Paris.line_sections_of_place ("place Nation")
			line_sections_2 := Paris.line_sections_of_place("place Pere Lachaise")
			line_sections_3 := Paris.line_sections_of_place("place Republique")
			ls_1 := line_sections_1.i_th (5)
			ls_2 := line_sections_2.i_th (5)
			ls_3 := line_sections_3.i_th (1)

			create tram_nr2
			tram_nr2.make_tram (ls_1)
			create tram_nr3_a
			tram_nr3_a.make_tram (ls_2)
			create tram_nr3_b
			tram_nr3_b.make_tram (ls_3)
			tram_nr3_a.extend (tram_nr3_b)

			create a_path.make(2.3)
			a_path.set_first (tram_nr2)
			tram_nr2.set_next (tram_nr3_a)

			io.new_line
			io.put_string(a_path.textual_description)


			end


end
