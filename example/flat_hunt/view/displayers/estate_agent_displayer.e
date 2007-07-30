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

feature -- Output

	statistics: STRING is
			-- Number of tickets left etc.
		local
			last_visible_location: STRING
		do
			if player.is_visible then
				Result := "Location: " + player.location.name + "%N" + "Tickets: Rail: " + player.rail_tickets.out + ", Tram: " + player.tram_tickets.out + ", Bus: " + player.bus_tickets.out + "%N" + travel_history
			else
				if player.last_visible_location /= Void then
					last_visible_location := "In hiding.. Last seen at: " + player.last_visible_location.name + "%N"
				else
					last_visible_location := "In hiding.. Last seen at unknown.%N"
				end
				Result := "Location: " + last_visible_location + "Tickets: Rail: " + player.rail_tickets.out + ", Tram: " + player.tram_tickets.out + ", Bus: " + player.bus_tickets.out + "%N" + last_visible_travel_history
			end
		end

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

feature {NONE} -- Implementation

	player: ESTATE_AGENT
			-- Reference to player to be displayed

	last_visible_location_picture: EM_DRAWABLE
			-- Picture that is displayed at last visible location if estate agent currently not visible.

	update_last_visible_position is
			-- Update position to passenger's position.
		local
			pos: TRAFFIC_COORDINATE
			tmp_x, tmp_y: INTEGER
		do
			pos := player.last_visible_location.position.twin
			tmp_x := (pos.x.floor - (picture.width // 2))
			tmp_y := (pos.y.floor - (picture.height // 2))
			last_visible_location_picture.set_x_y (tmp_x, tmp_y)
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
				if not player.taken_transports.islast then
					Result := "%N" + player.visited_places.item + Result
				end
				Result := "%N" + "Round " + player.visited_places.index.out + ": " + player.taken_transports.item + Result
				player.taken_transports.forth
				player.visited_places.forth
			end
		ensure
			result_exists: Result /= Void
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
				player.taken_transports.after
			loop
				if not (i >= player.last_visible_round) then
					Result := "%N" + player.visited_places.item + Result
				end
				Result := "%N" + "Round " + player.visited_places.index.out + ": " + player.taken_transports.item + Result
				player.taken_transports.forth
				player.visited_places.forth
				i := i + 1
			end
		ensure
			result_exists: Result /= Void
		end

	draw (surface: EM_SURFACE) is
			-- Draw `Current' onto `surface'.
		do
			-- Only draw the estate agent if he is currently visible.
			if player.is_visible then
				update_position
				if picture /= Void then
					surface.draw_object (picture)
					-- If it's the estate agent's turn mark him with the marking circle.
					if player.is_marked then
						surface.draw_object (marking_circle)
					-- If the estate agent is defeated mark his defeat.
					elseif player.is_defeated then
						marking_circle.set_line_width (4)
						surface.draw_object (marking_circle)
						mark_defeat (surface)
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
