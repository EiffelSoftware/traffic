indexing
	description: "A player in the flat hunt game."
	date: "$Date$"
	revision: "$Revision$"

deferred class
	PLAYER

inherit
	TRAFFIC_TYPE_FACTORY
		rename
			make as make_type_factory
		end

feature -- Initialization
	
	make_from_map_and_place (a_map: like map; a_location: like location) is
			-- Initialize player standing on `a_place' in `a_map'.
		require
			a_map_exists: a_map /= Void
			a_location_exists: a_location /= Void
			a_location_in_map: a_map.has_place (a_location.name)
		do
			map := a_map
			location := a_location			
			create position.make (location.position.x, location.position.y)
			
			-- Set defaults.
			set_defeated (False)
		ensure
			map_set: map = a_map
			location_set: location = a_location
			position_set: position.x = location.position.x and position.y = location.position.y
		end

feature -- Access

	name: STRING
			-- Player's name.
			
	location: TRAFFIC_PLACE
			-- Current location.

	position: EM_VECTOR_2D
			-- Position on the map.			

	possible_moves: LINKED_LIST [TRAFFIC_LINE_SECTION]
			-- Locations the player could move to.

	next_move: TRAFFIC_LINE_SECTION
			-- Next move (chosen by `brain').
			
	brain: BRAIN
			-- Brain to chose the moves 
			-- (i.e. user controlled or artifical intelligence).		

	bus_tickets: INTEGER
			-- Number of bus tickets the player has.
		
	rail_tickets: INTEGER
			-- Number of rail tickets the player has.
	
	tram_tickets: INTEGER
			-- Number of tram tickets the player has.			

feature -- Status report

	enough_tickets (a_type: TRAFFIC_TYPE): BOOLEAN is
			-- Check if player has tickets to drive with the transportation type `a_type'.
		require 
			a_type_valid: a_type /= Void and then is_valid_type (a_type)
		do
			inspect
				a_type.name @ (1)
			when 'b' then
				if bus_tickets > 0 then
					Result := True
				end			
			when 'r' then
				if rail_tickets > 0 then
					Result := True
				end			
			when 't' then
				if tram_tickets > 0 then
					Result := True
				end		
			else
				Result := False
			end
		end
		
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

	is_defeated: BOOLEAN is
			-- Is player defeated?
		do
			Result := defeated
		end		
		
feature -- Status setting

	set_possible_moves (a_list: like possible_moves) is
			-- Set `possible_moves' to `a_list'.
		require
			a_list_exists: a_list /= Void
		do
			possible_moves := a_list
		ensure
			possible_moves_set: possible_moves = a_list
		end
		
	set_marked is
			-- Mark the player with a red circle (used for visualizing the current player).
		do
			marked := True
		end
		
	set_unmarked is
			-- Remove red marking circle.
		do
			marked := False
		end		
		
	set_defeated (b: like defeated) is
			-- Set `defeated' to `b'.
		do
			defeated := b
		ensure
			defeated_set: defeated = b
		end

feature -- Basic operations

	play (a_place: TRAFFIC_PLACE) is
			-- Choose the next move depending on `a_place' 
			-- the user selected for the next move .
		do
			brain.set_selected_place (a_place)
			choose_move
		end

	move is
			-- Move player.
		do
			decrease_ticket_count (next_move.type)
			old_location := location
			location := next_move.destination
			position := location.position.twin
		ensure
			old_location_set: old_location = old location
			location_set: location = next_move.destination
		end		

	choose_move is
			-- Choose the next move.
		deferred
		end
			
feature {NONE} -- Constants

	Default_bus_tickets: INTEGER is 6
			-- Number of bus tickets at the beginning
	
	Default_rail_tickets: INTEGER is 4
			-- Number of rail tickets at the beginning
	
	Default_tram_tickets: INTEGER is 13
			-- Number of tram tickets at the beginning

	Default_bot_tickets: INTEGER is 23
			-- Number of tickets at the beginning for bots.
		
feature {NONE} -- Implementation
			
	map: TRAFFIC_MAP
			-- Map on which player will navigate.
			
	old_location: TRAFFIC_PLACE
			-- Last location.

	marked: BOOLEAN
			-- Is it this players turn?
	
	defeated: BOOLEAN
			-- Is player defeated?
			
	decrease_ticket_count (a_type: TRAFFIC_TYPE) is
			-- Decrease number of tickets for the transportation type `a_type'.
		require 
			a_type_not_void: a_type /= Void
			a_type_valid: is_valid_type (a_type)
		do
			inspect
				a_type.name @ (1)
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

invariant
	map_exists: map /= Void
	has_brain: brain /= Void
	location_exists: location /= Void
	
end
