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
		do
			line := a_line

			create polyline
			polyline.set_line_width (width)
			if line.color = Void then
				polyline.set_foreground_color (Default_color)
			else
				polyline.set_foreground_color (ev_color (line.color))
			end

			from
				i := a_line.stations.at_first
			until
				i.after
			loop
				polyline.extend_point (a_map.world_coordinate (i.item.position))
				i.forth
			end
			a_map.world.extend (polyline)
		end

feature -- Access

	line: LINE
			-- Underlying model.

feature {NONE} -- Implementation

	width: INTEGER
			-- Line width on the map.
			-- (Depends on transportation kind).
		require
			line_set: line /= Void
		do
			if attached {CABLE_TRANSPORT} line.kind then
				Result := 2
			else
				Result := 5
			end
		ensure
			result_positive: Result > 0
		end

	default_color: EV_COLOR
			-- Line color on the map if no specific color is associated with `line'.
			-- (Depends on transportation kind).
		require
			line_set: line /= Void
		do
			if attached {CABLE_TRANSPORT} line.kind then
				Result := Black
			elseif attached {BUS_TRANSPORT} line.kind then
				create Result.make_with_8_bit_rgb (116, 190, 234)
			else
				Result := Grey
			end
		ensure
			result_exists: Result /= Void
		end

	ev_color (c: COLOR): EV_COLOR
			-- Color `c' converted to {EV_COLOR}.
		do
			create Result.make_with_8_bit_rgb (c.red, c.green, c.blue)
		ensure
			result_exists: Result /= Void
		end

end
