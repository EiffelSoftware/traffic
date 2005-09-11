indexing
	description: "Displays the agent on the board."
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

	make_from_player (a_player: PLAYER; a_pic: like picture; a_traffic_map: like traffic_map; a_map_widget: like map_widget) is
			-- Initialize displayer for `a_player'.
		do
			Precursor (a_player, a_pic, a_traffic_map, a_map_widget)
			create overlay.make (marking_circle.center, marking_circle.radius - 1.0)
			overlay.set_fill_color (create {EM_COLOR}.make_black)
			overlay.fill_color.set_alpha (150)
		end

feature -- Attributes

	player: ESTATE_AGENT
			-- Reference to player to be displayed

	update_last_visible_position is
			-- Update position to passenger's position.
		local
			pos: EM_VECTOR_2D
			tmp_x, tmp_y: INTEGER
		do
			pos := player.last_visible_location.position.twin
			x := (pos.x.floor - (overlay.width // 2))
			y := (pos.y.floor - (overlay.height // 2))
			picture.set_x_y (x, y)
			overlay.set_x_y (x, y)
		end	

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

	draw (surface: EM_SURFACE) is
			-- Draw 'Current' onto `surface'.
		do
			io.putstring ("%N%N" + player.name)	
--			update_position		
			if not possible_moves_unmarked then
				unmark_possible_moves
			end
			if player.is_visible then
				update_position
				if picture /= Void then
					surface.draw_object (picture)
					if player.marked then
						surface.draw_object (marking_circle)
						mark_possible_moves
					end
				end
			else
--				if player.last_visible_location /= Void then
--					update_last_visible_position
--					surface.draw_object (picture)
--					surface.draw_object (overlay)
--				end	
			end
		end
	
	overlay: EM_CIRCLE
			-- Overlay for when agent shown at last_visible_location.

end
