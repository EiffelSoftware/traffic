indexing
	description: "3 dimensional map of a city with travelers"
	date: "$Date: 2005/12/22 10:48:08 $"
	revision: "$Revision: 1.90 $"

class CITY_TIME_MAP_WIDGET

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

			-- User Interaction
			mouse_dragged_event.subscribe (agent mouse_drag (?))
			mouse_wheel_down_event.subscribe (agent wheel_down)
			mouse_wheel_up_event.subscribe (agent wheel_up)
			key_down_event.subscribe (agent key_down (?))
			enable_sun_shown
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

	load_map (filename: STRING) is
			-- Load the map with file name `filename'.
		require
			filename_exists: filename /= Void
		local
			loader: TRAFFIC_MAP_LOADER
		do
			create loader.make (filename)
			if not loader.has_error then
				loader.load_map
				set_map (loader.map)

--				update_passenger_number (0)
				update_passenger_number (number_of_passengers)

				map.add_tram_per_line (2)
			end
		ensure then
			travelers_created: map /= Void implies travelers_representation /= Void
		end

	adjust_speed is
			-- Double the speed of the travelers.
		do
--			from
--				
--			until
--				
--			loop
--				
--			end
--			map.change_traveler_speed (time.simulated_minutes /2)
		end

	update_passenger_number (number: INTEGER) is
			-- Update the number of the passengers on the map.
		require
			number >= 0
		local
			i: INTEGER
			traveler: TRAFFIC_PASSENGER
		do
			if number_of_passengers >= number then
				map.passengers.prune_last (number_of_passengers - number)
			else
				from
					i := 0
				until
					i >= number - number_of_passengers
				loop
					create traveler.make_random (7, time.time.ticks)
					traveler.set_reiterate (True)
					map.passengers.force_last (traveler)
					i := i + 1
				end
			end
			number_of_passengers := number
		end

feature -- Drawing

	prepare_drawing is
			-- Prepare the drawing.
		do
			Precursor

--			-- Translation
--			gl_translated_external (x_coord*focus, y_coord, z_coord*focus)
--			gl_translated_external (x_translation, -y_translation, 0)

--			-- Rotation
--			gl_rotated_external (x_rotation, 1, 0, 0)
--			gl_rotated_external (y_rotation, 0, 1, 0)
		end

feature -- Access

	simulated_time: INTEGER is
			-- Minutes in real time
		require
			traffic_time_exists: time /= Void
		do
			Result := time.simulated_minutes
		end

	number_of_passengers: INTEGER

feature {NONE} -- Event handling


	wheel_down is
			-- Handle mouse wheel down event.
		local
			camera: TE_3D_CAMERA
			z_axis: EM_VECTOR3D
		do
		camera := beauty_pass.camera
		z_axis := camera.transform.position * (1.0/10.0)
		camera.transform.translate(z_axis.x, z_axis.y, z_axis.z)
		end

	wheel_up is
			-- Handle mouse wheel up event.
		local
			camera: TE_3D_CAMERA
			z_axis: EM_VECTOR3D
		do
		camera := beauty_pass.camera
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
				camera := beauty_pass.camera

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


	key_down (event: EM_KEYBOARD_EVENT) is
			-- Handle key events.
		do
--			if event.key = event.sdlk_up then
--				x_rotation := x_rotation + 10
--			elseif event.key = event.sdlk_down then
--				x_rotation := x_rotation - 10
--			elseif event.key = event.sdlk_left then
--				y_rotation := y_rotation - 10
--			elseif event.key = event.sdlk_right then
--				y_rotation := y_rotation + 10
--			elseif event.key = event.sdlk_return then
--				x_coord := 0
--				y_coord := -1
--				z_coord := -9
--				x_translation := 0
--				y_translation := 0
--			end
		end

feature -- {CITY_3D_SCENE}	-- Travelere objects
	add_travelers is
			-- fill in here the travelers and call it in load_map
		local
			traveler: TRAFFIC_PASSENGER
			temp_list: ARRAYED_LIST [EM_VECTOR_2D]
		do
			create temp_list.make(1)
			temp_list.force (create {EM_VECTOR_2D}.make (-67, -32))
			temp_list.force (create {EM_VECTOR_2D}.make (0, 0))
			temp_list.force (create {EM_VECTOR_2D}.make (-10, 30))

			create traveler.make_directed (temp_list, 0.5)

			map.passengers.force_last (traveler)
		end

end
