indexing
	description: "Objects that ..."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_PATH_VIEW

inherit

	TRAFFIC_VS_VIEW [TRAFFIC_PATH]
		undefine
			copy,
			is_equal,
			set_internal_color,
			draw
		end

	DRAWABLE_OBJECT_CONTAINER
		rename
			make as make_container,
			item as container_item,
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
			item := a_item
			from
				conns := item.connections
				conns.start
			until
				conns.after
			loop
				c := new_connection_view (conns.item_for_iteration)
				extend (c)
				p := new_place_view (conns.item_for_iteration.origin)
				extend (p)
				p := new_place_view (conns.item_for_iteration.destination)
				extend (p)
				conns.forth
			end
			set_color (create {TRAFFIC_COLOR}.make_with_rgb (255, 0, 0))
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

	new_place_view (a_item: TRAFFIC_PLACE): DRAWABLE_ROUNDED_RECTANGLE is
			-- Generate place view for `a_item'.
		do
			create Result.make (create {REAL_COORDINATE}.make ((a_item.position.x-(a_item.width/2).max(5)), (-a_item.position.y-(a_item.breadth/2).max(5))),
								create {REAL_COORDINATE}.make ((a_item.position.x+(a_item.width/2).max(5)), (-a_item.position.y+(a_item.breadth/2).max(5))))

		ensure
			Result_exists: Result /= Void
		end

end
