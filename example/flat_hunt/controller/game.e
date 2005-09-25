indexing
	description	: "Logic for the Flat Hunt game."
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
	make
	
feature -- Initialization

	make (a_game_mode: like game_mode; a_hunter_count: like hunter_count; a_map_name: like map_name; open_map: BOOLEAN) is
			-- Create with given game settings.
		require
			a_game_mode_valid: a_game_mode >= 1 and a_game_mode <= 4			
			a_hunter_count_valid: (1 <= a_hunter_count) and (a_hunter_count <= 8)
			a_map_name_exists: a_map_name /= Void
		do
			-- Settings.
			game_mode := a_game_mode
			hunter_count := a_hunter_count
			map_name := a_map_name
			
			-- Create `traffic_map'.
			if open_map then
				create_map
			end

			-- Create `players'.
			create players.make (hunter_count + 1)
			
			-- Build checkpoints.
			create checkpoints.make
			checkpoints.fill (<< 3, 8, 13, 18, 23 >>)			
		ensure
			game_mode_set: game_mode = a_game_mode
			hunter_count_set: hunter_count = a_hunter_count
			map_name_set: map_name = a_map_name
		end
		
feature -- Access

	traffic_map: TRAFFIC_MAP
			-- The game's map including all the places, line_sections etc.
	
	map_name: STRING
			-- Name of the map to be loaded for the game.
				
	estate_agent: ESTATE_AGENT
			-- Estate agent, the guy who rents the flat.
			
	players: ARRAYED_LIST [PLAYER]
			-- List of all the players (estate agent is first).
			
	last_player: PLAYER 
			-- Last player that moved.

	current_player: PLAYER 
			-- Player whose turn it is.
			
	current_player_index: INTEGER 
			-- Index of `current_player' in `players'.
	
	current_round_number: INTEGER
			-- Count from 1 to `default_number_of_rounds'.

	hunter_count: INTEGER
			-- Number of hunters.

feature -- Status Setting

	set_map (a_map_name: like map_name) is
			-- Set `map_name' to `a_map_name'.
		require
			a_map_name_exists: a_map_name /= Void
		do
			map_name := a_map_name
		ensure
			map_name_set: map_name = a_map_name
		end		

	set_traffic_map (a_traffic_map: like traffic_map) is
			-- Set `traffic_map' to `a_traffic_map'.
		require
			a_traffic_map_exists: a_traffic_map /= Void
		do
			traffic_map := a_traffic_map
		ensure
			traffic_map_set: traffic_map = a_traffic_map
		end	
		
	set_game_mode (a_game_mode: like game_mode) is
			-- Set `game_mode' to `a_game_mode'.
		require
			a_game_mode_valid: a_game_mode >= 1 and a_game_mode <= 4
		do
			game_mode := a_game_mode
		ensure
			game_mode_set: game_mode = a_game_mode
		end
		
	set_number_of_hunters (a_hunter_count: like hunter_count) is
			-- Set hunter count to `a_hunter_count'.
		require
			a_hunter_count_valid: (1 <= a_hunter_count) and (a_hunter_count <= 8)
		do
			hunter_count := a_hunter_count
		ensure
			hunter_count_set: hunter_count = a_hunter_count
		end	
		
	set_selected_place (a_place: TRAFFIC_PLACE) is
			-- Set place being passed to player.
			-- Can have `Void' as an argument.
		do
			selected_place := a_place
		ensure
			selected_place_set: selected_place = a_place
		end

