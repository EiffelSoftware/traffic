indexing
	description: "3 dimensional map of a city with many event handlers"
	date: "$Date: 2005/12/22 10:48:08 $"
	revision: "$Revision: 1.90 $"

class CITY_3D_MAP_WIDGET

inherit

	TRAFFIC_3D_MAP_WIDGET
		redefine
			make,
			prepare_drawing,
			draw
		end

	TE_3D_SHARED_GLOBALS

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
			building_clicked_event.subscribe (agent building_clicked(?,?))
			create shortest_path_calculated_event
		end

feature -- Access

	marked_origin: TRAFFIC_PLACE
			-- Currently marked origin

	marked_destination: TRAFFIC_PLACE
			-- Currently marked destination

	marked_station_changed: BOOLEAN
			-- Has the marked station changed?

	shortest_path_connections: LIST[TRAFFIC_CONNECTION]
			-- connections of shortest path

	shortest_path_description: STRING
			-- textual description of the shortest path

	traffic_line_ride: BOOLEAN
			-- Are you just taking a traffic line ride?

feature -- Basic operations

	reset is
			-- Reset everything when new map is loaded
		do
			marked_destination := Void
			marked_origin := Void
			marked_station_changed := True
		end


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

	calculate_shortest_path is
			-- Calculate the shortest path.
		require
			map /= Void
		local
			shortest_path: TRAFFIC_PATH
		do
			if marked_station_changed and marked_origin /= Void and marked_destination /= Void then
				map.find_shortest_path (marked_origin, marked_destination)

				marked_station_changed := False

				if map.path_found then
					shortest_path := map.shortest_path
					paths_representation.remove_all
					paths_representation.add_path (shortest_path)
					shortest_path_connections := shortest_path.connections
					shortest_path_calculated_event.publish ([shortest_path.textual_description])
				end
			end
		end

	take_traffic_line_ride is
			-- Take a traffic line ride.
		require
			shortest_path_connections /= Void
		do
			traffic_line_ride := True
			create last_polypoint.make (0, 0)
			shortest_path_connections.start
			if not shortest_path_connections.after then
				shortest_path_connections.item.polypoints.start
				last_polypoint := map_to_gl_coords (shortest_path_connections.item.polypoints.first)
				shortest_path_connections.item.polypoints.forth
			end
			create position.make (0, 0)
		ensure
			traffic_line_ride
			last_polypoint /= Void
			position /= Void
		end

feature -- Drawing

	draw is
			-- Draw all elements on the screen.
		do
			Precursor
						-- Draw marked stations
--			if is_shortest_path_shown and then marked_origin /= Void and then marked_destination /= Void then
--				calculate_shortest_path
--				--traffic_lines.draw_shortest_path
--				paths_representation.draw
--			end
		end

	prepare_drawing is
			-- Prepare for drawing.
		do
			Precursor
			-- Traffic line rides
			if traffic_line_ride and then is_shortest_path_shown and then shortest_path_connections /= Void
			  and then marked_destination /= Void and then marked_origin /= Void and then not shortest_path_connections.after then
				prepare_for_traffic_line_ride
			else
				traffic_line_ride := False
				-- Translation
--				gl_translated_external (x_coord*focus, y_coord, z_coord*focus)
--				gl_translated_external (x_translation, -y_translation, 0)

--				-- Rotation
--				gl_rotated_external (x_rotation, 1, 0, 0)
--				gl_rotated_external (y_rotation, 0, 1, 0)
			end
		end

feature -- Events

	shortest_path_calculated_event: EM_EVENT_CHANNEL [TUPLE[STRING]]
			-- Event for shortest path calculation complete

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

	mouse_click (event: EM_MOUSEBUTTON_EVENT) is
			-- Handle mouse clicked event.
		local
			is_found: BOOLEAN
			result_vec: GL_VECTOR_3D[DOUBLE]
			clicked_point: EM_VECTOR_2D
			place: TRAFFIC_PLACE
		do
			result_vec := transform_coords(event.screen_x, event.screen_y)
			clicked_point := gl_to_map_coords (create {EM_VECTOR_2D}.make (result_vec.x, result_vec.z))
			if event.is_left_button then
				if map /= Void then
					if marked_origin /= Void then
						places_representation.unhighlight_place (marked_origin)
					end
					place := places_representation.place_at_position (clicked_point)
					if place /= Void then
						marked_origin := place
						places_representation.highlight_place(marked_origin, place_highlight_color1)
						is_found := True
						marked_station_changed := True
					else
						if marked_origin /= Void then
							places_representation.unhighlight_place (marked_origin)
						end
						if marked_destination /= Void then
							places_representation.unhighlight_place (marked_destination)
						end
						marked_origin := Void
						marked_destination := Void
						shortest_path_connections := Void
						paths_representation.remove_all
						marked_station_changed := True
					end
				end
			elseif event.is_right_button then
				if map /= Void then
					if marked_destination /= Void then
						places_representation.unhighlight_place (marked_destination)
					end
					place := places_representation.place_at_position (clicked_point)
					if place /= Void then
						marked_destination := place
						places_representation.highlight_place(marked_destination, place_highlight_color2)
						is_found := True
						marked_station_changed := True
					else
						if marked_origin /= Void then
							places_representation.unhighlight_place (marked_origin)
						end
						if marked_destination /= Void then
							places_representation.unhighlight_place (marked_destination)
						end
						marked_destination := Void
						marked_origin := Void
						paths_representation.remove_all
						shortest_path_connections := Void
						marked_station_changed := True
					end
				end
			end
		end

	building_clicked (a_building: TRAFFIC_BUILDING; an_event: EM_MOUSEBUTTON_EVENT) is
			-- Highlight and unhighlight clicked buildings.
		require
			building_valid: a_building /= void
			event_valid: an_event /= void
		do
			if an_event.is_left_button then
				--buildings_representation.highlight_building(a_building)
			elseif an_event.is_right_button then
				--buildings_representation.unhighlight_building(a_building)
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

	prepare_for_traffic_line_ride is
			-- Change the viewpoint in order to take a traffic line ride.
		local
			start_point, end_point, direction: EM_VECTOR_2D
		do
			start_point := last_polypoint
			if shortest_path_connections.item /= Void then
				end_point := map_to_gl_coords (shortest_path_connections.item.polypoints.item)
				direction := end_point - start_point

				if start_point.distance (end_point) > 0 then

					position := position + (direction / direction.length) * speed

					glu_look_at_external
					(	position.x - (position.x/position.length),
						0.5,
						position.y - (position.y/position.length),
						position.x + 0.1*(position.x/position.length),
						0.5,
						position.y + 0.1*(position.y/position.length),
						0, 1, 0
					)
					gl_translated_external (-start_point.x, 0, -start_point.y)
				end
				if (position-direction).length < speed then
					last_polypoint := map_to_gl_coords (shortest_path_connections.item.polypoints.item)
					shortest_path_connections.item.polypoints.forth

					if shortest_path_connections.item.polypoints.after and then not shortest_path_connections.after then
						shortest_path_connections.forth
						if not shortest_path_connections.after then
							shortest_path_connections.item.polypoints.start
							last_polypoint := map_to_gl_coords (shortest_path_connections.item.polypoints.first)
							shortest_path_connections.item.polypoints.forth
						end
					end
					position.set_x (0)
					position.set_y (0)
				end

			end
		end

invariant

end
