indexing
	description: "A class providing simple timing commands"
	date: "2005/07/12"
	revision: "1.0"

class
	TOUCH_TIMING

inherit
	EM_TIME_SINGLETON
		export {NONE} all
		end

	EM_SHARED_SCENE

feature -- Basic operations

	wait (wait_time: INTEGER) is
			--Wait for 'wait_time' milliseconds
		local
			now_time: INTEGER
		do
			--Loop until wait_time is over
			from
				now_time := time.ticks
			until
				now_time + wait_time < time.ticks
			loop
				if running_scene /= Void then
					running_scene.event_loop.process_events
				end
			end
		end

end
