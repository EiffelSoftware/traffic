indexing
	description: "Display a player on the board"
	date: "$Date$"
	revision: "$Revision$"

deferred class
	PLAYER_DISPLAYER

inherit

	EM_DRAWABLE
		redefine
			publish_mouse_event, out
		end
	
	HASHABLE
		undefine
			default_create, out
		end
	
	DISPLAY_CONSTANTS
		export 
			{NONE} all
		undefine
			default_create, out
		end
	
	THEME
		undefine
			out
		end
	
	EM_TIME_SINGLETON
		undefine
			out
		end

	EM_SHARED_SCENE
		undefine
			out
		end

	SHARED_MAIN_CONTROLLER
		undefine
			out
		end
	
feature -- Initialization
		
	make_from_player (a_player: PLAYER; a_pic: like picture; a_traffic_map: like traffic_map; a_map_widget: like map_widget) is
			-- Initialize displayer for `a_player'.
		require
			player_exists: a_player /= Void
			a_pic_exists: a_pic /= Void
		do
			player := a_player
			picture := a_pic
			map_widget := a_map_widget
			traffic_map := a_traffic_map

			create marking_circle.make_inside_box (picture.bounding_box)
			marking_circle.set_line_width (1)
			marking_circle.set_line_color (red)
			marking_circle.set_filled (False)

			-- Set defaults.
			possible_moves_unmarked := True

			update_position
		ensure
			player_set: player = a_player
			picture_set: picture = a_pic
		end

feature -- Basic operations
		
	animate_defeat (a_surface: EM_SURFACE) is
			-- Animate the defeat of the player.
		local
			circle: EM_CIRCLE
			position: EM_VECTOR_2D
			count: INTEGER
		do
			create position.make (player.location.position.x, player.location.position.y)
			create circle.make_inside_box (picture.bounding_box)
			circle.set_line_color (white)
			circle.set_filled (False)
			circle.set_line_width (2)
			circle.draw (a_surface)

			-- Remove the last few commands if you use them in the loop.
			from
				count := 0
			until
				count = 5
				-- Replace `True' and fill.
			loop
--				sleep (1000)
				circle.set_radius (circle.radius + 5)
--				running_scene.redraw
				circle.draw (a_surface)
				-- Fill
--				process (80)
--				main_controller.sleep_and_process (500)
				-- `process' should be kept, but you can change the number 
				count := count + 1
			end
		end

--	sleep (msec: INTEGER) is
--			-- Wait for `msec' milliseconds, then continue.
--		local
--			cur_time, end_time: INTEGER
--		do
--			from
--				cur_time := time.ticks
--				end_time := cur_time + msec
--			until
--				cur_time > end_time
--			loop
--				main_controller.game_scene.event_loop.process_events
--				cur_time := time.ticks
--			end
--			running_scene.redraw
--		end
		

--	process (msec: INTEGER) is
--				-- Wait and process events.
--		local
--			i: INTEGER
--		do
----			if not main_controller.break or not main_controller.game.is_game_over then
----				from
----					i := 0
----				until
----					i >= msec / 20 or main_controller.is_destroyed 
----				loop
----					main_controller.sleep (5)
----					i := i + 1	
----				end
----				main_controller.process_events
----				canvas.redraw
----			end
--		end

feature -- Access

	player: PLAYER
			-- Reference to player to be displayed

	picture: EM_DRAWABLE
			-- Picture for the player
	
