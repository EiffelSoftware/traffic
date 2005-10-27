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
			default_create, copy, is_equal, out
		end
		
	THEME
		undefine
			out
		end

feature -- Initialization
		
	make_from_player (a_player: PLAYER; a_pic: like picture; a_traffic_map: like traffic_map; a_map_widget: like map_widget) is
			-- Initialize displayer for `a_player'.
		require
			a_player_exists: a_player /= Void
			a_pic_exists: a_pic /= Void
			a_map_widget_exists: a_map_widget /= Void
			a_traffic_map_exists: a_traffic_map /= Void
		do
			player := a_player
			picture := a_pic
			traffic_map := a_traffic_map			
			map_widget := a_map_widget

			-- Build marking circle.
			create marking_circle.make_inside_box (picture.bounding_box)
			marking_circle.set_line_width (1)
			marking_circle.set_line_color (red)
			marking_circle.set_filled (False)

			-- Set defaults.
			possible_moves_unmarked := True

			update_position
			
			-- Subscribe to event
			player.marked_changed_event.subscribe (agent toggle_possible_moves (?))
		ensure
			player_set: player = a_player
			picture_set: picture = a_pic
			traffic_map_set: traffic_map = a_traffic_map
			map_widget_set: map_widget = a_map_widget
		end
		
feature -- Access

	width: INTEGER is
			-- Width of player's picture.
		do
			Result := picture.width
		end
		
	height: INTEGER is
			-- Height of player's picture.
		do
			Result := picture.height
		end
		
feature -- Output

	statistics: STRING is
			-- Number of tickets left etc.
		deferred
		ensure
			result_exists: Result /= Void
		end
		
	out: STRING is
		do
			Result := player.name
		ensure then
			result_set: Result = player.name			
		end
	
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
		
feature -- Basic operations
		
	mark_defeat (a_surface: EM_SURFACE) is
			-- Mark the defeat of the player.
		require
			a_surface_exists: a_surface /= Void
		local
			circle: EM_CIRCLE
			position: EM_VECTOR_2D
			count: INTEGER
		do
			-- Build `circle' at `position'.
			create position.make (player.location.position.x, player.location.position.y)
			create circle.make_inside_box (picture.bounding_box)
			circle.set_line_color (white)
			circle.set_filled (False)
			circle.set_line_width (2)
			circle.draw (a_surface)

			-- POSSIBLE ASSIGNMENT
			-- With instructions for the students
			-- and sample solution:
			from
				-- Fill
				count := 0
			until
				-- Replace `True' and fill.
				count = 5
--				True				
			loop
				-- Fill
				circle.set_radius (circle.radius + 5)
				circle.draw (a_surface)
				count := count + 1
			end
		end

feature -- Event handling

	publish_mouse_event (a_mouse_event: EM_MOUSE_EVENT) is
		do
			if bounding_box.has (a_mouse_event.proportional_position) then
				dispatch_mouse_event (a_mouse_event)								
			end			
		end		
		
feature {NONE} -- Implementation

	player: PLAYER
			-- Reference to player to be displayed.

	picture: EM_DRAWABLE
			-- Picture for the player.

	marking_circle: EM_CIRCLE
			-- Circle for marking current player.
	
	traffic_map: TRAFFIC_MAP
			-- Reference to map where game takes place.
	
	map_widget: TRAFFIC_MAP_WIDGET
			-- Reference to map widget where player gets displayed.
			
	possible_moves_unmarked: BOOLEAN
			-- Are the possible moves unmarked?

	hash_code: INTEGER
			-- Hash code of this button.
			
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
		ensure
			picture_positioned: picture.x = x and picture.y = y
			marking_circle_positioned: marking_circle.x = x and marking_circle.y = y
		end	
		
	toggle_possible_moves (a_value: BOOLEAN) is
			-- Toggle between marked and unmarked possible moves
		do
			if a_value = True then
				mark_possible_moves
			else
				unmark_possible_moves
			end
		end
		

	mark_possible_moves is
			-- Mark all possible places that the player can move to.
		local
			place_renderer: FLAT_HUNT_PLACE_RENDERER		
		do
			if player.possible_moves /= Void then

				-- Set place color for possible moves to yellow.
				create place_renderer.make_with_map (traffic_map)
				place_renderer.set_place_color (Yellow)

				-- Set special renderer for possible moves.
				from
					player.possible_moves.start
				until
					player.possible_moves.after
				loop
					map_widget.set_place_special_renderer (place_renderer, player.possible_moves.item.destination)
					map_widget.rerender_place (player.possible_moves.item.destination)				
					player.possible_moves.forth
				end

				-- Re-render the scene for the effects to be visible.
--				map_widget.render
			end
			possible_moves_unmarked := False
		ensure
			possible_moves_unmarked_set: possible_moves_unmarked = False
		end

	unmark_possible_moves is
			-- Remove marking of possible moves.	
		local
			place_renderer: TRAFFIC_PLACE_RENDERER
		do
			if player.possible_moves /= Void then

				-- Reset place color.
				create place_renderer.make_with_map (traffic_map)
				place_renderer.set_place_color (Blue)

				-- Reset place renderer for possible moves.
				from
					player.possible_moves.start
				until
					player.possible_moves.after
				loop
					map_widget.set_place_special_renderer (place_renderer, player.possible_moves.item.destination)
					map_widget.rerender_place (player.possible_moves.item.destination)				
					player.possible_moves.forth					
				end

				-- Re-render the scene for the effects to be visible.				
--				map_widget.render
			end
			possible_moves_unmarked := True
		ensure
			possible_moves_unmarked_set: possible_moves_unmarked = True
		end
		
	draw (surface: EM_SURFACE) is
			-- Draw 'Current' onto `surf'.
		do
			update_position
			if picture /= Void then
				surface.draw_object (picture)
			end
			-- If it's this player's turn mark him with the marking circle and 
			-- highlight his possible moves.
			if player.is_marked and marking_circle /= Void then
				surface.draw_object (marking_circle)
--				mark_possible_moves
--			elseif not possible_moves_unmarked then
--				unmark_possible_moves
			end
			-- If the player is defeate, mark his defeat.
			if player.is_defeated then
				mark_defeat (surface)
			end
		end

invariant
	player_exists: player /= Void
	picture_exists: picture /= Void
	map_widget_exists: map_widget /= Void
	traffic_map_exists: traffic_map /= Void
	
end
