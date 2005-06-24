indexing
	description: "Player that is an estate agent"
	status:	"See notice at end of class"
	authors: "Marcel Kessler, Ursina Caluori"
	date: "$Date$"
	revision: "$Revision$"

class
	ESTATE_AGENT

inherit
	PLAYER
--		redefine 
--			displayer
--		end

create 
	make

feature {NONE} -- Initialization
	
	make (estate_agent_bot: BOOLEAN; a_location: TRAFFIC_PLACE) is
			-- Put player on board.
		do
			name := "Agent"
			if estate_agent_bot then
				bus_tickets := default_bot_tickets
				rail_tickets := default_bot_tickets
				tram_tickets := default_bot_tickets
			else
				bus_tickets := default_bus_tickets
				rail_tickets := default_rail_tickets
				tram_tickets := default_tram_tickets
			end
			location := a_location
			last_estate_agent_location := location
			if estate_agent_bot then
				create {ESTATE_AGENT_BOT} brain
			else
				create {HUMAN} brain
			end
--			create displayer.make (Current)
--			displayer.set_visible (False)
		ensure
--			has_correct_displayer: displayer.player = Current
			has_brain: brain /= Void
			location_is_hauptbahnhof: location.name.is_equal ("Hauptbahnhof")
			name_is_agent: name.is_equal ("Agent")
		end

feature -- Access
	
--	displayer: ESTATE_AGENT_DISPLAYER
		-- Displayer to display the estate agent.

	last_estate_agent_location: TRAFFIC_PLACE
		-- Last location where the estate agent showed up.
	
feature {GAME} -- Element change (GAME)

	set_last_estate_agent_location is
			-- Set `last_estate_agent_location' to `location'.
		do
			last_estate_agent_location := location
		end
		
feature {FLAT_HUNTER} -- Element change (FLAT_HUNTER)

	increase_ticket_count (a_move: TRAFFIC_LINE_SECTION) is
			-- Increase number of bus, rail or tram tickets.
		require 
			valid_ticket_type: is_valid_type (a_move.type)
		do
			inspect
				a_move.type @ (1)
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

feature {GAME} -- Basic operations

	choose_move is
			-- Choose the next move.
		local
			visited_places: STRING
		do
			brain.choose_estate_agent_move (possible_moves, location, last_estate_agent_location)
			next_move := brain.chosen_move
			if next_move /= Void then
--				displayer.transports_taken.extend (next_move.type)
				visited_places := location.name + " -> " + next_move.other_end (location).name
--				displayer.places_visited.extend (visited_places)
			end
		end		

invariant
	name_is_agent: name.is_equal ("Agent")

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
