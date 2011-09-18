note
	description: "Graphical representation of an object in the city."

deferred class
	VIEW

inherit {NONE}
	COLOR_UTILITY
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

feature -- Events

	mouse_clicked_actions: EV_POINTER_BUTTON_ACTION_SEQUENCE
			-- Actions to perform on mouse click.

	mouse_double_clicked_actions: EV_POINTER_BUTTON_ACTION_SEQUENCE
			-- Actions to perform on double click.

feature {NONE} -- Event handlers

	is_clicking: BOOLEAN

	add_handlers (a_widget: EV_MODEL)
			-- Make `a_widget' respond to all EiffelVision events necessary to handle map events.
		do
			a_widget.pointer_button_press_actions.extend (agent on_mouse_button_pressed)
			a_widget.pointer_motion_actions.extend (agent on_mouse_move)
			a_widget.pointer_button_release_actions.extend (agent on_mouse_button_released)
			a_widget.pointer_double_press_actions.extend (agent on_mouse_button_double_clicked)
		end

	on_mouse_button_pressed (x: INTEGER; y: INTEGER; button: INTEGER; x_tilt: DOUBLE; y_tilt: DOUBLE; pressure: DOUBLE; screen_x: INTEGER; screen_y: INTEGER)
			-- Handle mouse button pressed event.
		do
			is_clicking := True
		end

	on_mouse_move (a_x: INTEGER; a_y: INTEGER; a_x_tilt: DOUBLE; a_y_tilt: DOUBLE; a_pressure: DOUBLE; a_screen_x: INTEGER; a_screen_y: INTEGER)
			-- Move the map if button is pressed.
		do
			is_clicking := False
		end

	on_mouse_button_released (x: INTEGER; y: INTEGER; button: INTEGER; x_tilt: DOUBLE; y_tilt: DOUBLE; pressure: DOUBLE; screen_x: INTEGER; screen_y: INTEGER)
			-- Handle mouse button released event.
		do
			if is_clicking then
				mouse_clicked_actions.call ([x, y, button, x_tilt, y_tilt, pressure, screen_x, screen_y])
				is_clicking := False
			end
		end

	on_mouse_button_double_clicked (x: INTEGER; y: INTEGER; button: INTEGER; x_tilt: DOUBLE; y_tilt: DOUBLE; pressure: DOUBLE; screen_x: INTEGER; screen_y: INTEGER)
			-- Handle mouse button double clicked event.
		do
			mouse_double_clicked_actions.call ([x, y, button, x_tilt, y_tilt, pressure, screen_x, screen_y])
		end

invariant
	map_exists: map /= Void
	mouse_clicked_actions_exists: mouse_clicked_actions /= Void
	mouse_double_clicked_actions_exists: mouse_double_clicked_actions /= Void
end
