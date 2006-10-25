indexing
	description: "Deferred class for taxi offices"
	date: "$Date$"
	revision: "$Revision$"

deferred class
	TRAFFIC_TAXI_OFFICE

inherit

	DOUBLE_MATH

	TRAFFIC_3D_CONSTANTS
		export {NONE} all end

feature -- Access

	available_taxi_list: ARRAYED_LIST[TRAFFIC_TAXI]
			-- Available taxis that work for the taxi office

feature -- Basic operations

	call (from_location:EM_VECTOR_2D; to_location:EM_VECTOR_2D) is
			-- Determine nearest taxi to from_location place, pass request on to this taxi.
		require
			from_location_not_void: from_location /= void
			to_location_not_void: to_location /= void
		local
			nearest_taxi: TRAFFIC_TAXI
			minimum_distance: REAL
			temp_distance: REAL
			position: EM_VECTOR_2D
		do
			if available_taxi_list.count > 0 then
				nearest_taxi := available_taxi_list.first
				position := gl_to_map_coords (nearest_taxi.position)
				minimum_distance := sqrt((from_location.x - position.x)^2 + (from_location.y - position.y)^2)
				from
					available_taxi_list.start
					available_taxi_list.forth
					-- To start on second item on taxi_list.
				until
					available_taxi_list.after
				loop
					position :=gl_to_map_coords (available_taxi_list.item.position)
					temp_distance := sqrt((from_location.x - position.x)^2 + (from_location.y - position.y)^2)
					if minimum_distance > temp_distance then
						minimum_distance := temp_distance
						nearest_taxi := available_taxi_list.item
					end
					available_taxi_list.forth
				end
				nearest_taxi.take(from_location, to_location)
			end
		end

feature {TRAFFIC_TAXI} -- Basic operations for taxis

	enlist(a_taxi: TRAFFIC_TAXI) is
			-- Put a_taxi into available list.
		require
			a_taxi_not_busy: a_taxi.busy = false
		do
			available_taxi_list.extend(a_taxi)

		ensure
			a_taxi_added: available_taxi_list.count = old available_taxi_list.count + 1
		end

	delist(a_taxi: TRAFFIC_TAXI) is
			-- Take a_taxi out of available_taxi_list.
		require
			a_taxi_not_available: a_taxi.busy = true
		do
			if available_taxi_list.has(a_taxi)
				then
					available_taxi_list.prune_all(a_taxi)
				end
		end

	recall(from_location: EM_VECTOR_2D; to_location: EM_VECTOR_2D) is
				-- Recall request.
				-- E.g. when a taxi reject to take the request because it picked a passenger up on the street.
		require
			from_location_not_void: from_location /= void
			to_location_not_void: to_location /= void
		deferred
		end

feature {TRAFFIC_3D_MAP_WIDGET} -- Access for map widget

	taxi_list: ARRAYED_LIST[TRAFFIC_TAXI] is
			-- List of available taxis
			-- Accessed by the map widget to add the taxis to the 3d_traveler_representation.
		do
			Result := available_taxi_list
		end

invariant
	available_taxi_list_not_void: available_taxi_list /= void
end
