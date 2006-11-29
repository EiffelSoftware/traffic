indexing
	description: "3 dimensional map of a city with many event handlers"
	date: "$Date: 2005/12/22 10:48:08 $"
	revision: "$Revision: 1.90 $"

class ME_MAP_WIDGET

inherit

	TRAFFIC_3D_MAP_WIDGET
		redefine
			make
		end

create
	make

feature -- Initialization

	make is
			-- Subscribe to events.
		do
			Precursor
			-- User Interaction
			mouse_dragged_event.subscribe (agent mouse_drag (?))
			mouse_wheel_down_event.subscribe (agent wheel_down)
			mouse_wheel_up_event.subscribe (agent wheel_up)
		end

feature -- Basic operations

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

feature {NONE} -- Event handling

	wheel_down is
			-- Handle mouse wheel down event.
		local
			camera: TE_3D_CAMERA
			z_axis: EM_VECTOR3D
		do
			camera := renderpass_manager.renderpasses.i_th(1).camera
			z_axis := camera.transform.position * (1.0/10.0)
			camera.transform.translate(z_axis.x, z_axis.y, z_axis.z)
		end

	wheel_up is
			-- Handle mouse wheel up event.
		local
			camera: TE_3D_CAMERA
			z_axis: EM_VECTOR3D
		do
			camera := renderpass_manager.renderpasses.i_th(1).camera
			z_axis := camera.transform.position * (1.0/10.0)
			camera.transform.translate(-z_axis.x, -z_axis.y, -z_axis.z)
		end

	mouse_drag (event: EM_MOUSEMOTION_EVENT) is
			-- Handle mouse movement event.
		local
			start_vec, end_vec: GL_VECTOR_3D[DOUBLE]
			delta_x, delta_y, delta, mouse_delta: DOUBLE
			camera: TE_3D_CAMERA
			radius,polar,azimut,zx_comp_length:DOUBLE
		do
			if event.button_state_right then
				camera := renderpass_manager.renderpasses.i_th(1).camera

				--carth to spherical
				radius:=camera.transform.position.length
				zx_comp_length:=sqrt(camera.transform.position.z^2.0 + camera.transform.position.x^2)
				if camera.transform.position.x >=0 then
					azimut:=arc_cosine(camera.transform.position.z/zx_comp_length)
				else
					azimut:=2*PI - arc_cosine(camera.transform.position.z/zx_comp_length)
				end
				polar:=PI/2 - arc_tangent(camera.transform.position.y/zx_comp_length)

				--rotate camera arround 000
				polar := polar - event.y_motion/50.0
				azimut := azimut - event.x_motion/50.0

				--spherical to carthesian
				camera.transform.set_position (radius*sine(polar)*sine(azimut), radius*cosine(polar), radius*sine(polar)*cosine(azimut))

			elseif event.button_state_left then
			end
		end

end
