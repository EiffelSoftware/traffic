indexing
	description: "Widgets that display a map"
	date: "$Date$"
	revision: "$Revision$"

deferred class TRAFFIC_MAP_WIDGET

feature -- Status setting

	set_map (a_map: TRAFFIC_MAP) is
			-- Set map that is displayed to `a_map'.
		local
			l: TRAFFIC_VIEW [TRAFFIC_LINE_CONNECTION]
			p: TRAFFIC_VIEW [TRAFFIC_PLACE]
		do
			map := a_map
			from
				map.line_sections.start
			until
				map.line_sections.off
			loop
				l := factory.new_line_connection_view (map.line_sections.item_for_iteration)
				line_representations.force_last (l)
				map.line_sections.forth
			end
			from
				map.places.start
			until
				map.places.off
			loop
				p := factory.new_place_view (map.places.item_for_iteration)
				place_representations.force_last (p)
				map.places.forth
			end
			map.line_sections.element_inserted_event.subscribe (agent add_line_connection)
			map.line_sections.element_removed_event.subscribe (agent remove_line_connection)
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

		ensure
			map_set: map = a_map
		end

feature -- Access

	map: TRAFFIC_MAP
			-- Map that is displayed

	factory: TRAFFIC_VIEW_FACTORY
			-- Factory for creating views
		deferred
		end

	line_representations:  TRAFFIC_VIEW_CONTAINER [TRAFFIC_LINE_CONNECTION, TRAFFIC_VIEW [TRAFFIC_LINE_CONNECTION]] is
			--
		deferred
		end

	place_representations: TRAFFIC_VIEW_CONTAINER [TRAFFIC_PLACE, TRAFFIC_VIEW [TRAFFIC_PLACE]]
			--
		deferred
		end

	building_representations: TRAFFIC_VIEW_CONTAINER [TRAFFIC_BUILDING, TRAFFIC_VIEW [TRAFFIC_BUILDING]]
			--
		deferred
		end

	moving_representations: TRAFFIC_VIEW_CONTAINER [TRAFFIC_MOVING, TRAFFIC_VIEW [TRAFFIC_MOVING]]
			--
		deferred
		end

	path_representations: TRAFFIC_VIEW_CONTAINER [TRAFFIC_PATH, TRAFFIC_VIEW [TRAFFIC_PATH]]
			--
		deferred
		end

feature {NONE} -- Implementation (wrappers for agents)

	add_place (a_place: TRAFFIC_PLACE) is
			-- Add place view for `a_place'.
		require
			a_place_exists: a_place /= Void
		do
			place_representations.force_last (factory.new_place_view (a_place))
		end

	add_line_connection (a_line_connection: TRAFFIC_LINE_CONNECTION) is
			-- Add line connection view for `a_line_connection'.
		require
			a_line_connection_exists: a_line_connection /= Void
		do
			line_representations.force_last (factory.new_line_connection_view (a_line_connection))
		end

	add_path (a_path: TRAFFIC_PATH) is
			-- Add path view for `a_path'.
		require
			a_path_exists: a_path /= Void
		do
			path_representations.force_last (factory.new_path_view (a_path))
		end

	add_building (a_building: TRAFFIC_BUILDING) is
			-- Add building view for `a_building'.
		require
			a_building_exists: a_building /= Void
		do
			building_representations.force_last (factory.new_building_view (a_building))
		end

	add_tram (a_tram: TRAFFIC_TRAM) is
			-- Add tram view for `a_tram'.
		require
			a_tram_exists: a_tram /= Void
		do
			moving_representations.force_last (factory.new_tram_view (a_tram))
		end

	add_bus (a_bus: TRAFFIC_BUS) is
			-- Add bus view for `a_bus'.
		require
			a_bus_exists: a_bus /= Void
		do
			moving_representations.force_last (factory.new_bus_view (a_bus))
		end

	add_free_moving (a_free_moving: TRAFFIC_FREE_MOVING) is
			-- Add free moving view for `a_free_moving'.
		require
			a_free_moving_exists: a_free_moving /= Void
		do
			moving_representations.force_last (factory.new_free_moving_view (a_free_moving))
		end

	add_passenger (a_passenger: TRAFFIC_PASSENGER) is
			-- Add passenger view for `a_passenger'.
		require
			a_passenger_exists: a_passenger /= Void
		do
			moving_representations.force_last (factory.new_passenger_view (a_passenger))
		end

	remove_place (a_place: TRAFFIC_PLACE) is
			-- Remove view for `a_place'.
		require
			a_place_exists: a_place /= Void
		do
			place_representations.delete (place_representations.view_for_item (a_place))
		end

	remove_line_connection (a_line_connection: TRAFFIC_LINE_CONNECTION) is
			-- Remove view for `a_line_connection'.
		require
			a_line_connection_exists: a_line_connection /= Void
		do
			line_representations.delete (line_representations.view_for_item (a_line_connection))
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

invariant

	factory_exists: factory /= Void
--	line_representations_exists: line_representations /= Void
--	place_representations_exists: place_representations /= Void

end
