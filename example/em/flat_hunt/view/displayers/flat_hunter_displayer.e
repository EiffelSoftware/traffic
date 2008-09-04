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

feature -- Output

	statistics: STRING is
			-- Location and number of tickets left.
		do
			Result := "Location: " + player.location.name + "%NRail tickets: " + player.rail_tickets.out + "%NTram tickets: " + player.tram_tickets.out + "%NBus tickets: " + player.bus_tickets.out
		end

feature {NONE} -- Implementation

	player: FLAT_HUNTER
			-- Reference to player to be displayed.
	
end

