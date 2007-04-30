indexing
	description: "Objects that animates a traveler along a route."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TOUCH_ROUTE

inherit
	TOUCH_TIMING

	TOUCH_SHARED_MAP_WIDGET

create
	make, make_route, make_empty_route

feature  -- Initialization


	make_empty_route(a_map: TRAFFIC_MAP) is
			-- Create an empty route
		require
			a_map_exists: a_map /= Void
		do
			create internal_places_on_route.make
			create internal_route.make
			internal_route.set_scale_factor (a_map.scale_factor)
			internal_map := a_map
		end

	make_route (a_places_to_visit: LINKED_LIST [TRAFFIC_PLACE]) is
			-- Create route on map `a_map'.
		require
			places_to_visit_exists: a_places_to_visit /= Void
		do
			create internal_places_on_route.make
			internal_map_widget := map_widget
			internal_map := map_widget.map
			internal_places_to_visit := a_places_to_visit

--			internal_map.find_shortest_path_of_a_list_of_places (internal_places_to_visit)
--			internal_route := internal_map.shortest_path

			make_itinerary
		end

	make (a_places_to_visit: LINKED_LIST [TRAFFIC_PLACE]) is
			-- Create shortest path route through all places in `a_places_to_visit'.
		do
			create internal_places_on_route.make
			internal_map_widget := map_widget
			internal_map := map_widget.map
			internal_places_to_visit := a_places_to_visit

--			internal_map.find_shortest_path_of_a_list_of_places (a_places_to_visit)
--			internal_route := internal_map.shortest_path
		end

feature -- Basic operations

	animate is
			-- A traveler is traveling along the shortest path of the route
		require
			scene_running: running_scene /= Void
		do
--			internal_map_widget.paths_representation. internal_route
			create traveler.make_with_points (itinerary, 0.5)
			traveler.set_reiterate (True)
			internal_map.passengers.force_last (traveler)
--			traveler.take_tour

			index := internal_map.passengers.count
			traveler.set_speed (50)
--			internal_map_widget.time.reset_time
--			internal_map_widget.time.change_simulated_time (5)
--			internal_map_widget.map.change_traveler_speed (3)
--			internal_map_widget.time.resume_time

--			wait(6500)
--			end_animate
		end

feature -- Element change

	extend (a_place: TRAFFIC_PLACE) is
			-- Add `a_place' to the list of places to visit.
			-- Call `calculate_shortest_path' to recalculate the shortest path
			-- of all places to visit.
		require
			a_place_exists: a_place /= Void
		do
			internal_places_to_visit.extend (a_place)
		end


feature -- Basic operation

	calculate_shortest_path is
			-- Calculate the shortest path from one place to visit to the next.
		do
--			internal_map.find_shortest_path_of_a_list_of_places (internal_places_to_visit)
		end

	make_itinerary is
			-- Convert the places on route to an 'itinerary' of type ARRAYED_LIST [EM_VECTOR_2D].
		local
			places: LINKED_LIST [TRAFFIC_PLACE]
		do
			create itinerary.make (1)
			create places.make
			places := places_on_route
			from
				places.start
			until
				places.after
			loop
				itinerary.force_last (places.item.position)
				places.forth
			end
		end


feature -- Access

	places_to_visit: LINKED_LIST [TRAFFIC_PLACE] is
			-- Places to visit on route.
		do
			Result := internal_places_to_visit
		end

	places_on_route: LINKED_LIST [TRAFFIC_PLACE] is
			-- All Places on route of last call to `calculate_shortest_path'.
		local
			connections: ARRAYED_LIST [TRAFFIC_CONNECTION]
		do
			create connections.make (10)
			connections := internal_route.connections
			from
				connections.start
			until
				connections.after
			loop
				internal_places_on_route.extend(connections.item.origin)
				connections.forth
			end
			internal_places_on_route.extend(internal_route.destination)
			Result := internal_places_on_route.twin
		end

--	line_sections: LINKED_LIST [TRAFFIC_LINE_SECTION] is
--			-- Line sections to be used to visit `places_to_visit'
--			-- of last call to `calculate_shortest_path'.
--		do
--			Result := internal_route.line_sections
--		end





feature {NONE} -- Implementation

	internal_route: TRAFFIC_PATH

	itinerary: DS_ARRAYED_LIST [EM_VECTOR_2D]

	traveler: TRAFFIC_PASSENGER

	internal_map_widget: TOUCH_3D_MAP_WIDGET

	internal_map: TRAFFIC_MAP

	internal_places_to_visit: LINKED_LIST [TRAFFIC_PLACE]

	internal_places_on_route: LINKED_LIST [TRAFFIC_PLACE]

	traveler_rep: TRAFFIC_3D_MOVING_REPRESENTATION

	end_animate is
			-- The traveler is removed from the map.
		do
			traveler.set_reiterate (False)
			internal_map.passengers.remove (index)
--			internal_map_widget.travelers_representation.remove_specific_traveler (traveler)
--			internal_map_widget.time.pause_time
		end

	index: INTEGER
end
