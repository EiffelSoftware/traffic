indexing
	description: "A player in the flat hunt game"
	date: "$Date$"
	revision: "$Revision$"

deferred class
	PLAYER

inherit
	
	EM_TIME_SINGLETON
	
	TRAFFIC_TYPE_FACTORY
		rename
			make as make_type_factory
		undefine
			default_create
		end

feature -- Initialization
	
	make_from_map_and_place (a_map: TRAFFIC_MAP; a_location: TRAFFIC_PLACE) is
			-- Initialize player standing on `a_place' in `a_map'.
		require
			a_location_in_map: a_map.has_place (a_location.name)
		do
			location := a_location
			map := a_map
			create position.make (location.position.x, location.position.y)
		end

feature -- Access
	
	bus_tickets: INTEGER
			-- Number of bus tickets the player has
		
	rail_tickets: INTEGER
			-- Number of rail tickets the player has
	
	tram_tickets: INTEGER
			-- Number of tram tickets the player has
			
	map: TRAFFIC_MAP
			-- Map on which player will navigate.

	possible_moves: LINKED_LIST [TRAFFIC_LINE_SECTION]
			-- Locations the player could move to
			
	location: TRAFFIC_PLACE
			-- Current location
			
	old_location: TRAFFIC_PLACE
			-- Player's last location

	position: EM_VECTOR_2D
			-- Position on the map.
			
	brain: BRAIN
			-- Brain to chose the moves 
			-- (i.e. user controlled or artifical intelligence)

	name: STRING
			-- Player's name
			
	next_move: TRAFFIC_LINE_SECTION
			-- Next move (chosen by `brain')

	marked: BOOLEAN
			-- Is it this players turn ?
			
feature {NONE} -- Constants

	Default_bus_tickets: INTEGER is 6
			-- Number of bus tickets at the beginning
	
	Default_rail_tickets: INTEGER is 4
			-- Number of rail tickets at the beginning
	
	Default_tram_tickets: INTEGER is 13
			-- Number of tram tickets at the beginning

	Default_bot_tickets: INTEGER is 23
			-- Number of tickets at the beginning for bots.

feature {GAME, MAIN_CONTROLLER} -- Status setting

	set_possible_moves (a_list: LINKED_LIST [TRAFFIC_LINE_SECTION]) is
			-- Set `possible_moves' to `a_list'.
		require
			a_list_not_void: a_list /= Void
		do
			possible_moves := a_list
		ensure
			possible_moves_set: possible_moves = a_list
		end
		
	set_marked is
			-- Mark the player with a red circle (used for visualizing the current player).
		do
			marked := true
		end
		
	set_unmarked is
			-- Remove red marking circle.
		do
			marked := false
		end		
		
feature -- Status report

	enough_tickets (a_type: TRAFFIC_TYPE): BOOLEAN is
			-- Check if player has tickets to drive with the transportation type `a_type'.
		require 
			a_type_is_valid: a_type /= Void and then is_valid_type (a_type)
		do
			Result := False
			inspect a_type.name @ (1)
			when 'r' then
				if rail_tickets > 0 then
					Result := True
				end
			when 't' then
				if tram_tickets > 0 then
					Result := True
				end
			when 'b' then
				if bus_tickets > 0 then
					Result := True
				end
			else
				Result := False
			end
		end

feature --Queries
		
	is_valid_type (a_type: TRAFFIC_TYPE): BOOLEAN is
			-- Is `a_type' representing a valid transportation type?
		require
			a_type_not_void: a_type /= Void
		do
			Result := type_table.has_item (a_type)
		end
	
	is_marked: BOOLEAN is
			-- Is this player marked (i.e. the current player)?
		do
			Result := marked
		end
		
		
feature {NONE} -- Element change

	decrease_ticket_count (a_move: TRAFFIC_LINE_SECTION) is
			-- Decrease number of tickets for the transportation type of `a_line_section'.
		require 
			a_move_not_void: a_move /= Void
			a_move_is_of_valid_type: is_valid_type (a_move.type)
		do
			inspect
				a_move.type.name @ (1)
			when 'b' then
				bus_tickets := bus_tickets - 1				
			when 'r' then
				rail_tickets := rail_tickets - 1				
			when 't' then
				tram_tickets := tram_tickets - 1				
			end
		ensure
			number_of_tickets_has_decreased: bus_tickets + rail_tickets + tram_tickets = old bus_tickets + old rail_tickets + old tram_tickets - 1			
		end
		
feature -- Basic operations

	play (a_place: TRAFFIC_PLACE) is
			-- Choose the next move 
			-- depending on `a_place' the user selected for the next move 
		require
		do
			brain.set_selected_place (a_place)
			choose_move
		end

	move is
			-- Move player.
		require
		do
			decrease_ticket_count (next_move)
--			move_to (next_move.destination)
			old_location := location
			location := next_move.destination
			position := location.position.twin
		ensure
		end		

	move_to (a_location: TRAFFIC_PLACE) is
			-- 
		require
			a_location_is_different: location /= a_location
			a_location_is_reachable: possible_moves.there_exists (agent has_location(?, a_location))
		local
			last_time, now_time, delta_time: INTEGER
			shared_scene: EM_SHARED_SCENE			
			polypoints: ARRAYED_LIST [EM_VECTOR_2D]
			point_index: INTEGER
			length, speed, pos, point_pos: DOUBLE
			p1, p2, dist: EM_VECTOR_2D
		do
			old_location := location
			
			-- Get time when move started (used for animation)
			now_time := time.ticks
			
			-- Get running scene.
			create shared_scene
			
			-- Animate if there is a running scene.
			if shared_scene.running_scene /= Void then	
				
				polypoints := next_move.polypoints
					
				if polypoints = Void or else polypoints.count < 2 then  -- TODO: Only necessary because of bug in TRAFFIC_LINE_SECTION ??
					create polypoints.make (2)
					polypoints.extend (next_move.origin.position)
					polypoints.extend (next_move.destination.position)						
				end
				
				-- Set parmeter for animation			
				length := next_move.length
				speed := 100 -- meter per second
				
				-- Perform move animation.
				from
					pos := 0
					point_index := 1
					point_pos := 0
				until
					pos > length or else point_index > polypoints.count
				loop
								
					-- Calculate `delta_time' to perform move step.
					last_time := now_time
					now_time := time.ticks
					delta_time := now_time - last_time
					if delta_time < 0 then
						delta_time := 0	
					end
					
					-- Calculate new `pos' inbetween the two locations
					pos := pos + delta_time * speed / 1000
					
					-- Calculate `position' from polypoints.
					from					
						p1 := polypoints.i_th (point_index)
						p2 := polypoints.i_th (point_index + 1)
						dist := p2 - p1					
					until
						pos > length or else pos < point_pos + dist.length
					loop					
						point_pos := point_pos + dist.length
						point_index := point_index + 1			
						p1 := polypoints.i_th (point_index)
						p2 := polypoints.i_th (point_index + 1)
						dist := p2 - p1				
					end		
					dist.scale_to (pos - point_pos)
					position := p1 + dist

					-- Give system some time too redraw views.
					shared_scene.running_scene.event_loop.process_events
				end			
			end
			
			-- Update new `location' and `position'.
			location := a_location
			position := location.position.twin
		
			-- Update position on screen.
			if shared_scene.running_scene /= Void then
				shared_scene.running_scene.event_loop.process_events
			end			
		ensure
			location_set: location = a_location
		end

	has_location (a_line_section: TRAFFIC_LINE_SECTION; a_location: TRAFFIC_PLACE): BOOLEAN is
			-- Check if `a_line_section' has `a_location' as destination
		do
			Result := a_line_section.destination = a_location
		end
		

	choose_move is
			-- Choose the next move.
		deferred
		end		

end
