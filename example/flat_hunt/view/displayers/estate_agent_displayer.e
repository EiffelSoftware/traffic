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
		end

feature -- Attributes

	player: ESTATE_AGENT
			-- Reference to player to be displayed

	last_visible_location_picture: EM_DRAWABLE
			-- Picture that is displayed at last visible location if estate agent currently not visible.

feature -- Status setting

	set_last_visible_location_picture (a_pic: like last_visible_location_picture) is
			-- Set `last_visible_location_picture' to `a_pic'.
		require
			a_pic_exists: a_pic /= Void
		do
			last_visible_location_picture := a_pic
			update_position
		ensure
			lvl_pic_set: last_visible_location_picture = a_pic
		end
		
	update_last_visible_position is
			-- Update position to passenger's position.
		local
			pos: EM_VECTOR_2D
			tmp_x, tmp_y: INTEGER
		do
			pos := player.last_visible_location.position.twin
			tmp_x := (pos.x.floor - (picture.width // 2))
			tmp_y := (pos.y.floor - (picture.height // 2))
			last_visible_location_picture.set_x_y (tmp_x, tmp_y)				
		end	

feature -- Output

	statistics: STRING is
			-- Number of tickets left etc.
		local
			last_visible_location: STRING
		do
			if player.is_visible then
				Result := "Location: " + player.location.name + "%NRail tickets: " + player.rail_tickets.out + ", Tram tickets: " + player.tram_tickets.out + ", Bus tickets: " + player.bus_tickets.out + "%N%N" + travel_history
			else
				if player.last_visible_location /= Void then
					last_visible_location := "In hiding.. Last seen at: " + player.last_visible_location.name
				else
					last_visible_location := "In hiding.. Last visbible location unknown."
				end
				Result := "Location: " + last_visible_location + "%NRail tickets: " + player.rail_tickets.out + ", Tram tickets: " + player.tram_tickets.out + ", Bus tickets: " + player.bus_tickets.out + last_visible_travel_history
			end

		end
		
	travel_history: STRING is
			-- Types ot transport taken etc.
		do
			Result := ""
			from 
				player.taken_transports.start
				player.visited_places.start
			until 
				player.taken_transports.after
			loop
				if player.is_visible and then not player.taken_transports.islast then
					Result := "%N" + player.visited_places.item + Result
				end
				Result := "%NRound " + player.visited_places.index.out + ": " + player.taken_transports.item + Result
				player.taken_transports.forth
				player.visited_places.forth
			end
		ensure
			has_result: Result /= Void
		end

	last_visible_travel_history: STRING is
			-- Types ot transport taken etc.
		local
			i: INTEGER
		do
			Result := ""
			from 
				player.taken_transports.start
				player.visited_places.start
				i := 1
			until 
				i > player.last_visible_round
			loop
				if not (i = player.last_visible_round) then
					Result := "%N" + player.visited_places.item + Result
				end
				Result := "%NRound " + player.visited_places.index.out + ": " + player.taken_transports.item + Result
				player.taken_transports.forth
				player.visited_places.forth
				i := i + 1
			end
		ensure
			has_result: Result /= Void
		end
		
feature {NONE} -- Implementation

	draw (surface: EM_SURFACE) is
			-- Draw `Current' onto `surface'.
		do
			io.putstring ("%N%N" + player.name)	
			if not possible_moves_unmarked then
				unmark_possible_moves
			end
			if player.is_visible then
				update_position
				if picture /= Void then
					surface.draw_object (picture)
					if player.is_marked then
						surface.draw_object (marking_circle)
						mark_possible_moves
					elseif player.is_defeated then
						marking_circle.set_line_width (4)
						surface.draw_object (marking_circle)
						animate_defeat
					end
				end
			else
				-- If estate agent currently not visible, show him at the location he was last sighted.
				if player.last_visible_location /= Void then
					update_last_visible_position
					surface.draw_object (last_visible_location_picture)
				end	
			end
		end

end
