indexing
	description: "Displays a flat hunter on the board."
	date: "$Date$"
	revision: "$Revision$"

class
	FLAT_HUNTER_DISPLAYER

inherit
	PLAYER_DISPLAYER
		redefine
			player, statistics
		end

create 
	make_from_player

feature -- Attributes

	player: FLAT_HUNTER
			-- Reference to player to be displayed.
	
feature -- Output

	statistics: ARRAYED_LIST [STRING] is
			-- Location and number of tickets left.
		do
			create Result.make (0)
			Result.extend ("Location: " + player.location.name)
			Result.extend ("Rail tickets: " + player.rail_tickets.out)
			Result.extend ("Tram tickets: " + player.tram_tickets.out)
			Result.extend ("Bus tickets: " + player.bus_tickets.out)
		end

end

