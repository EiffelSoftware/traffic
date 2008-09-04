indexing
	description: "Knowledge that all the players should have of each other when choosing a move"
	date: "$Date$"
	revision: "$Revision$"

class
	KNOWLEDGE

inherit
	
	ANY
		redefine
			default_create
		end

	
feature -- Initialization

	default_create is
			-- Initialize knowledge of `a_number' flathunter positions.
		do
			create flathunter_positions.make (0)
		end
		
feature -- Access

	flathunter_positions: ARRAYED_LIST [TRAFFIC_PLACE]
			-- Positions of all the flathunters
			
	map: TRAFFIC_MAP
			-- Traffic_map on which the flathunters are
			
feature -- Basic operations

	set_map (a_map: TRAFFIC_MAP) is
			-- Set `map' to `a_map'.
		require
			a_map_exists: a_map /= Void
		do
			map := a_map
		ensure
			a_map_set: map = a_map
		end
		
end
