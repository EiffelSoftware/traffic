indexing
	description: "Objects that ..."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

deferred class
	TRAFFIC_VIEW_FACTORY

feature -- Factory methods

	new_place_view (a_place: TRAFFIC_PLACE): TRAFFIC_VIEW [TRAFFIC_PLACE] is
			-- New place view for `a_place'
		require
			a_place_exists: a_place /= Void
		deferred
		ensure
			Result_exists: Result /= Void
		end

	new_path_view (a_path: TRAFFIC_PATH): TRAFFIC_VIEW [TRAFFIC_PATH] is
			-- New path view for `a_path'
		require
			a_path_exists: a_path /= Void
		deferred
		ensure
			Result_exists: Result /= Void
		end

	new_line_view (a_line: TRAFFIC_LINE): TRAFFIC_VIEW [TRAFFIC_LINE] is
			-- New line connection view for `a_connection'
		require
			a_line_exists: a_line /= Void
		deferred
		ensure
			Result_exists: Result /= Void
		end

	new_road_view (a_road: TRAFFIC_ROAD): TRAFFIC_VIEW [TRAFFIC_ROAD] is
			-- New road view for `a_road'
		require
			a_road_exists: a_road /= Void
		deferred
		ensure
			Result_exists: Result /= Void
		end

	new_building_view (a_building: TRAFFIC_BUILDING): TRAFFIC_VIEW [TRAFFIC_BUILDING] is
			-- New building view for `a_building'
		require
			a_building_exists: a_building /= Void
		deferred
		ensure
			Result_exists: Result /= Void
		end

	new_tram_view (a_tram: TRAFFIC_TRAM): TRAFFIC_VIEW [TRAFFIC_TRAM] is
			-- New tram view for `a_tram'
		require
			a_tram_exists: a_tram /= Void
		deferred
		ensure
			Result_exists: Result /= Void
		end

	new_bus_view (a_bus: TRAFFIC_BUS): TRAFFIC_VIEW [TRAFFIC_BUS] is
			-- New bus view for `a_bus'
		require
			a_bus_exists: a_bus /= Void
		deferred
		ensure
			Result_exists: Result /= Void
		end

	new_taxi_view (a_taxi: TRAFFIC_TAXI): TRAFFIC_VIEW [TRAFFIC_TAXI] is
			-- New taxi view for `a_taxi'
		require
			a_taxi_exists: a_taxi /= Void
		deferred
		ensure
			Result_exists: Result /= Void
		end

	new_passenger_view (a_passenger: TRAFFIC_PASSENGER): TRAFFIC_VIEW [TRAFFIC_PASSENGER] is
			-- New passenger view for `a_passenger'
		require
			a_passenger_exists: a_passenger /= Void
		deferred
		ensure
			Result_exists: Result /= Void
		end

	new_free_moving_view (a_free_moving: TRAFFIC_FREE_MOVING): TRAFFIC_VIEW [TRAFFIC_FREE_MOVING] is
			-- New free_moving view for `free_moving'
		require
			a_free_moving_exists: a_free_moving /= Void
		deferred
		ensure
			Result_exists: Result /= Void
		end

end