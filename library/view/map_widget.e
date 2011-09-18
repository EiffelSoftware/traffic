note
	description: "Map element that responds to events."

class
	MAP_WIDGET

create
	make_actions

feature {NONE} -- Initialization
	make_actions
			-- Initialize action sequences.
		do
			create {V_ARRAYED_LIST [PROCEDURE [ANY, TUPLE [x: INTEGER; y: INTEGER]]]} on_left_click
			create {V_ARRAYED_LIST [PROCEDURE [ANY, TUPLE]]} on_left_click_no_args
			create {V_ARRAYED_LIST [PROCEDURE [ANY, TUPLE [x: INTEGER; y: INTEGER]]]} on_right_click
			create {V_ARRAYED_LIST [PROCEDURE [ANY, TUPLE]]} on_right_click_no_args
			create {V_ARRAYED_LIST [PROCEDURE [ANY, TUPLE [x: INTEGER; y: INTEGER]]]} on_double_click
			create {V_ARRAYED_LIST [PROCEDURE [ANY, TUPLE]]} on_double_click_no_args
			create {V_ARRAYED_LIST [PROCEDURE [ANY, TUPLE [dx: INTEGER; dy: INTEGER]]]} on_drag
			create {V_ARRAYED_LIST [PROCEDURE [ANY, TUPLE [up: BOOLEAN]]]} on_scroll
		end

feature -- Actions

	on_left_click: V_LIST [PROCEDURE [ANY, TUPLE [x: INTEGER; y: INTEGER]]]
			-- Actions performed on left mouse button click.

	on_left_click_no_args: V_LIST [PROCEDURE [ANY, TUPLE]]
			-- Actions without arguments performed on left mouse button click.			

	on_right_click: V_LIST [PROCEDURE [ANY, TUPLE [x: INTEGER; y: INTEGER]]]
			-- Actions performed on right mouse button click.

	on_right_click_no_args: V_LIST [PROCEDURE [ANY, TUPLE]]
			-- Actions without arguments performed on right mouse button click.			

	on_double_click: V_LIST [PROCEDURE [ANY, TUPLE [x: INTEGER; y: INTEGER]]]
			-- Actions performed on double mouse button click.

	on_double_click_no_args: V_LIST [PROCEDURE [ANY, TUPLE]]
			-- Actions without arguments performed on double mouse click.						

	on_drag: V_LIST [PROCEDURE [ANY, TUPLE [dx: INTEGER; dy: INTEGER]]]
			-- Actions performed when mouse is dragged.

	on_scroll: V_LIST [PROCEDURE [ANY, TUPLE [up: BOOLEAN]]]
			-- Actions performed when mouse wheel is scrolled.

feature {MAP_WIDGET} -- Setup

	subscribe_widget (a_widget: EV_WIDGET)
			-- Make `a_widget' respond to all low-level events necessary to handle map events.
		do
			a_widget.pointer_button_press_actions.extend (agent handle_button_press)
			a_widget.pointer_motion_actions.extend (agent handle_motion)
			a_widget.pointer_button_release_actions.extend (agent handle_button_release)
			a_widget.pointer_double_press_actions.extend (agent handle_button_double_press)
			a_widget.pointer_leave_actions.extend (agent handle_leave)
			a_widget.mouse_wheel_actions.extend (agent handle_mouse_wheel)
		end

	subscribe_model (a_model: EV_MODEL)
			-- Make `a_model' respond to all low-level events necessary to handle map events.
			-- Warning: models do not support mouse wheel events.
		do
			a_model.pointer_button_press_actions.extend (agent handle_button_press)
			a_model.pointer_motion_actions.extend (agent handle_motion)
			a_model.pointer_button_release_actions.extend (agent handle_button_release)
			a_model.pointer_double_press_actions.extend (agent handle_button_double_press)
			a_model.pointer_leave_actions.extend (agent handle_leave)
		end

feature {NONE} -- Implementation

	is_button_pressed: BOOLEAN
			-- Is mouse button pressed?

	has_moved: BOOLEAN
			-- Has mouse moved since last button press?

	old_x, old_y: INTEGER
			-- Mouse position before its last move.	

	handle_button_press (x: INTEGER; y: INTEGER; button: INTEGER; x_tilt: DOUBLE; y_tilt: DOUBLE; pressure: DOUBLE; screen_x: INTEGER; screen_y: INTEGER)
			-- Handle mouse button pressed event.
		do
			is_button_pressed := True
			has_moved := False
			old_x := x
			old_y := y
		end

	handle_button_release (x: INTEGER; y: INTEGER; button: INTEGER; x_tilt: DOUBLE; y_tilt: DOUBLE; pressure: DOUBLE; screen_x: INTEGER; screen_y: INTEGER)
			-- Handle mouse button released event.
		do
			if not has_moved then
				if button = {EV_POINTER_CONSTANTS}.left then
					across on_left_click as i loop i.item.call ([x, y]) end
					across on_left_click_no_args as i loop i.item.call ([]) end
				elseif button = {EV_POINTER_CONSTANTS}.right then
					across on_right_click as i loop i.item.call ([x, y]) end
					across on_right_click_no_args as i loop i.item.call ([]) end
				end
			end
			is_button_pressed := False
		end

	handle_button_double_press (x: INTEGER; y: INTEGER; button: INTEGER; x_tilt: DOUBLE; y_tilt: DOUBLE; pressure: DOUBLE; screen_x: INTEGER; screen_y: INTEGER)
			-- Handle mouse button double clicked event.
		do
			across on_double_click as i loop i.item.call ([x, y]) end
			across on_double_click_no_args as i loop i.item.call ([]) end
		end

	handle_leave
			-- Handle mouse leave event.
		do
			is_button_pressed := False
		end

	handle_motion (x: INTEGER; y: INTEGER; x_tilt: DOUBLE; y_tilt: DOUBLE; pressure: DOUBLE; screen_x: INTEGER; screen_y: INTEGER)
			-- Handle mouse move event.
		do
			if is_button_pressed then
				across on_drag as i loop i.item.call ([x - old_x, y - old_y]) end
			end
			old_x := x
			old_y := y
			has_moved := True
		end

	handle_mouse_wheel (x: INTEGER)
			-- Handle mouse wheel scrolling.
		do
			across on_scroll as i loop i.item.call ([x > 0]) end
		end

invariant
	on_left_click_exists: on_left_click /= Void
	on_right_click_exists: on_right_click /= Void
	on_double_click_exists: on_double_click /= Void
	on_drag_exists: on_drag /= Void
	on_scroll_exists: on_scroll /= Void
end
