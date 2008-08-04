indexing
	description: "Widgets that display a map"
	date: "$Date$"
	revision: "$Revision$"

deferred class TRAFFIC_MAP_WIDGET

feature -- Access

	map: TRAFFIC_MAP
			-- Map that is displayed

	factory: TRAFFIC_VIEW_FACTORY
			-- Factory for creating views
		deferred
		end

	line_representations:  TRAFFIC_VIEW_CONTAINER [TRAFFIC_LINE, TRAFFIC_VIEW [TRAFFIC_LINE]] is
			-- Container for line connection views
		deferred
		end

	road_representations:  TRAFFIC_VIEW_CONTAINER [TRAFFIC_ROAD, TRAFFIC_VIEW [TRAFFIC_ROAD]] is
			-- Container for road connection views
		deferred
		end

	place_representations: TRAFFIC_VIEW_CONTAINER [TRAFFIC_STATION, TRAFFIC_VIEW [TRAFFIC_STATION]]
			-- Container for place views
		deferred
		end

	building_representations: TRAFFIC_VIEW_CONTAINER [TRAFFIC_BUILDING, TRAFFIC_VIEW [TRAFFIC_BUILDING]]
			-- Container for building views
		deferred
		end

	moving_representations: TRAFFIC_VIEW_CONTAINER [TRAFFIC_MOVING, TRAFFIC_VIEW [TRAFFIC_MOVING]]
			-- Container for moving views
		deferred
		end

	path_representations: TRAFFIC_VIEW_CONTAINER [TRAFFIC_PATH, TRAFFIC_VIEW [TRAFFIC_PATH]]
			-- Container for path views
		deferred
		end

feature -- Element change

	set_map (a_map: TRAFFIC_MAP) is
			-- Set map that is displayed to `a_map'.
		require
			line_representations_exists: line_representations /= Void
			place_representations_exists: place_representations /= Void
			building_representations_exists: building_representations /= Void
			moving_representations_exists: moving_representations /= Void
			path_representations_exists: path_representations /= Void
		local
			l: TRAFFIC_VIEW [TRAFFIC_LINE]
			p: TRAFFIC_VIEW [TRAFFIC_STATION]
			r: TRAFFIC_VIEW [TRAFFIC_ROAD]
		do
			map := a_map
			from
				map.roads.start
			until
				map.roads.after
			loop
				r := factory.new_road_view (map.roads.item_for_iteration)
				road_representations.put_last (r)
				map.roads.forth
			end
			from
				map.lines.start
			until
				map.lines.after
			loop
				l := factory.new_line_view (map.lines.item_for_iteration)
				line_representations.put_last (l)
				map.lines.forth
			end
			from
				map.places.start
			until
				map.places.after
			loop
				p := factory.new_place_view (map.places.item_for_iteration)
				place_representations.put_last (p)
				map.places.forth
			end
			from
				map.buildings.start
			until
				map.buildings.after
			loop
				add_building (map.buildings.item_for_iteration)
				map.buildings.forth
			end
			from
				map.trams.start
			until
				map.trams.after
			loop
				add_tram (map.trams.item_for_iteration)
				map.trams.forth
			end
			from
				map.busses.start
			until
				map.busses.after
			loop
				add_bus (map.busses.item_for_iteration)
				map.busses.forth
			end
			from
				map.free_movings.start
			until
				map.free_movings.after
			loop
				add_free_moving (map.free_movings.item_for_iteration)
				map.free_movings.forth
			end
			from
				map.passengers.start
			until
				map.passengers.after
			loop
				add_passenger (map.passengers.item_for_iteration)
				map.passengers.forth
			end
			from
				map.paths.start
			until
				map.paths.after
			loop
				add_path (map.paths.item_for_iteration)
				map.paths.forth
			end
			from
				map.taxi_offices.start
			until
				map.taxi_offices.after
			loop
				add_taxi_office (map.taxi_offices.item_for_iteration)
				map.taxi_offices.forth
			end
			map.lines.element_inserted_event.subscribe (agent add_line)
			map.lines.element_removed_event.subscribe (agent remove_line)
			map.roads.element_inserted_event.subscribe (agent add_road)
			map.roads.element_removed_event.subscribe (agent remove_road)
			map.places.element_inserted_event.subscribe (agent add_place)
			map.places.element_removed_event.subscribe (agent remove_place)
			map.buildings.element_inserted_event.subscribe (agent add_building)
			map.buildings.element_removed_event.subscribe (agent remove_building)
			map.trams.element_inserted_event.subscribe (agent add_tram)
			map.trams.element_removed_event.subscribe (agent remove_tram)
			map.busses.element_inserted_event.subscribe (agent add_bus)
			map.busses.element_removed_event.subscribe (agent remove_bus)
			map.free_movings.element_inserted_event.subscribe (agent add_free_moving)
			map.free_movings.element_removed_event.subscribe (agent remove_free_moving)
			map.passengers.element_inserted_event.subscribe (agent add_passenger)
			map.passengers.element_removed_event.subscribe (agent remove_passenger)
			map.paths.element_inserted_event.subscribe (agent add_path)
			map.paths.element_removed_event.subscribe (agent remove_path)
			map.taxi_offices.element_inserted_event.subscribe (agent add_taxi_office)
			map.taxi_offices.element_removed_event.subscribe (agent remove_taxi_office)
		ensure
			map_set: map = a_map
		end

feature -- Status report

	is_map_hidden: BOOLEAN
			-- Is the map hidden?

	are_buildings_hidden: BOOLEAN
			-- Are the buildings displayed?

feature -- Status setting

	enable_map_hidden is
			-- Set `is_map_hidden' to `True'.
		do
			is_map_hidden := True
		ensure
			map_hidden: is_map_hidden
		end

	disable_map_hidden is
			-- Set `is_map_hidden' to `False'.
		do
			is_map_hidden := False
		ensure
			map_not_hidden: not is_map_hidden
		end

