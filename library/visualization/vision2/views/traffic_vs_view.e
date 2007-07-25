
indexing
	description: "Objects that ..."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

deferred class
	TRAFFIC_VS_VIEW [G]

inherit

	TRAFFIC_VIEW [G]

	DRAWABLE_OBJECT
		rename
			color as internal_color,
			set_color as set_internal_color
		export {NONE}
			internal_color,
			set_internal_color
		end

feature -- Element change

	set_color (a_color: TRAFFIC_COLOR) is
			-- Set the color of the place view to `a_color'.
		do
			color := a_color
			if not is_highlighted then
				set_internal_color (create {EV_COLOR}.make_with_8_bit_rgb (color.red, color.green, color.blue))
			end
		end

	set_highlight_color (a_color: TRAFFIC_COLOR) is
			-- Set the color of the place view to `a_color'.
		do
			highlight_color := a_color
			if is_highlighted then
				set_internal_color (create {EV_COLOR}.make_with_8_bit_rgb (highlight_color.red, highlight_color.green, highlight_color.blue))
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

feature -- Access

	is_highlighted: BOOLEAN

end
