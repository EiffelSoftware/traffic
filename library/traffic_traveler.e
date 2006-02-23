indexing
	description: "Travelers on the map"
	author: "Florian Geldmacher"
	date: "9.2.2006"
	revision: "$Revision$"

class
	TRAFFIC_TRAVELER
	
inherit	
	MATH_CONST
		export {NONE} all end
		
	DOUBLE_MATH
		export {NONE} all end
		
create
	make, make_directed, make_random
	
feature -- Initialization

	make is
		-- make a new object on default positions
		do
			set_traffic_info ("")
			create position.make (0, 0)
			create itinerary.make
			create origin.make (0, 0)
			create destination.make (0, 0)
			set_speed (0)
		end

	make_directed (an_itinerary: LINKED_LIST[EM_VECTOR_2D]; an_info: STRING; a_speed: DOUBLE) is
			-- create an object with defined origin and destination
			require
				an_itinerary /= Void
				an_info /= Void
				a_speed >= 0
			do
				create itinerary.make
				itinerary := an_itinerary
				itinerary.start
				
				set_traffic_info (an_info)
				origin := itinerary.first
				itinerary.forth
				position := origin
				destination := itinerary.item
				set_speed (a_speed)
			ensure
				origin /= Void
				destination /= Void
				traffic_info.is_equal (an_info)
			end
	
	
	make_random (an_origin: EM_VECTOR_2D; a_seed: INTEGER; an_info: STRING) is
			-- initalize the passenger for random walk
		require
			an_origin /= Void
			a_seed >= 0
		do
			create itinerary.make
			traffic_info := an_info
			create random_direction.set_seed(a_seed)
			origin := an_origin
			position := an_origin
			give_random_direction
			itinerary.start
			itinerary.force (origin)
			itinerary.force (destination)
			speed := random_direction.double_item
			random_direction.forth
		ensure	
			position = an_origin	
			origin = an_origin
			destination /= Void
			speed >= 0
			traffic_info.is_equal (an_info)
		end	
		
feature -- Attributes
	
	traffic_info: STRING
		-- type of traffic.

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
		
	itinerary: LINKED_LIST[EM_VECTOR_2D]
		-- list of points the traveler travels through.
	
	is_reiterating: BOOLEAN
		-- if the destination is reached it turns around.
		
	is_traveling_back: BOOLEAN
		-- is set when a traveler returns trough the list.
		
	has_finished: BOOLEAN
		-- has the traveler finished his journey.

feature -- Procedures
	
	take_tour is
			-- take a tour on the map
			local
				direction: EM_VECTOR_2D
			do
				direction := destination - origin
				
				if ((position.x - destination.x).abs < speed) and ((position.y - destination.y).abs < speed) then
					tour_helper
				else

					position := position + (direction / direction.length) * speed
					
				end

				
			end
		
		-- TODO: set the position the first time right
			
	tour_helper is
			-- help during the tour to get the next destination if there is any
			do
				if not itinerary.after and not itinerary.before then
					
					if not is_traveling_back then
						itinerary.forth
						origin := destination
						position := destination
						destination := itinerary.item
					elseif is_traveling_back then
						itinerary.back
						origin := destination
						position := destination
						destination := itinerary.item
					end	
						
				elseif itinerary.after and is_reiterating then
					is_traveling_back := True
					itinerary.back
					origin := destination
					position := destination
					
				elseif itinerary.before and is_reiterating and is_traveling_back then
					is_traveling_back := False
					itinerary.forth
					origin := destination
					position := destination
					destination := itinerary.item
				else
					has_finished := True
				end
			end
		
		
	
	set_index (an_index: INTEGER) is
			-- give the object an index
			do
				index := an_index
			ensure
				index = an_index
			end
		
	
	set_traffic_info (a_type: STRING) is	
			-- set the traffic info
			require
				a_type /= Void
			do
				traffic_info := a_type
			ensure
				traffic_info = a_type
			end
		
	set_speed (a_speed: DOUBLE) is
			-- set the speed to 'a_speed'
			require
				a_speed >= 0
			do
				speed := a_speed
			ensure
				speed = a_speed
			end
			
			
	set_time (a_time: DOUBLE) is
			-- set time to 'a_time'
			require
				a_time > 0
			do
				time := a_time
			ensure
				time = a_time
			end
		
	set_reiterate (a_boolean: BOOLEAN) is
			-- set the traveler reiterating his itinerary
			do
				is_reiterating := a_boolean
			ensure
				is_reiterating = a_boolean
			end
		
			
feature{NONE} -- random

	give_random_direction is
			-- give a random destination
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

	random_direction: RANDOM
		-- make a direction out of this genererator	
	
invariant
	itinerary /= Void
	origin /= Void
	destination /= Void
	position /= Void
	speed >= 0

end -- class TRAFFIC_TRAVELER
