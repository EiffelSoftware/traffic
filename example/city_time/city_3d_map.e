indexing
	description: "3 dimensional map of a city with many event handlers"
	date: "$Date: 2005/12/22 10:48:08 $"
	revision: "$Revision: 1.90 $"

class
	CITY_3D_MAP
	
	
inherit
	TRAFFIC_3D_MAP_WIDGET
	redefine
		make, prepare_drawing, draw, load_map
	end
		
creation
	
	make
	
feature -- Initialization

	make is
			-- Creation procedure
		do
			Precursor
	
			create traffic_time.make_day (1)
			
			-- User Interaction
			mouse_dragged_event.subscribe (agent mouse_drag (?))
			mouse_wheel_down_event.subscribe (agent wheel_down)
			mouse_wheel_up_event.subscribe (agent wheel_up)
			key_down_event.subscribe (agent key_down (?))
			mouse_clicked_event.subscribe (agent mouse_click)
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

	draw is
			-- 
			local
				i: INTEGER
			do
				Precursor
				
				
				traffic_traveler.draw
				from
					i := traffic_traveler.travelers.lower
				until
					i > traffic_traveler.travelers.upper
				loop
--					traffic_time.add_callback_procedure (agent (traffic_traveler.travelers.item(i)).take_tour)
--					traffic_time.time.add_timed_procedure (agent (traffic_traveler.travelers.item(i)).take_tour, 5000)
					i := i+1
				end
							-- Draw marked stations
				if marked_origin /= Void then
						traffic_places.highlight_place (marked_origin,0)
					-- 0 for origin			
				end
				if marked_destination /= Void then
					traffic_places.highlight_place (marked_destination,1)
					-- 1 for destination
				end
			end
		
	
	prepare_drawing is
			-- prepare the drawing
			do
				Precursor
				-- Translation
				gl_translated_external (x_coord*focus, y_coord, z_coord*focus)
				gl_translated_external (x_translation, -y_translation, 0)
				
				-- Rotation
				gl_rotated_external (x_rotation, 1, 0, 0)
				gl_rotated_external (y_rotation, 0, 1, 0)
			end

feature -- places
			
	marked_origin: TRAFFIC_PLACE
			-- Currently marked origin
			
	marked_destination: TRAFFIC_PLACE
			-- Currently marked destination

feature -- time
	simulated_time: INTEGER is
			-- get the time from traffic time
			require
				traffic_time /= Void
			do
				Result := traffic_time.simulated_minutes
			end
		
		
	traffic_time: TRAFFIC_TIME

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
								traffic_places.highlight_place(section.origin, 0)
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
								traffic_places.highlight_place(section.destination,0)
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
								traffic_places.highlight_place(section.origin, 0)
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
								traffic_places.highlight_place(section.destination, 1)
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


feature	-- Travelere objects
	
	traffic_traveler: TRAFFIC_TRAVELER_REPRESENTATION
	
feature
	
	load_map (filename: STRING) is
			-- 
			do
				Precursor (filename)
				create traffic_traveler.make (map, traffic_time)
			ensure then
				traffic_traveler /= Void
			end
		
invariant
	traffic_time /= Void
	
end -- class CITY_3D_MAP
