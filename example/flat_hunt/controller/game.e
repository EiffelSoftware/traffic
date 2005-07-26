indexing
	description	: "Logic for the Flat Hunt game"
	status:	"See notice at end of class"
	author: "Marcel Kessler & Rolf Bruderer, ETH Zurich"
	date: "$Date$"
	revision: "$Revision$"

class
	GAME
	
inherit
	GAME_CONSTANTS

create 
	make
	
feature -- Initialization

	make is
			-- Creation procedure.
		do
			create info_text.make_empty
			create checkpoints.make
			checkpoints.fill (<< 3, 8, 13, 18, 23 >>)
		end			

	start_game is
			-- Prepare the board, start the game.
		require
			correct_number_of_hunters: 1 <= hunter_count and hunter_count <= 8
			correct_game_mode: (Hunt <= game_mode) and (game_mode <= Demo)
		local
			player_factory: PLAYER_FACTORY
		do
			create player_factory.make (traffic_map)
			create players.make (hunter_count + 1)
			current_round_number := 0
			current_player_index := 0
			state := Prepare_state
			if game_mode = Hunt then
				player_factory.build_players (True, False, hunter_count)
			elseif game_mode = Escape then
				player_factory.build_players (False, True, hunter_count)
			elseif game_mode = Versus then
				player_factory.build_players (False, False, hunter_count)
			elseif game_mode = Demo then
				player_factory.build_players (True, True, hunter_count)
			end
			players := player_factory.players
			estate_agent ?= players.first
			check 
				estate_agent /= Void 
			end
			next_turn
		ensure
			estate_agent_exists: estate_agent /= Void
			players_exist: players /= Void
			correct_round_number: current_round_number = 1
		end

feature {MAIN_CONTROLLER} -- Status setting

	set_traffic_map (a_traffic_map: TRAFFIC_MAP) is
			-- Set the game's map.
		do
			traffic_map := a_traffic_map
		end

	set_game_mode (a_mode: INTEGER) is
			-- Set mode of game.
		do
			game_mode := a_mode
		end
		
	set_number_of_hunters (a_number: INTEGER) is
			-- Set `number_of_flat_hunters' to `a_number'.
		require
			correct_number: (1 <= a_number) and (a_number <= 8)			
		do
			hunter_count := a_number
		ensure
			correct_number_of_hunters: (1 <= hunter_count) and (hunter_count <= 8)
		end
	
