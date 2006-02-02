indexing
	description: "Objects that ..."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_PASSENGER

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
			initialize(a_list)
		end
		
	
feature {NONE}
	initialize(a_seed: INTEGER) is
			-- initalize the passenger
		do
			create random_direction.set_seed(a_seed)
			set_origin (current_position_x, 0.2, current_position_y)

		end

feature
	traffic_info: STRING is "Peter"
	
	speed: DOUBLE is 0.05

feature
	take_tour is
			-- take a random tour
			do	
				give_random_direction			
				set_origin (current_position_x+last_position.x, 0.2, current_position_y+last_position.y)
			end
	
	give_random_direction is
			-- give randomly + or - 1
			local
				temp_x, temp_y: DOUBLE
			do
				temp_x := random_direction.double_item
				random_direction.forth
				temp_y := random_direction.double_item
				create last_position.make (temp_x, temp_y)
			ensure
				last_position.x < 1
				last_position.x > -1
				last_position.y < 1
				last_position.y > -1
			end
		
		
feature

	random_direction: RANDOM
		-- make a direction out of this genererator	
		
	last_position: EM_VECTOR_2D
		-- last position where the object was
end
