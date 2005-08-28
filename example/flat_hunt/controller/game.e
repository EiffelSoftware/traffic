indexing
	description	: "Logic for the Flat Hunt game"
	date: "$Date$"
	revision: "$Revision$"

class
	GAME
	
inherit
	GAME_CONSTANTS

	TRAFFIC_TYPE_FACTORY
		rename
			make as make_type_factory
		undefine
			default_create
		end
		
create 
	make, make_with_constants
	
feature -- Initialization

	make is
			-- Creation procedure.
		do
			create checkpoints.make
			checkpoints.fill (<< 3, 8, 13, 18, 23 >>)
		end			

	make_with_constants (a_game_mode: INTEGER; a_hunter_count: INTEGER; a_traffic_map: TRAFFIC_MAP) is
			-- Create with given game mode, hunter count, traffic map
		do
			make
			set_game_mode (a_game_mode)
			set_number_of_hunters (hunter_count)
			set_traffic_map (a_traffic_map)
		end
		
	create_players is
			-- Create and prepare players
		require
			correct_number_of_hunters: 1 <= hunter_count and hunter_count <= 8
			correct_game_mode: (Hunt <= game_mode) and (game_mode <= Demo)
		local
			player_factory: PLAYER_FACTORY
		do
			create player_factory.make (traffic_map)
			create players.make (hunter_count + 1)
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
		ensure
			estate_agent_exists: estate_agent /= Void
			players_exist: players /= Void			
		end
		

	start_game is
			-- Prepare the board, start the game.
		require
			players_exist: players /= Void
		do
			current_round_number := 0
			current_player_index := 0
			state := Prepare_state
			next_turn
		ensure
			correct_round_number: current_round_number = 1
		end

feature -- Status setting

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

	is_occupied (a_location: TRAFFIC_PLACE): BOOLEAN is
			-- Check if `a_location' is occupied by some flat hunter.
		require
			a_location_not_void: a_location /= Void
		local
			old_cursor: CURSOR			
		do
			-- Remember old cursor position.
			old_cursor := players.cursor		

			-- Loop over all players to check if one occupies `a_location'.
			from
				players.start
				players.forth -- do not consider estate agent
			until
				players.after or Result
			loop
				if players.item.location = a_location then
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
			tmp_line_section: TRAFFIC_LINE_SECTION
			outgoing_line_sections: LIST [TRAFFIC_LINE_SECTION]
			possible_moves: LINKED_LIST [TRAFFIC_LINE_SECTION]
		do
			create possible_moves.make
			outgoing_line_sections := traffic_map.line_sections_of_place (a_player.location.name)
			from
				outgoing_line_sections.start
			until
				outgoing_line_sections.after
			loop
				tmp_line_section := outgoing_line_sections.item
				if tmp_line_section /= Void and then a_player.enough_tickets (tmp_line_section.type) then
					if not is_occupied (tmp_line_section.destination) then
						possible_moves.extend (tmp_line_section)
						-- Special handling for tram line sections, because with a tram you
						-- can move two stations at once if desired
						if tmp_line_section.type = Tram_type then
							tmp_line_section := two_station_tram_line_section (tmp_line_section)
							if tmp_line_section /= Void then
								possible_moves.extend (tmp_line_section)								
							end
						end
					end
				end
				outgoing_line_sections.forth
			end
			a_player.set_possible_moves (possible_moves)
		ensure
			possible_moves_set: a_player.possible_moves /= Void
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
					current_player.set_unmarked
--					current_player.set_possible_moves (Void)
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
			current_player.play (selected_place)
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

feature -- Element change

	next_turn is
			-- Change the player's state before the next game loop.
		require 
			prepare_state: state = Prepare_state
		do

			last_player := current_player
--			if last_player /= Void then
--				last_player.set_unmarked				
--			end
			current_player_index := (current_player_index \\ players.count) + 1
			current_player := players.i_th (current_player_index)
--			current_player.set_marked			
			if current_player_index = 1 then
				current_round_number := current_round_number + 1
				update_agent_visibility
				if current_round_number = Default_number_of_rounds then
					state := Agent_escapes
				end
			end
			if current_player.possible_moves /= Void then
				current_player.possible_moves.wipe_out				
			end			
		end

	update_agent_visibility is
			-- Make agent visible if current round is a checkpoint.
		require 
--			prepare_state: state = Prepare_state
		do
			if checkpoints.has (current_round_number) then
				estate_agent.set_last_visible_location
			end
			if game_mode /= Hunt or is_game_over or checkpoints.has (current_round_number) then
				estate_agent.set_visible (true)
			else
				estate_agent.set_visible (false)
			end
		end
		
	set_selected_place (a_place: TRAFFIC_PLACE) is
			-- Set place being passed to player.
		do
			selected_place := a_place
		end
	
feature -- Access

	traffic_map: TRAFFIC_MAP
			-- The game's map including all the places, line_sections etc.

	hunter_count: INTEGER
			-- Number of hunters
			
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

	selected_place: TRAFFIC_PLACE
			-- Used to pass clicked place to player

	current_round_number: INTEGER
			-- Count from 1 to `default_number_of_rounds'
			
	info_text: ARRAYED_LIST [STRING]
			-- To be displayed in a status box of the game scene

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
				Result.append (players.i_th (i).location.name)
				i := i + 1
			end
		end	

feature {NONE} -- Implementation

	two_station_tram_line_section (a_line_section: TRAFFIC_LINE_SECTION): TRAFFIC_LINE_SECTION is
			-- Create line_section to tram stop that is two segments away from `a_line_section.origin' going  through `a_line_section'.
		require
			a_line_section_exists: a_line_section /= Void
		local
			destination: TRAFFIC_PLACE
			outgoing_line_sections: LIST [TRAFFIC_LINE_SECTION]
		do				
			outgoing_line_sections := traffic_map.line_sections_of_place (a_line_section.destination.name)
			from
				outgoing_line_sections.start
			until
				outgoing_line_sections.after -- or else (outgoing_line_sections.item.type = Tram_type and outgoing_line_sections.item.destination /= a_line_section.origin)
			loop
				if (outgoing_line_sections.item.type = Tram_type and then outgoing_line_sections.item.destination /= a_line_section.origin) then
					destination := outgoing_line_sections.item.destination
				end
				outgoing_line_sections.forth
			end
			
			if destination /= Void and then not is_occupied (destination) then
				create Result.make (a_line_section.origin, destination, Tram_type, Void)				
			else
				Result := Void
			end
		ensure
--			result_is_tram_line_section: Result /= Void implies Result.type.is_equal (a_line_section.Tram_type)
--			result_starts_in_origin: Result /= void implies Result.from_place = origin
--			result_has_other_destination: Result /= void implies (Result.to_place /= Void and Result.to_place /= a_line_section.from_place and Result.to_place /= a_line_section.to_place)			
		end
	
end
