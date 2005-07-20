indexing
	description: "A player in the flat hunt game"
	status:	"See notice at end of class"
	authors: "Marcel Kessler, Ursina Caluori"
	date: "$Date$"
	revision: "$Revision$"

deferred class
	PLAYER


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

	Rail_type: STRING is "rail"
			-- Rail transportation type name
		
	Bus_type: STRING is "bus"
			-- Bus transportation type name
	
	Tram_type: STRING is "tram"
			-- Tram transportation type name
	
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

	position: ESDL_VECTOR_2D
			-- Position on the map.
			
	brain: BRAIN
			-- Brain to chose the moves 
			-- (i.e. user controlled or artifical intelligence)

	name: STRING
			-- Player's name
			
	next_move: TRAFFIC_LINE_SECTION
			-- Next move (chosen by `brain')


feature {NONE} -- Constants

	Default_bus_tickets: INTEGER is 6
			-- Number of bus tickets at the beginning
	
	Default_rail_tickets: INTEGER is 4
			-- Number of rail tickets at the beginning
	
	Default_tram_tickets: INTEGER is 13
			-- Number of tram tickets at the beginning

	Default_bot_tickets: INTEGER is 23
			-- Number of tickets at the beginning for bots.

feature {GAME} -- Status setting

	set_possible_moves (a_list: LINKED_LIST [TRAFFIC_LINE_SECTION]) is
			-- Set `possible_moves' to `a_list'.
		require
			a_list_not_void: a_list /= Void
		do
			possible_moves := a_list
		ensure
			possible_moves_set: possible_moves = a_list
		end
		
feature -- Status report

	enough_tickets (a_type: STRING): BOOLEAN is
			-- Check if player has tickets to drive with the transportation type `a_type'.
		require 
			a_type_is_valid: a_type /= Void and then is_valid_type (a_type)
		do
			Result := False
			inspect a_type @ (1)
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
		
	is_valid_type (a_type: STRING): BOOLEAN is
			-- Is `a_type' representing a valid transportation type?
		require
			a_type_not_void: a_type /= Void
		do
			Result := a_type.is_equal (Bus_type) or a_type.is_equal (Tram_type) or a_type.is_equal (Rail_type)		
		end
		
feature {NONE} -- Element change

	decrease_ticket_count (a_move: TRAFFIC_LINE_SECTION) is
			-- Decrease number of tickets for the transportation type of `a_line_section'.
		require 
			a_move_not_void: a_move /= Void
			a_move_is_of_valid_type: is_valid_type (a_move.type)
		do
			inspect
				a_move.type @ (1)
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
		
feature {GAME} -- Basic operations

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
			old_location := location
			location := next_move.destination (location)
		ensure
		end		

	move_to (a_location: TRAFFIC_PLACE) is
			-- 
		require
			a_location_is_different: location /= a_location
			a_location_is_reachable: map.has_line_section_between (location.name, a_location.name)
		local
			last_time, now_time, delta_time: INTEGER
			links: LIST [TRAFFIC_LINE_SECTION]
			shared_scene: ESDL_SHARED_SCENE			
			polypoints: ARRAYED_LIST [ESDL_VECTOR_2D]
			point_index: INTEGER
			length, speed, pos, point_pos: DOUBLE
			p1, p2, dist: ESDL_VECTOR_2D
		do
			old_location := location
			
			-- Get time when move started (used for animation)
			now_time := time.ticks
			
			-- Get running scene.
			create shared_scene
			
			-- Animate if there is a running scene.
			if shared_scene.running_scene /= Void then	
				
				-- Get link to move over.
				links := map.line_sections_of_place (location.name)
			
				from
					links.start
				until
					links.after or else links.item.destination = a_location					
				loop
					links.forth										
				end
				
				if not links.after then
					
					polypoints := links.item.polypoints
					
					if polypoints = Void or else polypoints.count < 2 then  -- TODO: Only necessary because of bug in TRAFFIC_LINE_SECTION ??
						create polypoints.make (2)
						polypoints.extend (links.item.origin.position)						
						polypoints.extend (links.item.destination.position)						
					end
				
					-- Set parmeter for animation			
					length := links.item.length
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


	choose_move is
			-- Choose the next move.
		deferred
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
--| 	Rolf Bruderer <bruderer@computerscience.ch>
--|
--|--------------------------------------------------------
