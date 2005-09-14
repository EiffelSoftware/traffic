indexing
	description: "[
					Controller that steers the application's behavior 
					and mediates between visual input/output and changes of the map model.
					After creation you are supposed to call 
					`initialize_with_game_and_scene (a_game: GAME; a_game_scene: GAME_SCENE)'.
					After that, the game can be started with `start_game'.
				]"
	date: "$Date$"
	revision: "$Revision$"

class 
	MAIN_CONTROLLER 

inherit
	GAME_CONSTANTS
	
	THEME
	
create
	make

feature -- Initialization

	make (a_game: like game; a_game_scene: like game_scene) is
			-- Creation procedure.
		require
			a_game_exists: a_game /= Void
			a_game_scene_exists: a_game_scene /= Void
		do
			default_create
			game := a_game
			game_scene := a_game_scene
			game_scene.set_pause_callback (agent take_a_pause)			
			create status.make (0)
		ensure
			game_set: game = a_game
			game_scene_set: game_scene = a_game_scene
			status_exists: status /= Void
		end
			
feature -- Game operations

	start_game is
			-- Create and start game.
		do
			end_game_called_once := False
			game.create_players
			game_scene.create_players_from_list (game.players)
			subscribe_to_clicked_place_event (agent process_clicked_place)			
			subscribe_to_outside_event (agent idle_action)
			game.start_game
			status_before_prepare
			update_status
			
			play_called_once := False
			move_called_once := False
			take_a_pause (False)
		ensure
			end_game_called_once_set: end_game_called_once = False
			play_called_once_set: play_called_once = False
			move_called_once_set: move_called_once = False
		end

	end_game is
			-- Display end game text, markings and menu when game over.
		local
			i: INTEGER		
		do
			if not end_game_called_once then
				end_game_called_once := True
				status_game_over
				update_status
				
				-- Unmark players.
				from
					game.players.start
				until
					game.players.off
				loop
					game.players.item.set_unmarked
					game.players.forth
				end
				
				-- Display players and their defeat marking.
				game.estate_agent.set_visibility (True)				
				if game.state = game.Agent_caught or game.state = game.Agent_stuck then
					-- Flat hunters win.
					game.estate_agent.set_defeated (True)
					game_scene.center_on_player (game.estate_agent)
				elseif game.state = game.Agent_escapes then
					-- Estate agent wins.
					from
						i := 2
					until
						i > game.players.count or paused or not game.is_game_over
					loop
						game.players.i_th (i).set_defeated (True)
						i := i + 1
					end
				end	
				game_scene.display_end_game
			end
		end		

feature -- Output

	status_game_over is
			-- Status to be displayed when game is over
		do
			status.wipe_out
			status := "G A M E   O V E R!"
			if game.state = agent_caught then
				status := status + "%NEstate agent was found in round " + game.current_round_number.out + "%Nat " + game.estate_agent.location.name
			elseif game.state = agent_stuck then
				status := status +"%NEstate agent was encircled in round " + game.current_round_number.out + "%Nat " + game.estate_agent.location.name
			elseif game.state = agent_escapes then
				status := status + "%NEstate agent escaped!" + "%NEstate agent: " + game.estate_agent.location.name			
			end			
		end
		
	status_before_prepare is
			-- Status of player before the move
		do
			status.wipe_out
			status_overview			
			status := status + "%N%NStatus of current player:%N" + game_scene.player_displayers.i_th (game.current_player_index).statistics
		end

	status_overview is
			-- General overview
		do
			status := "Round: " + game.current_round_number.out + "%NCurrent Player: " + game.current_player.name
		end

	update_status is
			-- Update status of current game
		do
			game_scene.set_status (status)
			game_scene.update_status_box
			game_scene.update_player_status_box (game.current_player_index)
		end		

