indexing
	description: "Recursive highlighting class (Assignment 9)"
	date: "$Date$"
	revision: "$Revision$"

class
	RECURSIVE_HIGHLIGHTING

inherit

	TOURISM

feature -- Explore Paris

	show is
			-- Highlight stations that are reachable within a certain time limit.
		do
			Paris.display
			wait

			-- To be filled in
		end

end
