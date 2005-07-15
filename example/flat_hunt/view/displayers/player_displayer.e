indexing
	description: "Display the player on the board"
	status:	"See notice at end of class"
	author: "Marcel Kessler, ETH Zurich"
	date: "$Date$"
	revision: "$Revision$"

class
	PLAYER_DISPLAYER

inherit
	KL_SHARED_FILE_SYSTEM

	DISPLAY_CONSTANTS
		export
			{NONE} all
		undefine
			default_create
		end

create 
	make

feature -- Initialization

	make (a_player: PLAYER) is
			-- 
		do
			
		end
		
	make (a_player: PLAYER) is
			-- Initialize displayer for `a_player'.
		require
			player_exists: a_player /= Void
		local
			x1, x2: DOUBLE
			y1, y2: DOUBLE
			c: REAL_RECTANGLE
		do
			player := a_player
			create pic
			pic.set_with_named_file (File_system.pathname (Image_directory, a_player.name + Image_extension))
			x1 := player.location.position.x
			y1 := player.location.position.y
			x2 := player.location.position.x
			y2 := player.location.position.y
			x1 := x1 - (pic.width / 2)
			y1 := y1 + (pic.height / 2)
			x2 := x2 + (pic.width /2)
			y2 := y2 - (pic.height /2)
			create c.make_from_reals (x1.truncated_to_real, y1.truncated_to_real, x2.truncated_to_real, y2.truncated_to_real)
			create pixmap.make (pic, c.point_a)
			insert_command (pixmap)
			player := a_player
			create circle.make (real_coordinate (player.location.position))
			circle.set_color (create {EV_COLOR}.make_with_8_bit_rgb (255, 0, 0))
			circle.set_diameter (pixmap.bounding_box.lower_right.distance (pixmap.bounding_box.upper_left).ceiling)
			create environment
			main_controller ?= environment.application
			canvas ?= main_controller.main_window.canvas
		ensure
			player_set: player = a_player
		end

feature -- Basic operations

	display_before_prepare is
			-- Show current player.
		do
			mark_player
		end
		

	display_before_move is
			-- Mark possible moves if player is human.
		do
			if player.brain.generating_type.substring (1, 3).is_equal ("HUM") then
				mark_possible_moves		
			end
		end
		
	display_after_move is
			-- Remove old marks, redraw player.
		do
			unmark_player
			if player.brain.generating_type.substring (1, 3).is_equal ("HUM") then
				unmark_possible_moves		
			end
			update_pixmap
		end

	clear is
			-- Remove all players (clear_game).
		do
			unmark_player
			remove_command (pixmap)
			unmark_possible_moves_special
		end
	
	clear_markings is
			-- Remove all markings (end_game).
		do
			unmark_player
			unmark_possible_moves_special
		end
		
	animate_defeat is
			-- Animate the defeat of the player.
		local
			cir: DRAWABLE_CIRCLE
			position: REAL_COORDINATE
			color: ESDL_COLOR
			count: INTEGER
		do
			create position.make (player.location.position.x, player.location.position.y)
			create cir.make (position)
			create color.make_with_8_bit_rgb (0, 0, 0)
			cir.set_color (color)
			cir.set_diameter (50)
			cir.draw (canvas)
				-- Remove the last few commands if you use them in the loop
			from
				-- Fill
			until
				True
				-- Replace `True' and fill
			loop
				-- Fill
				process (80)
				-- `process' should be kept, but you can change the number 
			end
		end
		
	process (msec: INTEGER) is
				-- Wait and process events.
		local
			i: INTEGER
		do
			if not main_controller.break or not main_controller.game.is_game_over then
				from
					i := 0
				until
					i >= msec / 20 or main_controller.is_destroyed 
				loop
					main_controller.sleep (5)
					i := i + 1	
				end
				main_controller.process_events
				canvas.redraw
			end
		end

feature -- Access

	player: PLAYER
			-- Reference to player to be displayed

	pic: ESDL_BITMAP
			-- Picture for the player
	
feature -- Status report

	statistics: STRING is
			-- Number of tickets left etc.
		do
			Result := player.location.out + "Rail tickets: " + player.rail_tickets.out + "%NTram tickets: " + player.tram_tickets.out + "%NBus tickets :" + player.bus_tickets.out
		end
		
	print_location: STRING is
			-- Display location of player.
		do
			Result := player.location.out
		end
		
feature {NONE} -- Implementation

	mark_player is
			-- Mark the player with a red circle (used for visualizing the current player).
		do
			circle.set_center (real_coordinate (player.location.position))
			insert_command (circle)
		end
		
	unmark_player is
			-- Remove red marking circle.
		do
			remove_command (circle)
		end

	mark_possible_moves is
			-- Mark all possible places that the player can move to.
		local
			pd: PLACE_DISPLAYER
		do
			from
				player.possible_moves.start
			until
				player.possible_moves.after
			loop
				pd ?= player.possible_moves.item.other_end (player.location).displayer
				if pd /= Void and not pd.marked then
					pd.mark
				end
				player.possible_moves.forth
			end
		end

	unmark_possible_moves_special is
			-- Remove marking of possible moves in a uncertain state (maybe move has not been made).
		local
			pd: PLACE_DISPLAYER
		do
			if player.possible_moves /= Void then
				from
					player.possible_moves.start
				until
					player.possible_moves.after
				loop
					pd ?= player.possible_moves.item.from_place.displayer
					if pd /= Void and pd.marked then
						pd.unmark
					end
					pd ?= player.possible_moves.item.to_place.displayer
					if pd /= Void and pd.marked then
						pd.unmark
					end
					player.possible_moves.forth
				end
			end
		end			
		
	unmark_possible_moves is
			-- Remove marking of possible moves (after move has been made).
		local
			pd: PLACE_DISPLAYER
		do
			if player.possible_moves /= Void then
				from
					player.possible_moves.start
				until
					player.possible_moves.after
				loop
					if player.possible_moves.item.has (player.old_location) then
						pd ?= player.possible_moves.item.other_end (player.old_location).displayer
						if pd /= Void and pd.marked then
							pd.unmark
						end						
					end
					player.possible_moves.forth
				end
			end
		end

	update_pixmap is
			-- Update the pixmap position.
		local
			rr: REAL_RECTANGLE
			x1, x2: DOUBLE
			y1, y2: DOUBLE
		do
			x1 := player.location.position.x
			y1 := player.location.position.y
			x2 := player.location.position.x
			y2 := player.location.position.y
			x1 := x1 - (pic.width / 2)
			y1 := y1 + (pic.height / 2)
			x2 := x2 + (pic.width /2)
			y2 := y2 - (pic.height /2)
			create rr.make_from_reals (x1.truncated_to_real, y1.truncated_to_real, x2.truncated_to_real, y2.truncated_to_real)
			pixmap.set_position (rr.point_a)
		end
		
feature {NONE} -- Implementation

	pixmap: DRAWABLE_ICON
			-- Picture for the player
			
	circle: DRAWABLE_CIRCLE
			-- Circle for marking current player

	environment: EV_ENVIRONMENT
			-- Used to access main_controller

	main_controller: MAIN_CONTROLLER
			-- Used to access sleep and process_events

	canvas: TRAFFIC_CANVAS
			-- Used to draw in animate_defeat
		
invariant
	displayer_has_player: player /= Void

end

--|--------------------------------------------------------
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
