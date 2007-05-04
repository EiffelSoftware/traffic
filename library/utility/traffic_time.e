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
	make_with_speedup

feature -- Initialization

	make_with_speedup (a_speedup: INTEGER) is
			-- Set `speedup' to `a_speedup'.
		require
			a_speedup_valid: a_speedup >= 1
		do
			create actual_time.make (0, 0, 0)
			speedup := a_speedup
			create all_procedures.make
			create all_tours.make

			actual_day := 0

			update_agent := agent update_time

		ensure
			speedup_set: speedup = a_speedup
		end

feature  -- Access

	actual_time: TIME
		-- Simulated time

	actual_day: INTEGER
		-- Simulated days since time counting started

	speedup: INTEGER
		-- Speedup to let the time run faster than the original time

feature -- Status report

	is_time_running: BOOLEAN
			-- Is the time running?

feature -- Basic operations

	set_speedup (a_speedup: INTEGER) is
			-- Set `speedup' to `a_speedup'.
		require
			a_speedup_valid: a_speedup >= 1
		do
			if is_time_running then
				pause
				speedup := a_speedup
				resume
			else
				speedup := a_speedup
			end
		ensure
			speedup_set: speedup = a_speedup
		end

	start is
			-- Start to count the time at (0:0:0).
		require
			not is_time_running
		do
			is_time_running := True
			running_scene.event_loop.update_event.subscribe (update_agent)
			real_ms_start := time.ticks
			simulated_ms_start := 0
		ensure
			is_time_running
		end

	pause is
			-- Pause the time count.
		require
			is_time_running
		do
			is_time_running := False
			running_scene.event_loop.update_event.unsubscribe (update_agent)
			simulated_ms_start := actual_time.seconds*1000
		ensure
			not is_time_running
		end

	resume is
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

	reset is
			-- Reset the time to (0:0:0).
		do
			actual_time.set_hour (0)
			actual_time.set_minute (0)
			actual_time.set_second (0)
			is_time_running := False
			real_ms_start := 0
			simulated_ms_start := 0
			running_scene.event_loop.update_event.unsubscribe (update_agent)
		ensure
			is_time_running = False
			actual_time.hour = 0
			actual_time.minute = 0
			actual_time.second = 0
		end

	set (a_hour, a_minute, a_second: INTEGER) is
			-- Sets the time to (`a_hour':`a_minute':`a_second').
		require
			valid_time: a_hour >=0 and a_minute >=0 and a_second >=0
		do
			actual_time.set_hour (a_hour)
			actual_time.set_minute (a_minute)
			actual_time.set_second (a_second)
			simulated_ms_start := actual_time.seconds*1000
		end

feature -- Constants

	Default_scale_factor: DOUBLE is 5.52

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

--	sim_sec_start: INTEGER
		-- Value of simulated seconds that the `real_ms_start' denotes (used for pausing)

	simulated_ms_start: INTEGER
		-- Start counting with this value

	update_agent: PROCEDURE [ANY, TUPLE]
		-- Agent used for updating current simulated time

	update_time is
			-- Update the time count
		require
			actual_time.second >= 0
			actual_time.minute >= 0
			actual_time.hour >= 0
		local
			real_ms: INTEGER
			sim_ms: INTEGER
			old_hour: INTEGER
		do
			if is_time_running then
				real_ms := time.ticks - real_ms_start
				sim_ms := speedup*real_ms + simulated_ms_start
				if sim_ms//1000 >= actual_time.seconds_in_day then
					real_ms_start := time.ticks
					sim_ms := (sim_ms//1000)\\actual_time.seconds_in_day
					simulated_ms_start := sim_ms
					actual_day := actual_day + 1
					actual_time.make_by_seconds (sim_ms)
				else
					actual_time.make_by_seconds (sim_ms//1000)
					actual_time.set_fractionals ((sim_ms\\1000)/1000)
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
--	simulated_minutes >= 1


end
