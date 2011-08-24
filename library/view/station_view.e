note
	description: "Graphical representation of a station."

class
	STATION_VIEW

inherit {NONE}
	EV_STOCK_COLORS
		export
			{NONE} all
		end

	EV_FONT_CONSTANTS
		export
			{NONE} all
		end

create
	make_in_city

feature {NONE} -- Initialization

	make_in_city (a_station: STATION; a_map: CITY_VIEW)
			-- Create representation of `a_station' and add it to `a_map'.
		require
			a_map_exists: a_map /= Void
			a_map_has_station: a_map.city.stations.has (a_station)
		do
			station := a_station
			map := a_map
			create blob
			blob.set_background_color (White)
			a_map.world.extend (blob)
			create label.make (station.name)
			label.text.set_font (create {EV_FONT}.make_with_values(Family_screen, Weight_regular, Shape_regular,
				(Font_size * map.scale_factor).truncated_to_integer))
			label.add_to_world (a_map.world)
			update

			create mouse_clicked_actions
			create mouse_double_clicked_actions
			blob.pointer_button_press_actions.extend (agent on_mouse_button_pressed)
			blob.pointer_button_release_actions.extend (agent on_mouse_button_released)
			blob.pointer_double_press_actions.extend (agent on_mouse_button_double_clicked)
			label.text.pointer_button_press_actions.extend (agent on_mouse_button_pressed)
			label.text.pointer_button_release_actions.extend (agent on_mouse_button_released)
			label.text.pointer_double_press_actions.extend (agent on_mouse_button_double_clicked)
		end

feature -- Access

	station: STATION
			-- Underlying model.

feature -- Status report

	is_highlighted: BOOLEAN
			-- Is this station highlighted?

feature -- Status setting

	highlight
			-- Highlight this station.
		do
			is_highlighted := True
			blob.set_background_color (Yellow)
			label.set_background_color (Yellow)
		ensure
			highlighted: is_highlighted
		end

	unhighlight
			-- Unhighlight this station.
		do
			is_highlighted := False
			blob.set_background_color (White)
			label.set_background_color (White)
		ensure
			not_highlighted: not is_highlighted
		end

feature -- Basic operations

	update
			-- Update according to the state of `station'.
		local
			radius: REAL_64
			n: INTEGER
			point_a, point_b: EV_COORDINATE
			font_height: INTEGER
		do
			n := maximum_sibling_lines
			if n = 0 then
				n := 1
			end
			radius := n * ({LINE_VIEW}.width + {LINE_VIEW}.gap) / 2
			point_a := map.world_coordinate (station.position - [radius, radius])
			point_b := map.world_coordinate (station.position + [radius, radius])
			blob.set_point_a_position (point_a.x, point_a.y)
			blob.set_point_b_position (point_b.x, point_b.y)
			blob.set_radius (blob.width // 4)
			font_height := (Font_size * map.scale_factor).truncated_to_integer
			if font_height <= 0 then
				label.text.font.set_height (1)
			else
				label.text.font.set_height (font_height)
			end
			label.text.set_text (station.name)
			label.fit_to_text
			label.set_x_y (blob.point_b_x + label_gap + label.width // 2, blob.y)
		end

	remove_from_city
			-- Remove station representation from `map'.
		do
			map.world.prune_all (blob)
			label.remove_from_world (map.world)
		end

feature -- Events

	mouse_clicked_actions: EV_POINTER_BUTTON_ACTION_SEQUENCE
			-- Mouse clicked on station.

	mouse_double_clicked_actions: EV_POINTER_BUTTON_ACTION_SEQUENCE
			-- Mouse double clicked on station.

feature -- Parameters

	label_gap: INTEGER = 10
			-- Gap between blob and name label.

	Font_size: INTEGER = 20
			-- Font size for name label.

feature {NONE} -- Implementation

	blob: EV_MODEL_ROUNDED_RECTANGLE
			-- Blob depicting the station.

	label: LABEL
			-- Label with station name.

	map: CITY_VIEW
			-- Map that this station view belongs to.

	maximum_sibling_lines: INTEGER
			-- Maximum number of lines that directly connect `s' with some other station in `c'.
		local
			l: LINE
			n: INTEGER
			s2: STATION
		do
			across
				station.lines as i
			loop
				l := i.item
				s2 := l.next_station (station, l.north_terminal)
				if s2 /= Void then
					n := map.city.connecting_lines (station, s2).count
					if n > Result then
						Result := n
					end
				end
				s2 := l.next_station (station, l.south_terminal)
				if s2 /= Void then
					n := map.city.connecting_lines (station, s2).count
					if n > Result then
						Result := n
					end
				end
			end
		end

feature {NONE} -- Event handlers

	pressed_location: TUPLE [x, y: INTEGER]
			-- Location where mouse was last pressed.

	on_mouse_button_pressed (x: INTEGER; y: INTEGER; button: INTEGER; x_tilt: DOUBLE; y_tilt: DOUBLE; pressure: DOUBLE; screen_x: INTEGER; screen_y: INTEGER)
			-- Handle mouse button pressed event.
		do
			pressed_location := [x, y]
		end

	on_mouse_button_released (x: INTEGER; y: INTEGER; button: INTEGER; x_tilt: DOUBLE; y_tilt: DOUBLE; pressure: DOUBLE; screen_x: INTEGER; screen_y: INTEGER)
			-- Handle mouse button released event.
		do
			if pressed_location.x = x and pressed_location.y = y then
				mouse_clicked_actions.call ([x, y, button, x_tilt, y_tilt, pressure, screen_x, screen_y])
			end
		end

	on_mouse_button_double_clicked (x: INTEGER; y: INTEGER; button: INTEGER; x_tilt: DOUBLE; y_tilt: DOUBLE; pressure: DOUBLE; screen_x: INTEGER; screen_y: INTEGER)
			-- Handle mouse button double clicked event.
		do
			mouse_double_clicked_actions.call ([x, y, button, x_tilt, y_tilt, pressure, screen_x, screen_y])
		end

invariant
	station_exists: station /= Void
	blob_exists: blob /= Void
	label_exists: label /= Void
	map_exists: map /= Void
end
