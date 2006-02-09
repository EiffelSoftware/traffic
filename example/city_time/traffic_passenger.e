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
			is_initialized := False
--			initialize (a_list)
		end
		
	
feature {TRAFFIC_TRAVELER_REPRESENTATION}
	initialize_random (an_origin: EM_VECTOR_2D; a_seed: INTEGER) is
			-- initalize the passenger for random walk
		do
			create random_direction.set_seed(a_seed)
			set_origin (an_origin.x, 0.2, an_origin.y)
			last_position := an_origin
			give_random_direction
			speed := random_direction.double_item
			random_direction.forth
			
			create polypoints.make (2)
			polypoints.extend (an_origin)
			polypoints.extend (destination)
			
			is_initialized := True
		ensure		
			origin.x = an_origin.x and origin.z = an_origin.y
			destination /= Void
			is_initialized = True
		end

	initialize_directed (an_origin: EM_VECTOR_2D; a_destination: EM_VECTOR_2D; a_speed: DOUBLE) is		
			-- initialize the passenger at origin at let it walk from origin to destination
		require
			an_origin /= Void
			a_destination /= Void
			a_speed >= 0 and a_speed <= 1
		do
			set_origin (an_origin.x, 0.2, an_origin.y)
			last_position := an_origin
			destination := a_destination
			speed := a_speed
			
			create polypoints.make (2)
			polypoints.extend (an_origin)
			polypoints.extend (a_destination)
			
			is_initialized := True
		ensure
			origin.x = an_origin.x and origin.z = an_origin.y
			speed = a_speed
			is_initialized = True
		end
	

feature	-- traffic
	position: EM_VECTOR_2D
	
	traffic_info: STRING

feature
	take_tour is
			-- take a random tour
--			do	
		require else
			is_initialized = True
		do
			create last_position.make (0, 0)
				last_position := map_to_gl_coords (polypoints.item)
				polypoints.forth
--				give_random_direction			
--				set_origin (current_position_x+last_position.x, 0.2, current_position_y+last_position.y)
			end
	
	
	prepare_for_tour is
			--
		local
			start_point, end_point, direction: EM_VECTOR_2D
		do
			start_point := last_position
			end_point := map_to_gl_coords (last_position)
			
			direction := destination - last_position
			
			position := position + (direction / direction.length) * speed
			
--			glu_look_at_external
--			(	position.x - (position.x/position.length),
--				0.5,
--				position.y - (position.y/position.length),
--				position.x + 0.1*(position.x/position.length),
--				0.5,
--				position.y + 0.1*(position.y/position.length),
--				0, 1, 0
--			)
--			gl_translated_external (-start_point.x, 0, -start_point.y)
--			
			if (last_position-direction).length < speed then
				last_position := map_to_gl_coords (polypoints.item)
				polypoints.forth
			end
		end	
	
feature -- random

	give_random_direction is
			-- give randomly + or - 1
			local
				temp_x, temp_y: DOUBLE
			do
				temp_x := random_direction.double_item
				random_direction.forth
				temp_y := random_direction.double_item
				create destination.make (temp_x, temp_y)
				random_direction.forth
			ensure
				destination.x < 1
				destination.x > -1
				destination.y < 1
				destination.y > -1
			end
		
		
feature

	random_direction: RANDOM
		-- make a direction out of this genererator	
	
	speed: DOUBLE
		-- the speed the passenger has
		
	is_initialized: BOOLEAN
		-- is the passenger initialized - is 'speed', 'origin' and 'destination' set? 
	
	last_position: EM_VECTOR_2D
		-- the current origin
		
	destination: EM_VECTOR_2D
		-- last position where the object was
		
	polypoints: ARRAYED_LIST[EM_VECTOR_2D]
		-- points to travel
end
