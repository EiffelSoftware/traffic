indexing
	description: "Objects that ..."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_PLACE_VIEW

inherit

	TRAFFIC_VS_VIEW [TRAFFIC_PLACE]
		redefine
			set_highlight_color,
			set_color,
			unhighlight,
			highlight
		end

	DRAWABLE_ROUNDED_RECTANGLE
		rename
			color as internal_color,
			set_color as set_internal_color,
			make as make_rectangle
		export {NONE}
			internal_color,
			set_internal_color,
			make_rectangle
		end

create
	make

feature -- Initialization

	make (a_item: TRAFFIC_PLACE) is
			-- Initialize view for `a_item'.
		do
			item := a_item
			make_rectangle (create {REAL_COORDINATE}.make ((a_item.position.x-(a_item.width/2).max(5)), (-a_item.position.y-(a_item.breadth/2).max(5))),
							create {REAL_COORDINATE}.make ((a_item.position.x+(a_item.width/2).max(5)), (-a_item.position.y+(a_item.breadth/2).max(5))))
			set_color (create {TRAFFIC_COLOR}.make_with_rgb (100, 100, 100))
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
				set_internal_color (create {EV_COLOR}.make_with_8_bit_rgb (color.red, color.green, color.blue))
				set_edge_color (create {EV_COLOR}.make_with_8_bit_rgb (color.red, color.green, color.blue))
			end
		end

	set_highlight_color (a_color: TRAFFIC_COLOR) is
			-- Set the color of the place view to `a_color'.
		do
			highlight_color := a_color
			if is_highlighted then
				set_internal_color (create {EV_COLOR}.make_with_8_bit_rgb (highlight_color.red, highlight_color.green, highlight_color.blue))
				set_edge_color (create {EV_COLOR}.make_with_8_bit_rgb (highlight_color.red, highlight_color.green, highlight_color.blue))
			end
		end

feature -- Basic operations

	highlight is
			-- Highlight the place view.
		do
			set_internal_color (create {EV_COLOR}.make_with_8_bit_rgb (highlight_color.red, highlight_color.green, highlight_color.blue))
			is_highlighted := True
		end

	unhighlight is
			-- Unhighlight the place view.
		do
			set_internal_color (create {EV_COLOR}.make_with_8_bit_rgb (color.red, color.green, color.blue))
			is_highlighted := False
		end

end
