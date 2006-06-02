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

--				update_passenger_number (0)
				update_passenger_number (number_of_passengers)
				
				traffic_traveler.add_tram_per_line (map, 2)
			end
		ensure then
			travelers_created: map /= Void implies traffic_traveler /= Void
		end

	adjust_speed is
			-- Double the speed of the travelers.
		do
			map.change_traveler_speed (traffic_time.simulated_minutes /2)
		end

	update_passenger_number (number: INTEGER) is	
			-- Update the number of the passengers on the map.
		require
			number >= 0
		local
			i: INTEGER
			traveler: TRAFFIC_TRAVELER
		do
			if number_of_passengers >= number then
				from
					i := number_of_passengers
				until
					i <= number
				loop
					traffic_traveler.remove_traveler
					i := i - 1
				end
			else
				from 
					i := 0
				until
					i >= number - number_of_passengers
				loop
					create traveler.make_random (traffic_time.time.ticks, 7, create {TRAFFIC_TYPE_WALKING}.make)
					traveler.set_reiterate (True)
					add_traveler (traveler)				
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
			
			-- Translation
			gl_translated_external (x_coord*focus, y_coord, z_coord*focus)
			gl_translated_external (x_translation, -y_translation, 0)
			
			-- Rotation
			gl_rotated_external (x_rotation, 1, 0, 0)
			gl_rotated_external (y_rotation, 0, 1, 0)
		end

feature -- Access

	simulated_time: INTEGER is
			-- Minutes in real time
		require
			traffic_time_exists: traffic_time /= Void
		do
			Result := traffic_time.simulated_minutes
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

feature -- {CITY_3D_SCENE}	-- Travelere objects
	add_travelers is
			-- fill in here the travelers and call it in load_map
		local
			traveler: TRAFFIC_TRAVELER
			temp_list: ARRAYED_LIST [EM_VECTOR_2D]
		do
			create temp_list.make(1)
			temp_list.force (create {EM_VECTOR_2D}.make (-67, -32))
			temp_list.force (create {EM_VECTOR_2D}.make (0, 0))
			temp_list.force (create {EM_VECTOR_2D}.make (-10, 30))

			create traveler.make_directed (temp_list, create {TRAFFIC_TYPE_WALKING}.make, 0.5)
			
			add_traveler (traveler)
		end
		
end
