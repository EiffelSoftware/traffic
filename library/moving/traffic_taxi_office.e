indexing
	description: "Deferred class for taxi offices"
	date: "$Date$"
	revision: "$Revision$"

deferred class
	TRAFFIC_TAXI_OFFICE

inherit

	DOUBLE_MATH
		redefine
			default_create
		end

	TRAFFIC_3D_CONSTANTS
		export {NONE} all
		redefine
			default_create
		end

feature {NONE} -- Initialization

	default_create is
			-- Initialize lists.
		do
			create available_taxis.make
			create taxis.make
			create color.make (255, 255, 255)
		ensure then
			taxis_exists: taxis /= Void
			available_taxis_exists: available_taxis /= Void
			color_exists: color /= Void
		end

	make_with_color (r, g, b: INTEGER) is
			-- Set `color' to rgb values.
		require
			r_valid: r >= 0 and r <= 255
			g_valid: g >= 0 and g <= 255
			b_valid: b >= 0 and b <= 255
		do
			default_create
			create color.make (r, g, b)
		end

feature -- Access

	available_taxis: TRAFFIC_EVENT_LINKED_LIST[TRAFFIC_TAXI]
			-- Available taxis (not busy)

	taxis: TRAFFIC_EVENT_LINKED_LIST [TRAFFIC_TAXI]
			-- All taxis that work for this office

	color: TRAFFIC_COLOR
			-- Color of the taxi office

feature -- Basic operations

	add_taxis (a_number: INTEGER) is
			-- Add `a_number' of new taxis to this office.
		require
			a_number_valid: a_number > 0
		deferred
		end

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
			if available_taxis.count > 0 then
				nearest_taxi := available_taxis.first
				position := gl_to_map_coords (nearest_taxi.position)
				minimum_distance := sqrt((from_location.x - position.x)^2 + (from_location.y - position.y)^2)
				from
					available_taxis.start
					available_taxis.forth
					-- To start on second item on taxi_list.
				until
					available_taxis.after
				loop
					position :=gl_to_map_coords (available_taxis.item_for_iteration.position)
					temp_distance := sqrt((from_location.x - position.x)^2 + (from_location.y - position.y)^2)
					if minimum_distance > temp_distance then
						minimum_distance := temp_distance
						nearest_taxi := available_taxis.item_for_iteration
					end
					available_taxis.forth
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
			available_taxis.force_last(a_taxi)

		ensure
			a_taxi_added: available_taxis.count = old available_taxis.count + 1
		end

	delist(a_taxi: TRAFFIC_TAXI) is
			-- Take a_taxi out of available_taxi_list.
		require
			a_taxi_not_available: a_taxi.busy = true
		do
			if available_taxis.has(a_taxi)
				then
					available_taxis.delete(a_taxi)
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

--feature {TRAFFIC_3D_MAP_WIDGET} -- Access for map widget

--	taxi_list: ARRAYED_LIST[TRAFFIC_TAXI] is
--			-- List of available taxis
--			-- Accessed by the map widget to add the taxis to the 3d_traveler_representation.
--		do
--			Result := available_taxi_list
--		end

invariant
	taxis_exists: taxis /= Void
	available_taxis_exists: available_taxis /= Void
	color_set: color /= Void
end
