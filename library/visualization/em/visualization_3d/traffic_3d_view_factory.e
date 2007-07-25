indexing
	description: "Objects that ..."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_3D_VIEW_FACTORY

inherit

	TRAFFIC_VIEW_FACTORY
		redefine
			default_create
		end

feature -- Initialization

	default_create is
			--
		do
			create building_view_factory
			create connection_view_factory.make
			create moving_view_factory
			create place_view_factory.make
		end


feature -- Factory methods

	new_place_view (a_place: TRAFFIC_PLACE): TRAFFIC_VIEW [TRAFFIC_PLACE] is
			-- New place view for `a_place'
		do
			Result := place_view_factory.new_place_member (a_place)
			Result.set_color (create {TRAFFIC_COLOR}.make_black)
		end

	new_path_view (a_path: TRAFFIC_PATH): TRAFFIC_VIEW [TRAFFIC_PATH] is
			-- New path view for `a_path'
		do
		end

	new_line_view (a_line: TRAFFIC_LINE): TRAFFIC_VIEW [TRAFFIC_LINE] is
			-- New line view for `a_line'
		local
			l_v: TRAFFIC_3D_RENDERABLE [TRAFFIC_LINE]
			l: TRAFFIC_3D_RENDERABLE [TRAFFIC_CONNECTION]
		do
			create l_v.make (a_line)
			from
				a_line.start
			until
				a_line.off
			loop
				l := connection_view_factory.new_connection (a_line.item_for_iteration)
				l_v.add_child (l)
				a_line.forth
			end
			Result := l_v
			l_v.set_color (a_line.color)
		end

	new_road_view (a_road: TRAFFIC_ROAD): TRAFFIC_VIEW [TRAFFIC_ROAD] is
			-- New road view for `a_road'
		local
			r: TRAFFIC_3D_RENDERABLE [TRAFFIC_ROAD]
			s: TRAFFIC_3D_RENDERABLE [TRAFFIC_CONNECTION]
		do
			create r.make (a_road)
			s := connection_view_factory.new_connection (a_road.one_way)
			r.add_child (s)
			Result := r
--			r.set_color (color)
--			r.set_as_child_of (road_root)
		end

	new_building_view (a_building: TRAFFIC_BUILDING): TRAFFIC_VIEW [TRAFFIC_BUILDING] is
			-- New building view for `a_building'
		do
			if a_building.is_villa then
				Result := building_view_factory.new_villa_member (a_building)
			elseif a_building.is_skyscraper then
				Result := building_view_factory.new_skyscraper_member (a_building)
			else
				Result := building_view_factory.new_apartment_building_member (a_building)
			end
		end

	new_tram_view (a_tram: TRAFFIC_TRAM): TRAFFIC_VIEW [TRAFFIC_TRAM] is
			-- New tram view for `a_tram'
		do
			Result := moving_view_factory.new_tram_daynight_member (a_tram)
		end

	new_bus_view (a_bus: TRAFFIC_BUS): TRAFFIC_VIEW [TRAFFIC_BUS] is
			-- New bus view for `a_bus'
		do
			Result := moving_view_factory.new_bus_daynight_member (a_bus)
		end

	new_taxi_view (a_taxi: TRAFFIC_TAXI): TRAFFIC_VIEW [TRAFFIC_TAXI] is
			-- New taxi view for `a_taxi'
		do
			Result := moving_view_factory.new_taxi_daynight_member (a_taxi)
		end

	new_passenger_view (a_passenger: TRAFFIC_PASSENGER): TRAFFIC_VIEW [TRAFFIC_PASSENGER] is
			-- New passenger view for `a_passenger'
		do
			Result := moving_view_factory.new_person_member (a_passenger)
		end

	new_free_moving_view (a_free_moving: TRAFFIC_FREE_MOVING): TRAFFIC_VIEW [TRAFFIC_FREE_MOVING] is
			-- New free_moving view for `free_moving'
		do
			Result := moving_view_factory.new_free_moving_member (a_free_moving)
		end

feature -- External factories

	building_view_factory: TRAFFIC_3D_BUILDING_FACTORY

	connection_view_factory: TRAFFIC_3D_CONNECTION_FACTORY

	moving_view_factory: TRAFFIC_3D_MOVING_FACTORY

	place_view_factory: TRAFFIC_3D_PLACE_FACTORY

end
