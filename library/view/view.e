note
	description: "Graphical representation of an object in the city."

deferred class
	VIEW

inherit
	MAP_WIDGET

inherit {NONE}
	COLOR_UTILITY
		export
			{NONE} all
		end

	EV_FONT_CONSTANTS
		export
			{NONE} all
		end

feature -- Access
	map: MAP
			-- Map that this view belongs to.

feature -- Status report

	is_highlighted: BOOLEAN
			-- Is view highlighted?

feature -- Status setting

	highlight
			-- Make visually distinct.
		deferred
		ensure
			highlighted: is_highlighted
		end

	unhighlight
			-- Return to normal view.
		deferred
		ensure
			not_highlighted: not is_highlighted
		end

feature {VIEW, MAP} -- Basic operations

	update
			-- Update according to the state of the model.
		deferred
		end

	remove_from_city
			-- Remove view from `map'.
		deferred
		end

feature {NONE} -- Parameters

	Highlight_color: EV_COLOR
			-- Color with which views are highlighted.
		once
			Result := Yellow
		end

	Font_size: INTEGER = 20
			-- Font size for text elements.

feature {NONE} -- Implementation

	scaled_font_size: INTEGER
			-- Font size with the current scaling of `map'.
		do
			Result := (Font_size * map.scale_factor).truncated_to_integer
			if Result <= 0 then
				Result := 1
			end
		ensure
			positive: Result > 0
		end

invariant
	map_exists: map /= Void
end
