note
	description: "Graphical representation of a line."

class
	LINE_VIEW

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

	make_in_city (a_line: LINE; a_map: CITY_VIEW)
			-- Create representation of `a_line' and add it to `a_map'.	
		require
			a_map_exists: a_map /= Void
			a_map_has_line: a_map.city.lines.has (a_line)
		local
			i: INTEGER
			label: LABEL
		do
			line := a_line
			map := a_map
			create polyline
			polyline.set_line_width (Width)
			map.world.extend (polyline)
			create labels
			from
				i := 1
			until
				i > Label_count
			loop
				create label.make (line.name.out)
				label.text.set_font (create {EV_FONT}.make_with_values(Family_screen, Weight_regular, Shape_regular,
					(Font_size * map.scale_factor).truncated_to_integer))
				label.add_to_world (map.world)
				labels.extend_back (label)
				i := i + 1
			end
			update

			create mouse_clicked_actions
			create mouse_double_clicked_actions
			polyline.pointer_button_press_actions.extend (agent on_mouse_button_pressed)
			polyline.pointer_button_release_actions.extend (agent on_mouse_button_released)
			polyline.pointer_double_press_actions.extend (agent on_mouse_button_double_clicked)
			across labels as cursor loop
				cursor.item.text.pointer_button_press_actions.extend (agent on_mouse_button_pressed)
				cursor.item.text.pointer_button_release_actions.extend (agent on_mouse_button_released)
				cursor.item.text.pointer_double_press_actions.extend (agent on_mouse_button_double_clicked)
			end
		end

feature -- Access

	line: LINE
			-- Underlying model.

feature -- Status report

	is_highlighted: BOOLEAN
			-- Is this station highlighted?

feature -- Status setting

	highlight
			-- Highlight this station.
		do
			is_highlighted := True
			polyline.set_line_width (Width * 2)
		ensure
			highlighted: is_highlighted
		end

	unhighlight
			-- Unhighlight this station.
		do
			is_highlighted := False
			polyline.set_line_width (Width)
		ensure
			not_highlighted: not is_highlighted
		end

feature -- Basic operations

	update
			-- Update according to the state of `line'.
		local
			i: V_ITERATOR [STATION]
			s1, s2: STATION
			segment, offset: VECTOR
			sibling_lines: V_SEQUENCE [LINE]
		do
			polyline.set_foreground_color (ev_color (line.color))
			polyline.set_point_count (0)

			from
				i := line.stations.new_cursor
			until
				i.is_last
			loop
				s1 := i.item
				i.forth
				s2 := i.item
				sibling_lines := map.city.connecting_lines (s1, s2)
				if sibling_lines.first.stations.index_of (s2) > sibling_lines.first.stations.index_of (s1) then
					segment := s2.position - s1.position
				else
					segment := s1.position - s2.position
				end
				offset := segment.orthogonal.normalized *
					(sibling_lines.index_of (line) - 1 - (sibling_lines.count - 1) / 2) *
					(width + gap)

				polyline.extend_point (map.world_coordinate (s1.position + offset))
				polyline.extend_point (map.world_coordinate (s2.position + offset))
				if i.index = 2 then
					update_label (labels [1], s1, s2, offset)
				end
				if i.is_last then
					update_label (labels [2], s1, s2, offset)
				end
			end
		end

	remove_from_city
			-- Remove line representation from `map'.
		local
			i: INTEGER
		do
			map.world.prune_all (polyline)
			from
				i := 1
			until
				i > Label_count
			loop
				labels [i].remove_from_world (map.world)
				i := i + 1
			end
		end

feature -- Events

	mouse_clicked_actions: EV_POINTER_BUTTON_ACTION_SEQUENCE
			-- Mouse clicked on station.

	mouse_double_clicked_actions: EV_POINTER_BUTTON_ACTION_SEQUENCE
			-- Mouse double clicked on station.

feature -- Parameters

	Width: INTEGER = 5
			-- Line width on the map.

	Gap: INTEGER = 5
			-- Gap between two lines connecting the same stations.

	Font_size: INTEGER = 20
			-- Font size for line numbers.

	Label_count: INTEGER = 2
			-- Number of labels on a line.

feature {NONE} -- Implementation

	polyline: EV_MODEL_POLYLINE
			-- Polyline depicting the line.

	labels: V_ARRAYED_LIST [LABEL]
			-- Labels with line name.

	map: CITY_VIEW
			-- Map that this line view belongs to.	

	ev_color (c: COLOR): EV_COLOR
			-- Color `c' converted to {EV_COLOR}.
		do
			create Result.make_with_8_bit_rgb (c.red, c.green, c.blue)
		ensure
			result_exists: Result /= Void
		end

	update_label (l: LABEL; s1, s2: STATION; offset: VECTOR)
			-- Update label `l' between stations `s1' and `s2' with line segment shifted by `offset'.
		local
			center: VECTOR
			font_height: INTEGER
		do
			l.text.set_text (line.name.out)
			font_height := (Font_size * map.scale_factor).truncated_to_integer
			if font_height <= 0 then
				l.text.font.set_height (1)
			else
				l.text.font.set_height (font_height)
			end
			l.fit_to_text
			l.set_background_color (polyline.foreground_color)
			if line.color.brightness < 0.6 then
				l.set_foreground_color (White)
			else
				l.set_foreground_color (Black)
			end
			center := s1.position + (s2.position - s1.position) * 0.5 + offset
			l.set_x_y (map.world_coordinate (center).x, map.world_coordinate (center).y)
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
	line_exists: line /= Void
	polyline_exists: polyline /= Void
	labels_exists: labels /= Void
	two_labels: labels.count = Label_count
end
