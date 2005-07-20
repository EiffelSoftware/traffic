indexing
	description: "Display a flat hunter on the board"
	author: "Ursina Caluori"
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

feature -- Access

	player: FLAT_HUNTER
			-- Reference to player to be displayed
	
feature -- Output

	statistics: STRING is
			-- Number of tickets left etc.
		do
			Result := player.location.out + "Rail tickets: " + player.rail_tickets.out + "%NTram tickets: " + player.tram_tickets.out + "%NBus tickets :" + player.bus_tickets.out
		end

end

