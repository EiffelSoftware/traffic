indexing
	description: "3 dimensional map of a city with taxi dispatching"
	date: "$Date: 2006/06/18 12:23:15$"
	revision: "$Revision: 1.90 $"

class CITY_TAXI_WIDGET
	
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
			-- Subscribe to events.F
		do
			Precursor	

			-- User Interaction
			mouse_dragged_event.subscribe (agent mouse_drag (?))
			mouse_wheel_down_event.subscribe (agent wheel_down)
			mouse_wheel_up_event.subscribe (agent wheel_up)
			key_down_event.subscribe (agent key_down (?))
			mouse_clicked_event.subscribe (agent mouse_click)
			create taxi_office.make
			create random_destination.make
			random_destination.set_seed(traffic_time.time.ticks)
		end

feature -- Access
	taxi_office: TRAFFIC_EVENT_TAXI_OFFICE
	
	marked_origin: TRAFFIC_PLACE
			-- Currently marked originb
	
	simulated_time: INTEGER is
			-- Minutes in real time
		require
			traffic_time_exists: traffic_time /= Void
		do
			Result := traffic_time.simulated_minutes
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
			traveler: TRAFFIC_TRAVELER
			temp_list: ARRAYED_LIST [EM_VECTOR_2D]
			loader: TRAFFIC_MAP_LOADER
		do
			create loader.make (filename)
			if not loader.has_error then
				loader.load_map
				set_map (loader.map)
				add_taxis (7)
				traffic_traveler.add_tram_per_line (map, 2)
			end
		ensure then
			travelers_created: map /= Void implies traffic_traveler /= Void
		end

	adjust_speed is
			-- Double the speed of the travelers.
		do
			map.change_traveler_speed (traffic_time.simulated_minutes / 2)
		end
			
	add_taxis (number: INTEGER) is	
			-- Update the number of the taxis on the map.
		require
			number >= 0
		local
			i: INTEGER
			taxi: TRAFFIC_EVENT_TAXI
		do
				from 
					i := 0
				until
					i >= number - number_of_passengers
				loop
					create taxi.make_random (taxi_office, traffic_time.time.ticks, 7)
					taxi.set_reiterate (True)
					add_traveler (taxi)				
					i := i + 1
				end
			number_of_passengers := number
		end

feature -- Drawing

	prepare_drawing is
			-- Prepare the drawing.
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
					if marked_origin /= Void then
						traffic_places.unhighlight_place (marked_origin)
					end	
					place := traffic_places.place_at_position (clicked_point)
					if place /= Void then
						marked_origin := place
						-- the next line to demonstrates the behaviour of the 
						-- request event on the TAXI_EVENT_OFFICE. The click simulates a call
						-- and generates a random destinantion.
						taxi_office.request.publish([place.position, give_random_destination])
						traffic_places.highlight_place(marked_origin, place_highlight_color1)
						marked_station_changed := True							
					end				
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

feature{NONE} --Implementation

		random_destination: RANDOM
		
		place_highlight_color1: GL_VECTOR_3D [DOUBLE] is
			-- Highlight color for marked origins
		once
			create Result.make_xyz (70, 20, 0)
		ensure
			Result_exists: Result /= Void
		end
		
		give_random_destination: EM_VECTOR_2D is
			-- give a random destination
			require
				random_destination /= Void
			local
				temp_x, temp_y: DOUBLE
				destination: EM_VECTOR_2D
			do
				random_destination.forth
				temp_x := random_destination.double_item
				random_destination.forth
				temp_y := random_destination.double_item
				create destination.make (1500 * temp_x - 67, 1500 * temp_y - 32)
				-- approximated places so that they are on the map
				random_destination.forth
				Result := destination		
			end

end
