indexing
	description: "Objects that uses a transportation to travel"
	date: "$Date: 6/6/2006$"
	revision: "$Revision$"

class
	TRAFFIC_PASSENGER

inherit
	TRAFFIC_TRAVELER

create
	make_directed, make_random

feature --Access

	intended_line: TRAFFIC_LINE
		-- the line the passenger intends to use next.
	
	current_transportation: TRAFFIC_TRANSPORTATION
		-- the transportation the passenger is traveling by at the moment.
		-- is void if passenger uses no transportation.
		
	boarding_stop: INTEGER
		-- stop where the passenger intends to board the transportation.
		-- number of stops from line start until where to board.
	
	deboarding_stop: INTEGER
		-- stop where the passenger intends to get off 
		-- number of stops from line start until where to get off.
	
	direction_line_back: BOOLEAN
		-- in which direction the passenger will use to travel on the line
		-- if the deboarding_stop is less than the boarding_stop the passenger has to use
		-- a transportation that travels back on its line.
	
feature -- creation procedure

	make_directed (an_itinerary: ARRAYED_LIST [EM_VECTOR_2D];  a_speed: DOUBLE) is
			-- creates a passenger with a route as an_itinerary and a_speed.
			-- an_itinerary is the list of the points where the passenger will go through. 
			require
				an_itinerary_not_void: an_itinerary /= Void
				a_speed_not_negative: a_speed >= 0
			do
				traffic_type := create {TRAFFIC_TYPE_WALKING}.make
				create polypoints.make (0)
				polypoints := an_itinerary
				polypoints.start
				set_coordinates
				set_angle
				virtual_speed := a_speed
			end
	
	make_random (stops: INTEGER; a_seed: INTEGER; ) is
			-- creates a passanger who stops at 'stops' random positions and has a random speed.
			-- a_seed is needed to set the random generators seed, as example use time ticks.
			require
				a_seed_not_negative: a_seed >= 0
				valid_number_of_stops: stops >= 2
			local 
				i: INTEGER
			do
				traffic_type := create {TRAFFIC_TYPE_WALKING}.make
				create polypoints.make (0)
				create random_direction.set_seed(a_seed)
				add_random_polypoints(stops)
				set_coordinates
				set_angle
				virtual_speed := random_direction.double_item
				random_direction.forth
			end
			
feature --basic operations

	set_intended_line_info(a_line: TRAFFIC_LINE; a_boarding_stop: INTEGER; a_deboarding_stop: INTEGER) is
			-- set the requested transportation info.
			-- set where 'Current' intends to board and to get off as a_boarding_stop and a_deboarding_stop.
			require
				line_not_empty: a_line /= Void
				valid_stop: a_boarding_stop > 0 and a_boarding_stop <= a_line.count
				valid_stop: a_deboarding_stop > 0 and a_deboarding_stop <= a_line.count
			do
				intended_line := a_line
				boarding_stop := a_boarding_stop
				deboarding_stop := a_deboarding_stop
				if a_deboarding_stop < a_boarding_stop then
						direction_line_back := true
					else
						direction_line_back := false
				end	
					
			ensure
				line_set: intended_line /= Void
				stop_set: boarding_stop > 0
				stop_set: deboarding_stop > 0
			end
	
		
	board(a_line_transport: TRAFFIC_LINE_TRANSPORTATION) is
			-- board a line transportation
				require
					inteded_line: a_line_transport.line = intended_line 
					intended_direction: a_line_transport.is_traveling_back = direction_line_back
				do
					current_transportation := a_line_transport
					current_transportation.load (1)
				ensure
					transportation_set: current_transportation = a_line_transport
				end	
			
	deboard() is 
			-- deboard current_transportation
			require
				current_transportation /= void
			do
				current_transportation.unload(1)
				current_transportation := void
			ensure
				current_transportatoin_not_set: current_transportation = void
			end	
			
			-- TODO: check for additional invariants.
				
end

