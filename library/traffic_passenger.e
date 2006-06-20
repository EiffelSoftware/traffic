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
	-- TODO: document the features!!!
	intended_line: TRAFFIC_LINE
	
	current_transportation: TRAFFIC_TRANSPORTATION
	
	boarding_stop: INTEGER
	--stop to board counted from line start.
	
	deboarding_stop: INTEGER
	--stop to get off counted from boarding start.
	
	direction: INTEGER
	
feature -- creation procedure

	make_directed (an_itinerary: ARRAYED_LIST [EM_VECTOR_2D]; a_type: TRAFFIC_TYPE; a_speed: DOUBLE) is
			-- create an object with an origin and a destination
			require
				an_itinerary /= Void
				a_type /= Void
				a_speed >= 0
			do
				create polypoints.make (1)
				polypoints := an_itinerary
				polypoints.start
				set_coordinates
				set_angle
				traffic_type := a_type
				virtual_speed := a_speed
			end
	
	make_random (a_seed: INTEGER; stops: INTEGER; a_type: TRAFFIC_TYPE) is
			-- make a passanger who stops at 'stops' random positions
			require
				a_seed >= 0
				stops >= 2
				a_type /= Void
			local 
				i: INTEGER
			do
				-- TODO: code reordering.
				-- TODO: put the random positions generation in the father so that it can be
				-- used by all descendants.
				create polypoints.make (stops)
				traffic_type := a_type
				create random_direction.set_seed(a_seed)
				random_direction.forth
				from
					i := 1
				until
					i >= stops
				loop
					random_direction.forth
					give_random_direction
					polypoints.force (destination)
					random_direction.forth
					polypoints.force (destination)	
					i := i+1
				end
				polypoints.start
				set_coordinates
				set_angle
				virtual_speed := random_direction.double_item
				random_direction.forth
			end
			
feature --basic operations

	set_intended_line_info(a_line: TRAFFIC_LINE; a_boarding_stop: INTEGER; a_deboarding_stop: INTEGER; a_direction: INTEGER) is
			-- set the requested transportation and stop
			require
				line_not_empty: a_line /= Void
				stop_not_empty: a_boarding_stop > 0
				stop_not_empty: a_deboarding_stop > 0
				direction_not_empty: a_direction > 0
			do
				intended_line := a_line
				boarding_stop := a_boarding_stop
				deboarding_stop := a_deboarding_stop
				direction := a_direction			
			ensure
				line_set: intended_line /= Void
				stop_set: boarding_stop > 0
				stop_set: deboarding_stop > 0
				direction_set: direction > 0
			end
	
		
	board(a_line_transport: TRAFFIC_LINE_TRANSPORTATION; a_direction: INTEGER) is
			-- board a line transportation
				require
					a_line_transport.line = intended_line and a_line_transport.direction = direction
					-- TODO: a_direction argument is obsolete. ^- is this well modeled as precondition?
					-- TODO: condition names!!!
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

