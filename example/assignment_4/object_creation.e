indexing
	description: "Creation class (Assignment 4)"
	date: "$Date$"
	revision: "$Revision$"

class
	OBJECT_CREATION

inherit

	TOURISM

feature -- Explore Paris

	explore is
			-- Create new objects for Paris.
		do
			Paris.display
				-- Paris.display must be the first instruction of the feature

		end


end
