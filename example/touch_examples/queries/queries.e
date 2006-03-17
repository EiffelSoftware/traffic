indexing
	description: "Objects that ..."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	QUERIES

inherit
	
	TOURISM
	
feature
	
	explore is
			-- Try some queries.
		do
			Paris.display
			Console.show (line8.count)
			Console.show (line8.i_th (1))
			Console.show (line8.i_th (line8.count))
		end
		
end
