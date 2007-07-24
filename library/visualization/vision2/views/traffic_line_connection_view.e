indexing
	description: "Objects that ..."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_LINE_CONNECTION_VIEW

inherit

	TRAFFIC_VS_VIEW [TRAFFIC_LINE_CONNECTION]

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
			create pp.make (1, item.polypoints.count)
			from
				i := 1
			until
				i > item.polypoints.count
			loop
				pp.put (create {REAL_COORDINATE}.make (item.polypoints.item (i).x, -item.polypoints.item (i).y), i)
				i := i + 1
			end
			make_polyline (pp, 634.0)
			set_color (create {TRAFFIC_COLOR}.make_with_rgb (item.line.color.red, item.line.color.green, item.line.color.blue))
			set_highlight_color (create {TRAFFIC_COLOR}.make_with_rgb (255, 0, 0))
			is_shown := True
			is_highlighted := False
		ensure then
			is_shown: is_shown
			not_highlighted: not is_highlighted
			color_exists: color /= Void
			highlight_color_exists: highlight_color /= Void
		end

end
