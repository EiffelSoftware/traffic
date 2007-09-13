indexing
	description: "Deferred class for taxis working for a taxi office"
	date: "$Date$"
	revision: "$Revision$"

deferred class
	TRAFFIC_TAXI

inherit

	TRAFFIC_VEHICLE
		export {TRAFFIC_TAXI_OFFICE}
			add_to_map,
			remove_from_map
		end

feature {NONE} -- Initialization

	make_random (a_taxi_office: TRAFFIC_TAXI_OFFICE; a_point_list: DS_ARRAYED_LIST [TRAFFIC_COORDINATE]) is
			-- Taxi with an associated 'a_taxi_office'.
			-- The taxi drives around the center in a certain radius (makes sure that it doesn't disappear)
		require
			a_taxi_office_not_void: a_taxi_office /= void
			valid_number_of_stops: a_point_list /= Void and then a_point_list.count >= 2
		deferred
		ensure
			taxi_office_set: office /= Void
			polypoints_not_empty: polypoints /= Void and then polypoints.count >= a_point_list.count
		end

feature -- Access

	office: TRAFFIC_TAXI_OFFICE is deferred end
			-- Taxi office the taxi works for

feature -- Status report

	is_insertable (a_map: TRAFFIC_MAP): BOOLEAN is
			-- Is `Current' insertable into `a_map'?
		do
			Result := True
		end

	is_removable: BOOLEAN is
			-- Is `Current' removable from `a_map'?
		do
			Result := True
		end

	busy: BOOLEAN
			--Is taxi busy?

feature -- Basic operations

	take(from_location: TRAFFIC_COORDINATE; to_location: TRAFFIC_COORDINATE) is
			-- Pick up somebody at from_location and bring him or her to  to_location.
		require
			from_location_not_void: from_location /= void
			to_location_not_void: to_location /= void
		deferred
		end

feature{NONE} --Implementation

	polypoints: DS_ARRAYED_LIST [TRAFFIC_COORDINATE]

	set_request_information (from_location: TRAFFIC_COORDINATE; to_location: TRAFFIC_COORDINATE) is
			-- Set new origin and destination, new points to drive from from_location to to_location.
		require
			valid_from_location: from_location /= void
			valid_to_locaton: to_location /= void
		local
			new_polypoints: DS_ARRAYED_LIST [TRAFFIC_COORDINATE]
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
			origin := position
			destination := from_location
			set_reiterate (false)
		end

invariant

	office_not_void: office /= void

end
