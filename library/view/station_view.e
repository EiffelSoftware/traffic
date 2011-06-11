note
	description: "Graphical representation of a station."

class
	STATION_VIEW

inherit {NONE}
	EV_STOCK_COLORS
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
			label.add_to_world (a_map.world)
			update
		end

feature -- Access

	station: STATION
			-- Underlying model.

feature -- Basic operations

	update
			-- Update according to the state of `station'.
		local
			radius: REAL_64
			n: INTEGER
			point_a, point_b: EV_COORDINATE
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
			label.text.set_text (station.name)
			label.text.font.set_height ((Font_size * map.scale_factor).truncated_to_integer)
			label.set_x_y (blob.point_b_x + label_gap + label.width // 2, blob.y)
		end

	remove_from_city
			-- Remove station representation from `map'.
		do
			map.world.prune_all (blob)
			label.remove_from_world (map.world)
		end

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
			i: V_ITERATOR [LINE]
			l: LINE
			n: INTEGER
			s2: STATION
		do
			from
				i := station.lines.at_first
			until
				i.after
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
				i.forth
			end
		end

invariant
	station_exists: station /= Void
	blob_exists: blob /= Void
	label_exists: label /= Void
	map_exists: map /= Void
end
