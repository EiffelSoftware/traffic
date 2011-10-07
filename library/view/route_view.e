note
	description: "Graphical representation of a route."

class
	ROUTE_VIEW

inherit
	VIEW

create
	make_in_city

feature {NONE} -- Initialization

	make_in_city (a_route: ROUTE; a_map: MAP)
			-- Create representation of `a_route' and add it to `a_map'.	
		require
			a_map_exists: a_map /= Void
			a_map_has_line: a_map.city.routes.has (a_route)
		local
			i: INTEGER
		do
			route := a_route
			map := a_map
			create polyline
			polyline.set_line_width (Width)
			polyline.set_foreground_color (Black)
			polyline.enable_dashed_line_style
			polyline.enable_end_arrow
			map.world.extend (polyline)
			create background_polyline
			background_polyline.hide
			background_polyline.set_line_width (Width)
			background_polyline.set_foreground_color (Highlight_color)
			background_polyline.enable_end_arrow
			map.world.extend (background_polyline)
			update

			make_actions
			subscribe_model (polyline)
		end

feature -- Access

	route: ROUTE
			-- Underlying model.

feature -- Status setting

	highlight
			-- Make visually distinct.
		do
			is_highlighted := True
			background_polyline.show
		end

	unhighlight
			-- Return to normal view.
		do
			is_highlighted := False
			background_polyline.hide
		end

feature -- Basic operations

	update
			-- Update according to the state of `route'
			-- and bring to foreground of the map.			
		local
			w: EV_MODEL_WORLD
			leg, line: LEG
			s: STATION
		do
			polyline.set_point_count (0)
			background_polyline.set_point_count (0)

			w := polyline.world
			w.bring_to_front (background_polyline)
			w.bring_to_front (polyline)

			from
				leg := route.first_leg
			until
				leg = Void
			loop
				from
					s := leg.origin
				until
					s = leg.destination
				loop
					polyline.extend_point (map.world_coordinate (s.position))
					background_polyline.extend_point (map.world_coordinate (s.position))
					s := leg.line.next_station (s, leg.direction)
				end
				leg := leg.next
			end
			polyline.extend_point (map.world_coordinate (route.destination.position))
			background_polyline.extend_point (map.world_coordinate (route.destination.position))
		end

	remove_from_map
			-- Remove route representation from `map'.
		local
			i: INTEGER
		do
			map.world.prune_all (polyline)
			map.world.prune_all (background_polyline)
		end

feature -- Parameters

	Width: INTEGER = 7
			-- Line width on the map.

feature {NONE} -- Implementation

	polyline: EV_MODEL_POLYLINE
			-- Polyline depicting the line.

	background_polyline: EV_MODEL_POLYLINE
			-- Polyline used for highlighting the line.			

end