feature {NONE} -- Status report

	is_occupied (location: TRAFFIC_PLACE): BOOLEAN is
			-- Check if `location' is occupied by some flat hunter.
		require
			location_not_void: location /= Void
		local
			old_cursor: CURSOR			
		do
			-- Remember old cursor position.
			old_cursor := players.cursor		

			-- Loop over all players to check if one occupies `location'.
			from
				players.start
				players.forth -- do not consider estate agent
			until
				players.after or Result
			loop
				if players.item.location = location then
					Result := True
				end
				players.forth
			end
			
			-- Restore old cursor position.
			players.go_to (old_cursor)						
		end

	calculate_possible_moves (a_player: PLAYER) is
			-- Create list of possible moves for `a_player' (if enough tickets available).
		require
			traffic_map_exists: traffic_map /= Void
			player_exists: a_player /= Void
		local
			temp_line_section: TRAFFIC_LINE_SECTION
			tram_line_section: TRAFFIC_LINE_SECTION
			other: TRAFFIC_PLACE
			outgoing_line_sections: LINKED_LIST [TRAFFIC_LINE_SECTION]
			ll: LINKED_LIST [TRAFFIC_LINE_SECTION]
		do
			create ll.make
			outgoing_line_sections := traffic_map.transport_network.outgoing_line_sections (a_player.location)
			from
				outgoing_line_sections.start
			until
				outgoing_line_sections.after
			loop
				temp_line_section ?= outgoing_line_sections.item
				if temp_line_section /= Void and then a_player.enough_tickets (temp_line_section.type) then
					other := temp_line_section.other_end (a_player.location)
					if not is_occupied (other) then
						ll.extend (temp_line_section)
						tram_line_section := two_station_tram_line_section (a_player.location, temp_line_section)
						if tram_line_section /= Void then
							if not is_occupied (tram_line_section.other_end (a_player.location)) then
								ll.extend (tram_line_section)
							end
						end
					end
				end
				outgoing_line_sections.forth
			end
			a_player.set_possible_moves (ll)
		ensure
			linked_list_created: a_player.possible_moves /= Void
		end
	
feature {MAIN_CONTROLLER} -- Basic operations

	prepare is
			-- Display current player, check if not stuck.
		do
			if current_player = estate_agent then
				update_agent_visibility
			end
			calculate_possible_moves (current_player)
			if current_player.possible_moves.is_empty then
				if current_player = estate_agent then
					state := Agent_stuck
				else
					current_player.displayer.display_after_move
					next_turn
					if not is_game_over then
						state := Prepare_state
					end
				end
			else
				state := Play_state
			end				
		end
	
	play is
			-- Give player possibility to make a move.
		do
			current_player.play (place)
			set_selected_place (Void)
			if current_player.next_move /= Void then
				state := Move_state			
			end
		end

	move is
			-- Make the chosen move.
		do
			current_player.move
			if current_player.location = estate_agent.location and current_player /= estate_agent then
				state := Agent_caught
			else
				state := Prepare_state			
				next_turn
			end
		end

feature {MAIN_CONTROLLER} -- Display

	display_end_game is
			-- Display states when game is finished
		do
			info_text.wipe_out
			if state = agent_caught then
				info_text.append ("Estate agent was found in round " + current_round_number.out + "%N%N")
			elseif state = agent_stuck then
				info_text.append ("Estate agent was encircled in round " + current_round_number.out + "%N%N")
			elseif state = agent_escapes then
				info_text.append ("Estate agent escaped! %N%N")
			else
				info_text.append ("Quit game%N")
			end			
			display_states
			info_text.append ("%NEstate agent: %N" + estate_agent.displayer.print_location)
		end
		
	display_before_prepare is
			-- Display the player's state before the move.
		do
			info_text.wipe_out
			display_states
--			if estate_agent.displayer.visible then
--				info_text.append ("%NEstate agent: %N" + estate_agent.displayer.print_location)
--			end
		end

	display_states is
			-- Display the game states.
		do
			info_text.append ("Round: " + current_round_number.out + "%N")
			info_text.append ("Play: " + current_player.name + "%N%N")
			info_text.append ("Flat hunters: %N" + print_hunter_locations)
		end

feature {MAIN_CONTROLLER, GAME_DISPLAYER} -- Element change

	next_turn is
			-- Change the player's state before the next game loop.
		require 
			prepare_state: state = Prepare_state
		do
			last_player := current_player			
			current_player_index := (current_player_index \\ players.count) + 1
			current_player := players.i_th (current_player_index)
			if current_player_index = 1 then
				current_round_number := current_round_number + 1
				update_agent_visibility
				if current_round_number = Default_number_of_rounds then
					state := Agent_escapes
				end
			end
		end

	update_agent_visibility is
			-- Make agent visible if current round is a checkpoint.
		require 
			prepare_state: state = Prepare_state
		do
			if checkpoints.has (current_round_number) then
				estate_agent.set_last_estate_agent_location
			end
			if game_mode /= Hunt or is_game_over or checkpoints.has (current_round_number) then
				estate_agent.displayer.set_visible (True)
			else
				estate_agent.displayer.set_visible (False)
			end
		end
		
	set_selected_place (a_place: TRAFFIC_PLACE) is
			-- Set place being passed to player.
		do
			place := a_place
		end
	
feature {MAIN_CONTROLLER} -- Access

	traffic_map: TRAFFIC_MAP
			-- Reference to the game's map

	players: ARRAYED_LIST [PLAYER]
			-- List of all the players (estate agent is first)
	
	current_player: PLAYER 
			-- Player whose turn it is
			
	current_player_index: INTEGER 
			-- Index of `current_player' in `players'.
			
	last_player: PLAYER 
			-- Last player that moved
			
	estate_agent: ESTATE_AGENT
			-- Estate agent, the guy who rents the flat

	place: TRAFFIC_PLACE
			-- Used to pass clicked place to player

	current_round_number: INTEGER
			-- Count from 1 to `default_number_of_rounds'
		
	default_number_of_rounds: INTEGER is 24
			-- Maximum number of rounds
	
	hunter_count: INTEGER
			-- Number of hunters
			
	info_text: STRING
			-- To be displayed in main_window

	checkpoints: BINARY_SEARCH_TREE_SET [INTEGER]
			-- Estate agent has to show himself in these rounds
			
feature -- Output

	print_hunter_locations: STRING is
			-- Display the location of each flat hunter.
		local
			i: INTEGER
		do
			Result := ""
			from 
				i := 2
			until
				i > players.count
			loop
				Result.append (players.i_th (i).displayer.print_location)
				i := i + 1
			end
		end	

feature {NONE} -- Implementation

	two_station_tram_line_section (origin: TRAFFIC_PLACE; a_line_section: TRAFFIC_LINE_SECTION): TRAFFIC_LINE_SECTION is
			-- Create line_section to tram stop that is two segments away from 'origin' going  through 'a_line_section'.
		require
			origin_exists: origin /= Void
			a_line_section_exists: a_line_section /= Void
			a_line_section_from_origin: a_line_section.has (origin)
		local
			passing_place: TRAFFIC_PLACE
			destination: TRAFFIC_PLACE
			temp_line: ONE_WAY_LINE
			temp_line_section: TRAFFIC_LINE_SECTION
		do
	 		
	 		-- Only for tram line it is allowed to drive two places in one move.
			if a_line_section.type.is_equal (a_line_section.Tram_type) then
				
		 		-- Get the other place of `a_line_section' which `Result' has to pass.
		 		passing_place := a_line_section.other_end(origin)
			
				-- Try the next line_section in the south-west direction.
				if a_line_section.line.ne_to_sw_line.last_line_section /= a_line_section then
					temp_line := a_line_section.line.ne_to_sw_line
					temp_line.start
					temp_line.search_line_section_forth (a_line_section)
					if not temp_line.after then
						temp_line.forth
						temp_line_section := temp_line.line_section_for_iteration
					end
					if temp_line_section /= Void and then temp_line_section.has (passing_place) then
						destination := temp_line_section.other_end (passing_place)
					end
				end
				
				-- Try the next line_section in the north-east direction.
				if a_line_section.line.sw_to_ne_line.last_line_section /= a_line_section then
					temp_line := a_line_section.line.sw_to_ne_line
					temp_line.start
					temp_line.search_line_section_forth (a_line_section)
					if not temp_line.after then
						temp_line.forth
						temp_line_section := temp_line.line_section_for_iteration
					end
					if temp_line_section /= Void and then temp_line_section.has (passing_place) then
						destination := temp_line_section.other_end (passing_place)
					end
				end
				
				-- create `Result' from `origin' to `destination'.
				if destination /= Void then
					create Result.make (a_line_section.Tram_type, False, origin, destination)
				end		
				
			end		
			
		ensure
			result_is_tram_line_section: Result /= Void implies Result.type.is_equal (a_line_section.Tram_type)
			result_starts_in_origin: Result /= void implies Result.from_place = origin
			result_has_other_destination: Result /= void implies (Result.to_place /= Void and Result.to_place /= a_line_section.from_place and Result.to_place /= a_line_section.to_place)			
		end
	
end

--|--------------------------------------------------------
--| This file is Copyright (C) 2004 by ETH Zurich.
--|
--| For questions, comments, additions or suggestions on
--| how to improve this package, please write to:
--|
--|     Marcel Kessler <kesslema@student.ethz.ch>
--|     Michela Pedroni <michela.pedroni@inf.ethz.ch>
--|     Rolf Bruderer <bruderer@computerscience.ch>
--|
--|--------------------------------------------------------
