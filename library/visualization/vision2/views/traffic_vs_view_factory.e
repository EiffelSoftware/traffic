indexing
	description: "Factory for vision2 map item views"
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_VS_VIEW_FACTORY

inherit

	TRAFFIC_VIEW_FACTORY

	KL_SHARED_FILE_SYSTEM

feature -- Factory methods

	new_place_view (a_place: TRAFFIC_PLACE): TRAFFIC_PLACE_VIEW is
			-- New place view for `a_place'
		do
			create Result.make (a_place)
		end

	new_line_view (a_line: TRAFFIC_LINE): TRAFFIC_LINE_VIEW is
			-- New line view for `a_line'
		do
			create Result.make (a_line)
			if a_line.color /= Void then
				Result.set_color (create {TRAFFIC_COLOR}.make_with_rgb (a_line.color.red, a_line.color.green, a_line.color.blue))
			end
		end

	new_road_view (a_road: TRAFFIC_ROAD): TRAFFIC_ROAD_VIEW is
			-- New road view for `a_road'
		do
			create Result.make (a_road)
			Result.set_width (10)
		end

	new_path_view (a_path: TRAFFIC_PATH): TRAFFIC_PATH_VIEW is
			-- New line connection view for `a_connection'
		do
			create Result.make (a_path)
		end

	new_building_view (a_building: TRAFFIC_BUILDING): TRAFFIC_BUILDING_VIEW is
			-- New building view for `a_building'
		local
			l: TRAFFIC_LANDMARK
		do
			if not a_building.is_landmark then
				create {TRAFFIC_BUILDING_SIMPLE_VIEW} Result.make (a_building)
			else
				l ?= a_building
				create {TRAFFIC_BUILDING_ICON_VIEW} Result.make_with_filename (a_building, l.filename)
			end
		end

	new_tram_view (a_tram: TRAFFIC_TRAM): TRAFFIC_MOVING_VIEW [TRAFFIC_TRAM] is
			-- New tram view for `a_tram'
		do
			create Result.make (a_tram)
		end

	new_bus_view (a_bus: TRAFFIC_BUS): TRAFFIC_MOVING_ICON_VIEW [TRAFFIC_BUS] is
			-- New bus view for `a_bus'
		do
			create Result.make_with_filename (a_bus, "")
			Result.set_color (create {TRAFFIC_COLOR}.make_with_rgb (40, 30, 230))
		end

	new_taxi_view (a_taxi: TRAFFIC_TAXI): TRAFFIC_MOVING_VIEW [TRAFFIC_TAXI] is
			-- New taxi view for `a_taxi'
		do
			create Result.make (a_taxi)
			Result.set_color (a_taxi.office.color)
		end

	new_passenger_view (a_passenger: TRAFFIC_PASSENGER): TRAFFIC_MOVING_ICON_VIEW [TRAFFIC_PASSENGER] is
			-- New passenger view for `a_passenger'
		do
		--	create Result.make (a_passenger)
			create Result.make_with_filename (a_passenger, File_system.absolute_pathname (File_system.pathname_from_file_system ("..\map\paris\man.png", Windows_file_system)))
			Result.set_color (create {TRAFFIC_COLOR}.make_with_rgb (140, 200, 225))
		end

	new_free_moving_view (a_free_moving: TRAFFIC_FREE_MOVING): TRAFFIC_MOVING_VIEW [TRAFFIC_FREE_MOVING] is
			-- New free_moving view for `free_moving'
		do
			create Result.make (a_free_moving)
			Result.set_color (create {TRAFFIC_COLOR}.make_with_rgb (220, 200, 30))
		end

end
