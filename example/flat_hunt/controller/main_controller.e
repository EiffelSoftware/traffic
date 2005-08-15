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
--	KL_SHARED_FILE_SYSTEM 
--		undefine
--			default_create, copy
--		end	

	GAME_CONSTANTS
	
	THEME
	
	EM_TIME_SINGLETON
	
create
	make

feature -- Initialization

	make is
			-- Creation procedure
		do
			default_create			
		end

	initialize_with_game_and_scene (a_game: GAME; a_game_scene: GAME_SCENE) is
			-- Initialize main controller
		require
			a_game_not_void: a_game /= Void
			a_game_scene_not_void: a_game_scene /= Void
		do
			game := a_game
			game_scene := a_game_scene
			create status.make (0)
		ensure
			game_set: game = a_game
			game_scene_set: game_scene = a_game_scene
		end

feature -- Game operations

	start is
			-- Adjust the game settings and start the game.
		do
			-- Nothing, redefined in class START
		end

	start_game is
			-- Create and start game.
		require
			traffic_map_exists: game.traffic_map /= Void
			correct_number_of_hunters: (1 <= game.hunter_count) and (game.hunter_count <= 8)
			correct_game_mode: (Hunt <= game.game_mode) and (game.game_mode <= Demo)
		do
			game.create_players
			game_scene.create_players_from_list (game.players)
			subscribe_to_clicked_place_event (agent process_clicked_place)			
			subscribe_to_outside_event (agent idle_action)
			game.start_game
			status_before_prepare
			update_status

			move_to_center
			play_called_once := false
			move_called_once := false
			take_a_pause (false)
		end

	end_game is
			-- Display end game text, animation and menu when game over.
		require
			game_exists: game /= Void
--		local
--			i: INTEGER
		do
--			if not end_game_called_once then
--				end_game_called_once := True
--				idle_actions.prune (idle_action_agent)
--				game.display_end_game
--				main_window.game_stat_text.set_text (game.info_text)
--				from
--					game.players.start
--				until
--					game.players.off
--				loop
--					game.players.item.displayer.clear_markings
--					game.players.forth
--				end
--				if game.state = game.Agent_caught or game.state = game.Agent_stuck then
--					game.estate_agent.displayer.show
--					main_window.update_player_info_box (game.estate_agent)
--					center_on_player (game.estate_agent)
--					game.estate_agent.displayer.animate_defeat
--				elseif game.state = game.Agent_escapes then
--					from
--						i := 2
--					until
--						i > game.players.count or paused or not game.is_game_over
--					loop
--						game.players.i_th (i).displayer.animate_defeat
--						i := i + 1
--					end
--				end	
--			end
		end		


feature -- Status Report

	status_game_over is
			-- Status to be displayed when game is over
		do
			status.wipe_out
			status.extend ("GAME OVER!")
			if game.state = agent_caught then
				status.extend ("Estate agent was found at " + game.estate_agent.location.name + " in round " + game.current_round_number.out)
			elseif game.state = agent_stuck then
				status.extend ("Estate agent was encircled at " + game.estate_agent.location.name + " in round " + game.current_round_number.out)
			elseif game.state = agent_escapes then
				status.extend ("Estate agent escaped!")
			end			
			status.extend ("Estate agent: " + game.estate_agent.location.name)
		end
		
	status_before_prepare is
			-- Status of player before the move
		do
			status.wipe_out
			status.copy (game_scene.player_displayers.i_th (game.current_player_index).statistics)
			status.put_front ("Status of current player: ")
			status_overview	
		end

	status_overview is
			-- General overview
		do
			status.put_front (" ")
			status.put_front ("Current Player: " + game.current_player.name)
			status.put_front ("Round: " + game.current_round_number.out)
		end

	update_status is
			-- Update status of current game
		do
			game_scene.set_status (status)
			if game_scene.screen /= Void then
				game_scene.redraw
			end
		end		
		