feature -- Status setting

	set_picture (a_pic: like picture) is
			-- Set `picture' to `a_pic'.
		require
			a_pic_exists: a_pic /= Void
		do
			picture := a_pic
			update_position
		ensure
			picture_set: picture = a_pic
		end
		
	update_position is
			-- Update position to passenger's position.
		local
			pos: EM_VECTOR_2D
		do
			pos := player.position
			x := (pos.x.floor - (picture.width // 2))
			y := (pos.y.floor - (picture.height // 2))
			picture.set_x_y (x, y)		
			marking_circle.set_x_y (x, y)
		end	

	go_to_time (a_time: INTEGER) is
		do
			update_position			
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

	hash_code: INTEGER

feature -- Mouse handling

	publish_mouse_event (a_mouse_event: EM_MOUSE_EVENT) is
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
		
	out: STRING is
		do
			Result := player.name
		end
		
		
feature {NONE} -- Implementation

	mark_possible_moves is
			-- Mark all possible places that the player can move to.
		require
			traffic_map_not_void: traffic_map /= Void
			map_widget_not_void: map_widget /= Void
		local
			place_renderer: FLAT_HUNT_PLACE_RENDERER		
			t1, t2: INTEGER
		do
			if player.possible_moves /= Void then
				
				io.putstring ("%N Ticks for place_renderer init: ")
				t1 := time.ticks
				-- Set place color for possible moves to yellow
				create place_renderer.make_with_map (traffic_map)
				place_renderer.set_place_color (Yellow)
				t2 := time.ticks
				io.putint (t2 - t1)
				io.putstring ("%N Ticks for marking loop: ")
				t1 := time.ticks				
				from
					player.possible_moves.start
				until
					player.possible_moves.after
				loop
					map_widget.set_place_special_renderer (place_renderer, player.possible_moves.item.destination)
					player.possible_moves.forth
				end
				t2 := time.ticks
				io.putint (t2 - t1)
				io.putstring ("%N Ticks for marking map_widget.render: ")
				t1 := time.ticks
				-- Re-render the scene for the effects to be visible.				
				map_widget.render
				t2 := time.ticks
				io.putint (t2 - t1)
			end
			possible_moves_unmarked := False
		end

	unmark_possible_moves is
			-- Remove marking of possible moves.
		require
			traffic_map_not_void: traffic_map /= Void
			map_widget_not_void: map_widget /= Void			
		local
			place_renderer: FLAT_HUNT_PLACE_RENDERER
			t1, t2: INTEGER
		do
			if player.possible_moves /= Void then
				
				io.putstring ("%N Ticks for place_renderer init: ")
				t1 := time.ticks
				-- Reset place color.
				create place_renderer.make_with_map (traffic_map)
				place_renderer.set_place_color (Blue)
				t2 := time.ticks
				io.putint (t2 - t1)
				io.putstring ("%N Ticks for unmarking loop: ")
				t1 := time.ticks
				from
					player.possible_moves.start
				until
					player.possible_moves.after
				loop
					map_widget.set_place_special_renderer (place_renderer, player.possible_moves.item.destination)
					player.possible_moves.forth					
				end
				t2 := time.ticks
				io.putint (t2 - t1)
				io.putstring ("%N Ticks for unmarking map_widget.render: ")
				t1 := time.ticks
				-- Re-render the scene for the effects to be visible.				
				map_widget.render
				t2 := time.ticks
				io.putint (t2 - t1)
			end
			possible_moves_unmarked := True
		end
		
	draw (surface: EM_SURFACE) is
			-- Draw 'Current' onto `surf'.
		do
			io.putstring ("%N%N" + player.name)
			update_position
			if picture /= Void then
				surface.draw_object (picture)
			end
			if player.marked then
				surface.draw_object (marking_circle)
				mark_possible_moves
			elseif not possible_moves_unmarked then
				unmark_possible_moves
			end
			if player.is_defeated then
				animate_defeat (surface)
			end
		end

	marking_circle: EM_CIRCLE
			-- Circle for marking current player
	
	traffic_map: TRAFFIC_MAP
			-- Reference to map where game takes place
	
	map_widget: TRAFFIC_MAP_WIDGET
			-- Reference to map widget where player gets displayed
			
	possible_moves_unmarked: BOOLEAN
			-- Are the possible moves unmarked?

invariant
	displayer_has_player: player /= Void
	
end
