indexing
	description: "View for stations"
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_STATION_VIEW

inherit

	TRAFFIC_VS_VIEW [TRAFFIC_STATION]
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

	make (a_item: TRAFFIC_STATION) is
			-- Initialize view for `a_item'.
		do
			item := a_item
			make_rectangle (create {REAL_COORDINATE}.make ((a_item.position.x-(a_item.width/2).max(5)), (-a_item.position.y-(a_item.breadth/2).max(5))),
							create {REAL_COORDINATE}.make ((a_item.position.x+(a_item.width/2).max(5)), (-a_item.position.y+(a_item.breadth/2).max(5))))
			set_internal_color (default_color)
			set_edge_color (default_color)
			is_shown := True
			is_highlighted := False
			item.changed_event.subscribe (agent update)
		ensure then
			internal_color_exists: internal_color /= Void
		end

feature -- Status setting

	set_color (a_color: TRAFFIC_COLOR) is
			-- Set the color of the view to `a_color'.
		do
			color := a_color
			if not is_highlighted then
				if color /= Void then
					set_internal_color (create {EV_COLOR}.make_with_8_bit_rgb (color.red, color.green, color.blue))
					set_edge_color (create {EV_COLOR}.make_with_8_bit_rgb (color.red, color.green, color.blue))
				else
					set_internal_color (default_color)
					set_edge_color (default_color)
				end
			end
		end

	set_highlight_color (a_color: TRAFFIC_COLOR) is
			-- Set the color of the view to `a_color'.
		do
			highlight_color := a_color
			if is_highlighted then
				if highlight_color /= Void then
					set_internal_color (create {EV_COLOR}.make_with_8_bit_rgb (highlight_color.red, highlight_color.green, highlight_color.blue))
					set_edge_color (create {EV_COLOR}.make_with_8_bit_rgb (highlight_color.red, highlight_color.green, highlight_color.blue))
				else
					set_internal_color (default_highlight_color)
					set_edge_color (default_highlight_color)
				end
			end
		end

feature -- Basic operations

	update is
			-- Update to reflect changes in item.
		do
			if item.is_highlighted then
				if highlight_color /= Void then
					set_internal_color (create {EV_COLOR}.make_with_8_bit_rgb (highlight_color.red, highlight_color.green, highlight_color.blue))
					set_edge_color (create {EV_COLOR}.make_with_8_bit_rgb (highlight_color.red, highlight_color.green, highlight_color.blue))
				else
					set_internal_color (default_highlight_color)
					set_edge_color (default_highlight_color)
				end
			else
				if color /= Void then
					set_internal_color (create {EV_COLOR}.make_with_8_bit_rgb (color.red, color.green, color.blue))
					set_edge_color (create {EV_COLOR}.make_with_8_bit_rgb (color.red, color.green, color.blue))
				else
					set_internal_color (default_color)
					set_edge_color (default_color)
				end
			end
			set_points (    create {REAL_COORDINATE}.make ((item.position.x-(item.width/2).max(5)), (-item.position.y-(item.breadth/2).max(5))),
							create {REAL_COORDINATE}.make ((item.position.x+(item.width/2).max(5)), (-item.position.y+(item.breadth/2).max(5))))
		end

	highlight is
			-- Highlight the view.
		do
			if highlight_color /= Void then
				set_internal_color (create {EV_COLOR}.make_with_8_bit_rgb (highlight_color.red, highlight_color.green, highlight_color.blue))
				set_edge_color (create {EV_COLOR}.make_with_8_bit_rgb (highlight_color.red, highlight_color.green, highlight_color.blue))
			else
				set_internal_color (default_highlight_color)
				set_edge_color (default_highlight_color)
			end
			is_highlighted := True
		end

	unhighlight is
			-- Unhighlight the view.
		do
			if color /= Void then
				set_internal_color (create {EV_COLOR}.make_with_8_bit_rgb (color.red, color.green, color.blue))
				set_edge_color (create {EV_COLOR}.make_with_8_bit_rgb (color.red, color.green, color.blue))
			else
				set_internal_color (default_color)
				set_edge_color (default_color)
			end
			is_highlighted := False
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
			create Result.make_with_8_bit_rgb (255, 62, 150)
		end

end
