indexing
	description: "Robot brain (AI) calculating the next move for a flat hunter"
	status:	"See notice at end of class"
	author: "Marcel Kessler, Ursina Caluori"
	date: "$Date$"
	revision: "$Revision$"

class
	FLAT_HUNTER_BOT

inherit
	BRAIN

feature {FLAT_HUNTER} -- Basic operations

	choose_next_move (possible_moves: LINKED_LIST [TRAFFIC_LINE_SECTION]; my_location: TRAFFIC_PLACE; last_estate_agent_location: TRAFFIC_PLACE) is
			-- Choose next move for a flat hunter.
		local
			best_move_so_far: TRAFFIC_LINE_SECTION
			tmp_move: TRAFFIC_LINE_SECTION
			best_distance: DOUBLE
		do
			if
				last_estate_agent_location = Void
			then
				chosen_move := possible_moves.first
			else	
				from
					possible_moves.start
					best_move_so_far := possible_moves.item
					best_distance  := feature {INTEGER}.max_value
				invariant
					-- best_move_so_far is shortest move between possible_moves.start and possible_moves.item
					best_distance <= feature {INTEGER}.max_value
					1 <= possible_moves.index
					possible_moves.index <= possible_moves.count + 1
				variant
					possible_moves.count + 1 - possible_moves.index
				until
					possible_moves.after
				loop
					tmp_move := possible_moves.item
					if
						tmp_move.length < best_distance
					then
						best_distance := tmp_move.length
						best_move_so_far := tmp_move
					end
					possible_moves.forth
				end
				chosen_move := best_move_so_far
			end
		ensure then 
			result_not_void: chosen_move /= Void
			result_has_place: chosen_move.origin = my_location or chosen_move.destination = my_location
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
