indexing
	description: "Display the agent on the board"
	status:	"See notice at end of class"
	author: "Marcel Kessler, Ursina Caluori"
	date: "$Date$"
	revision: "$Revision$"

class
	ESTATE_AGENT_DISPLAYER

inherit
	PLAYER_DISPLAYER
		redefine
			make_from_player, player, statistics, draw
		end

create 
	make_from_player

feature -- Initialization
	
	make_from_player (a_player: ESTATE_AGENT; a_pic: EM_BITMAP) is
			-- Put player on board.
		do
			Precursor (a_player)
		ensure then
			transports_created: transports_taken /= Void
			places_created: places_visited /= Void
		end

feature -- Access


	player: ESTATE_AGENT
			-- Reference to player to be displayed

feature -- Output

	statistics: STRING is
			-- Number of tickets left etc.
		do
			if visible then
				Result := player.location.out + "Rail tickets: " + player.rail_tickets.out + "%NTram tickets: " + player.tram_tickets.out + "%NBus tickets :" + player.bus_tickets.out
			else
				Result := "Rail tickets: " + player.rail_tickets.out + "%NTram tickets: " + player.tram_tickets.out + "%NBus tickets :" + player.bus_tickets.out
			end
		end
		
	agent_moves: STRING is
			-- Types ot transport taken etc.
		do
			Result := ""
			from 
				player.taken_transports.start
				player.visited_places.start
			until 
				player.taken_transports.after
			loop
				Result := "%N" + Result
				if player.is_visible and then not player.taken_transports.islast then
					Result := "; " + player.visited_places.item + Result
				end
				Result := "Round " + player.visited_places.index.out + ": " + player.taken_transports.item + Result
				player.taken_transports.forth
				player.visited_places.forth
			end
		ensure
			has_result: Result /= Void
		end

		
feature {NONE} -- Implementation
		
	draw (surface: EM_SURFACE) is
			-- Draw 'Current' onto `surf'.
		do
			if player.is_visible then
				if picture /= Void then
					surface.draw_object (picture)
				end
-- TODO: necessary for estate agent?
--				if marked then
--					surface.draw_object (marking_circle)
--				end
			end
		end

end
