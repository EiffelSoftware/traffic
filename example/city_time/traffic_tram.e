indexing
	description: "Objects that ..."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_TRAM
inherit
	TRAFFIC_TRAVELER_OBJECT
	rename
		take_tour as default_take_tour
	export {NONE} default_take_tour
	redefine
		make, traffic_info

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
	take_tour(a_line: TRAFFIC_LINE) is
			-- take a random tour
		require
			a_line /= Void
		do
			create last_position.make (0, 0)
			a_line.start
			if not a_line.after then
				a_line.item.polypoints.start
				last_position := map_to_gl_coords (a_line.item.polypoints.first)
				a_line.item.polypoints.forth
			end
--			create position.make (0, 0)
		ensure
			last_position /= Void
			position /= Void			
		end

	prepare_for_tour(a_line: TRAFFIC_LINE) is
			-- Change the viewpoint in order to take a traffic line ride.
		local
			start_point, end_point, direction: EM_VECTOR_2D
		do
			start_point := last_position
			end_point := map_to_gl_coords (a_line.item.polypoints.item)
			
			direction := end_point - start_point
			
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
			if (position-direction).length < speed then
				last_position := map_to_gl_coords (a_line.item.polypoints.item)
				a_line.item.polypoints.forth
				
				if a_line.item.polypoints.after and then not a_line.after then
					a_line.forth
					if not a_line.after then
						a_line.item.polypoints.start
						last_position := map_to_gl_coords (a_line.item.polypoints.first)
						a_line.item.polypoints.forth
					end
				end
				position.set_x (0)
				position.set_y (0)
			end
		end	
		
feature	
	last_position: EM_VECTOR_2D
		-- last position where the object was
		
	position: EM_VECTOR_2D
		-- The current position
end
