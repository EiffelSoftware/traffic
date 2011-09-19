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

feature -- Basic operations

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

invariant
	map_exists: map /= Void
end
