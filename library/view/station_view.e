note
	description: "Graphical representation of a station."

class
	STATION_VIEW

inherit
	VIEW

create
	make_in_city

feature {NONE} -- Initialization

	make_in_city (a_station: STATION; a_map: MAP)
			-- Create representation of `a_station' and add it to `a_map'.
		require
			a_map_exists: a_map /= Void
			a_map_has_station: a_map.city.stations.has (a_station)
		do
			model := a_station
			map := a_map
			create blob
			blob.set_background_color (White)
			a_map.world.extend (blob)
			create label.make (model.name)
			label.text.set_font (create {EV_FONT}.make_with_values(Family_screen, Weight_regular, Shape_regular, scaled_font_size))
			label.add_to_world (a_map.world)
			update

			make_actions
			subscribe_model (blob)
			subscribe_model (label.text)
		end

feature -- Access

	model: STATION
			-- Underlying model.

feature -- Status report

	model_in_city: BOOLEAN
			-- Is `model' part of `map.city'?
		do
			Result := map.city.stations.has_key (model.name)
		end

feature -- Status setting

	highlight
			-- Make visually distinct.
		do
			is_highlighted := True
			blob.set_foreground_color (Highlight_color)
			blob.set_line_width (5)
			label.set_background_color (Highlight_color)
		end

	unhighlight
			-- Return to normal view.
		do
			is_highlighted := False
			blob.set_foreground_color (Black)
			blob.set_line_width (1)
			label.set_background_color (White)
		end

feature -- Basic operations

	update
			-- Update according to the state of `model'.
			-- and bring to foreground of the map.
		local
			radius: REAL_64
			n: INTEGER
			point_a, point_b: EV_COORDINATE
		do
			n := maximum_sibling_lines.max (1)
			radius := n * ({LINE_VIEW}.width + {LINE_VIEW}.gap) / 2
			point_a := map.world_coordinate (model.position - [radius, radius])
			point_b := map.world_coordinate (model.position + [radius, radius])
			blob.set_point_a_position (point_a.x, point_a.y)
			blob.set_point_b_position (point_b.x, point_b.y)
			blob.set_radius (blob.width // 4)
			label.text.font.set_height (scaled_font_size)
			label.text.set_text (model.name)
			label.fit_to_text
			label.set_x_y ((blob.point_b_x + label_gap * map.scale_factor + label.width / 2).rounded, blob.y)
		end

	remove_from_map
			-- Remove station representation from `map'.
		do
			map.world.prune_all (blob)
			label.remove_from_world (map.world)
		end

feature -- Parameters

	label_gap: INTEGER = 10
			-- Gap between blob and name label.

feature {NONE} -- Implementation

	blob: EV_MODEL_ROUNDED_RECTANGLE
			-- Blob depicting the station.

	label: LABEL
			-- Label with station name.

	maximum_sibling_lines: INTEGER
			-- Maximum number of lines that directly connect `s' with some other station in `c'.
		local
			l: LINE
			n: INTEGER
			s2: STATION
		do
			across
				model.lines as i
			loop
				l := i.item
				s2 := l.next_station (model, l.first)
				if s2 /= Void then
					n := map.city.connecting_lines (model, s2).count
					if n > Result then
						Result := n
					end
				end
				s2 := l.next_station (model, l.last)
				if s2 /= Void then
					n := map.city.connecting_lines (model, s2).count
					if n > Result then
						Result := n
					end
				end
			end
		end

invariant
	blob_exists: blob /= Void
	label_exists: label /= Void
end
