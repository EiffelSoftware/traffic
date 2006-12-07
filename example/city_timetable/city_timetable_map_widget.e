indexing
	description: "3 dimensional map of a city with many event handlers"
	date: "$Date: 2005/12/22 10:48:08 $"
	revision: "$Revision: 1.90 $"

class CITY_TIMETABLE_MAP_WIDGET

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
			mouse_clicked_event.subscribe (agent mouse_click)
			create event_taxi_offices.make(0)
			create dispatcher_taxi_offices.make(0)
			create random.make
			random.set_seed(time.time.ticks)
			time.set_time(11,0,0)
		end

feature -- Access

	marked_station: TRAFFIC_PLACE
			-- Currently marked origin

	shortest_path_line: TRAFFIC_LINE
			-- Artificial traffic line for the shortest path

	event_taxi_offices: ARRAYED_LIST[TRAFFIC_EVENT_TAXI_OFFICE]
		-- Event taxi offices list

	dispatcher_taxi_offices: ARRAYED_LIST[TRAFFIC_DISPATCHER_TAXI_OFFICE]
		-- Dispatcher taxi offices list

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

	add_vehicles is
			-- Add trams to lines
		require
			factory_exists: travelers_representation /= Void
		do
			travelers_representation.add_tram_per_line_with_schedule (map, 1)
		end

	add_dispatcher_taxi_office(number_of_taxis: INTEGER) is
			-- Add a new taxi_office to the map. The taxi_office has 'number_of_taxis' taxis.
			-- Set the seed on the office to time.tick.
			-- This seed is for random generating the positions of the taxis associated with the office.
		local
			taxi_office: TRAFFIC_DISPATCHER_TAXI_OFFICE
		do
			create taxi_office.make(number_of_taxis, time.time.ticks)
			dispatcher_taxi_offices.extend(taxi_office)
			map.add_taxi_office (taxi_office)
			add_taxis(taxi_office.taxi_list)
		end

	add_event_taxi_office(number_of_taxis: INTEGER) is
			-- Add an event_taxi_office to the map.
		local
			taxi_office: TRAFFIC_EVENT_TAXI_OFFICE
		do
			-- set seed for random generating the positions of the taxis
			-- associated with the office to time.tick
			create taxi_office.make(number_of_taxis, time.time.ticks)
			event_taxi_offices.extend(taxi_office)
			map.add_taxi_office (taxi_office)
			add_taxis(taxi_office.taxi_list)
		end

	add_taxis (taxis: ARRAYED_LIST[TRAFFIC_MOVING]) is
			-- Add taxis to the map.
		require
			taxis_not_void: taxis /= void

		do
			taxis.do_all (agent travelers_representation.add_traveler(?, map))
		end

	set_taxi_office_type(type: STRING) is
			-- Set type of the current taxi office to be used.
		do
			current_taxi_office := type
		end

feature -- Drawing

	prepare_drawing is
			-- Prepare the drawing.
		do
			Precursor

			-- Translation
			--gl_translatef_external (x_coord*focus, y_coord, z_coord*focus)
			--gl_translatef_external (x_translation, -y_translation, 0)

			-- Rotation
			--gl_rotatef_external (x_rotation, 1, 0, 0)
			--gl_rotatef_external (y_rotation, 0, 1, 0)
		end


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

	mouse_click (event: EM_MOUSEBUTTON_EVENT) is
			-- Handle mouse clicked event.
		local
			result_vec: GL_VECTOR_3D[DOUBLE]
			clicked_point: EM_VECTOR_2D
			place: TRAFFIC_PLACE
		do
			result_vec := transform_coords(event.screen_x, event.screen_y)
			clicked_point := gl_to_map_coords (create {EM_VECTOR_2D}.make (result_vec.x, result_vec.z))
			if event.is_left_button then
				if map /= Void then
					if marked_station /= Void then
						places_representation.unhighlight_place (marked_station)
					end
					place := places_representation.place_at_position (clicked_point)
					if place /= Void then
						marked_station := place
						places_representation.highlight_place(marked_station, place_highlight_color1)
						marked_station_changed := True
					end
				end
			elseif event.is_right_button then
				if map /= Void then
					place := places_representation.place_at_position (clicked_point)
					if place /= Void then
						taxi_place := place
						if current_taxi_office.is_equal ("Event Taxi Office") then

							-- Request event on the TAXI_EVENT_OFFICE.
							-- Publish orders a taxi to the place
							-- Request to go from the place where the user clicked on to a random destination.

							event_taxi_offices.go_i_th (1)
							event_taxi_offices.item.request.publish([place.position, random_destination])
							marked_station_changed := True
						else
							--Call on taxi office to order a taxi.
							--Order to go from the place where the user clicked on to a random destination.

							dispatcher_taxi_offices.go_i_th (1)
							dispatcher_taxi_offices.item.call (place.position, random_destination)
							marked_station_changed := True
						end
					end
				end
			end
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
				--TODO: implement pan
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

feature {NONE} -- Implementation

	taxi_place: TRAFFIC_PLACE

	random: RANDOM
			-- Random number used for taxi request destination.

	current_taxi_office: STRING
			-- Taxi office to serve requests.

	last_polypoint: EM_VECTOR_2D
			-- The last polypoint visited

	position: EM_VECTOR_2D
			-- The current position

	Speed: DOUBLE is 0.05
			-- Speed of the traffic line rides

	place_highlight_color1: EM_COLOR is
			-- Highlight color for marked origins
		once
			create Result.make_with_rgb (0, 255, 0)
		ensure
			Result_exists: Result /= Void
		end

	place_highlight_color2: EM_COLOR is
			-- Highlight color for marked origins
		once
			create Result.make_with_rgb (0, 0, 255)
		ensure
			Result_exists: Result /= Void
		end

	marked_station_changed: BOOLEAN

	random_destination: EM_VECTOR_2D is
			-- Random destination for taxi
		require
			random /= Void
		local
			temp_x, temp_y: DOUBLE
			destination: EM_VECTOR_2D
		do
			random.forth
			temp_x := random.double_item
			random.forth
			temp_y := random.double_item
			create destination.make (1500 * temp_x - 67, 1500 * temp_y - 32)
			-- approximated places so that they are on the map
			random.forth
			Result := destination
		end

invariant

end
