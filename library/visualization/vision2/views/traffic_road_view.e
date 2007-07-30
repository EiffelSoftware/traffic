indexing
	description: "Objects that ..."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_ROAD_VIEW

inherit

	TRAFFIC_VS_VIEW [TRAFFIC_ROAD]
		undefine
			copy,
			is_equal,
			draw
		end

	DRAWABLE_POLYLINE
		rename
			color as internal_color,
			set_color as set_internal_color,
			make as make_polyline
		export {NONE}
			internal_color,
			set_internal_color,
			make_polyline
		end

create
	make

feature -- Initialization

	make (a_item: like item) is
			-- Initialize view for `a_item'.
		local
			pp: ARRAY [REAL_COORDINATE]
			i: INTEGER
		do
			item := a_item
			create pp.make (1, item.one_way.polypoints.count)
			from
				i := 1
			until
				i > item.one_way.polypoints.count
			loop
				pp.put (create {REAL_COORDINATE}.make (item.one_way.polypoints.item (i).x, -item.one_way.polypoints.item (i).y), i)
				i := i + 1
			end
			make_polyline (pp, 634.0)
			set_internal_color (default_color)
			is_shown := True
			is_highlighted := False
		ensure then
			internal_color_exists: internal_color /= Void
		end

feature -- Constants

	default_color: EV_COLOR is
			-- Default color
		once
			create Result.make_with_8_bit_rgb (0, 0, 0)
		end

	default_highlight_color: EV_COLOR is
			-- Default highlight color
		once
			create Result.make_with_8_bit_rgb (255, 0, 0)
		end

end
