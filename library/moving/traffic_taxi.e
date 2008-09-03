indexing
	description: "Class for taxis working for a taxi office"
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_TAXI

inherit

	TRAFFIC_VEHICLE
		export {TRAFFIC_TAXI_OFFICE}
			add_to_city,
			remove_from_city
		redefine
			advance
		end



create
	make_random

feature {NONE} -- Initialization

	make_random (a_taxi_office: TRAFFIC_TAXI_OFFICE; a_point_list: DS_ARRAYED_LIST [TRAFFIC_POINT]) is
			-- Create a taxi with an associated 'a_taxi_office'.
			-- Random speed and stops at 'stops' random positions.
			-- Set seed of random_number to 'a_seed'.
		require
			a_taxi_office_not_void: a_taxi_office /= void
			valid_number_of_stops: a_point_list /= Void and then a_point_list.count >= 2
		do
			create polypoints.make_from_linear (a_point_list)
			create poly_cursor.make (polypoints)
			poly_cursor.start

			office := a_taxi_office
			office.enlist(Current)

			set_reiterate (true)
			move_next
			update_angle

			speed := 17
			start
			create changed_event

		ensure
			taxi_office_set: office /= Void
			polypoints_not_empty: polypoints /= Void and then polypoints.count >= a_point_list.count
		end

feature -- Access

	count: INTEGER
			-- Current amount of load

	office : TRAFFIC_TAXI_OFFICE
			-- Taxi office `Current' works for

feature -- Status report

	is_insertable (a_city: TRAFFIC_CITY): BOOLEAN is
			-- Is `Current' insertable into `a_city'?
		do
			Result := True
		end

	is_removable: BOOLEAN is
			-- Is `Current' removable from `city'?
		do
			Result := True
		end

	busy: BOOLEAN
			--Is taxi busy?

feature -- Basic operations

	take (from_location: TRAFFIC_POINT; to_location: TRAFFIC_POINT) is
			-- Take a request. Pick somebody up at from_location and bring him or her to to_location.
			-- If busy inform the taxi office to recall it.
		do
			if not busy then
				-- Set taxi busy and take it out of the available_taxi_list of the office.
				set_request_information (from_location, to_location)
				busy := True
				-- Set is_marked to true so that the view will draw the busy taxi marked.
				is_marked := True
				office.delist(Current)
				update_angle
				changed_event.publish ([])
			else
				office.recall(from_location, to_location)
			end
		end

	load(a_quantity: INTEGER) is
			-- Load cargo or a passenger.
    	do
			count := count + a_quantity
    	end

    unload(a_quantity: INTEGER) is
			-- Load cargo or a passenger.
    	do
			count := count - a_quantity
    	end

	advance is
			-- Take a tour in the city.
			-- Set new random directions and if 'Current' has done a request and is available again.
		do
			Precursor
			if has_finished and busy then
					-- Taxi has fullfilled a request.
					-- Add new random directions.
					-- Set new destination
					origin := location
					destination := polypoints.first
					has_finished := false
					set_reiterate (true)
					-- Taxi is available again.
					busy := false
					is_marked := false
					office.enlist(Current)
			end
		end


	move_next is
			--  Move to following position
		do
			-- Set the locations to the corresponding ones of the line segment.
			origin :=  poly_cursor.item
			location := poly_cursor.item
			if is_traveling_back then
				poly_cursor.back
				if poly_cursor.before then
					is_traveling_back := False
					poly_cursor.forth
					move_next
				else
					destination := poly_cursor.item
				end
			elseif is_reiterating then
				poly_cursor.forth
				if poly_cursor.after then
					is_traveling_back := True
					poly_cursor.back
					move_next
				else
					destination := poly_cursor.item
				end
			else
				poly_cursor.forth
				if poly_cursor.after then
					has_finished := True
				else
					destination := poly_cursor.item
				end
			end
		end


feature{NONE} --Implementation

	polypoints: DS_ARRAYED_LIST [TRAFFIC_POINT]

	set_request_information (from_location: TRAFFIC_POINT; to_location: TRAFFIC_POINT) is
			-- Set new origin and destination, new points to drive from from_location to to_location.
		require
			valid_from_location: from_location /= void
			valid_to_locaton: to_location /= void
		local
			new_polypoints: DS_ARRAYED_LIST [TRAFFIC_POINT]
		do
			-- New polypoint to travel through.
			create new_polypoints.make(0)
			-- Wait so that passenger can board.
			new_polypoints.force_last(from_location)
			new_polypoints.force_last(from_location)
			new_polypoints.force_last(from_location)
			new_polypoints.force_last(from_location)
			new_polypoints.force_last(from_location)
			new_polypoints.force_last(from_location)
			new_polypoints.force_last(from_location)
			-- Wait so that passenger can deboard.
			new_polypoints.force_last(to_location)
			new_polypoints.force_last(to_location)
			new_polypoints.force_last(to_location)
			new_polypoints.force_last(to_location)
			new_polypoints.force_last(to_location)
			new_polypoints.force_last(to_location)
			new_polypoints.force_last(to_location)
			polypoints := new_polypoints
			polypoints.start
			-- Set the new origin and destination.
			origin := location
			destination := from_location
			set_reiterate (false)
		end

invariant

end
