indexing
	description: "Travelers on the map"
	date: "9.2.2006"
	revision: "$Revision$"

deferred class
	TRAFFIC_TRAVELER
	
inherit	
	MATH_CONST
		export {NONE} all end
		
	DOUBLE_MATH
		export {NONE} all end
		
	TRAFFIC_3D_CONSTANTS
		export {NONE} all end
		
feature -- Attributes
	
	traffic_type: TRAFFIC_TYPE
		-- type of traffic.
	
	traffic_info: STRING
		-- some info for the traveler.

	position: EM_VECTOR_2D
		-- current position on map.
	
	origin: EM_VECTOR_2D
		-- origin position on map.
	
	destination: EM_VECTOR_2D
		-- destination position on map.
	
	speed: DOUBLE
		-- speed on the map. TODO: speed := distance(take-tour) / time(from one point to another)
		
	index: INTEGER
		-- index of the traveler
		
	time: DOUBLE
		-- time for one minute.
			
	polypoints: ARRAYED_LIST [EM_VECTOR_2D]
		-- all points to be traveled through.
	
	is_reiterating: BOOLEAN
		-- if the destination is reached it turns around.
		
	is_traveling_back: BOOLEAN
		-- is set when a traveler returns trough the list.
	
	has_finished: BOOLEAN
		-- has the traveler finished his journey.	

	virtual_speed: DOUBLE
		-- the virtual speed of the object oin the map.
		
	angle_x: DOUBLE
		-- the angle in respect to the x-axis
		
	is_marked: BOOLEAN
		-- is the traveler marked, highlighted?

feature -- Procedures
	
	take_tour is
			-- take a tour on the map
			local
				direction: EM_VECTOR_2D
			do
				direction := destination - origin
				if not has_finished then
					
					if ((position.x - destination.x).abs < speed) and ((position.y - destination.y).abs < speed) then
						set_coordinates
						set_angle
					else
						position := position + (direction / direction.length) * speed
					end
				end
			end
		
feature {NONE} -- helper for journey	
	
	set_coordinates is
			-- set the positions to the corresponding ones of the line section
			require
				not polypoints.after
				not polypoints.before
			do
				-- hopefully this will give a bit performance to the journey
				-- otherwise just clear out the map_to_gl_coords
				origin :=  map_to_gl_coords (polypoints.item)
				position := map_to_gl_coords (polypoints.item)

				if is_traveling_back then
					polypoints.back
					if polypoints.before then
						is_traveling_back := False
						polypoints.forth
						set_coordinates
					else
						destination := map_to_gl_coords (polypoints.item)										
					end

				elseif is_reiterating then
					polypoints.forth
					if polypoints.after then
						is_traveling_back := True
						polypoints.back
						set_coordinates
					else
						destination := map_to_gl_coords (polypoints.item)										
					end				
				else
					polypoints.forth
					if polypoints.after then
						has_finished := True
					else
						destination := map_to_gl_coords (polypoints.item)										
					end
				end
			
			ensure
				origin /= Void
				position /= Void
				destination /= Void
			end	
			
	tour_helper is
			-- help during the tour to get the next destination if there is any
			do
				if not polypoints.after and not polypoints.before then
					
					if not is_traveling_back then
						polypoints.forth
						origin := destination
						position := destination
						destination := polypoints.item
					elseif is_traveling_back then
						polypoints.back
						origin := destination
						position := destination
						destination := polypoints.item
					end	
						
				elseif polypoints.after and is_reiterating then
					is_traveling_back := True
					polypoints.back
					origin := destination
					position := destination
					
				elseif polypoints.before and is_reiterating and is_traveling_back then
					is_traveling_back := False
					polypoints.forth
					origin := destination
					position := destination
					destination := polypoints.item
				else
					has_finished := True
				end
			end
		
	set_angle is	
			-- set the angles to the x- and y-axis respectively
			local 
				x_difference, y_difference, hypo, quad: DOUBLE
			do
				-- as the x-axis is turned by 180� we have to take this into account
				-- we need the x- and the y difference to calculate the norm
				x_difference := origin.x - destination.x
				y_difference := origin.y - destination.y
				hypo := sqrt ((x_difference * x_difference) + (y_difference * y_difference))
				
				if hypo /= 0 then
					-- arc_sine in radian
					quad := 0
					if  (x_difference >= 0) and (y_difference >= 0) then
						angle_x := arc_sine (x_difference/hypo)
							-- the same in degree
						angle_x := angle_x * 180 / pi
						angle_x := 180 + angle_x	
					elseif (x_difference < 0) and (y_difference >= 0) then
						x_difference := x_difference.abs
						y_difference := y_difference.abs
						angle_x := arc_sine (x_difference/hypo)
							-- the same in degree
						angle_x := angle_x * 180 / pi
						angle_x := 180 - angle_x
					elseif (x_difference < 0) and (y_difference < 0) then
						x_difference := x_difference.abs
						y_difference := y_difference.abs
						angle_x := arc_sine (x_difference/hypo)
							-- the same in degree
						angle_x := angle_x * 180 / pi
					elseif (x_difference >= 0) and (y_difference < 0) then
						x_difference := x_difference.abs
						y_difference := y_difference.abs
						angle_x := arc_sine (x_difference/hypo)
							-- the same in degree
						angle_x := angle_x * 180 / pi
						angle_x := 360 - angle_x
					end
					
					if angle_x < 0 then
						angle_x := 360 + angle_x
					elseif angle_x > 360 then
						angle_x := angle_x - 360
					end
				end
				
			end
		
		