feature -- Attributes

	status: ARRAYED_LIST [STRING]
			-- Status of current `game' to be displayed in `game_scene'

	game_scene: GAME_SCENE
			-- Where the game is visualized

	game: GAME
			-- Game logic
	
	paused: BOOLEAN
			-- Is game currently on paused?

	move_called_once: BOOLEAN
			-- Has the player already moved once?
	
	play_called_once: BOOLEAN
			-- Was the player's move already performed once?		

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
			-- 
		local
			place_renderer: TRAFFIC_PLACE_RENDERER
		do
			if a_mouse_event.is_left_button then
				
				--Color place red
				create place_renderer.make_with_map (game.traffic_map)
				place_renderer.set_place_color (red)
				game_scene.big_map_widget.set_place_special_renderer (place_renderer, a_place)
				game.set_selected_place (a_place)
				
				--Re-Render the scene for the effects to be visible
				game_scene.big_map_widget.render
			end			
		end	
			
	idle_action is
			-- Things that are done when nothing else is processing
		do
			if game /= Void then
				if paused then
					sleep_and_process (50)
				else
					if game.state = game.Prepare_state then
						prepare
					end
					if game.state = game.Play_state then
						play
						if game.current_player /= Void and then game.current_player.brain.generating_type.substring (1, 3).is_equal ("BOT") then
							sleep_and_process (1800)
						end
					end
					if not paused and game.state = game.Move_state then
						move
						if game.last_player /= Void then
							sleep_and_process (1600)
						end
					end
					if game.is_game_over then
						end_game
					end
			io.putstring ("gamestate: ")
			io.putint (game.state)
				end
			end
		end

	sleep_and_process (a_time: INTEGER) is
		do
			game_scene.event_loop.delay_and_process (a_time)
		end

feature {NONE} -- Game loop

	prepare is
			-- Prepare current player to make a move.
		require
			no_pause_taken: not paused
			game_state_prepare: game.state = game.Prepare_state
		do
			status_before_prepare
			update_status
			if game.current_player /= game.estate_agent or game.estate_agent.is_visible then
--				center_on_player (game.current_player)
				game.current_player.set_marked
			end	
--			main_window.update_player_info_box (game.current_player)
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
			game.play
			game_scene.redraw
		ensure
			correct_game_state: game.state = game.Play_state or game.state = game.Move_state
		end
		
	move is
			-- Perform player's move and update display.
		require
			no_pause_taken: not paused
			move_state_set: game.state = game.Move_state
		do
--				game.current_player.set_unmarked
				game.move
				game_scene.redraw
		ensure
			correct_game_state: game.state = game.Prepare_state or game.state = game.Agent_caught or game.state = game.Agent_escapes
		end
		
	take_a_pause (b: BOOLEAN) is
			-- Pause game.
		do
			paused := b
		end

	toggle_paused is
			-- pause/continue game.
		do
			take_a_pause (not paused)
		end
		
feature {NONE} -- Implementation

	move_to_center is
			-- Center map on screen.
		local
		do
			io.put_new_line
			io.putstring ("map size (width / height): ")
			io.putint (game_scene.big_map_widget.width)
			io.putstring (" / ")
			io.putint(game_scene.big_map_widget.height)

--			set_city_displayer (city)
--			if city_displayer /= Void then
--				r := city_displayer.bounding_box
--				create map_center.make ((r.right - r.left)/2, (r.top - r.bottom)/2)
--				canvas_center := client_to_map_coordinates ((main_window.canvas.width/2).floor, (main_window.canvas.height/2).floor)
--				xdiff := map_center.x - canvas_center.x
--				ydiff := map_center.y - canvas_center.y
--				if xdiff /= 0 or ydiff /= 0 then
--					main_window.canvas.go_down (ydiff)
--					main_window.canvas.go_left (xdiff) 
--				end
--			else
--				main_window.canvas.go_right (-100)
--				main_window.canvas.go_down (200)
--			end
		end
