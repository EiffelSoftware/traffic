indexing
	description: "Controller that steers the application's behavior and mediates between visual input/output and changes of the city model"
	status:	"See notice at end of class"
	author: "Marcel Kessler, Michela Pedroni, Ursina Caluori"
	date: "$Date$"
	revision: "$Revision$"

class 
	MAIN_CONTROLLER 

--inherit
----	KL_SHARED_FILE_SYSTEM 
----		undefine
----			default_create, copy
----		end	
--	
--	ESDL_SCENE
--	
----	GAME_CONSTANTS
----		undefine
----			default_create
----		end
--	
--create
--	make_and_launch 
--
--feature -- Initialization
--
--	make_and_launch is
--			-- Initialize and launch application.
--		do
--			default_create
--			controller_initialize
--			launch
--		end
--		
--feature {NONE} -- Initialization Implementation
--
--	controller_initialize is
--			-- Set defaults and register event handler.
--		do
--			create scene.make
--			create game.make
--			start
--		end	
--
--		
--feature {MAIN_CONTROLLER, PLAYER_DISPLAYER} -- Access
--	
--	break: BOOLEAN
--			-- Does the user make a break?
--	
--	traffic_map: TRAFFIC_MAP
--			-- The game's map including all the places, line_sections etc.
--	
--	scene: GAME_SCENE
--			-- Where the game is visualized
--
--	game: GAME
--			-- Game logic
--		
--	move_called_once: BOOLEAN
--			-- Has the player already moved once?
--	
--	play_called_once: BOOLEAN
--			-- Was the player's move already performed once?
--	
--	end_game_called_once: BOOLEAN
--			-- Has the game already ended once?
--			
--feature {START} -- Game operations
--
--	start is
--			-- Adjust the game settings and start the game.
--		do
--			-- Nothing, redefined in class START
--		end
--
--	clear_game is
--			-- Remove remnants from previous game.
--		do
--			if game /= Void and then game.players /= Void then
--				from
--					game.players.start
--				until
--					game.players.off
--				loop
--					game.players.item.displayer.clear
--					game.players.forth
--				end
--			end
--			idle_actions.prune (idle_action_agent)
--			end_game_called_once := False
--		end
--		
--	start_game is
--			-- Create and start game.
--		require
--			city_exists: city /= Void
--			correct_number_of_hunters: (1 <= game.hunter_count) and (game.hunter_count <= 8)
--			correct_game_mode: (Hunt <= game.game_mode) and (game.game_mode <= Demo)
--		do			
--			clear_game
--			end_game_called_once := False
--			set_city_displayer (city)
--			game.set_city (city)
--			game.start_game
--			if game.game_mode = Hunt then
--				add_player_info_boxes (False)
--			else 
--				add_player_info_boxes (True)
--			end
--			move_to_center
--			play_called_once := False
--			move_called_once := False
--			idle_actions.extend (idle_action_agent)
--			take_a_break (False)
--		end
--		
--	open_map (a_filename: STRING) is
--			-- Open map in file `a_filename'.
--		local
--			fn: STRING
--			dialog: EV_INFORMATION_DIALOG
--		do
--			fn := File_system.absolute_pathname (a_filename)
--			if File_system.file_exists (fn) then
--				open_city (fn)
--			else
--				fn := File_system.pathname ("data", a_filename)
--				fn := File_system.absolute_pathname (fn)
--				if File_system.file_exists (fn) then
--					open_city (fn)
--				else
--					create dialog
--					dialog.set_text ("Map file not found! Could not load " + fn)	
--					dialog.show_modal_to_window (main_window)
--				end
--			end
--		end
--
--	end_game is
--			-- Display end game text and animation.
--		require
--			game_exists: game /= Void
--		local
--			i: INTEGER
--		do
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
--						i > game.players.count or break or not game.is_game_over
--					loop
--						game.players.i_th (i).displayer.animate_defeat
--						i := i + 1
--					end
--				end	
--			end
--		end		
--
--feature {NONE} -- Game loop
--
--	idle_action_agent: PROCEDURE [ANY, TUPLE]
--			-- Idle action agent that will be called whenever the system is idle
--			
--	idle_action is
--			-- Called whenever nobody is doing something.
--		do
--			if game /= Void then
--				if break then
--					sleep_and_process (50)
--				else
--					if game.state = game.Prepare_state then
--						prepare
--					end
--					if game.state = game.Play_state then
--						play
--						if game.current_player /= Void and then game.current_player.brain.generating_type.substring (1, 3).is_equal ("BOT") then
--							sleep_and_process (1800)
--						end
--					end
--					if not break and game.state = game.Move_state then
--						move
--						if game.last_player /= Void then
--							sleep_and_process (1600)
--						end
--					end
--					if game.is_game_over then
--						end_game
--					end
--				end
--			end
--		end
--
--	sleep_and_process (msec: INTEGER) is
--			-- Sleep for `msec' milliseconds, but still process events.
--		local
--			date: C_DATE
--			passed_ms, last_ms, last_sec, now_ms, now_sec, temp_ms, temp_sec: INTEGER
--		do
--			from				
--				passed_ms := 0
--				create date
--				last_ms := date.millisecond_now
--				last_sec := date.second_now
--			until
--				passed_ms >= msec or is_destroyed
--			loop
--
--				if msec - passed_ms > 100 then
--					sleep (100)					
--				end
--
--				-- Process events.
--				process_events
--								
--				-- Calculate `passed_ms' in milliseconds				
--				create date
--				now_sec := date.second_now
--				now_ms := date.millisecond_now				
--				temp_ms := now_ms - last_ms
--				temp_sec := now_sec - last_sec
--				if temp_sec < 0 then
--					temp_sec := temp_sec + 60
--				end
--				if temp_sec > 0 then
--					temp_ms := temp_ms + temp_sec * 1000
--				end
--				passed_ms := passed_ms + temp_ms				
--				last_ms := now_ms
--				last_sec := now_sec									
--			end
--		end
--	
--	prepare is
--			-- Prepare current player to make a move.
--		require
--			no_break_taken: not break
--			game_state_prepare: game.state = game.Prepare_state
--		do
--			game.display_before_prepare
--			main_window.game_stat_text.set_text (game.info_text)
--			if game.current_player /= game.estate_agent or game.estate_agent.displayer.visible then
--				center_on_player (game.current_player)
--				game.current_player.displayer.display_before_prepare
--			end	
--			main_window.update_player_info_box (game.current_player)
--			main_window.canvas.redraw
--			game.prepare
--		ensure
--			correct_game_state: game.state = game.Prepare_state or game.state = game.Play_state or game.state = game.Agent_stuck
--		end		
--
--	play is
--			-- Let current player choose next move.
--		require
--			no_break_taken: not break
--			game_state_play: game.state = game.Play_state
--		do
--			if not play_called_once then
--				play_called_once := True
--				game.current_player.displayer.display_before_move
--				main_window.update_player_info_box (game.current_player)
--				main_window.canvas.redraw
--			end
--			game.play
--			move_called_once := False
--		ensure
--			correct_game_state: game.state = game.Play_state or game.state = game.Move_state
--		end
--		
--	move is
--			-- Perform player's move and update display.
--		require
--			no_break_taken: not break
--			move_state_set: game.state = game.Move_state
--		do
--			if not move_called_once then
--				move_called_once := True
--				game.move
--				game.last_player.displayer.display_after_move
--				main_window.canvas.force_redraw
--				main_window.update_player_info_box (game.last_player)
--				main_window.game_stat_text.set_text (game.info_text)
--				play_called_once := False
--			end
--		ensure
--			correct_game_state: game.state = game.Prepare_state or game.state = game.Agent_caught or game.state = game.Agent_escapes
--		end
--		
--	take_a_break (enable: BOOLEAN) is
--			-- Take a break.
--		do
--			break := enable
--		end
--
--	toggle_break is
--			-- Break/continue game.
--		do
--			take_a_break (not break)
--		end
--		
--feature {NONE} -- Request handlers
--
--	close is
--			-- Stop and close `main_window'.
--		do
--			take_a_break (True)
--			idle_actions.prune (idle_action_agent)
--			main_window.destroy
--			destroy
--		end
--
--	display_about_dialog is
--			-- Display the About dialog.
--		local
--			dlg: ABOUT_DIALOG
--		do
--			create dlg
--			dlg.show_modal_to_window (main_window)
--		end
--
--	city_parser: CITY_PARSER	
--			-- XML-Parser to get places, links etc.
--
--	open_city (a_filename: STRING) is
--			-- Open map of a city.
--		require
--			a_filename_exists: a_filename /= Void
--			a_filename_not_empty: not a_filename.is_empty
--			a_file_exists: File_system.file_exists (a_filename)
--		local
--			factory: CITY_FACTORY
--			cp: CITY_PARSER
--			idlg: EV_INFORMATION_DIALOG
--			sp: EV_STOCK_PIXMAPS
--		do
--			create sp
--			main_window.set_pointer_style (sp.Busy_cursor)
--			create factory.make
--			create cp.make_with_factory (factory)
--			factory.set_displayer_factory (create {CONCRETE_DISPLAYER_FACTORY})
--			(create {XML_ADAPTOR}).adapt_xml_registry (cp)
--			cp.set_file_name (a_filename)
--			cp.set_working_directory
--			cp.parse
--			if cp.can_process then
--
--				if not cp.has_error then
--					cp.process
--				end
--
--				if not cp.has_error then
--					city := cp.city
--					set_city_displayer (city)
--					city_displayer.build
--					main_window.canvas.draw_all_items (city_displayer.drawable_objects)
--					move_to_center
--					toggle_name_display
--					resize_canvas
--				end
--				
--			elseif cp.has_error then  
--				main_window.set_pointer_style (sp.Standard_cursor)
--				create idlg.make_with_text (cp.error_description)
--				idlg.show_modal_to_window (main_window)
--				main_window.canvas.clear
--			else
--				main_window.set_pointer_style (sp.Standard_cursor)
--				create idlg.make_with_text ("Could not process the xml-file. Check whether the root xml tag is correct.")
--				idlg.show_modal_to_window (main_window)
--				main_window.canvas.clear
--			end			
--			main_window.set_pointer_style (sp.Standard_cursor)
--		end
--		
--	open_game_dialog is
--			-- Open game start dialog.
--		do
--			take_a_break (True)
--			take_a_break (True)
--			create game_dialog
--			if game.game_mode = Hunt then
--				game_dialog.hunt_mode.enable_select
--			elseif game.game_mode = Escape then
--				game_dialog.escape_mode.enable_select
--			elseif game.game_mode = Versus then
--				game_dialog.versus_mode.enable_select
--			elseif game.game_mode = Demo  then
--				game_dialog.demo_mode.enable_select
--			end
--			if game.hunter_count /= 0 then
--				game_dialog.number_of_hunters.set_value (game.hunter_count)
--			end
--			if city /= Void then
--				if city.name.is_equal ("Zurich (big)") then
--					game_dialog.big_map.enable_select
--				end
--			end
--			game_dialog.start_button.select_actions.extend (agent start_game_after_dialog)
--			game_dialog.start_button.select_actions.extend (agent game_dialog.destroy)
--			game_dialog.cancel_button.select_actions.extend (agent game_dialog.destroy)
--			game_dialog.cancel_button.select_actions.extend (agent toggle_break)
--			game_dialog.show_modal_to_window (main_window)
--		end
--		
--	start_game_after_dialog is
--			-- Create and start game.
--		require
--			game_dialog_was_opened: game_dialog /= Void
--		do
--			if game_dialog.hunt_mode.is_selected then
--				game.set_game_mode (Hunt)
--			elseif game_dialog.escape_mode.is_selected then
--				game.set_game_mode (Escape)
--			elseif game_dialog.versus_mode.is_selected then
--				game.set_game_mode (Versus)
--			elseif game_dialog.demo_mode.is_selected then
--				game.set_game_mode (Demo) 
--			end
--			game.set_number_of_hunters (game_dialog.number_of_hunters.value)
--			if game_dialog.little_map.is_selected then
--				if city /= Void then
--					if not city.name.is_equal ("Zurich (little)") then
--						open_map ("zurich_little_city.xml")
--					end
--				else
--					open_map ("zurich_little_city.xml")
--				end
--			else
--				if city /= Void then
--					if not city.name.is_equal ("Zurich (big)") then
--						open_map ("zurich_big_city.xml")
--					end
--				else
--					open_map ("zurich_big_city.xml")
--				end
--			end
--			game.set_city (city)
--			start_game
--		end
--		
--feature {NONE} -- Status setting
--
--	move_to_center is
--			-- Center map on screen.
--		local
--			r: EV_RECTANGLE
--			xdiff, ydiff: DOUBLE
--			map_center, canvas_center: REAL_COORDINATE
--		do
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
--		end
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
--	resize_canvas is
--			-- Set up canvas. Call when new map is loaded.
--		local
--			w: INTEGER
--			h: INTEGER
--		do
--			w := (main_window.viewport.width).max (1)  
--			h := (main_window.viewport.height).max (1)
--			main_window.canvas.set_size (w, h)
--			main_window.canvas.set_minimum_size (w, h)
--			main_window.viewport.set_item_size (w, h)
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
--invariant
--	application_has_main_window: main_window /= Void
--	
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
