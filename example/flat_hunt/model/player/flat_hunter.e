indexing
	description: "Player that is a flat hunter."
	date: "$Date$"
	revision: "$Revision$"

class
	FLAT_HUNTER

inherit
	PLAYER
		redefine
			decrease_ticket_count
		end

create
	make

feature -- Initialization
	
	make (a_map: like map; a_location: like location; an_estate_agent: like estate_agent; is_bot: BOOLEAN; a_name: STRING) is
			-- Put player on board.
		require
			a_map_exists: a_map /= Void
			a_location_exists: a_location /= Void
			knows_an_agent: an_estate_agent /= Void
			name_not_empty: not a_name.is_empty			
		do
			make_from_map_and_place (a_map, a_location)
			name := a_name
			stuck := False
			
			-- Create brain and set number of tickets.
			if is_bot then
				create {FLAT_HUNTER_BOT} brain	
				bus_tickets := Default_bot_tickets
				rail_tickets := Default_bot_tickets
				tram_tickets := Default_bot_tickets
			else
				create {HUMAN} brain
				bus_tickets := Default_bus_tickets
				rail_tickets := Default_rail_tickets
				tram_tickets := Default_tram_tickets
			end
			estate_agent := an_estate_agent
		ensure
			name_set: name = a_name
			estate_agent_set: estate_agent = an_estate_agent
		end
		
feature -- Basic operations

	choose_move is
			-- Choose the next move.
		do
			if possible_moves.is_empty then
				stuck := True
				possible_moves := Void
			else
				stuck := False
				brain.choose_next_move (possible_moves, location, estate_agent.location)
				next_move := brain.chosen_move
			end
		end		

feature {NONE} -- Implementation

	estate_agent: ESTATE_AGENT
			-- Reference to estate agent for bot brain and tickets exchange.

	stuck: BOOLEAN
			-- Is flat hunter in a position where he can not move anymore?

	decrease_ticket_count (a_type: TRAFFIC_TYPE) is
			-- Decrease number tickets according `a_type'.
			-- Give ticket to the estate agent.
		do
			Precursor (a_type)
			estate_agent.increase_ticket_count (a_type)
		end

invariant
	name_exists: name /= Void
	hunter_knows_agent: estate_agent /= Void
	
end
