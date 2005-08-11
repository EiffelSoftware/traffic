indexing
	description: "Player that is an estate agent"
	date: "$Date$"
	revision: "$Revision$"

class
	ESTATE_AGENT

inherit
	PLAYER

create 
	make

feature {NONE} -- Initialization
	
	make (a_map: TRAFFIC_MAP; a_location: TRAFFIC_PLACE; is_bot: BOOLEAN) is
			-- Put player on board.
		do
			make_from_map_and_place (a_map, a_location)
			name := "Agent"
			last_visible_location := Void
			set_visible (false)

			if is_bot then
				bus_tickets := default_bot_tickets
				rail_tickets := default_bot_tickets
				tram_tickets := default_bot_tickets
			else
				bus_tickets := default_bus_tickets
				rail_tickets := default_rail_tickets
				tram_tickets := default_tram_tickets
			end
			
			if is_bot then
				create {ESTATE_AGENT_BOT} brain
			else
				create {HUMAN} brain
			end
			create taken_transports.make
			create visited_places.make
		ensure
			has_brain: brain /= Void
			taken_transports_not_void: taken_transports /= Void
			visited_places_not_void: visited_places /= Void
			location_is_hauptbahnhof: location.name.is_equal ("Hauptbahnhof")
			name_is_agent: name.is_equal ("Agent")
		end

feature -- Access

	last_visible_location: TRAFFIC_PLACE
		-- Last location where the estate agent showed up.
		
	visible: BOOLEAN
			-- Is it a checkpoint?
			
feature -- Queries

	is_visible: BOOLEAN is
		do
			Result := visible
		end
	
feature -- Status setting
		
	set_visible (a_visibility: BOOLEAN) is
			-- Set estate agent's visibility.
		do
			visible := a_visibility
		end

	set_last_visible_location is
			-- Set `last_visible_location' to `location'.
		do
			last_visible_location := location
		end
		
feature -- Element Change

	increase_ticket_count (a_move: TRAFFIC_LINE_SECTION) is
			-- Increase number of bus, rail or tram tickets.
		require 
			valid_ticket_type: is_valid_type (a_move.type)
		do
			inspect
				a_move.type.name @ (1)
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
		
feature -- Measurement

	taken_transports: LINKED_LIST[STRING]
			-- List of all taken transports so far
			
	visited_places: LINKED_LIST[STRING]
			-- List of all the visited places
			
feature {GAME} -- Basic operations

	choose_move is
			-- Choose the next move.
		local
			tmp_visited_places: STRING
		do
			brain.choose_next_move (possible_moves, location, last_visible_location)
			next_move := brain.chosen_move
			if next_move /= Void then
				taken_transports.extend (next_move.type.name)
				tmp_visited_places := location.name + " -> " + next_move.destination.name
				visited_places.extend (tmp_visited_places)
			end
		end		

invariant
	name_is_agent: name.is_equal ("Agent")

end
