note
	description: "Graphical representation of a line."

class
	LINE_VIEW

inherit {NONE}
	EV_STOCK_COLORS
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
			polyline: EV_MODEL_POLYLINE
			i: V_ITERATOR [STATION]
			s1, s2: STATION
			segment, offset, center: VECTOR
			sibling_lines: V_SEQUENCE [LINE]
			label: LABEL
			labels: V_ARRAYED_LIST [LABEL]
			li: V_ITERATOR [LABEL]
		do
			line := a_line

			create polyline
			polyline.set_line_width (width)
			polyline.set_foreground_color (ev_color (line.color))
			create labels

			from
				i := line.stations.at_first
			until
				i.is_last
			loop
				s1 := i.item
				i.forth
				s2 := i.item
				sibling_lines := a_map.city.connecting_lines (s1, s2)
				if sibling_lines.first.stations.index_of (s2) > sibling_lines.first.stations.index_of (s1) then
					segment := s2.position - s1.position
				else
					segment := s1.position - s2.position
				end
				offset := segment.orthogonal.normalized *
					(sibling_lines.index_of (line) - 1 - (sibling_lines.count - 1) / 2) *
					(width + gap)

				polyline.extend_point (a_map.world_coordinate (s1.position + offset))
				polyline.extend_point (a_map.world_coordinate (s2.position + offset))
				if i.index = 2 or i.is_last then
					create label.make (line.name.out)
					label.set_background_color (polyline.foreground_color)
					label.text.font.set_height (Font_size)
					if line.color.brightness < 0.6 then
						label.set_foreground_color (White)
					else
						label.set_foreground_color (Black)
					end
					center := s1.position + (s2.position - s1.position) * 0.5 + offset
					label.set_x_y (a_map.world_coordinate (center).x, a_map.world_coordinate (center).y)
					labels.extend_back (label)
				end
			end
			a_map.world.extend (polyline)
			from
				li := labels.at_first
			until
				li.after
			loop
				li.item.add_to_world (a_map.world)
				li.forth
			end
		end

feature -- Access

	line: LINE
			-- Underlying model.

feature -- Parameters

	Width: INTEGER = 5
			-- Line width on the map.

	Gap: INTEGER = 5
			-- Gap between two lines connecting the same stations.

	Font_size: INTEGER = 8
			-- Font size for line numbers.

feature {NONE} -- Implementation

	ev_color (c: COLOR): EV_COLOR
			-- Color `c' converted to {EV_COLOR}.
		do
			create Result.make_with_8_bit_rgb (c.red, c.green, c.blue)
		ensure
			result_exists: Result /= Void
		end

invariant
	line_exists: line /= Void

end
