indexing
	description: "Test class for aliens (Assignment 6)"
	date: "$Date$"
	revision: "$Revision$"

class
	ALIEN_TEST

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


end
