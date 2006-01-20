indexing
	description: "This object represent the time in the city model"
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_TIME

inherit	
	EM_TIME_SINGLETON
	
create
	make_day
	
feature -- Creation

	make_day(simulated_day_minutes: INTEGER) is
			-- the day lasts for 'simulated_day_minutes'
	require
		simulated_day_minutes >= 1
	do		
		call_back_delay := ((simulated_day_minutes/minutes_per_day)*seconds_per_minute*milliseconds_per_second).rounded
		time.set_are_timed_procedures_paused (True)
	end

feature{NONE} -- Time facts
	
	Hours_per_day: INTEGER is 24

	Minutes_per_hour: INTEGER is 60

	minutes_per_day: INTEGER is
		do
			Result := Hours_per_day * Minutes_per_hour
		end
	Seconds_per_minute: INTEGER is 60
	
	Milliseconds_per_second: INTEGER is 1000
	
	call_back_delay: INTEGER

feature  --Time Attributes
	
	actual_hour: INTEGER
		-- actual hour, returns the simulated hour at this day
	
	actual_minute: INTEGER
		-- actual minute, returns the simulated minute in this hour
	
	actual_second: INTEGER
		-- simluated second, not useful yet 
	
feature -- Handling

	start_time is	
			-- start the time
			require
				call_back_delay > 0
				actual_second >= 0
				actual_minute >= 0
				actual hour >= 0
				not is_time_running
			do
				if actual_minute < 60 then
						actual minute := actual_minute+1
					else
						if actual_hour < 24 then
							actual_hour := actual_hour+1
						else
							actual_hour := 0
						end
						actual_minute := 0
					end
--				from
--					is_time_running := True
--				until
--					is_time_running = False
--				loop
--					-- not yet used
----					if second < 60 then
----						second := second + 1
----					else
----						second := 0
----					end
--					if actual_minute < 60 then
--						actual minute := actual_minute+1
--					else
--						if actual_hour < 24 then
--							actual_hour := actual_hour+1
--						else
--							actual_hour := 0
--						end
--						actual_minute := 0
--					end
--					
--				end
			end
		
	stop_time is
			-- stop the time
			require
				actual_hour > 0 
				actual_minute > 0
				is_time_running
			do
				is_time_running := False
			ensure
				is_time_running = False
			end
		
	reset_time is
			-- reset the time
			do
				if is_time_running then
					stop_time	
				end
				actual_hour := 0
				actual_minute := 0
				actual_second := 0
			ensure
				actual_hour = 0
				actual_minute = 0
				actual_second = 0
				not is_time_running 
			end
		
		
	
	is_time_running: BOOLEAN
			-- is time startet
		

feature -- Procedures

add_callback_funtion( a_procedure: PROCEDURE[ANY,TUPLE]) is
		-- 
	do
		time.add_timed_procedure (a_procedure, call_back_delay)
	end


end
