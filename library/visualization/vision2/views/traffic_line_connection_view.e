indexing
	description: "Objects that ..."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_LINE_CONNECTION_VIEW

inherit

	TRAFFIC_VS_VIEW [TRAFFIC_LINE_CONNECTION]
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
			set_internal_color (default_color)
			is_shown := True
			is_highlighted := False
			item.changed_event.subscribe (agent update)
		ensure then
			internal_color_exists: internal_color /= Void
		end

feature -- Basic operations

	update is
			--
		local
			pp: ARRAY [REAL_COORDINATE]
			i: INTEGER
		do
			if item.is_highlighted then
				if highlight_color /= Void then
					set_internal_color (create {EV_COLOR}.make_with_8_bit_rgb (highlight_color.red, highlight_color.green, highlight_color.blue))
				else
					set_internal_color (default_highlight_color)
				end
			else
				if color /= Void then
					set_internal_color (create {EV_COLOR}.make_with_8_bit_rgb (color.red, color.green, color.blue))
				else
					set_internal_color (default_color)
				end
			end
			create pp.make (1, item.polypoints.count)
			from
				i := 1
			until
				i > item.polypoints.count
			loop
				pp.put (create {REAL_COORDINATE}.make (item.polypoints.item (i).x, -item.polypoints.item (i).y), i)
				i := i + 1
			end
			set_points (pp)
		end

feature -- Constants

	default_color: EV_COLOR is
			-- Default color
		once
			create Result.make_with_8_bit_rgb (100, 100, 100)
		end

	default_highlight_color: EV_COLOR is
			-- Default highlight color
		once
			create Result.make_with_8_bit_rgb (0, 0, 255)
		end

end
