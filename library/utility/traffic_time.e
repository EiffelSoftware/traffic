indexing
	description: "This object represent the time in the city model"
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_TIME

inherit	
	EM_TIME_SINGLETON
	
	TRAFFIC_3D_CONSTANTS
		export {NONE} all end
		
	EM_SHARED_SCENE
	
create
	make_day, make
	
feature -- Creation

	stop: BOOLEAN 
	
	make is
			-- Set minutes for a simulated day to the default values.
		do
			-- What is this for?
			-- callback_delay := 10
			make_day (default_simulated_day_minutes)
--			create all_procedures.make
--			create all_tours.make
--			
--			actual_hour := 0
--			actual_minute := 0
--			actual_second := 0
--			
--			add_callback_procedure (agent time_count)	
		ensure	
			simulated_minutes_set: simulated_minutes = default_simulated_day_minutes
		end
		

	make_day(simulated_day_minutes: INTEGER) is
			-- the day lasts for 'simulated_day_minutes'.
	require
		simulated_day_minutes >= 1
	do		
		simulated_minutes := simulated_day_minutes
		change_simulated_time (simulated_minutes)
		create all_procedures.make
		create all_tours.make
		
--		running_scene.event_loop.update_event.subscribe (agent call_procedure)
--		running_scene.event_loop.update_event.subscribe (agent call_tours )
		
		actual_hour := 0
		actual_minute := 0
		actual_second := 0
		actual_day := 0

		update_agent := agent update_time
		
--		add_callback_procedure (agent time_count)
				
		actual_hour := 0
		actual_minute := 0
		actual_second := 0
		
		ensure
			simulated_minutes = simulated_day_minutes
	end

feature{NONE} -- Time facts
	
	callback_delay: INTEGER
		-- delay to call all procedures again.
		

feature  --Time Attributes
	
	simulated_minutes: INTEGER
		-- minutes in realtime.
	
	actual_hour: INTEGER
		-- actual hour, returns the simulated hour at this day.
	
	actual_minute: INTEGER
		-- actual minute, returns the simulated minute in this hour.
	
	actual_second: INTEGER
		-- simluated second, not useful yet. 
		
	actual_day: INTEGER
		-- actual day
		
	change_simulated_time (simulated_day_minutes: INTEGER) is
			-- the day lasts for 'simulated_day_minutes'.
		require
			simulated_day_minutes >= 1
		local
			temp_delay : INTEGER
		do		
			simulated_minutes := simulated_day_minutes
			if is_time_running then
				pause_time
				resume_time
			end
		ensure
			simulated_minutes = simulated_day_minutes
		end
	
	
feature{NONE} -- Handling

	update_time is	
			-- start the time.
			require
				actual_second >= 0
				actual_minute >= 0
				actual_hour >= 0
			local
				real_mili_secs: INTEGER	
				sim_secs: DOUBLE
				old_hour: INTEGER
			do
				if is_time_running then
					real_mili_secs := time.ticks - real_ms_start	
					sim_secs := 1440/simulated_minutes*real_mili_secs/1000.0 + sim_sec_start
					actual_second := sim_secs.rounded\\60
					actual_minute := (sim_secs/60).floor\\60
					old_hour := actual_hour
					actual_hour := (sim_secs/3600).floor\\24
					if actual_hour < old_hour then
						actual_day := actual_day + 1						
					end
					call_tours
					call_procedure					
				end
			end
		
		
	
		
feature -- time

	is_time_running: BOOLEAN		
			-- is time startet?

	start_time is
			-- start to count the time.
			require
				not is_time_running
			do
				is_time_running := True
				running_scene.event_loop.update_event.subscribe (update_agent)
				real_ms_start := time.ticks
				sim_sec_start := 0
--				time.add_timed_callback (callback_delay, agent call_procedure)
--				time.add_timed_callback (70, agent call_tours)
			ensure
				is_time_running
			end
			
	pause_time is
			-- pause the time count.
			require
				is_time_running
			do
				is_time_running := False
				stop := True
				running_scene.event_loop.update_event.unsubscribe (update_agent)
				sim_sec_start := (1440/simulated_minutes*(time.ticks - real_ms_start)/1000.0 + sim_sec_start).floor
			ensure
				not is_time_running
			end
		
	resume_time is
			-- resume the paused time.
			require
				not is_time_running
			do
				is_time_running := True
				running_scene.event_loop.update_event.subscribe (update_agent)
				real_ms_start := time.ticks
			ensure
				is_time_running
			end
	
	reset_time is
			-- reset the time to 0, 0, 0.
			do
				actual_hour := 0
				actual_minute := 0
				actual_second := 0
				is_time_running := False
				real_ms_start := 0
				sim_sec_start := 0
				running_scene.event_loop.update_event.unsubscribe (update_agent)
			ensure
				is_time_running = False
				actual_hour = 0
				actual_minute = 0
				actual_second = 0
			end
			
feature -- Constants

	Default_simulated_day_minutes: INTEGER is 1
		-- Default number of minutes that a day lasts
		
feature{NONE} -- Attributes		

	all_procedures: LINKED_LIST[PROCEDURE[ANY, TUPLE]]
		-- container for all procedures except tours.	
	
	all_tours: LINKED_LIST[PROCEDURE[ANY, TUPLE]]
		-- container for all tours.
		
	real_ms_start: INTEGER
		-- Value of `ticks' in EM_TIME when our time counting started
		
	sim_sec_start: INTEGER
		-- Value of simulated seconds that the `real_ms_start' denotes (used for pausing)
		
	update_agent: PROCEDURE [ANY, TUPLE]
		-- Agent used for updating current simulated time

feature -- Procedures
	
	add_callback_procedure (a_procedure: PROCEDURE[ANY, TUPLE]) is
			-- add a procedure.
		do
			all_procedures.force (a_procedure)
		end
		
	add_callback_tour (a_tour_procedure: PROCEDURE[ANY, TUPLE]) is
			-- add the tour algorithms here.
			do
				all_tours.force (a_tour_procedure)
			end

	call_tours is
			-- call all procedures all 'an_interval' milliseconds.
			do
				from
					all_tours.start
				until
					all_tours.after
				loop
					all_tours.item.call ([Void])
					all_tours.forth
				end
			end		

	call_procedure is
			-- call all procedures all 'an_interval' milliseconds.
			do
				from
					all_procedures.start
				until
					all_procedures.after
				loop
					all_procedures.item.call ([Void])
					all_procedures.forth
				end
			end
		
invariant
	actual_hour >= 0
	actual_minute >= 0
	simulated_minutes >= 1
	callback_delay_regular: callback_delay >= 10 or callback_delay = 0


end
