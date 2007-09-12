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
		do
			item := a_item
			make_rectangle (create {REAL_COORDINATE}.make (a_item.corner_1.x, -a_item.corner_1.y),
							create {REAL_COORDINATE}.make (a_item.corner_3.x, -a_item.corner_3.y))
			set_edge_color (default_color)
			set_internal_color (default_color)
			is_shown := True
			is_highlighted := False
			item.changed_event.subscribe (agent update)
		ensure then
			internal_color_exists: internal_color /= Void
			edge_color_exists: edge_color /= Void
		end

feature -- Status setting

	set_color (a_color: TRAFFIC_COLOR) is
			-- Set the color of the place view to `a_color'.
		do
			color := a_color
			if not is_highlighted then
				if color /= Void then
					set_edge_color (create {EV_COLOR}.make_with_8_bit_rgb (color.red, color.green, color.blue))
					set_internal_color (create {EV_COLOR}.make_with_8_bit_rgb (color.red, color.green, color.blue))
				else
					set_edge_color (default_color)
					set_internal_color (default_color)
				end
			end
		end

	set_highlight_color (a_color: TRAFFIC_COLOR) is
			-- Set the color of the place view to `a_color'.
		do
			highlight_color := a_color
			if is_highlighted then
				if highlight_color /= Void then
					set_edge_color (create {EV_COLOR}.make_with_8_bit_rgb (highlight_color.red, highlight_color.green, highlight_color.blue))
					set_internal_color (create {EV_COLOR}.make_with_8_bit_rgb (highlight_color.red, highlight_color.green, highlight_color.blue))
				else
					set_edge_color (default_highlight_color)
					set_internal_color (default_highlight_color)
				end
			end
		end

feature -- Basic operations

	update is
			-- Update view to represent item.
		do
			if item.is_highlighted then
				if highlight_color /= Void then
					set_edge_color (create {EV_COLOR}.make_with_8_bit_rgb (highlight_color.red, highlight_color.green, highlight_color.blue))
					set_internal_color (create {EV_COLOR}.make_with_8_bit_rgb (highlight_color.red, highlight_color.green, highlight_color.blue))
				else
					set_edge_color (default_highlight_color)
					set_internal_color (default_highlight_color)
				end
			else
				if color /= Void then
					set_edge_color (create {EV_COLOR}.make_with_8_bit_rgb (color.red, color.green, color.blue))
					set_internal_color (create {EV_COLOR}.make_with_8_bit_rgb (color.red, color.green, color.blue))
				else
					set_edge_color (default_color)
					set_internal_color (default_color)
				end
			end
			set_points (    create {REAL_COORDINATE}.make (item.corner_1.x, -item.corner_1.y),
							create {REAL_COORDINATE}.make (item.corner_3.x, -item.corner_3.y))

		end


	highlight is
			-- Highlight the place view.
		do
			if highlight_color /= Void then
				set_edge_color (create {EV_COLOR}.make_with_8_bit_rgb (highlight_color.red, highlight_color.green, highlight_color.blue))
				set_internal_color (create {EV_COLOR}.make_with_8_bit_rgb (highlight_color.red, highlight_color.green, highlight_color.blue))
			else
				set_edge_color (default_highlight_color)
				set_internal_color (default_highlight_color)
			end
			is_highlighted := True
		end

	unhighlight is
			-- Unhighlight the place view.
		do
			if color /= Void then
				set_edge_color (create {EV_COLOR}.make_with_8_bit_rgb (color.red, color.green, color.blue))
				set_internal_color (create {EV_COLOR}.make_with_8_bit_rgb (color.red, color.green, color.blue))
			else
				set_edge_color (default_color)
				set_internal_color (default_color)
			end
			is_highlighted := False
		end

feature -- Constants

	default_color: EV_COLOR is
			-- Default color
		once
			create Result.make_with_8_bit_rgb (200, 200, 200)
		end

	default_highlight_color: EV_COLOR is
			-- Default highlight color
		once
			create Result.make_with_8_bit_rgb (255, 0, 0)
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