feature {NONE} -- Implementation (view adding)

	add_place (a_place: TRAFFIC_STATION) is
			-- Add place view for `a_place'.
		require
			a_place_exists: a_place /= Void
		do
			place_representations.put_last (factory.new_place_view (a_place))
		end

	add_line (a_line: TRAFFIC_LINE) is
			-- Add line view for `a_line'.
		require
			a_line_exists: a_line /= Void
		do
			line_representations.put_last (factory.new_line_view (a_line))
		end

	add_road (a_road: TRAFFIC_ROAD) is
			-- Add road view for `a_road'.
		require
			a_road_exists: a_road /= Void
		do
			road_representations.put_last (factory.new_road_view (a_road))
		end

	add_path (a_path: TRAFFIC_PATH) is
			-- Add path view for `a_path'.
		require
			a_path_exists: a_path /= Void
		do
			path_representations.put_last (factory.new_path_view (a_path))
		end

	add_building (a_building: TRAFFIC_BUILDING) is
			-- Add building view for `a_building'.
		require
			a_building_exists: a_building /= Void
		do
			building_representations.put_last (factory.new_building_view (a_building))
		end

	add_tram (a_tram: TRAFFIC_TRAM) is
			-- Add tram view for `a_tram'.
		require
			a_tram_exists: a_tram /= Void
		do
			moving_representations.put_last (factory.new_tram_view (a_tram))
		end

	add_bus (a_bus: TRAFFIC_BUS) is
			-- Add bus view for `a_bus'.
		require
			a_bus_exists: a_bus /= Void
		do
			moving_representations.put_last (factory.new_bus_view (a_bus))
		end

	add_free_moving (a_free_moving: TRAFFIC_FREE_MOVING) is
			-- Add free moving view for `a_free_moving'.
		require
			a_free_moving_exists: a_free_moving /= Void
		do
			moving_representations.put_last (factory.new_free_moving_view (a_free_moving))
		end

	add_passenger (a_passenger: TRAFFIC_PASSENGER) is
			-- Add passenger view for `a_passenger'.
		require
			a_passenger_exists: a_passenger /= Void
		do
			moving_representations.put_last (factory.new_passenger_view (a_passenger))
		end

	add_taxi_office (a_taxi_office: TRAFFIC_TAXI_OFFICE) is
			-- Add `a_taxi_office' to the list of items where a view is added for each new taxi.
		require
			a_taxi_office_exists: a_taxi_office /= Void
		do
			a_taxi_office.taxis.element_inserted_event.subscribe (add_taxi_agent)
			a_taxi_office.taxis.element_removed_event.subscribe (remove_taxi_agent)
			-- In case the taxi office has already some taxis...
			if not a_taxi_office.taxis.is_empty then
				from
					a_taxi_office.taxis.start
				until
					a_taxi_office.taxis.off
				loop
					add_taxi (a_taxi_office.taxis.item_for_iteration)
					a_taxi_office.taxis.forth
				end
			end
		end

	add_taxi (a_taxi: TRAFFIC_TAXI) is
			-- Add taxi view for `a_taxi'.
		require
			a_taxi_not_void: a_taxi /= Void
		do
			moving_representations.put_last (factory.new_taxi_view (a_taxi))
		end

feature {NONE} -- Implementation (view removing)

	remove_place (a_place: TRAFFIC_STATION) is
			-- Remove view for `a_place'.
		require
			a_place_exists: a_place /= Void
		do
			place_representations.delete (place_representations.view_for_item (a_place))
		end

	remove_line (a_line: TRAFFIC_LINE) is
			-- Remove view for `a_line'.
		require
			a_line_exists: a_line /= Void
		do
			line_representations.delete (line_representations.view_for_item (a_line))
		end

	remove_road (a_road: TRAFFIC_ROAD) is
			-- Remove view for `a_road'.
		require
			a_road_exists: a_road /= Void
		do
			road_representations.delete (road_representations.view_for_item (a_road))
		end

	remove_path (a_path: TRAFFIC_PATH) is
			-- Remove view for `a_path'.
		require
			a_path_exists: a_path /= Void
		do
			path_representations.delete (path_representations.view_for_item (a_path))
		end

	remove_free_moving (a_free_moving: TRAFFIC_FREE_MOVING) is
			-- Remove view for `a_free_moving'.
		require
			a_free_moving_exists: a_free_moving /= Void
		do
			moving_representations.delete (moving_representations.view_for_item (a_free_moving))
		end

	remove_tram (a_tram: TRAFFIC_TRAM) is
			-- Remove view for `a_tram'.
		require
			a_tram_exists: a_tram /= Void
		do
			moving_representations.delete (moving_representations.view_for_item (a_tram))
		end

	remove_bus (a_bus: TRAFFIC_BUS) is
			-- Remove view for `a_bus'.
		require
			a_bus_exists: a_bus /= Void
		do
			moving_representations.delete (moving_representations.view_for_item (a_bus))
		end

	remove_passenger (a_passenger: TRAFFIC_PASSENGER) is
			-- Remove view for `a_passenger'.
		require
			a_passenger_exists: a_passenger /= Void
		do
			moving_representations.delete (moving_representations.view_for_item (a_passenger))
		end

	remove_building (a_building: TRAFFIC_BUILDING) is
			-- Remove view for `a_building'.
		require
			a_building_exists: a_building /= Void
		do
			building_representations.delete (building_representations.view_for_item (a_building))
		end

	remove_taxi_office (a_taxi_office: TRAFFIC_TAXI_OFFICE) is
			-- Remove `a_taxi_office' and all its taxi views.
		require
			a_taxi_office_exists: a_taxi_office /= Void
		do
			a_taxi_office.taxis.element_inserted_event.unsubscribe (add_taxi_agent)
			a_taxi_office.taxis.element_removed_event.unsubscribe (remove_taxi_agent)
			from
				a_taxi_office.taxis.start
			until
				a_taxi_office.taxis.off
			loop
				remove_taxi (a_taxi_office.taxis.item_for_iteration)
				a_taxi_office.taxis.forth
			end
		end

	remove_taxi (a_taxi: TRAFFIC_TAXI) is
			-- Remove view for `a_taxi'.
		require
			a_taxi_exists: a_taxi /= Void
		do
			moving_representations.delete (moving_representations.view_for_item (a_taxi))
		end

feature {NONE} -- Implementation (Agent references)

	add_taxi_agent: PROCEDURE [ANY, TUPLE [TRAFFIC_TAXI]]

	remove_taxi_agent: PROCEDURE [ANY, TUPLE [TRAFFIC_TAXI]]

invariant

	factory_exists: factory /= Void
	line_representations_exists: line_representations /= Void
	road_representations_exists: road_representations /= Void
	place_representations_exists: place_representations /= Void
	building_representations_exists: building_representations /= Void
	moving_representations_exists: moving_representations /= Void
	path_representations_exists: path_representations /= Void
	add_taxi_agent_exists: add_taxi_agent /= Void
	remove_taxi_agent_exists: remove_taxi_agent /= Void

end