--		
--	center_on_player (p: PLAYER) is
--			-- Center map around `p's position.
--		local
--			xdiff, ydiff: DOUBLE
--			canvas_center: REAL_COORDINATE
--		do
--			if p /= Void then
--				canvas_center := client_to_map_coordinates ((main_window.canvas.width/2).floor, (main_window.canvas.height/2).floor)
--				xdiff := p.location.position.x - canvas_center.x
--				ydiff := p.location.position.y - canvas_center.y
--				if xdiff /= 0 or ydiff /= 0 then
--					main_window.canvas.go_down (ydiff)
--					main_window.canvas.go_left (xdiff) 
--				end
--			end
--		end
--		
--	center_on_current_player is
--			-- Center map around current players position.
--		do
--			if game /= Void then
--				center_on_player (game.current_player)
--			end
--		end
--		
--	toggle_name_display is
--			-- Toggle name display on/off.
--		do
--			if city /= Void then
--				set_city_displayer (city)
--				if city_displayer /= Void then --and main_window.map_loaded then
--					if main_window.name_display_button.is_selected then
--						city_displayer.show_names
--					else
--						city_displayer.hide_names
--					end
--					main_window.canvas.refresh
--				end				
--			end
--		end		
--		
--	add_player_info_boxes (show_always: BOOLEAN) is
--			-- For each player, create a info box and add it to `main_window'.
--		local
--			player: PLAYER
--		do
--			main_window.player_stat_notebook.wipe_out
--			from
--				game.players.start
--			until
--				game.players.after
--			loop
--				player := game.players.item
--				if player /= Void then
--					main_window.add_player_info_box (player)
--					game.players.forth
--				end
--			end
--		end
--
--feature {NONE} -- Process events
--
--	last_cursor_position: REAL_COORDINATE
--			-- Last remembered cursor position
--			
--	process_click (x, y, b: INTEGER; x_t, y_t, p: DOUBLE; 
--			scr_x, scr_y: INTEGER) is
--			-- Clicking on the canvas.
--			-- (For an explanation of arguments look at
--			-- EV_POINTER_BUTTON_ACTION_SEQUENCE).
--		local
--			pt: REAL_COORDINATE
--			place: PLACE
--		do
--			mouse_button := b
--			if city /= Void and then b = 1 then 
--				pt := client_to_map_coordinates (x, y)
--				inspect
--					main_window.mode	
--				when Selection_mode then
--					set_city_displayer (city)
--					place := city_displayer.place_at_coordinate (pt)
--					if place /= Void then
--						if game /= Void then
--							game.set_selected_place (place)
--						end
--					end	
--				when Move_mode then
--					last_cursor_position := pt	
--				else
--					-- Do nothing.					
--				end
--			end
--			if city /= Void and then b = 3 then
--				pt := client_to_map_coordinates (x, y)
--				last_cursor_position := pt
--			end
--		end
--
--	process_motion (x, y: INTEGER; x_t, y_t, p: DOUBLE; 
--			scr_x, scr_y: INTEGER) is
--			-- Move mouse on canvas.
--			-- (For an explanation of arguments look at
--			-- EV_POINTER_MOTION_ACTION_SEQUENCE).
--		local
--			pt: REAL_COORDINATE
--			xdiff: DOUBLE
--			ydiff: DOUBLE
--		do
--			if city /= Void then --and then main_window.map_loaded then -- and main_window.mode = Move_mode then
--				pt := client_to_map_coordinates (x, y)
--				if last_cursor_position = Void then
--					last_cursor_position := pt
--				elseif ((main_window.mode = Move_mode and mouse_button = 1) or mouse_button = 3)  then					
--					xdiff := last_cursor_position.x - pt.x
--					ydiff := last_cursor_position.y - pt.y
--					if xdiff /= 0 or ydiff /= 0 then
--						main_window.canvas.go_down (ydiff)
--						main_window.canvas.go_left (xdiff) 													
--					end
--				end				
--				last_cursor_position := client_to_map_coordinates (x, y)				
--			end
--		end
--		
--	process_release (x, y, b: INTEGER; x_t, y_t, p: DOUBLE; 
--			scr_x, scr_y: INTEGER) is
--			-- Release mouse pointer.
--			-- (For an explanation of arguments look at
--			-- EV_POINTER_BUTTON_ACTION_SEQUENCE.)
--		do
--			if city /= Void then --main_window.map_loaded then
--				mouse_button := 0				
--			end	
--		end
--
--	process_leave_window is
--			-- Leave application window.
--		do
--			process_release (0, 0, 0, 0.0, 0.0, 0.0, 0, 0)
--		end
--
--	process_mouse_wheel (y: INTEGER) is
--			-- Zoom in or out.
--		do
--			if city /= Void  then --main_window.map_loaded then
--				if y > 0 then
--					main_window.canvas.zoom_in (y * Zoom_factor_stepwise)
--				elseif y < 0 then
--					main_window.canvas.zoom_out (y * (-Zoom_factor_stepwise))
--				end
--			end
--		end
--
--	client_to_map_coordinates (x, y: INTEGER): REAL_COORDINATE is
--			-- Map position corresponding to client coordinates (`x', `y')
--		local
--			lx: DOUBLE
--			ly: DOUBLE
--			xperc: DOUBLE
--			yperc: DOUBLE
--			h: INTEGER
--			org: REAL_COORDINATE
--		do
--			lx := x / 1
--			ly := y / 1
--
--			xperc := lx / (main_window.canvas.parent.client_width)
--			h := (main_window.canvas.parent.client_height).max (1)
--			yperc := (h - ly) / h
--
--			org :=main_window.canvas.visible_area.lower_left
--			create Result.make (
--				(org.x + xperc * main_window.canvas.visible_area.width).rounded, 
--				(org.y + yperc * main_window.canvas.visible_area.height).rounded)
--		ensure
--			Result_exists: Result /= Void
--		end
--

end
