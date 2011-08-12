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
		end

feature -- Access

	line: LINE
			-- Underlying model.

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
				i := line.stations.at_first
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
		do
			l.text.set_text (line.name.out)
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

invariant
	line_exists: line /= Void
	polyline_exists: polyline /= Void
	labels_exists: labels /= Void
	two_labels: labels.count = Label_count
end
