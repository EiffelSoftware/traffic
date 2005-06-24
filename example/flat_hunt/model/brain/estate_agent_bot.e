indexing
	description: "Robot brain (AI) calculating the next move for the
	estate agent"
	status:	"See notice at end of class"
	author: "Marcel Kessler, Ursina Caluori"
	date: "$Date$"
	revision: "$Revision$"

class
	ESTATE_AGENT_BOT

inherit
	BRAIN

feature {ESTATE_AGENT} -- Basic operations

	choose_next_move (possible_moves: LINKED_LIST
	[TRAFFIC_LINE_SECTION]; my_location: TRAFFIC_PLACE;
	last_estate_agent_location: TRAFFIC_PLACE) is
			-- Choose next move for the estate agent.
		local
			best_move_so_far: TRAFFIC_LINE_SECTION
			temp_move: TRAFFIC_LINE_SECTION
			temp_node: TRAFFIC_PLACE
			best_distance: DOUBLE
			temp_distance: DOUBLE
		do
			if
				last_estate_agent_location = void
			then
				chosen_move := possible_moves.first
			else	
				from
					possible_moves.start
					best_move_so_far := possible_moves.item
					best_distance := 0
				invariant
					-- best_move_so_far is longest move between possible_moves.start and possible_moves.item
					best_distance >= 0
					1 <= possible_moves.index
					possible_moves.index <= possible_moves.count + 1
				variant
					possible_moves.count + 1 - possible_moves.index
				until
					possible_moves.after
				loop
					temp_move := possible_moves.item
					temp_node := temp_move.other_end (my_location)
					temp_distance := calculate_distance(last_estate_agent_location, temp_node)
					if
						temp_distance > best_distance
					then
						best_distance := temp_distance
						best_move_so_far := temp_move
					end
					possible_moves.forth
				end
				chosen_move := best_move_so_far
			end
		ensure then
			result_not_void: chosen_move /= Void
			result_has_place: chosen_move.from_place = my_location or chosen_move.to_place = my_location
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
