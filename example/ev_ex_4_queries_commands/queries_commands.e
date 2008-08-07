class QUERIES_COMMANDS inherit
	TOURISM

feature -- Commands and Queries

	explore is
			-- Try out queries and commands on lines.
		do
			Paris.display
			Console.show (Line8.count)
			Console.show (Line8. i_th (1))
			Console.show (Line8. i_th (2))
			wait
			Line8.remove_all_connections
			Line8.extend (Station_la_motte_picquet_grenelle)
			Line8.extend (Station_invalides)
			Console.show (Line8.count)
			Console.show (Line8.ne_end.name)
		end

end
