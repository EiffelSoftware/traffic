note
	description: "Exploring interfaces."

class
	QUERIES_AND_COMMANDS

inherit
	ZURICH_OBJECTS

feature -- Explore Zurich

	explore
			-- Try out queries and commands on lines.
		do
			console.output (Line10.count)
			wait (1)
			console.output (Line10.i_th (1))
			wait (1)
			console.output (Line10.i_th (Line10.count))

			Line10.remove_all
			Zurich_map.update
			wait (3)

			Line10.append (Haldenbach)
			Line10.append (ETH_Universitaetsspital)
			Line10.append (Haldenegg)
			Line10.append (Central )
			Line10.append (Bahnhofplatz_HB)
			console.output (Line10.count)
			wait (1)
			console.output (Line10.first.name)
			wait (1)
		end

end
