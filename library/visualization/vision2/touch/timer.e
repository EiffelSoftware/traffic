indexing
	description: "Is used to wait"
	date: "$2008/08/18$"
	revision: "$1.0$"

class
	TIMER


feature -- Access

	Wait_time: INTEGER is 4
			-- Time to wait in feature `wait'

	Short_wait_time: INTEGER is 1
			-- Intervall time for the blinking action

feature -- Basic operations

	wait is
			-- Wait for `Wait_time' seconds.
		local
			env: EV_ENVIRONMENT
			t1, t2: TIME
		do
			create env
			create t1.make_now
			from
				create t2.make_now
			until
				(t2.compact_time - t1.compact_time).abs > Wait_time
			loop
				if not env.application.is_destroyed then
					env.application.process_events
				end
				create t2.make_now
			end
		end

	short_wait is
			-- Wait for `Short_wait_time' seconds.
		local
			env: EV_ENVIRONMENT
			t1, t2: TIME
		do
			create env
			create t1.make_now
			from
				create t2.make_now
			until
				(t2.compact_time - t1.compact_time).abs > short_wait_time
			loop
				if not env.application.is_destroyed then
					env.application.process_events
				end
				create t2.make_now
			end
		end

end