feature -- Attributes settings	

	set_index (an_index: INTEGER) is
			-- give the object an index
			do
				index := an_index
			ensure
				index = an_index
			end
		
	
	set_traffic_info (a_type: STRING) is	
			-- set the traffic info.
			require
				a_type /= Void
			do
				traffic_info := a_type
			ensure
				traffic_info = a_type
			end
		
	set_speed (a_speed: DOUBLE) is
			-- set the speed to 'a_speed'.
			require
				a_speed >= 0
			do
				speed := a_speed
			ensure
				speed = a_speed
			end
					
	set_time (a_time: DOUBLE) is
			-- set time to 'a_time'.
			require
				a_time > 0
			do
				time := a_time
			ensure
				time = a_time
			end
		
	set_reiterate (a_boolean: BOOLEAN) is
			-- set the traveler reiterating his itinerary.
			do
				is_reiterating := a_boolean
			ensure
				is_reiterating = a_boolean
			end
		
			
feature {NONE} -- Random

	random_direction: RANDOM
		-- make a direction out of this genererator	

	give_random_direction is
			-- give a random destination
			require
				random_direction /= Void
			local
				temp_x, temp_y: DOUBLE
			do
				temp_x := random_direction.double_item
				random_direction.forth
				temp_y := random_direction.double_item
				create destination.make (1500 * temp_x - 67, 1500 * temp_y - 32)
				-- approximated places so that they are on the map
				random_direction.forth
			ensure
				destination.x < 1433
				destination.x > -67
				destination.y < 1468
				destination.y > -32
			end
			
	add_random_polypoints(num: INTEGER) is
		--  adds to the polypoints 'num' random destinations.
		require
			random_direction_not_void: random_direction /= void
		local 
			i: INTEGER
		do
			random_direction.forth
			from
				i := 1
			until
				i >= num
			loop
				random_direction.forth
				give_random_direction
				polypoints.extend (destination)
				random_direction.forth
				polypoints.extend (destination)	
				i := i+1
			end
			polypoints.start
		ensure
			polypoints_extended: polypoints.count = old polypoints.count + (2* (num-1))
		end
		
	
invariant
	polypoints /= Void
	origin /= Void
	destination /= Void
	position /= Void
	speed >= 0

end
