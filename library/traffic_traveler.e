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
			create origin.make (0, 0)
			create destination.make (0, 0)
			set_speed (0)
		end

	make_directed (an_origin: EM_VECTOR_2D; a_destination: EM_VECTOR_2D; an_info: STRING; a_speed: DOUBLE) is
			-- create an object with defined origin and destination
			require
				an_origin /= Void
				a_destination /= Void
				an_info /= Void
				a_speed >= 0
			do
				set_traffic_info (an_info)
				origin := an_origin
				position := an_origin
				destination := a_destination
				set_speed (a_speed)
			ensure
				origin = an_origin
				destination = a_destination
				traffic_info.is_equal (an_info)
			end
	
	
	make_random (an_origin: EM_VECTOR_2D; a_seed: INTEGER; an_info: STRING) is
			-- initalize the passenger for random walk
		require
			an_origin /= Void
			a_seed >= 0
		do
			traffic_info := an_info
			create random_direction.set_seed(a_seed)
			origin := an_origin
			position := an_origin
			give_random_direction
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
		-- speed on the map.
		
	index: INTEGER
		-- index of the traveler
		
	time: DOUBLE
		-- time for one minute.

feature -- Procedures
	
	take_tour is
			-- take a tour on the map
			local
				direction: EM_VECTOR_2D
			do
				if not (position.x - destination.x < speed) or (position.y - destination.y < speed) then
					direction := destination - origin
					position := position + (direction / direction.length) * speed
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
	origin /= Void
	destination /= Void
	position /= Void
	speed >= 0

end -- class TRAFFIC_TRAVELER
