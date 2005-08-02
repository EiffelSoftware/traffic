indexing
	description: "Brain controlled by human user"
	status:	"See notice at end of class"
	authors: "Marcel Kessler, Ursina Caluori"
	date: "$Date$"
	revision: "$Revision$"

class
	HUMAN

inherit
	BRAIN

feature {PLAYER} -- Basic operations

	choose_next_move (possible_moves: LINKED_LIST [TRAFFIC_LINE_SECTION]; my_location: TRAFFIC_PLACE; last_estate_agent_location: TRAFFIC_PLACE) is
			-- Choose next move.
		do
			chosen_move := Void
			if selected_place /= Void then
				from
					possible_moves.start
				until
					possible_moves.after
				loop
					if possible_moves.item.destination.name.is_equal (selected_place.name) then
						chosen_move := possible_moves.item
					end
					possible_moves.forth
				end
				selected_place := Void
			end
		ensure then
			result_has_place_if_not_void: chosen_move /= Void implies (chosen_move.origin = my_location or chosen_move.destination = my_location)
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
