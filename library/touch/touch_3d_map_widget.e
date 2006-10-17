indexing
	description: "3 dimensional map of a city with many event handlers"
	date: "$Date: 2005/12/22 10:48:08 $"
	revision: "$Revision: 1.90 $"

class TOUCH_3D_MAP_WIDGET

inherit

	TRAFFIC_3D_MAP_WIDGET
		redefine
			make,
			prepare_drawing
		end

create
	make

feature -- Initialization

	make is
			-- Subscribe to events.
		do
			Precursor
			set_lines_shown (True)
			-- User Interaction
			mouse_dragged_event.subscribe (agent mouse_drag (?))
			mouse_wheel_down_event.subscribe (agent wheel_down)
			mouse_wheel_up_event.subscribe (agent wheel_up)
		end


feature -- Zoom options

	zoom_in is
			-- Zoom in.
		do
			wheel_up
		end

	zoom_out is
			-- Zoom in.
		do
			wheel_down
		end

feature -- Drawing

	prepare_drawing is
			--
			do
				Precursor

				-- Translation
				gl_translated_external (x_coord*focus, y_coord, z_coord*focus)
				gl_translated_external (x_translation, -y_translation, 0)

				-- Rotation
				gl_rotated_external (x_rotation, 1, 0, 0)
				gl_rotated_external (y_rotation, 0, 1, 0)
			end

feature {NONE} -- Event handling

	wheel_down is
			-- Handle mouse wheel down event.
		do
			if focus > 3 then
				focus := focus + 1
			else
				focus := focus + 0.1
			end
		ensure then
			focus_incremented: focus > old focus
		end

	wheel_up is
			-- Handle mouse wheel up event.
		do
			if focus > 3 then
				focus := focus - 1
			elseif focus > 0.1 then
				focus := focus - 0.1
			end
		ensure then
			focus_decremented: focus > 0.1 implies focus < old focus
		end

	mouse_drag (event: EM_MOUSEMOTION_EVENT) is
			-- Handle mouse movement event.
		local
			start_vec, end_vec: GL_VECTOR_3D[DOUBLE]
			delta_x, delta_y, delta, mouse_delta: DOUBLE
		do
			if event.button_state_right then
				-- Rotate the map.
				y_rotation := y_rotation + event.x_motion
				x_rotation := x_rotation + event.y_motion
				if x_rotation <= 15 then
					x_rotation := 15
				elseif x_rotation >= 90 then
					x_rotation := 90
				end

			elseif event.button_state_left then
				-- Lift the map up or down
				start_vec := transform_coords (event.x, event.y)
				end_vec := transform_coords (event.x + event.x_motion, event.y + event.y_motion)

				delta_x := end_vec.x - start_vec.x
				delta_y := end_vec.z - start_vec.z

				delta := sqrt (delta_x^2 + delta_y^2)
				mouse_delta := sqrt (event.x_motion^2 + event.y_motion^2)

				if mouse_delta > 0 and then delta/mouse_delta <= 3 and then sqrt (start_vec.x^2 + start_vec.y^2) < plane_size/2 then
					x_translation := x_translation + event.x_motion*(delta/mouse_delta)
					y_translation := y_translation + event.y_motion*(delta/mouse_delta)
				end
			end
		end

end
