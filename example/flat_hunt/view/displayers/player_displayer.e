indexing
	description: "Display a player on the board"
	author: "Marcel Kessler, Ursina Caluori"
	date: "$Date$"
	revision: "$Revision$"

deferred class
	PLAYER_DISPLAYER

inherit

	ESDL_DRAWABLE
	
	ESDL_ANIMATABLE
	
	DISPLAY_CONSTANTS
		export
			{NONE} all
		undefine
			default_create
		end

feature -- Initialization
		
	make_from_player (a_player: PLAYER; a_pic: ESDL_BITMAP) is
			-- Initialize displayer for `a_player'.
		require
			player_exists: a_player /= Void
		do
			player := a_player
			picture := a_pic
			create circle.make_inside_box (picture.bounding_box)
			update_position
		ensure
			player_set: player = a_player
			picture_set: picture = a_pic
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
			update_position
		end

	clear is
			-- Remove all players (clear_game).
		do
--			unmark_player
--			remove_command (pixmap)
--			unmark_possible_moves_special
		end
	
	clear_markings is
			-- Remove all markings (end_game).
		do
--			unmark_player
--			unmark_possible_moves_special
		end
		
	animate_defeat is
			-- Animate the defeat of the player.
		local
--			cir: ESDL_CIRCLE
--			position: ESDL_VECTOR_2D
--			color: ESDL_COLOR
--			count: INTEGER
--		do
--			create position.make (player.location.position.x, player.location.position.y)
--			create cir.make (position)
--			create color.make_with_8_bit_rgb (0, 0, 0)
--			cir.set_color (color)
--			cir.set_diameter (50)
--			cir.draw (canvas)
--				-- Remove the last few commands if you use them in the loop
--			from
--				-- Fill
--			until
--				True
--				-- Replace `True' and fill
--			loop
--				-- Fill
--				process (80)
--				-- `process' should be kept, but you can change the number 
--			end
		end
		
	process (msec: INTEGER) is
				-- Wait and process events.
		local
			i: INTEGER
		do
--			if not main_controller.break or not main_controller.game.is_game_over then
--				from
--					i := 0
--				until
--					i >= msec / 20 or main_controller.is_destroyed 
--				loop
--					main_controller.sleep (5)
--					i := i + 1	
--				end
--				main_controller.process_events
--				canvas.redraw
--			end
		end

feature -- Access

	player: PLAYER
			-- Reference to player to be displayed

	picture: ESDL_BITMAP
			-- Picture for the player
			
	set_picture (a_pic: ESDL_DRAWABLE) is
			-- Set `picture' to `a_pic'.
		do
			picture := a_pic
			update_position
		end
		
	update_position is
			-- Update position to passenger's position.
		local
			pos: ESDL_VECTOR_2D
		do
			pos := player.position
			x := (pos.x - (picture.width // 2))
			y := (pos.y - (picture.height // 2))
			picture.set_x_y (x, y)		
			circle.set_x_y (x, y)
		end	
		
	draw (surface: ESDL_SURFACE) is
			-- Draw 'Current' onto `surf'.
		do
			if picture /= Void then
				surface.draw_object (picture)
			end
			if marked then
				surface.draw_object (marking_circle)
			end
		end
		
	width: INTEGER is
			-- 
		do
			Result := picture.width
		end
		
	height: INTEGER is
			-- 
		do
			Result := picture.height
		end

feature -- Mouse handling

	publish_mouse_event (a_mouse_event: ESDL_MOUSE_EVENT) is
		do
			if bounding_box.has (a_mouse_event.proportional_position) then
				dispatch_mouse_event (a_mouse_event)								
				
				-- Passenger does not catch ...
				-- a_mouse_event.set_caught (True)
			end			
		end
	
feature -- Status report

	statistics: STRING is
			-- Number of tickets left etc.
		deferred
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
--			circle.set_center (real_coordinate (player.location.position))
--			insert_command (circle)
		end
		
	unmark_player is
			-- Remove red marking circle.
		do
--			remove_command (circle)
		end

	mark_possible_moves is
			-- Mark all possible places that the player can move to.
		local
--			pd: PLACE_DISPLAYER
		do
--			from
--				player.possible_moves.start
--			until
--				player.possible_moves.after
--			loop
--				pd ?= player.possible_moves.item.other_end (player.location).displayer
--				if pd /= Void and not pd.marked then
--					pd.mark
--				end
--				player.possible_moves.forth
--			end
		end

	unmark_possible_moves_special is
			-- Remove marking of possible moves in a uncertain state (maybe move has not been made).
		local
--			pd: PLACE_DISPLAYER
		do
--			if player.possible_moves /= Void then
--				from
--					player.possible_moves.start
--				until
--					player.possible_moves.after
--				loop
--					pd ?= player.possible_moves.item.from_place.displayer
--					if pd /= Void and pd.marked then
--						pd.unmark
--					end
--					pd ?= player.possible_moves.item.to_place.displayer
--					if pd /= Void and pd.marked then
--						pd.unmark
--					end
--					player.possible_moves.forth
--				end
--			end
		end			
		
	unmark_possible_moves is
			-- Remove marking of possible moves (after move has been made).
		local
--			pd: PLACE_DISPLAYER
		do
--			if player.possible_moves /= Void then
--				from
--					player.possible_moves.start
--				until
--					player.possible_moves.after
--				loop
--					if player.possible_moves.item.has (player.old_location) then
--						pd ?= player.possible_moves.item.other_end (player.old_location).displayer
--						if pd /= Void and pd.marked then
--							pd.unmark
--						end						
--					end
--					player.possible_moves.forth
--				end
--			end
		end
		
feature {NONE} -- Implementation
		
	marking_circle: ESDL_CIRCLE
			-- Circle for marking current player
		
	marked: BOOLEAN
			-- Is it this players turn ?

--	main_controller: MAIN_CONTROLLER
			-- Used to access sleep and process_events
		
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
