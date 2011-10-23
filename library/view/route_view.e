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
			model := a_route
			map := a_map

			create background_polyline
			background_polyline.hide
			background_polyline.set_line_width (Width)
			background_polyline.set_foreground_color (Highlight_color)
			map.world.extend (background_polyline)

			create polyline
			polyline.set_line_width (Width)
			polyline.set_foreground_color (Color)
			polyline.enable_dashed_line_style
			map.world.extend (polyline)

			create pin_a
			create pin_leg_a
			create text_a.make_with_text ("A")
			initialize_pin (pin_a, pin_leg_a, text_a)

			create pin_b
			create pin_leg_b
			create text_b.make_with_text ("B")
			initialize_pin (pin_b, pin_leg_b, text_b)

			update

			make_actions
			subscribe_model (polyline)
		end

feature -- Access

	model: ROUTE
			-- Underlying model.

feature -- Status report

	model_in_city: BOOLEAN
			-- Is `model' part of `map.city'?
		do
			Result := map.city.routes.has (model)
		end

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
			-- Update according to the state of `model'.
		local
			w: EV_MODEL_WORLD
			leg, line: LEG
			s: STATION
			point_a, point_b: EV_COORDINATE
		do
			polyline.set_point_count (0)
			background_polyline.set_point_count (0)

			from
				leg := model.first_leg
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
			s := model.destination
			polyline.extend_point (map.world_coordinate (s.position))
			background_polyline.extend_point (map.world_coordinate (s.position))

			update_pin (pin_a, pin_leg_a, text_a, model.origin.position)
			update_pin (pin_b, pin_leg_b, text_b, s.position)
		end

	remove_from_map
			-- Remove route representation from `map'.
		local
			i: INTEGER
		do
			map.world.prune_all (polyline)
			map.world.prune_all (background_polyline)
			map.world.prune_all (pin_a)
			map.world.prune_all (pin_leg_a)
			map.world.prune_all (text_a)
			map.world.prune_all (pin_b)
			map.world.prune_all (pin_leg_b)
			map.world.prune_all (text_b)
		end

feature -- Parameters

	Width: INTEGER = 8
			-- Line width on the map.

	Pin_radius: REAL_64 = 20.0
			-- Radius of the pins.

	Pin_gap: REAL_64 = 50.0
			-- Distance between the station and the pin.

	Color: EV_COLOR
			-- Main color of `polyline' and pins.
		once
			create Result.make_with_8_bit_rgb (132, 149, 245)
		end

	Border_color: EV_COLOR
			-- Border color of pins.
		once
			create Result.make_with_8_bit_rgb (6, 26, 140)
		end

feature {NONE} -- Implementation

	initialize_pin (head: EV_MODEL_ELLIPSE; leg: EV_MODEL_LINE; text: EV_MODEL_TEXT)
			-- Initialize `head', `leg' and `text'.
		do
			head.set_background_color (Color)
			head.set_foreground_color (Border_color)
			head.set_line_width (2)
			map.world.extend (head)
			leg.set_line_width (2)
			leg.set_foreground_color (Border_color)
			map.world.extend (leg)
			text.set_foreground_color (Border_color)
			text.set_font (create {EV_FONT}.make_with_values(Family_screen, Weight_regular, Shape_regular, scaled_font_size))
			map.world.extend (text)
		end

	update_pin (head: EV_MODEL_ELLIPSE; leg: EV_MODEL_LINE; text: EV_MODEL_TEXT; pos: VECTOR)
			-- Place `head', `leg' and `text' to pin position `pos'.
		local
			point_a, point_b: EV_COORDINATE
		do
			point_a := map.world_coordinate (pos + [0.0, Pin_gap] - [Pin_radius, Pin_radius])
			point_b := map.world_coordinate (pos + [0.0, Pin_gap] + [Pin_radius, Pin_radius])
			head.set_point_a_position (point_a.x, point_a.y)
			head.set_point_b_position (point_b.x, point_b.y)
			point_a := map.world_coordinate (pos + [0.0, Pin_gap])
			point_b := map.world_coordinate (pos)
			leg.set_point_a_position (point_a.x, point_a.y)
			leg.set_point_b_position (point_b.x, point_b.y)
			text.set_point_position (point_a.x - text.width // 2, point_a.y - text.height // 2)
		end

	pin_a, pin_b: EV_MODEL_ELLIPSE
			-- Pin heads.

	pin_leg_a, pin_leg_b: EV_MODEL_LINE
			-- Pin legs.

	text_a, text_b: EV_MODEL_TEXT
			-- Pin texts.

	polyline: EV_MODEL_POLYLINE
			-- Polyline depicting the route.

	background_polyline: EV_MODEL_POLYLINE
			-- Polyline used for highlighting the route.

invariant
	pins_exist: pin_a /= Void and pin_b /= Void
	legs_exist: pin_leg_a /= Void and pin_leg_b /= Void
	texts_exist: text_a /= Void and text_b /= Void
	polyline_exists: polyline /= Void
	background_polyline_exists: background_polyline /= Void

end
