note
	description: "Text with opaque background."

class
	LABEL

inherit {NONE}
	EV_STOCK_COLORS
		export
			{NONE} all
		end

create
	make

feature {NONE} -- Initialization
	make (a_text: STRING)
			-- Create label with text `a_text' and white background.
		do
			create text.make_with_text (a_text)
			create background.make_rectangle (text.point_x, text.point_y, text.width, text.height)
			set_background_color (White)
		end

feature -- Access

	text: EV_MODEL_TEXT
			-- Text part.

	background: EV_MODEL_RECTANGLE
			-- Background part.

	width: INTEGER
			-- Width.
		do
			Result := background.width
		end

	height: INTEGER
			-- Height.
		do
			Result := background.height
		end

	foreground_color: EV_COLOR
			-- Text color.
		do
			Result := text.foreground_color
		end

	background_color: EV_COLOR
			-- Background color.
		do
			Result := background.background_color
		end

feature -- Property setting

	set_foreground_color (a_color: EV_COLOR)
			-- Set `foreground_color' to `a_color'.
		require
			a_color_not_void: a_color /= Void
		do
			text.set_foreground_color (a_color)
		ensure
			foreground_color_assigned: foreground_color = a_color
		end

	set_background_color (a_color: EV_COLOR)
			-- Set `background_color' to `a_color'.
		require
			a_color_exists: a_color /= Void
		do
			background.set_background_color (a_color)
			background.set_foreground_color (a_color)
		ensure
			background_color_assigned: background_color = a_color
		end

	set_x_y (a_x, a_y: INTEGER)
			-- Set center coordinates to (`a_x', `a_y').
		do
			text.set_x_y (a_x, a_y)
			background.set_x_y (a_x, a_y)
		end

	show
			-- Make visible.
		do
			text.show
			background.show
		end

	hide
			-- Make visible.
		do
			text.hide
			background.hide
		end

feature -- Update
	fit_to_text
			-- Make the size of `background' equal to the size of `text'.
		do
			background.set_width (text.width)
			background.set_height (text.height)
		end

feature -- World

	add_to_world (a_world: EV_MODEL_WORLD)
			-- Add `text' and `background' parts to `a_world'.
		do
			a_world.extend (background)
			a_world.extend (text)
		end

	remove_from_world (a_world: EV_MODEL_WORLD)
			-- Remove `text' and `background' parts from `a_world'.
		do
			a_world.prune_all (background)
			a_world.prune_all (text)
		end

invariant
	text_exists: text /= Void
	background_exists: background /= Void
end
