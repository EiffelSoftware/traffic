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
		end

feature -- Access

	marked_origin: TRAFFIC_PLACE
			-- Currently marked origin

	marked_destination: TRAFFIC_PLACE
			-- Currently marked destination

	shortest_path_line: TRAFFIC_LINE
			-- Artificial traffic line for the shortest path

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

	calculate_shortest_path is
			-- Calculate the shortest path.
			-- TODO: revise heavily
		require
			map /= Void
		local
			line: TRAFFIC_LINE
			origin, destination: TRAFFIC_PLACE
			section,line_section: TRAFFIC_LINE_SECTION
			shortest_path: LIST [TRAFFIC_LINE_SECTION]
			
		do
			if marked_station_changed then
				map.find_shortest_path (marked_origin, marked_destination)
				create line.make ("Shortest path", create {TRAFFIC_TYPE_WALKING}.make)

--				if not map.shortest_path.is_empty and then not map.shortest_path.first.place.is_equal (marked_origin) then				
--					create origin.make_with_position (marked_origin.name, marked_origin.position.x.rounded, marked_origin.position.y.rounded)
--					create destination.make_with_position (map.shortest_path.first.label.origin.name, map.shortest_path.first.label.polypoints.first.x.rounded, map.shortest_path.first.label.polypoints.first.y.rounded)
--					line.force (create {TRAFFIC_LINE_SECTION}.make (origin.dummy_stop, destination.dummy_stop, create {TRAFFIC_TYPE_WALKING}.make, void))
--				end

				from
					shortest_path := map.shortest_path; shortest_path.start
				until
					shortest_path.after
				loop
					create section.make (shortest_path.item.origin, shortest_path.item.destination, line.type, Void)

					line.extend (section)
					shortest_path.forth
--					if not map.shortest_path.after and then not line.last.polypoints.last.is_equal (map.shortest_path.item.label.polypoints.first) then
--						create origin.make_with_position (line.last.destination.name, line.last.polypoints.last.x.rounded, line.last.polypoints.last.y.rounded)
--						create destination.make_with_position (map.shortest_path.item.label.origin.name, map.shortest_path.item.label.polypoints.first.x.rounded, map.shortest_path.item.label.polypoints.first.y.rounded)
--						create section.make (origin.dummy_stop, destination.dummy_stop, create {TRAFFIC_TYPE_WALKING}.make, void)
--						line.force (section)
--					end
				end

