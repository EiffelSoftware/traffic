indexing
	description: "Displays the agent on the board."
	date: "$Date$"
	revision: "$Revision$"

class
	ESTATE_AGENT_DISPLAYER

inherit
	PLAYER_DISPLAYER
		redefine
			player, statistics, draw
		end

create 
	make_from_player

feature -- Attributes

	player: ESTATE_AGENT
			-- Reference to player to be displayed

feature -- Output

	statistics: ARRAYED_LIST [STRING] is
			-- Number of tickets left etc.
		do
			create Result.make (0)

			if player.is_visible then
				Result.copy (agent_history)	
				Result.put_front ("History: ")
				Result.put_front (" ")
				Result.put_front ("Rail tickets: " + player.rail_tickets.out + ", Tram tickets: " + player.tram_tickets.out + ", Bus tickets: " + player.bus_tickets.out)			
				Result.put_front ("Location: " + player.location.name)
			else
				if player.last_visible_location /= Void then
					Result.extend ("In hiding.. Last seen at: " + player.last_visible_location.name)
				else
					Result.extend ("In hiding.. Last visbible location unknown.")
				end
				Result.extend ("Rail tickets: " + player.rail_tickets.out + ", Tram tickets: " + player.tram_tickets.out + ", Bus tickets :" + player.bus_tickets.out)
			end

		end
		
	agent_history: ARRAYED_LIST [STRING] is
			-- Types ot transport taken etc.
		do
			create Result.make (0)
			from 
				player.taken_transports.start
				player.visited_places.start
			until 
				player.taken_transports.after
			loop
				if player.is_visible and then not player.taken_transports.islast then
					Result.extend (player.visited_places.item)
				end
				Result.extend ("Round " + player.visited_places.index.out + ": " + player.taken_transports.item)
				player.taken_transports.forth
				player.visited_places.forth
			end
		ensure
			has_result: Result /= Void
		end

		
feature {NONE} -- Implementation
	
--	statistics: ARRAYED_LIST [STRING]
--			-- Statistics
	draw (surface: EM_SURFACE) is
			-- Draw 'Current' onto `surf'.
		do
			io.putstring ("%N%N" + player.name)			
			update_position
			if player.is_visible then
				if picture /= Void then
					surface.draw_object (picture)
					if player.marked then
						surface.draw_object (marking_circle)
						mark_possible_moves	
					elseif not possible_moves_unmarked then
						unmark_possible_moves
					end
				end
			else
				
			end
		end

end