feature -- Basic Operations

	create_map is
			-- Open map with name `map_name'.
		local
			a_map_file: TRAFFIC_MAP_FILE			
		do
			create a_map_file.make_from_file (map_name)
			traffic_map := a_map_file.traffic_map
		ensure
			traffic_map_exits: traffic_map /= Void
		end	

	create_players is
			-- Create and prepare players.
		require
			traffic_map_exists: traffic_map /= Void
		local
			player_factory: PLAYER_FACTORY
		do
			create player_factory.make (traffic_map)			
	
			-- Build players.
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
			
			-- Estate agent special handling.
			estate_agent ?= players.first
			check 
				estate_agent /= Void 
			end
		ensure
			estate_agent_exists: estate_agent /= Void
		end

	start_game is
			-- Prepare the board, start the game.
		do
			-- Set defaults.
			current_round_number := 0
			current_player_index := 0
			state := Prepare_state
			
			-- Begin.
			next_turn
		ensure
			correct_round_number: current_round_number = 1
		end
	
feature {MAIN_CONTROLLER} -- Game operations

	prepare is
			-- Display current player, check if not stuck.
		require
			prepare_state: state = Prepare_state
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
		require
			play_state: state = Play_state
		do
			current_player.play (selected_place)
			set_selected_place (Void)
			if current_player.next_move /= Void then
				state := Move_state			
			end
		ensure
			state_set: current_player.next_move /= Void implies state = Move_state
		end

	move is
			-- Make the chosen move.
		require
			move_state: state = Move_state
		do
			if current_player = estate_agent then
				update_agent_visibility
			end		
			current_player.move
			if current_player.location = estate_agent.location and current_player /= estate_agent then
				state := Agent_caught
				update_agent_visibility
			else
				state := Prepare_state			
				next_turn
			end
		end

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
			if current_player.possible_moves /= Void then
				current_player.possible_moves.wipe_out				
			end
		ensure
			current_player_index_set: current_player_index = (old current_player_index \\ players.count) + 1
		end

	update_agent_visibility is
			-- Make agent visible if current round is a checkpoint.
		do
			if checkpoints.has (current_round_number) then
				estate_agent.set_last_visible_location_and_round
			end
			if game_mode /= Hunt or is_game_over or (checkpoints.has (current_round_number) and state = Prepare_state) then
				estate_agent.set_visibility (True)
			else
				estate_agent.set_visibility (False)
			end
		end
		
feature {NONE} -- Status report

	is_occupied (a_location: TRAFFIC_PLACE): BOOLEAN is
			-- Check if `a_location' is occupied by some flat hunter.
		require
			a_location_exists: a_location /= Void
		local
			old_cursor: CURSOR			
		do
			Result := False
			
			-- Remember old cursor position.
			old_cursor := players.cursor		

			-- Loop over all players to check if one occupies `a_location'.
			from
				players.start
				players.forth -- do not consider estate agent, hence skip the first entry in `players'.
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

feature {NONE} -- Implementation

	selected_place: TRAFFIC_PLACE
			-- Used to pass clicked place to player.

	checkpoints: BINARY_SEARCH_TREE_SET [INTEGER]
			-- Estate agent has to show himself in these rounds.

	calculate_possible_moves (a_player: PLAYER) is
			-- Create list of possible moves for `a_player' (if enough tickets available).
		require
			a_player_exists: a_player /= Void
			traffic_map_exists: traffic_map /= Void
		local
			tmp_line_section: TRAFFIC_LINE_SECTION
			tmp_two_station_line_sections: LINKED_LIST [TRAFFIC_LINE_SECTION]
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
						-- can move two stations at once if desired.
						if tmp_line_section.type = Tram_type then
							tmp_two_station_line_sections := two_station_tram_line_section (tmp_line_section)
							from
								tmp_two_station_line_sections.start
							until
								tmp_two_station_line_sections.after
							loop
								if tmp_two_station_line_sections.item /= Void then
									possible_moves.extend (tmp_two_station_line_sections.item)
								end
								tmp_two_station_line_sections.forth
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

	two_station_tram_line_section (a_line_section: TRAFFIC_LINE_SECTION): LINKED_LIST [TRAFFIC_LINE_SECTION] is
			-- Create line sections to all tram stops that are two segments away from `a_line_section.origin' going  through `a_line_section'.
		require
			a_line_section_exists: a_line_section /= Void
			traffic_map_exists: traffic_map /= Void
		local
			destination: TRAFFIC_PLACE
			outgoing_line_sections: LIST [TRAFFIC_LINE_SECTION]
		do				
			create Result.make
			outgoing_line_sections := traffic_map.line_sections_of_place (a_line_section.destination.name)
			from
				outgoing_line_sections.start
			until
				outgoing_line_sections.after
			loop
				if (outgoing_line_sections.item.type = Tram_type and then outgoing_line_sections.item.destination /= a_line_section.origin) then 
				-- TODO: and then outgoing_line_sections.item.line = a_line_section.line ??
					destination := outgoing_line_sections.item.destination
					Result.extend (create {TRAFFIC_LINE_SECTION}.make (a_line_section.origin, destination, Tram_type, Void))
				end
				outgoing_line_sections.forth
			end
		end

invariant
	checkpoints_exist: checkpoints /= Void
	game_mode_valid: game_mode >= 1 and game_mode <= 4			
	hunter_count_valid: (1 <= hunter_count) and (hunter_count <= 8)
	players_exist: players /= Void
	
end
