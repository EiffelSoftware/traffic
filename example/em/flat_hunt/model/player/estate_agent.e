indexing
	description: "Player that is an estate agent."
	date: "$Date$"
	revision: "$Revision$"

class
	ESTATE_AGENT

inherit
	PLAYER

create 
	make

feature -- Initialization
	
	make (a_map: like map; a_location: like location; is_bot: BOOLEAN) is
			-- Put player on board.
		do
			make_from_map_and_place (a_map, a_location)
			name := "Agent"
			last_visible_location := Void
			last_visible_round := 1
			set_visibility (False)
			
			-- Create brain and set number of tickets.
			if is_bot then
				create {ESTATE_AGENT_BOT} brain				
				bus_tickets := Default_bot_tickets
				rail_tickets := Default_bot_tickets
				tram_tickets := Default_bot_tickets
			else
				create {HUMAN} brain				
				bus_tickets := Default_bus_tickets
				rail_tickets := Default_rail_tickets
				tram_tickets := Default_tram_tickets
			end
			
			create taken_transports.make
			create visited_places.make
		end

feature -- Access

	last_visible_location: TRAFFIC_PLACE
			-- Last location where the estate agent showed up.
			
	last_visible_round: INTEGER
			-- Round in which the estate agent last showed up.

	taken_transports: LINKED_LIST[STRING]
			-- List of all taken transports so far.
			
	visited_places: LINKED_LIST[STRING]
			-- List of all the visited places.
			
feature -- Status Report

	is_visible: BOOLEAN is
		do
			Result := visible
		end
	
feature -- Status Setting
		
	set_visibility (a_visibility: like visible) is
			-- Set estate agent's visibility to `a_visibility'.
		do
			visible := a_visibility
		ensure
			visibility_set: visible = a_visibility
		end

	set_last_visible_location_and_round is
			-- Set `last_visible_location' to `location'.
		do
			last_visible_location := location
			last_visible_round := visited_places.index
		ensure
			lvl_set: last_visible_location = location
			lvr_set: last_visible_round = visited_places.index
		end
			
feature -- Basic operations

	choose_move is
			-- Choose the next move.
		do
			brain.choose_next_move (possible_moves, location, last_visible_location)
			next_move := brain.chosen_move
			if next_move /= Void then
				taken_transports.extend (next_move.type.name)
				visited_places.extend (location.name + " -> " + next_move.destination.name)
			end
		ensure then
			taken_transports_updated: next_move /= Void implies (taken_transports.count = old taken_transports.count + 1)
			visited_places_updated: next_move /= Void implies (visited_places.count = old visited_places.count + 1)
		end		

	increase_ticket_count (a_type: TRAFFIC_TYPE) is
			-- Increase number of bus, rail or tram tickets.
		require 
			valid_ticket_type: is_valid_type (a_type)
		do
			inspect
				a_type.name @ (1)
			when 'b' then
				bus_tickets := bus_tickets + 1				
			when 'r' then
				rail_tickets := rail_tickets + 1				
			when 't' then
				tram_tickets := tram_tickets + 1				
			end
		ensure
			tickets_increased: (bus_tickets + rail_tickets + tram_tickets) = (old bus_tickets + old rail_tickets + old tram_tickets + 1)
		end
		
feature {NONE} -- Implementation
		
	visible: BOOLEAN
			-- Is it a checkpoint?		
invariant
	taken_transports_exists: taken_transports /= Void
	visited_places_exists: visited_places /= Void
	name_is_agent: name.is_equal ("Agent")

end
