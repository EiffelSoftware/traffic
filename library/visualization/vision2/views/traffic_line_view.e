indexing
	description: "Objects that ..."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_LINE_VIEW

inherit

	TRAFFIC_VS_VIEW [TRAFFIC_LINE]
		undefine
			hide,
			show,
			copy,
			is_equal,
			set_internal_color,
			draw
		end

	DRAWABLE_OBJECT_CONTAINER
		rename
			make as make_container,
			set_color as set_internal_color,
			color as internal_color
		export {NONE}
			internal_color,
			set_internal_color,
			make_container
		end

create
	make

feature -- Initialization

	make (a_item: like item) is
			-- Initialize view for `a_item'.
		local
			pp: ARRAY [REAL_COORDINATE]
			i: INTEGER
			conns: DS_LINKED_LIST [TRAFFIC_CONNECTION]
			c: DRAWABLE_POLYLINE
			p: DRAWABLE_ROUNDED_RECTANGLE
		do
			make_container
			item := a_item
			from
				item.start
			until
				item.after
			loop
				c := new_connection_view (item.item_for_iteration)
				put_last (c)
				item.forth
			end
			set_color (create {TRAFFIC_COLOR}.make_with_rgb (item.color.red, item.color.green, item.color.blue))
			set_highlight_color (create {TRAFFIC_COLOR}.make_with_rgb (0, 255, 0))
			is_shown := True
			is_highlighted := False
		ensure then
			is_shown: is_shown
			not_highlighted: not is_highlighted
			color_exists: color /= Void
			highlight_color_exists: highlight_color /= Void
		end

feature -- Implementation

	new_connection_view (a_item: TRAFFIC_CONNECTION): DRAWABLE_POLYLINE is
			-- Generate connection view for `a_item'.
		local
			pp: ARRAY [REAL_COORDINATE]
			i: INTEGER
		do
			create pp.make (1, a_item.polypoints.count)
			from
				i := 1
			until
				i > a_item.polypoints.count
			loop
				pp.put (create {REAL_COORDINATE}.make (a_item.polypoints.item (i).x, -a_item.polypoints.item (i).y), i)
				i := i + 1
			end
			create Result.make (pp, 634.0)
		ensure
			Result_exists: Result /= Void
		end

end
