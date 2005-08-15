indexing
	description: "Player that is a flat hunter"
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
	
	make (a_map: TRAFFIC_MAP; a_location: TRAFFIC_PLACE; an_estate_agent: ESTATE_AGENT; is_bot: BOOLEAN; a_name: STRING) is
			-- Put player on board.
		require
			has_location: a_location /= Void
			knows_an_agent: an_estate_agent /= Void
			name_not_empty: not a_name.is_empty			
		do
			make_from_map_and_place (a_map, a_location)
			name := a_name
			flat_hunter_stuck := False
			
			if is_bot then
				create {FLAT_HUNTER_BOT} brain	
				bus_tickets := default_bot_tickets
				rail_tickets := default_bot_tickets
				tram_tickets := default_bot_tickets
			else
				create {HUMAN} brain
				bus_tickets := default_bus_tickets
				rail_tickets := default_rail_tickets
				tram_tickets := default_tram_tickets
			end
			estate_agent := an_estate_agent
		ensure
			has_brain: brain /= Void
			has_location: location /= Void
			name_not_empty: not name.is_empty			
		end

feature -- Access
	
	estate_agent: ESTATE_AGENT
			-- Reference to estate agent for bot brain and tickets exchange

	flat_hunter_stuck: BOOLEAN
			-- Is flat hunter in a position where he can not move anymore?
			
feature {NONE} -- Element change

	decrease_ticket_count (a_move: TRAFFIC_LINE_SECTION) is
			-- Decrease number  tickets according to type of `a_move'.
			-- Give ticket to the estate agent.
		do
			Precursor (a_move)
			estate_agent.increase_ticket_count (a_move)
		end

		
feature -- Basic operations

	choose_move is
			-- Choose the next move.
		do
			if possible_moves.is_empty then
				flat_hunter_stuck := true
				possible_moves := Void
			else
				flat_hunter_stuck := false
				brain.choose_next_move (possible_moves, location, estate_agent.location)
				next_move := brain.chosen_move
			end
		ensure then
--			next_move_selected: (not possible_moves.is_empty) implies (next_move /= Void)
		end		

invariant
	hunter_knows_agent: estate_agent /= Void
	
end
