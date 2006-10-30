indexing
	description: "Class to fill in example 'queries'"
	date: "$Date$"
	revision: "$Revision$"

class QUERIES

inherit

	TOURISM

feature -- Example

	explore_on_click is
			-- Show some queries.
		do
			Paris.display
			Console.show (line8.count)
			Console.show (line8.i_th (1))
			Console.show (line8.i_th (line8.count))
		end

end
