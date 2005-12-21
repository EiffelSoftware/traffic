indexing
	description: "3 dimensional map of a city with many event handlers"
	date: "$Date$"
	revision: "$Revision$"

class
	MAP

inherit

	TRAFFIC_3D_MAP_WIDGET
		
creation
	
	make
	
feature -- Initialization

	make is
			-- Creation procedure
		do
			make_with_map(map)
			-- User Interaction
			mouse_dragged_event.subscribe (agent mouse_drag (?))
			mouse_wheel_down_event.subscribe (agent wheel_down)
			mouse_wheel_up_event.subscribe (agent wheel_up)
			key_down_event.subscribe (agent key_down (?))
			mouse_clicked_event.subscribe (agent mouse_click)
		ensure
			sun_light /= void
			constant_light /= void
		end

feature -- Options

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
--		
--	set_zoom (d: DOUBLE) is
--			-- Set the focus.
--		require
--			d > 0
--		do
--			focus := d
--		ensure
--			focus = d
--		end
--		
--	set_coordinates_shown (b: BOOLEAN) is
--			-- Set `coordinates_shown'.
--		do
--			coordinates_shown := b
--		ensure
--			coordinates_shown = b
--		end
--
--	set_sun_shown (b: BOOLEAN) is
--			-- Set `sun_shown'.
--		do
--			sun_shown := b
--		ensure
--			sun_shown = b
--		end
--		
--	set_buildings_shown (b: BOOLEAN) is
--			-- Set `buildings_shown'.
--		do
--			buildings_shown := b
--		ensure
--			buildings_shown = b
--		end
--	
--	set_number_of_buildings (n: INTEGER) is
--			-- Set `number_of_buildings'.
--		require
--			n >= 0
--		do
--			number_of_buildings := n
--			if is_map_loaded then
--				ewer.set_building_number (number_of_buildings)
--			end
--		ensure 
--			number_of_buildings = n
--		end
--		
--	set_buildings_transparent (b: BOOLEAN) is
--			-- Set `buildings_transparent'.
--		do
--			buildings_transparent := b
--		ensure
--			buildings_transparent = b
--		end
--		
--	set_lines_highlighted (b: BOOLEAN) is
--			-- If `b' then traffic lines are highlighted.
--		do
--			traffic_lines.set_highlighted (b)
--
--		end
--	
--	set_show_shortest_path (b: BOOLEAN) is
--			-- Set `show_shortest_path'.
--		do
--			if show_shortest_path then
--				shortest_path_line := void
--				shortest_path_line_representation := void
--			end
--			show_shortest_path := b
--			marked_station_changed := True
--		ensure
--			show_shortest_path = b
--		end
--	
--	take_traffic_line_ride is
--			-- Take a traffic line ride.
--		require
--			shortest_path_line /= Void
--		do
--			traffic_line_ride := True
--			create last_polypoint.make (0, 0)
--			shortest_path_line.start
--			if not shortest_path_line.after then
--				shortest_path_line.item.polypoints.start
--				last_polypoint := map_to_gl_coords (shortest_path_line.item.polypoints.first)
--				shortest_path_line.item.polypoints.forth
--			end
--			create position.make (0, 0)
--		ensure
--			traffic_line_ride
--			last_polypoint /= Void
--			position /= Void
--		end
--	
--	sun_shown: BOOLEAN
--			-- Should sun be displayed?
--			
--	coordinates_shown: BOOLEAN
--			-- Should the coordinate system be displayed?
--			
--	buildings_shown: BOOLEAN
--			-- Should the buildings be displayed?
--			
--	buildings_transparent: BOOLEAN
--			-- Should the buildings be transparent?
--			
--	show_shortest_path: BOOLEAN
--			-- Should the shortest path be displayed?
--			
--	traffic_line_ride: BOOLEAN
--			-- Are you just taking a traffic line ride?
			
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
			section: TRAFFIC_LINE_SECTION
			line: TRAFFIC_LINE
			lines: HASH_TABLE [TRAFFIC_LINE, STRING]
			place_x, place_z, delta_x, delta_z, delta: DOUBLE
			is_found: BOOLEAN
			result_vec: GL_VECTOR_3D[DOUBLE]
			clicked_point: GL_VECTOR_3D[DOUBLE]
		do
			if event.is_left_button then
				result_vec := transform_coords(event.screen_x, event.screen_y)				
				create clicked_point.make_xyz (result_vec.x, result_vec.y, result_vec.z)
				
				if map /= Void then
					
					from lines := map.lines
						lines.start
						is_found := False
					until is_found or else lines.after
					loop
						from line := lines.item_for_iteration
							line.start
						until line.after
						loop
							section := line.item
							
							-- Checking origin of section
							place_x := map_to_gl_coords (section.polypoints.first).x
							place_z := map_to_gl_coords (section.polypoints.first).y
							delta_x := place_x - clicked_point.x
							delta_z := place_z - clicked_point.z
							delta := sqrt (delta_x^2 + delta_z^2)
							if delta < station_radius then
								traffic_places.highlighte_place(section.origin, 0)
								create marked_origin.make_with_position (section.origin.name, section.polypoints.first.x.rounded, section.polypoints.first.y.rounded)
								is_found := True
								marked_station_changed := True
							end
							
							-- Checking destination of section
							place_x := map_to_gl_coords (section.polypoints.last).x
							place_z := map_to_gl_coords (section.polypoints.last).y
							delta_x := place_x - clicked_point.x
							delta_z := place_z - clicked_point.z
							delta := sqrt (delta_x^2 + delta_z^2)
							if delta < station_radius then
								traffic_places.highlighte_place(section.destination,0)
								create marked_origin.make_with_position (section.destination.name, section.polypoints.last.x.rounded, section.polypoints.last.y.rounded)
								is_found := True
								marked_station_changed := True
							end
							line.forth
						end
						lines.forth
					end	
					if not is_found then
						marked_origin := Void
						marked_destination := Void
						shortest_path_line := void
						traffic_lines.remove_shortest_path
						marked_station_changed := True
					end
				end
				
			elseif event.is_right_button then
				result_vec := transform_coords(event.screen_x, event.screen_y)				
				create clicked_point.make_xyz (result_vec.x, result_vec.y, result_vec.z)
				if map /= Void then
					from lines := map.lines
						lines.start
						is_found := False
					until is_found or else lines.after
					loop
						from line := lines.item_for_iteration
							line.start
						until line.after
						loop
							section := line.item
							
							-- Checking origin of section
							place_x := map_to_gl_coords (section.polypoints.first).x
							place_z := map_to_gl_coords (section.polypoints.first).y
							delta_x := place_x - clicked_point.x
							delta_z := place_z - clicked_point.z
							delta := sqrt (delta_x^2 + delta_z^2)
							if delta < station_radius then
								traffic_places.highlighte_place(section.origin, 0)
								create marked_destination.make_with_position (section.origin.name, section.polypoints.first.x.rounded, section.polypoints.first.y.rounded)
								is_found := True
								marked_station_changed := True
							end
							
							-- Checking destination of section
							place_x := map_to_gl_coords (section.polypoints.last).x
							place_z := map_to_gl_coords (section.polypoints.last).y
							delta_x := place_x - clicked_point.x
							delta_z := place_z - clicked_point.z
							delta := sqrt (delta_x^2 + delta_z^2)
							if delta < station_radius then
								traffic_places.highlighte_place(section.destination, 1)
								create marked_destination.make_with_position (section.destination.name, section.polypoints.last.x.rounded, section.polypoints.last.y.rounded)
								is_found := True
								marked_station_changed := True
							end
							line.forth
						end
						lines.forth
					end
					if not is_found then
						marked_destination := Void
						marked_origin := Void
						shortest_path_line := void
--						traffic_lines.remove_shortest_path
						marked_station_changed := True
					end
				end
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
	
invariant
	focus_greater_than_0: focus > 0

end -- class MAP