feature -- Event handling

	subscribe_to_clicked_place_event (an_agent: PROCEDURE [ANY, TUPLE [TRAFFIC_PLACE]]) is
			-- Subscribe `an_agent' to clicked place event
		do
			game_scene.big_map_widget.subscribe_to_clicked_place_event (an_agent)
		end

	subscribe_to_outside_event (a_procedure: PROCEDURE [ANY, TUPLE]) is
			-- Subscribe `a_procedure' to `outside_event' of `game_scene'
		do
			game_scene.event_loop.outside_event.subscribe (a_procedure)
		end

	process_clicked_place (a_place: TRAFFIC_PLACE; a_mouse_event: EM_MOUSEBUTTON_EVENT) is
			-- What happens when a place gets clicked on the big map widget.
		local
			place_renderer: FLAT_HUNT_PLACE_RENDERER
		do
			-- Only react if left mouse button pressed, and `a_place' is destination of a possible move of current player.
			if a_mouse_event.is_left_button and then game.current_player.possible_moves.there_exists (agent has_place (?, a_place)) then
				--Color place red
				create place_renderer.make_with_map (game.traffic_map)
				place_renderer.set_place_color (red)
				game_scene.big_map_widget.set_place_special_renderer (place_renderer, a_place)
				game.set_selected_place (a_place)
				
				--Re-Render the scene for the effects to be visible
				game_scene.big_map_widget.render
			end			
		end	

feature {NONE} -- Game loop implementation

	prepare is
			-- Prepare current player to make a move.
		require
			no_pause_taken: not paused
			game_state_prepare: game.state = game.Prepare_state
		do
			-- Prepare current player.
			if game.current_player /= game.estate_agent or game.estate_agent.is_visible then
				game_scene.center_on_player (game.current_player)
				game.current_player.set_marked
			end
			
			-- Update status boxes.
			if game.current_player = game.estate_agent then
				game.update_agent_visibility				
			end
			status_before_prepare
			update_status			
				
			-- Prepare game and redraw scene.
			game.prepare
			game_scene.redraw
		ensure
			correct_game_state: game.state = game.Prepare_state or game.state = game.Play_state or game.state = game.Agent_stuck
		end		

	play is
			-- Let current player choose next move.
		require
			no_pause_taken: not paused
			game_state_play: game.state = game.Play_state
		do
			if not play_called_once then
				play_called_once := True
			end
			game.play
			game_scene.redraw
			move_called_once := False
		ensure
			correct_game_state: game.state = game.Play_state or game.state = game.Move_state
		end
		
	move is
			-- Perform player's move and update display.
		require
			no_pause_taken: not paused
			move_state_set: game.state = game.Move_state
		do
			if not move_called_once then
				move_called_once := True
				game.move
				game.last_player.set_unmarked				
				game_scene.redraw
				play_called_once := False
			end
		ensure
			correct_game_state: game.state = game.Prepare_state or game.state = game.Agent_caught or game.state = game.Agent_escapes
		end

feature {NONE} -- Implementation

	game: GAME
			-- Game logic.

	game_scene: GAME_SCENE
			-- Where the game is visualized.
			
	status: STRING
			-- Status of current `game' to be displayed in `game_scene',

	paused: BOOLEAN
			-- Is game currently on paused?

	play_called_once: BOOLEAN
			-- Has the current player already played (i.e. chosen his move)?

	move_called_once: BOOLEAN
			-- Has the current player already moved?	

	end_game_called_once: BOOLEAN
			-- Is the game already game over?
			
	idle_action is
			-- Things that are done when nothing else is processing.
		do
			if game /= Void and then not paused then
				if game.state = game.Prepare_state then
					prepare
				end
				if game.state = game.Play_state then
					play
					if game.current_player /= Void and then game.current_player.brain.generating_type.substring (1, 3).is_equal ("BOT") then
						sleep_and_process (1500)
					end
				end
				if not paused and game.state = game.Move_state then
					move
				if game.last_player /= Void then
						sleep_and_process (1500)
					end
				end
				if game.is_game_over then
					take_a_pause (True)
					end_game
				end
			end
		end

	take_a_pause (b: BOOLEAN) is
			-- Pause game.
		do
			paused := b
		ensure
			paused_set: paused = b
		end

	toggle_paused is
			-- pause/continue game.
		do
			take_a_pause (not paused)
		end

	sleep_and_process (a_time: INTEGER) is
			-- Sleep for `a_time' milliseconds and let event loop process events in the meantime.
		do
			game_scene.event_loop.delay_and_process (a_time)
		end		

	has_place (a_line_section: TRAFFIC_LINE_SECTION; a_place: TRAFFIC_PLACE): BOOLEAN is
			-- Is `a_line_section.destination' equal `a_place'?
		require
			a_line_section_exists: a_line_section /= Void
			a_place_exists: a_place /= Void
		do
			Result := (a_line_section.destination = a_place)
		end

invariant
	game_exists: game /= Void
	status_exists: status /= Void
	
end
