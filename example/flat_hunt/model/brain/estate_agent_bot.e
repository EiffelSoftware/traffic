indexing
	description: "Robot brain (AI) calculating the next move for the estate agent"
	date: "$Date$"
	revision: "$Revision$"

class
	ESTATE_AGENT_BOT

inherit
	BRAIN

feature {ESTATE_AGENT} -- Basic operations

	choose_next_move (possible_moves: LINKED_LIST[TRAFFIC_LINE_SECTION]; my_location: TRAFFIC_PLACE; last_estate_agent_location: TRAFFIC_PLACE) is
			-- Choose next move for the estate agent.
		local
			best_move_so_far: TRAFFIC_LINE_SECTION
			tmp_move: TRAFFIC_LINE_SECTION
			best_distance: DOUBLE
			tmp_distance: DOUBLE
		do
			if
				last_estate_agent_location = Void
			then
				chosen_move := possible_moves.first
			else	
				from
					possible_moves.start
					best_move_so_far := possible_moves.item
					best_distance := 0
				invariant
					-- `best_move_so_far' is longest move between `possible_moves.start' and `possible_moves.item'.
					best_distance >= 0
					1 <= possible_moves.index
					possible_moves.index <= possible_moves.count + 1
				variant
					possible_moves.count + 1 - possible_moves.index
				until
					possible_moves.after
				loop
					tmp_move := possible_moves.item
					tmp_distance := calculate_distance (last_estate_agent_location, tmp_move.destination)
					if
						tmp_distance > best_distance
					then
						best_distance := tmp_distance
						best_move_so_far := tmp_move
					end
					possible_moves.forth
				end
				chosen_move := best_move_so_far
			end
		ensure then
			result_exists: chosen_move /= Void
			result_has_place: chosen_move.origin = my_location
		end		
		
end
