indexing
	description: "Queries class (Chapter 4, Touch of Class)"
	date: "$Date$"
	revision: "$Revision$"

class
	QUERIES_COMMANDS

inherit

	TOURISM

feature -- Commands and Queries

	explore_on_click is
			-- Try commands and queries.
		do
			Paris.display
			Console.show (Line8.count)
			Console.show (Line8. i_th (1))
			Console.show (Line8. i_th (2))
			wait
			Line8.remove_all_connections
			Line8.extend (place_la_motte_picquet_grenelle)
			Line8.extend (place_invalides)
			Console.show (Line8.count)
			Console.show (Line8.terminal_2.name)
		end

end
