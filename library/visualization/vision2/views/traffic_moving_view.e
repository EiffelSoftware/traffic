indexing
	description: "Objects that ..."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_MOVING_VIEW [G->TRAFFIC_MOVING]

inherit

	TRAFFIC_VS_VIEW [G]
		undefine
			invalidate
		end

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
			invalidate,
			draw_object
		end

create
	make

feature -- Initialization

	make (a_item: like item) is
			-- Initialize view for `a_item'.
		do
			item := a_item
			make_circle (create {REAL_COORDINATE}.make (a_item.position.x, -a_item.position.y))
			set_diameter (10)
			set_internal_color (default_color)
			enable_filled
			is_shown := True
			is_highlighted := False
		ensure then
			internal_color_exists: internal_color /= Void
		end

feature -- Basic operations

	update is
			--
		do

		end


feature -- Constants

	default_color: EV_COLOR is
			-- Default color
		once
			create Result.make_with_8_bit_rgb (255, 255, 0)
		end

	default_highlight_color: EV_COLOR is
			-- Default highlight color
		once
			create Result.make_with_8_bit_rgb (255, 0, 0)
		end

feature {NONE} -- Implementation

	draw_object is
			-- Draw the circle.
		do
			set_center (create {REAL_COORDINATE}.make (item.position.x, -item.position.y))
			Precursor
		end

	invalidate is
			-- Some property of `Current' has changed.
		do
			is_valid := False
		end

end
