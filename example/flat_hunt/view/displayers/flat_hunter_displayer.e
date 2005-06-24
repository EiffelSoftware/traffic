indexing
	description: "Display a flat hunter on the board"
	status:	"See notice at end of class"
	author: "Ursina Caluori"
	date: "$Date$"
	revision: "$Revision$"

class
	FLAT_HUNTER_DISPLAYER

inherit
	PLAYER_DISPLAYER
		redefine
			make, player, statistics, mark_player, update_pixmap
		end

create 
	make

feature -- Initialization
	
	make (a_player: ESTATE_AGENT) is
			-- Put player on board.
		do
			Precursor (a_player)
			visible := False
			hunt := False
			create transports_taken.make
			create places_visited.make
		ensure then
			transports_created: transports_taken /= Void
			places_created: places_visited /= Void
		end

feature -- Access

	hunt: BOOLEAN
			-- Hunt mode --> always show old position
			
	visible: BOOLEAN
			-- Is it a checkpoint?

	player: ESTATE_AGENT
			-- Reference to player to be displayed
			
feature -- Measurement

	transports_taken: LINKED_LIST[STRING]
			-- List of all taken transports so far
			
	places_visited: LINKED_LIST[STRING]
			-- List of all the visited places
	
feature -- Output

	statistics: STRING is
			-- Number of tickets left etc.
		do
			if visible then
				Result := "Rail tickets: " + player.rail_tickets.out + "%NTram tickets: " + player.tram_tickets.out + "%NBus tickets :" + player.bus_tickets.out
			else
				Result := player.location.out + "Rail tickets: " + player.rail_tickets.out + "%NTram tickets: " + player.tram_tickets.out + "%NBus tickets :" + player.bus_tickets.out
			end
		end

	agent_moves: STRING is
			-- Types ot transport taken etc.
		do
			Result := ""
			from 
				transports_taken.start
				places_visited.start
			until 
				transports_taken.after
			loop
				Result := "%N" + Result
				if visible and then not transports_taken.islast then
					Result := "; " + places_visited.item + Result
				end
				Result := "Round " + places_visited.index.out + ": " + transports_taken.item + Result
				transports_taken.forth
				places_visited.forth
			end
		ensure
			has_result: Result /= Void
		end
		
feature -- Status setting
		
	set_visible (a_visibility: BOOLEAN) is
			-- Set estate agent's visibility.
		do
			visible := a_visibility
		end

	set_hunt_mode (a_hunt_mode: BOOLEAN) is
			-- Set estate agent's hunt mode.
		do
			hunt := a_hunt_mode
		end

feature -- Basic operations

	show is
			-- Make the agent visible.
		do
			set_visible (True)
			set_hunt_mode (False)
			update_pixmap
		end
		
feature {NONE} -- Implementation

	mark_player is
			-- Highlight the current player.
		do
			if visible then
				circle.set_center (real_coordinate (player.location.position))
			else
				circle.set_center (real_coordinate (player.last_estate_agent_location.position))
			end
			insert_command (circle)					
		end
		
	update_pixmap is
			-- Draw estate agents pixmap at the right location.
		local
			rr: REAL_RECTANGLE
			x1, x2: DOUBLE
			y1, y2: DOUBLE
		do
			if visible then
				if hunt then
					x1 := player.old_location.position.x
					y1 := player.old_location.position.y
					x2 := player.old_location.position.x
					y2 := player.old_location.position.y				
				else					
					x1 := player.location.position.x
					y1 := player.location.position.y
					x2 := player.location.position.x
					y2 := player.location.position.y				
				end
			else
				x1 := player.last_estate_agent_location.position.x
				y1 := player.last_estate_agent_location.position.y
				x2 := player.last_estate_agent_location.position.x				
				y2 := player.last_estate_agent_location.position.y
			end
			x1 := x1 - (pic.width / 2)
			y1 := y1 + (pic.height / 2)
			x2 := x2 + (pic.width /2)
			y2 := y2 - (pic.height /2)
			create rr.make_from_reals (x1.truncated_to_real, y1.truncated_to_real, x2.truncated_to_real, y2.truncated_to_real)
			pixmap.set_position (rr.point_a)
		end
		
invariant
	transports_exist: transports_taken /= Void
	places_exist: places_visited /= Void
end

--|-----------------------------------------------
---------
--| This file is Copyright (C) 2004 by ETH Zurich.
--|
--| For questions, comments, additions or suggestions on
--| how to improve this package, please write to:
--|
--|     Marcel Kessler <kesslema@student.ethz.ch>
--|     Michela Pedroni <michela.pedroni@inf.ethz.ch>
--| 	Rolf Bruderer <bruderer@computerscience.ch>
--|
--|--------------------------------------------------------
