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
		local
			blob: EV_MODEL_ROUNDED_RECTANGLE
			label: LABEL
			radius: REAL_64
		do
			station := a_station
			radius := maximum_sibling_lines (station, a_map.city) * ({LINE_VIEW}.width + {LINE_VIEW}.gap) / 2
			create blob.make_with_points (
				a_map.world_coordinate (station.position - [radius, radius]),
				a_map.world_coordinate (station.position + [radius, radius]))
			blob.set_radius (blob.width // 4)
			blob.set_background_color (White)
			a_map.world.extend (blob)
			create label.make (station.name)
			label.set_x_y (blob.point_b_x + label_gap + label.width // 2, blob.y)
			label.add_to_world (a_map.world)
		end

feature -- Access

	station: STATION
			-- Underlying model.

feature -- Parameters

	label_gap: INTEGER = 10
			-- Gap between blob and name label.

feature {NONE} -- Implementation

	maximum_sibling_lines (s: STATION; c: CITY): INTEGER
			-- Maximum number of lines that directly connect `s' with some other station in `c'.
		require
			c_exists: c /= Void
			s_in_c: c.stations.has (s)
		local
			i: V_ITERATOR [LINE]
			l: LINE
			n: INTEGER
			s2: STATION
		do
			from
				i := s.lines.at_first
			until
				i.after
			loop
				l := i.item
				s2 := l.next_station (s, l.north_terminal)
				if s2 /= Void then
					n := c.connecting_lines (s, s2).count
					if n > Result then
						Result := n
					end
				end
				s2 := l.next_station (s, l.south_terminal)
				if s2 /= Void then
					n := c.connecting_lines (s, s2).count
					if n > Result then
						Result := n
					end
				end
				i.forth
			end
		ensure
			at_least_one: Result >= 1
		end

invariant
	station_exists: station /= Void
	
end
