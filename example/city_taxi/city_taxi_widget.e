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
			-- Subscribe to events
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
			random.set_seed(traffic_time.time.ticks)
		end

feature -- Access
	event_taxi_offices: ARRAYED_LIST[TRAFFIC_EVENT_TAXI_OFFICE]
		-- Event taxi offices list
		
	dispatcher_taxi_offices: ARRAYED_LIST[TRAFFIC_DISPATCHER_TAXI_OFFICE]
		-- Dispatcher taxi offices list
		
	marked_origin: TRAFFIC_PLACE
		-- Currently marked origin
	
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
			-- Zoom out.
		do
			wheel_down
		end

	load_map (filename: STRING) is
			-- Load the map with file name `filename'.
			-- Add an event and a dispatcher taxi office both owning 5 taxis.
		require
			filename_exists: filename /= Void
		local
			loader: TRAFFIC_MAP_LOADER
			passenger: TRAFFIC_PASSENGER
			trolley: TRAFFIC_TROLLEYBUS
			bus: TRAFFIC_BUS
			tram: TRAFFIC_TRAM
			cable: TRAFFIC_CABLECAR
			
		do
			create loader.make (filename)
			if not loader.has_error then
				loader.load_map
				set_map (loader.map)
				add_event_taxi_office(5)
				add_dispatcher_taxi_office(5)
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
			taxis.do_all (agent add_traveler(?))				
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
			-- Mouse_click on a place simulates a taxi call.
		local
			result_vec: GL_VECTOR_3D[DOUBLE]
			clicked_point: EM_VECTOR_2D
			place: TRAFFIC_PLACE
		do
			result_vec := transform_coords(event.screen_x, event.screen_y)				
			clicked_point := gl_to_map_coords (create {EM_VECTOR_2D}.make (result_vec.x, result_vec.z))
			if event.is_left_button then				
				if map /= Void then
					place := traffic_places.place_at_position (clicked_point)
					if place /= Void then
						marked_origin := place
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
		
		current_taxi_office: STRING
			-- Taxi office to serve requests.

		random: RANDOM
			-- Random number used for taxi request destination.
			
		place_highlight_color1: GL_VECTOR_3D [DOUBLE] is
			-- Highlight color for marked origins
		once
			create Result.make_xyz (70, 20, 0)
		ensure
			Result_exists: Result /= Void
		end
		
		random_destination: EM_VECTOR_2D is
			-- give a random destination
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

end
