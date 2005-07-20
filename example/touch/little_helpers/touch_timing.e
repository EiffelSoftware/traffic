indexing
	description: "A class providing simple timing commands"
	author: "Roger Kueng"
	date: "2005/07/12"
	revision: "1.0"

class
	TOUCH_TIMING

inherit
	ESDL_TIME_SINGLETON
		export {NONE} all
		end

feature -- Access

feature -- Measurement

feature -- Status report

feature -- Status setting

feature -- Cursor movement

feature -- Element change

feature -- Removal

feature -- Resizing

feature -- Transformation

feature -- Conversion

feature -- Duplication

feature -- Miscellaneous

feature -- Basic operations
	wait (wait_time: INTEGER) is
			--Wait for 'wait_time' milliseconds
		local
			shared_scene: ESDL_SHARED_SCENE
			now_time: INTEGER
		do	
			--Create Shared Scene
			create shared_scene	
			
			--Loop until wait_time is over
			from
				now_time := time.ticks
			until
				now_time + wait_time < time.ticks
			loop
				if shared_scene.running_scene /= Void then		
					shared_scene.running_scene.event_loop.process_events	
				end
			end
			
		end

feature -- Obsolete

feature -- Inapplicable

feature {NONE} -- Implementation

invariant
	invariant_clause: True -- Your invariant here

end -- class TOUCH_TIMING
