indexing
	description: "Shared knowledge object"
	date: "$Date$"
	revision: "$Revision$"

class
	SHARED_KNOWLEDGE

feature -- Access

	knowledge: KNOWLEDGE is
			-- Knowledge that all the players have
		once		
			create Result
		end
		
end
