indexing
	description: "Objects that ..."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_TRAM
inherit
	TRAFFIC_TRAVELER_OBJECT
	redefine
		make, take_tour, traffic_info
	end
	
	MATH_CONST
		export {NONE} all end
		
	DOUBLE_MATH
		export {NONE} all end
	
	TRAFFIC_3D_CONSTANTS
	export {NONE} all end
	
	

create
	make

feature
	make (a_list: INTEGER; a_width: DOUBLE; a_height: DOUBLE; a_depth: DOUBLE) is
			-- 
		do
			Precursor (a_list, a_width, a_height, a_depth)
		end
		
	
feature {NONE}
	initialize is
			-- initalize the passenger
		do
		end

feature
	traffic_info: STRING is "Peter"
	
	speed: DOUBLE is 0.05

feature
	take_tour is
			-- take a random tour
--		require
--			shortest_path_line /= Void
		do
--			traffic_line_ride := True
--			create last_polypoint.make (0, 0)
--			shortest_path_line.start
--			if not shortest_path_line.after then
--				shortest_path_line.item.polypoints.start
--				last_polypoint := map_to_gl_coords (shortest_path_line.item.polypoints.first)
--				shortest_path_line.item.polypoints.forth
--			end
--			create position.make (0, 0)
--		ensure
--			traffic_line_ride
--			last_polypoint /= Void
--			position /= Void
--			
		end
		
		
feature	
	last_position: EM_VECTOR_2D
		-- last position where the object was
end
