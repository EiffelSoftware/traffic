indexing
	description: "Objects that ..."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_2D_BUILDING_VIEW

inherit

	TRAFFIC_2D_VIEW [TRAFFIC_BUILDING]
		undefine
			default_create,
			out,
			set_x_y
		end

	EM_RECTANGLE
		rename
			make as make_rectangle
		end

create
	make

feature -- Initialization

	make (a_item: like item) is
			-- Set `item' to `a_item'.
		do
			item := a_item
			is_highlighted := False
			make_from_coordinates ( item.center.x - (item.width/2), item.center.y - (item.depth/2).max (5),
									item.center.x + (item.width/2), item.center.y + (item.depth/2).max (5))
			set_fill_color (default_color)
			set_line_color (default_color)
		end

feature -- Element change

	set_color (a_color: TRAFFIC_COLOR) is
			-- Set `color' to `a_color'. May also be Void.
		do
			color := a_color
			if not is_highlighted then
				if color /= Void then
					set_fill_color (create {EM_COLOR}.make_with_rgb (color.red, color.green, color.blue))
					set_line_color (create {EM_COLOR}.make_with_rgb (color.red, color.green, color.blue))
				else
					set_fill_color (Default_color)
					set_line_color (Default_color)
				end
			end
		end

	set_highlight_color (a_color: TRAFFIC_COLOR) is
			-- Set `highlight_color' to `a_color'. May also be Void.
		do
			highlight_color := a_color
			if is_highlighted then
				if highlight_color /= Void then
					set_fill_color (create {EM_COLOR}.make_with_rgb (highlight_color.red, highlight_color.green, highlight_color.blue))
					set_line_color (create {EM_COLOR}.make_with_rgb (highlight_color.red, highlight_color.green, highlight_color.blue))
				else
					set_fill_color (default_highlight_color)
					set_line_color (default_highlight_color)
				end
			end
		end

	highlight is
			-- Highlight the view.
		do
			is_highlighted := True
			if highlight_color /= Void then
				set_fill_color (create {EM_COLOR}.make_with_rgb (highlight_color.red, highlight_color.green, highlight_color.blue))
				set_line_color (create {EM_COLOR}.make_with_rgb (highlight_color.red, highlight_color.green, highlight_color.blue))
			else
				set_fill_color (default_highlight_color)
				set_line_color (default_highlight_color)
			end
		end

	unhighlight is
			-- Unighlight the view.
		do
			is_highlighted := False
			if color /= Void then
				set_fill_color (create {EM_COLOR}.make_with_rgb (color.red, color.green, color.blue))
				set_line_color (create {EM_COLOR}.make_with_rgb (color.red, color.green, color.blue))
			else
				set_fill_color (default_color)
				set_line_color (default_color)
			end
		end

feature -- Constants

	Default_color: EM_COLOR is
			-- Default color
		once
			create Result.make_with_rgb (150, 90, 60)
		end

	Default_highlight_color: EM_COLOR is
			-- Default highlight color
		once
			create Result.make_with_rgb (255, 0, 0)
		end

end
