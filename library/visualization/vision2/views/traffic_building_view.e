indexing
	description: "Objects that ..."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_BUILDING_VIEW

inherit

	TRAFFIC_VS_VIEW [TRAFFIC_BUILDING]
		redefine
			set_highlight_color,
			set_color,
			unhighlight,
			highlight
		end

	DRAWABLE_RECTANGLE
		rename
			color as internal_color,
			set_color as set_internal_color,
			make as make_rectangle
		export {NONE}
			internal_color,
			set_internal_color,
			make_rectangle
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
			make_rectangle (create {REAL_COORDINATE}.make (a_item.corner_1.x, -a_item.corner_1.y),
							create {REAL_COORDINATE}.make (a_item.corner_3.x, -a_item.corner_3.y))
			set_color (create {TRAFFIC_COLOR}.make_with_rgb (200, 200, 200))
			set_highlight_color (create {TRAFFIC_COLOR}.make_with_rgb (255, 0, 0))
			is_shown := True
			is_highlighted := False
		ensure then
			is_shown: is_shown
			not_highlighted: not is_highlighted
			color_exists: color /= Void
			highlight_color_exists: highlight_color /= Void
		end

feature -- Status setting

	set_color (a_color: TRAFFIC_COLOR) is
			-- Set the color of the place view to `a_color'.
		do
			color := a_color
			if not is_highlighted then
				set_edge_color (create {EV_COLOR}.make_with_8_bit_rgb (color.red, color.green, color.blue))
				set_internal_color (create {EV_COLOR}.make_with_8_bit_rgb (255, 255, 255))
			end
		end

	set_highlight_color (a_color: TRAFFIC_COLOR) is
			-- Set the color of the place view to `a_color'.
		do
			highlight_color := a_color
			if is_highlighted then
				set_edge_color (create {EV_COLOR}.make_with_8_bit_rgb (highlight_color.red, highlight_color.green, highlight_color.blue))
			end
		end

feature -- Basic operations

	highlight is
			-- Highlight the place view.
		do
			set_edge_color (create {EV_COLOR}.make_with_8_bit_rgb (highlight_color.red, highlight_color.green, highlight_color.blue))
			is_highlighted := True
		end

	unhighlight is
			-- Unhighlight the place view.
		do
			set_edge_color (create {EV_COLOR}.make_with_8_bit_rgb (color.red, color.green, color.blue))
			is_highlighted := False
		end

feature{EV_CANVAS} -- Display

	draw_object is
			-- Draws the rectangle.
		do
			if is_shown then
				Precursor
			end
		end

end
