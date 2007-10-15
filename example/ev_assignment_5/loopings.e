indexing
	description: "Loopings class (Assignment 5)"
	date: "$Date$"
	revision: "$Revision$"

class
	LOOPINGS

inherit

	TOURISM

feature -- Explore Paris

	explore_on_click is
			-- Build trams and buildings.
		do
			Paris.display
			wait
			-- To be filled in
		end

	generate_trams_for_line8 is
			-- Generate trams for Line8.
		do
			-- To be filled in
		end

	generate_trams is
			-- Generate trams for all tram lines.
		do
			-- To be filled in
		end

	generate_buildings_along_road is
			-- Generate building along road with id 15.
		do
			-- To be filled in
		end

	generate_buildings is
			-- Generate buildings along all roads.
		do
			-- To be filled in
		end

end
