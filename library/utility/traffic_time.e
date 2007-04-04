indexing
	description: "This object represent the time in the city model"
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_TIME

inherit
	EM_TIME_SINGLETON
		redefine
			out
		end

	TRAFFIC_3D_CONSTANTS
		export {NONE} all
		undefine
			out
		end

	EM_SHARED_SCENE
		undefine
			out
		end

create
	make_day, make

feature -- Initialization

	make is
			-- Set minutes for a simulated day to the default values.
		do
			make_day (default_simulated_day_minutes)
		ensure
			simulated_minutes_set: simulated_minutes = default_simulated_day_minutes
		end


	make_day (simulated_day_minutes: INTEGER) is
			-- Initialize the simulated day to last for 'simulated_day_minutes'.
		require
			simulated_day_minutes >= 1
		do
			create actual_time.make (0, 0, 0)
			simulated_minutes := simulated_day_minutes
			change_simulated_time (simulated_minutes)
			create all_procedures.make
			create all_tours.make

			actual_day := 0

			update_agent := agent update_time

		ensure
			simulated_minutes = simulated_day_minutes
		end

feature  -- Access

	simulated_minutes: INTEGER
		-- Minutes in realtime

	actual_time: TIME

	actual_day: INTEGER
		-- Actual day



feature -- Status report

	is_time_running: BOOLEAN
			-- Is the time running?

feature -- Basic operations

	start_time is
			-- Start to count the time at (0:0:0).
		require
			not is_time_running
		do
			is_time_running := True
			running_scene.event_loop.update_event.subscribe (update_agent)
			real_ms_start := time.ticks
			sim_sec_start := 0
		ensure
			is_time_running
		end

	pause_time is
			-- Pause the time count.
		require
			is_time_running
		do
			is_time_running := False
			running_scene.event_loop.update_event.unsubscribe (update_agent)
			sim_sec_start := (1440/simulated_minutes*(time.ticks - real_ms_start)/1000.0 + sim_sec_start).floor
		ensure
			not is_time_running
		end

	resume_time is
			-- Resume the paused time.
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
			-- Reset the time to (0:0:0).
		do
			actual_time.set_hour (0)
			actual_time.set_minute (0)
			actual_time.set_second (0)
			is_time_running := False
			real_ms_start := 0
			sim_sec_start := 0
			running_scene.event_loop.update_event.unsubscribe (update_agent)
		ensure
			is_time_running = False
			actual_time.hour = 0
			actual_time.minute = 0
			actual_time.second = 0
		end

	set_time (a_hour, a_minute, a_second: INTEGER) is
			-- Sets the time to (`a_hour':`a_minute':`a_second').
		require
			valid_time: a_hour >=0 and a_minute >=0 and a_second >=0
		do
			actual_time.set_hour (a_hour)
			actual_time.set_minute (a_minute)
			actual_time.set_second (a_second)
			sim_sec_start := actual_time.hour*3600 + actual_time.minute*60 + actual_time.second
		end

	change_simulated_time (simulated_day_minutes: INTEGER) is
			-- the day lasts for 'simulated_day_minutes'.
		require
			simulated_day_minutes >= 1
		do
			simulated_minutes := simulated_day_minutes
			if is_time_running then
				pause_time
				resume_time
			end
		ensure
			simulated_minutes = simulated_day_minutes
		end

feature -- Constants

	Default_simulated_day_minutes: INTEGER is 1440
		-- Default number of minutes that a day lasts

feature -- Output

	out: STRING is
			--
		do
			Result := actual_time.hour.out + ":" + actual_time.minute.out + ":" + actual_time.second.out
		end


feature{NONE} -- Implementation		

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

	update_time is
			-- Update the time count
		require
			actual_time.second >= 0
			actual_time.minute >= 0
			actual_time.hour >= 0
		local
			real_mili_secs: INTEGER
			sim_secs: DOUBLE
			old_hour: INTEGER
		do
			if is_time_running then
				real_mili_secs := time.ticks - real_ms_start
				sim_secs := 1440/simulated_minutes*real_mili_secs/1000.0 + sim_sec_start
				actual_time.set_second (sim_secs.rounded\\60)
				actual_time.set_minute ((sim_secs/60).floor\\60)
				old_hour := actual_time.hour
				actual_time.set_hour ((sim_secs/3600).floor\\24)
				if actual_time.hour < old_hour then
					actual_day := actual_day + 1
				end
				call_tours
				call_procedure
			end
		end

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
	actual_time.hour >= 0
	actual_time.minute >= 0
	simulated_minutes >= 1


end
