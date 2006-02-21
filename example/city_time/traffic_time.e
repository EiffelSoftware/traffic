indexing
	description: "This object represent the time in the city model"
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_TIME

inherit	
	EM_TIME_SINGLETON
	
	TRAFFIC_3D_CONSTANTS
		export {NONE} all end
	
create
	make_day, make
	
feature -- Creation

	make is
			-- create a new object without setting the time
		do
			callback_delay := 10
			create all_procedures.make
			
			actual_hour := 0
			actual_minute := 0
			actual_second := 0
			
			add_callback_procedure (agent time_count)		
		end
		

	make_day(simulated_day_minutes: INTEGER) is
			-- the day lasts for 'simulated_day_minutes'
	require
		simulated_day_minutes >= 5
	do		
		simulated_minutes := simulated_day_minutes
		change_simulated_time (simulated_minutes)
		create all_procedures.make

		
		actual_hour := 0
		actual_minute := 0
		actual_second := 0
		
		add_callback_procedure (agent time_count)
		
		actual_hour := 0
		actual_minute := 0
		actual_second := 0
		
		ensure
			simulated_minutes = simulated_day_minutes
	end

feature{NONE} -- Time facts
	
	callback_delay: INTEGER
		

feature  --Time Attributes
	
	simulated_minutes: INTEGER
	
	actual_hour: INTEGER
		-- actual hour, returns the simulated hour at this day
	
	actual_minute: INTEGER
		-- actual minute, returns the simulated minute in this hour
	
	actual_second: INTEGER
		-- simluated second, not useful yet 
		
	change_simulated_time(simulated_day_minutes: INTEGER) is
			-- the day lasts for 'simulated_day_minutes'
		require
			simulated_day_minutes >= 5
		local
			temp_delay : INTEGER
		do		
			simulated_minutes := simulated_day_minutes
			temp_delay := ((simulated_minutes/minutes_per_day)*seconds_per_minute*milliseconds_per_second).rounded
			io.putint (temp_delay)
			if temp_delay < 10 then
				callback_delay := 10
			else	
				callback_delay := temp_delay
			end
			
		ensure
			simulated_minutes = simulated_day_minutes
		end
	
	
feature -- Handling

	time_count is	
			-- start the time
			require
				actual_second >= 0
				actual_minute >= 0
				actual_hour >= 0
			do
--				if actual_second < seconds_per_minute - 1 then
--					actual_second := actual_second + 5
--				else
					if actual_minute < minutes_per_hour - 1 then
						actual_minute := actual_minute + 1
					else
						if actual_hour < hours_per_day - 1 then
							actual_hour := actual_hour + 1
						else
							actual_hour := 0
						end
						actual_minute := 0
					end
--					actual_second := 0
--				end
			end
		
		
	
	is_time_running: BOOLEAN		
			-- is time startet
		
feature -- time
	start_time is
			-- start to count the time
			require
				not is_time_running
			do
				is_time_running := True
				time.add_timed_callback (callback_delay, agent call_procedure)
--				time.add_timed_procedure (agent time_count, callback_delay)
			ensure
				is_time_running
			end
			
	pause_time is
			-- pause the time count
			require
				is_time_running
			do
--				time.quit
				is_time_running := False
			ensure
				not is_time_running
			end
		
	resume_time is
			-- resume the paused time
			require
				not is_time_running
			do
				start_time
			ensure
				is_time_running
			end
		
feature -- Procedures

	all_procedures: LINKED_LIST[PROCEDURE[ANY, TUPLE]]
	
	add_callback_procedure(a_procedure: PROCEDURE[ANY, TUPLE]) is
			-- add a procedure
		do
			all_procedures.force(a_procedure)
		end

	call_procedure(an_interval: INTEGER): INTEGER is
			-- call all procedures all 'an_interval' milliseconds
			do
				from
					all_procedures.start
				until
					all_procedures.after
				loop
					all_procedures.item.call ([Void])
					all_procedures.forth
				end
				if is_time_running then
					Result := an_interval	
				else
					Result := 0
				end
				
			end
		
invariant
	actual_hour >= 0
	actual_minute >= 0
	simulated_minutes >= 1
	callback_delay_regular: callback_delay >= 10 or callback_delay = 0


end
