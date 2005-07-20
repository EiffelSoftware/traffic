indexing
	description: "Brain for the players to choose their moves"
	status:	"See notice at end of class"
	authors: "Marcel Kessler, Ursina Caluori"
	date: "$Date$"
	revision: "$Revision$"

deferred class
	BRAIN
	
inherit
	DOUBLE_MATH
	ANY
		export {ANY} generating_type
		end
	
feature {PLAYER} -- Basic operations

	choose_next_move (possible_moves: LINKED_LIST [TRAFFIC_LINE_SECTION]; my_location: TRAFFIC_PLACE; last_estate_agent_location: TRAFFIC_PLACE) is
			-- Choose next move.
		require
			possible_moves_not_empty: not possible_moves.is_empty
			my_location_exists: my_location /= Void
		deferred
		ensure
			possible_move_chosen: chosen_move /= Void implies possible_moves.has (chosen_move)
		end		
		
feature {PLAYER} -- Status
	
	set_selected_place (a_place: TRAFFIC_PLACE) is
			-- Set `selected_place' to `a_place'.
		do
			selected_place := a_place
		end

	chosen_move: TRAFFIC_LINE_SECTION
			-- The move the brain has chosen.
		
feature {NONE} -- Implementation

	selected_place: TRAFFIC_PLACE
			-- Place selected by user

--	calculate_distance (location_1: TRAFFIC_PLACE; location_2: TRAFFIC_PLACE): DOUBLE is
--			-- Calculate distance between `location_1' and `location_2'.
--		do
--			Result := sqrt((location_1.position.x-location_2.position.x)*(location_1.position.x-location_2.position.x) +
--							(location_1.position.y-location_2.position.y)*(location_1.position.y-location_2.position.y))
--		ensure
--		   calculation_is_correct: Result*Result >= (location_1.position.x-location_2.position.x)*(location_1.position.x-location_2.position.x) and
--							Result*Result >= (location_1.position.y-location_2.position.y)*(location_1.position.y-location_2.position.y)
--		end
	
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