--				if not line.is_empty and then not line.last.polypoints.last.is_equal (marked_destination.position) then
--					create origin.make_with_position (line.last.destination.name, line.last.polypoints.last.x.rounded, line.last.polypoints.last.y.rounded)
--					create destination.make_with_position (marked_destination.name, marked_destination.position.x.rounded, marked_destination.position.y.rounded)
--					line.force (create {TRAFFIC_LINE_SECTION}.make (origin.dummy_stop, destination.dummy_stop, create {TRAFFIC_TYPE_WALKING}.make, void))
--				end

				shortest_path_line := line

				traffic_lines.add_shortest_line(line)
				marked_station_changed := False
			end
		end

	take_traffic_line_ride is
			-- Take a traffic line ride.
		require
			shortest_path_line /= Void
		do
			traffic_line_ride := True
			create last_polypoint.make (0, 0)
			shortest_path_line.start
			if not shortest_path_line.after then
				shortest_path_line.item.polypoints.start
				last_polypoint := map_to_gl_coords (shortest_path_line.item.polypoints.first)
				shortest_path_line.item.polypoints.forth
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
			if show_shortest_path and then marked_origin /= Void and then marked_destination /= Void then
				calculate_shortest_path
				traffic_lines.draw_shortest_path
			end
		end

	prepare_drawing is
			-- Prepare for drawing.
		do
			Precursor
			-- Traffic line rides
			if traffic_line_ride and then show_shortest_path and then shortest_path_line /= Void and then marked_destination /= Void and then marked_origin /= Void and then not shortest_path_line.after then
				prepare_for_traffic_line_ride
			else
				traffic_line_ride := False
				-- Translation
				gl_translated_external (x_coord*focus, y_coord, z_coord*focus)
				gl_translated_external (x_translation, -y_translation, 0)

				-- Rotation
				gl_rotated_external (x_rotation, 1, 0, 0)
				gl_rotated_external (y_rotation, 0, 1, 0)
			end
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
						traffic_places.unhighlight_place (marked_origin)
					end
					place := traffic_places.place_at_position (clicked_point)
					if place /= Void then
						marked_origin := place
						traffic_places.highlight_place(marked_origin, place_highlight_color1)
						is_found := True
						marked_station_changed := True
					else
						if marked_origin /= Void then
							traffic_places.unhighlight_place (marked_origin)
						end
						if marked_destination /= Void then
							traffic_places.unhighlight_place (marked_destination)
						end
						marked_origin := Void
						marked_destination := Void
						shortest_path_line := void
						traffic_lines.remove_shortest_path
						marked_station_changed := True
					end
				end
			elseif event.is_right_button then
				if map /= Void then
					if marked_destination /= Void then
						traffic_places.unhighlight_place (marked_destination)
					end
					place := traffic_places.place_at_position (clicked_point)
					if place /= Void then
						marked_destination := place
						traffic_places.highlight_place(marked_destination, place_highlight_color2)
						is_found := True
						marked_station_changed := True
					else
						if marked_origin /= Void then
							traffic_places.unhighlight_place (marked_origin)
						end
						if marked_destination /= Void then
							traffic_places.unhighlight_place (marked_destination)
						end
						marked_destination := Void
						marked_origin := Void
						shortest_path_line := void
						marked_station_changed := True
					end
				end
			elseif event.is_middle_button then
				io.put_string (map.out)
			end
		end

	building_clicked (a_building: TRAFFIC_BUILDING; an_event: EM_MOUSEBUTTON_EVENT) is
			-- Highlight and unhighlight clicked buildings.
		require
			building_valid: a_building /= void
			event_valid: an_event /= void
		do
			if an_event.is_left_button then
				traffic_buildings.highlight_building(a_building)
			elseif an_event.is_right_button then
				traffic_buildings.un_highlight_building(a_building)
			end
		end

	mouse_drag (event: EM_MOUSEMOTION_EVENT) is
			-- Handle mouse movement event.
		local
			start_vec, end_vec: GL_VECTOR_3D[DOUBLE]
			delta_x, delta_y, delta, mouse_delta: DOUBLE
		do
			if event.button_state_right then
				y_rotation := y_rotation + event.x_motion
				x_rotation := x_rotation + event.y_motion
				if x_rotation <= 15 then
					x_rotation := 15
				elseif x_rotation >= 90 then
					x_rotation := 90
				end

			elseif event.button_state_left then
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

	key_down (event: EM_KEYBOARD_EVENT) is
			-- Handle key events.
		do
			if event.key = event.sdlk_up then
				x_rotation := x_rotation + 10
			elseif event.key = event.sdlk_down then
				x_rotation := x_rotation - 10
			elseif event.key = event.sdlk_left then
				y_rotation := y_rotation - 10
			elseif event.key = event.sdlk_right then
				y_rotation := y_rotation + 10
			elseif event.key = event.sdlk_return then
				x_coord := 0
				y_coord := -1
				z_coord := -9
				x_translation := 0
				y_translation := 0
			end
		end

feature {NONE} -- Implementation

	last_polypoint: EM_VECTOR_2D
			-- The last polypoint visited

	position: EM_VECTOR_2D
			-- The current position

	Speed: DOUBLE is 0.05
			-- Speed of the traffic line rides

	place_highlight_color1: GL_VECTOR_3D [DOUBLE] is
			-- Highlight color for marked origins
		once
			create Result.make_xyz (0, 255, 0)
		ensure
			Result_exists: Result /= Void
		end

	place_highlight_color2: GL_VECTOR_3D [DOUBLE] is
			-- Highlight color for marked origins
		once
			create Result.make_xyz (0, 0, 255)
		ensure
			Result_exists: Result /= Void
		end

	prepare_for_traffic_line_ride is
			-- Change the viewpoint in order to take a traffic line ride.
		local
			start_point, end_point, direction: EM_VECTOR_2D
		do
			start_point := last_polypoint
			end_point := map_to_gl_coords (shortest_path_line.item.polypoints.item)

			direction := end_point - start_point

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

			if (position-direction).length < speed then
				last_polypoint := map_to_gl_coords (shortest_path_line.item.polypoints.item)
				shortest_path_line.item.polypoints.forth

				if shortest_path_line.item.polypoints.after and then not shortest_path_line.after then
					shortest_path_line.forth
					if not shortest_path_line.after then
						shortest_path_line.item.polypoints.start
						last_polypoint := map_to_gl_coords (shortest_path_line.item.polypoints.first)
						shortest_path_line.item.polypoints.forth
					end
				end
				position.set_x (0)
				position.set_y (0)
			end
		end

invariant

	focus_greater_than_0: focus > 0

end
