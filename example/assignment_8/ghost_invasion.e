indexing
	description: "Ghost invasion class (Assignment 8)"
	date: "$Date$"
	revision: "$Revision$"

class
	GHOST_INVASION

inherit

	TOURISM

feature -- Explore Paris

	invade is
			-- Invade Paris with 10 ghosts.
		do
			Paris.display
			wait

			-- To be filled in
		end

end
