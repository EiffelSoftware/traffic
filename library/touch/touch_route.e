indexing
	description: "Objects that animates a traveler along a route."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TOUCH_ROUTE
	
inherit
	TOUCH_TIMING
	
create
	make, make_route, make_empty_route

feature  -- Initialization


	make_empty_route(a_map: TRAFFIC_MAP) is
			-- Create an empty route
		do
			internal_route.make_empty (a_map)
		end
		

	make_route (a_places_to_visit: LINKED_LIST [TRAFFIC_PLACE]; a_map_widget: TOUCH_3D_MAP_WIDGET) is
			-- Create route on map `a_map'.
		require
			a_map_widget_exists: a_map_widget /= Void
		do

			internal_map_widget := a_map_widget
			internal_map := a_map_widget.map
			create internal_route.make (a_places_to_visit, a_map_widget.map)

			calculate_shortest_path
			make_itinerary

			
		end
		
	make (a_places_to_visit: LINKED_LIST [TRAFFIC_PLACE]; a_map_widget: TOUCH_3D_MAP_WIDGET) is
			-- Create shortest path route through all places in `a_places_to_visit'.
		do
			internal_map_widget := a_map_widget
			create internal_route.make (a_places_to_visit, a_map_widget.map)
		end

	animate is
			-- A traveler is traveling along the shortest path of the route
		do
			create traveler.make_directed (itinerary, create {TRAFFIC_TYPE_WALKING}.make, 0.5)
			traveler.set_reiterate (False)
			internal_map_widget.add_traveler (traveler)  
			traveler.take_tour
		
			internal_map_widget.traffic_time.reset_time		
			internal_map_widget.traffic_time.change_simulated_time (5)		
			internal_map_widget.map.change_traveler_speed (3)			
			internal_map_widget.traffic_time.resume_time
			
			wait(6500)
		end
		
	end_animate is
			-- The traveler is removed from the map.
		do
			traveler.set_reiterate (False)
			internal_map_widget.delete_traveler (traveler)
			internal_map_widget.traffic_time.pause_time
		end
		

feature -- Element change

	extend (a_place: TRAFFIC_PLACE) is
			-- Add `a_place' to the list of places to visit.
			-- Call `calculate_shortest_path' to recalculate the shortest path
			-- of all places to visit.
		do
			internal_route.extend (a_place)
		end


feature -- Basic operation

	calculate_shortest_path is
			-- Calculate the shortest path from one place to visit to the next.
		do
			internal_route.calculate_shortest_path
		end
	
	make_itinerary is
			-- Convert the places on route to an 'itinerary' of type ARRAYED_LIST [EM_VECTOR_2D].
		do
			create itinerary.make (1)
			from
				places_on_route.start
			until
				places_on_route.after
			loop
				itinerary.force (places_on_route.item.position)
				places_on_route.forth
			end
		end
		

feature -- Access

	places_to_visit: LINKED_LIST [TRAFFIC_PLACE] is
			-- Places to visit on route.
		do
			Result := internal_route.places_to_visit	
		end
		
	places_on_route: LINKED_LIST [TRAFFIC_PLACE] is
			-- All Places on route of last call to `calculate_shortest_path'.
		do		
			Result := internal_route.places_on_route
		end
		
	line_sections: LINKED_LIST [TRAFFIC_LINE_SECTION] is
			-- Line sections to be used to visit `places_to_visit'
			-- of last call to `calculate_shortest_path'.
		do
			Result := internal_route.line_sections
		end





feature {NONE} -- Implementation

internal_route: TRAFFIC_ROUTE

itinerary: ARRAYED_LIST [EM_VECTOR_2D]

traveler: TRAFFIC_PASSENGER

internal_map_widget: TOUCH_3D_MAP_WIDGET

internal_map: TRAFFIC_MAP

traveler_rep: TRAFFIC_3D_TRAVELER_REPRESENTATION

end
