indexing
	description: "Objects that ..."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_VISION2_TIME

inherit

	TRAFFIC_TIME

create
	make_with_speedup

feature -- Basic operations

	start is
			-- Start to count the time at (0:0:0).
		local
			t: TIME
		do
--			create timeout.make_with_interval (100)
			is_time_running := True
			application.add_idle_action (update_agent)
--			timeout.actions.extend (agent update_time)
			create t.make_now
			real_ms_start := t.seconds*1000 + t.milli_second
			simulated_ms_start := 0
		end

	pause is
			-- Pause the time count.
		do
			is_time_running := False
--			timeout.destroy
			application.remove_idle_action (update_agent)
--			running_scene.event_loop.update_event.unsubscribe (update_agent)
			simulated_ms_start := actual_time.seconds*1000
		end

	resume is
			-- Resume the paused time.
		local
			t: TIME
		do
			is_time_running := True
			application.add_idle_action (update_agent)
--			create timeout.make_with_interval (100)
--			timeout.actions.extend (agent update_time)
			create t.make_now
			real_ms_start := t.seconds*1000 + t.milli_second
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
--			create timeout.make_with_interval (10)
		end

feature{NONE} -- Implementation		

	update_time is
			-- Update the time count
		local
			real_ms: INTEGER
			sim_ms: INTEGER
			old_hour: INTEGER
			t: TIME
		do
			if is_time_running then
				create t.make_now
				real_ms := t.seconds*1000 + t.milli_second - real_ms_start
				sim_ms := speedup*real_ms + simulated_ms_start
				if sim_ms//1000 >= actual_time.seconds_in_day then
				real_ms_start := t.seconds*1000 + t.milli_second
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

	application: EV_APPLICATION is
			-- Application
		once
			Result := (create {EV_ENVIRONMENT}).application
		end

	timeout: EV_TIMEOUT

-- TODO use EV_TIMEOUT!!!
end
