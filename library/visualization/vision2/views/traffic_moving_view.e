indexing
	description: "Objects that ..."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_MOVING_VIEW [G->TRAFFIC_MOVING]

inherit

	TRAFFIC_VS_VIEW [G]

	DRAWABLE_CIRCLE
		rename
			color as internal_color,
			set_color as set_internal_color,
			make as make_circle
		export {NONE}
			internal_color,
			set_internal_color,
			make_circle
		redefine
			draw_object
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
			make_circle (create {REAL_COORDINATE}.make (a_item.position.x, -a_item.position.y))
			set_diameter (10)
			set_color (create {TRAFFIC_COLOR}.make_with_rgb (255, 0, 0))
			set_highlight_color (create {TRAFFIC_COLOR}.make_with_rgb (255, 0, 0))
			set_filled
			is_shown := True
			is_highlighted := False
		ensure then
			is_shown: is_shown
			not_highlighted: not is_highlighted
			color_exists: color /= Void
			highlight_color_exists: highlight_color /= Void
		end

feature -- Implementation

	draw_object is
			-- Draw the circle.
		do
			set_center (create {REAL_COORDINATE}.make (item.position.x, -item.position.y))
			Precursor
		end

end
