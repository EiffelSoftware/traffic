indexing
	description: "Planner class (Assignment 3)"
	date: "$Date$"
	revision: "$Revision$"

class
	PLANNER

inherit

	TOURISM

feature -- Explore Paris

	explore_on_click is
			-- Explore Paris!
		do
			Paris.display
			-- Paris.display must be the first line (loads and displays Paris map)
			
		end

end
