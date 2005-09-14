indexing
	description: "The Access-Interface for a running example"
	date: "2005/08/31"
	revision: "1.0"

deferred class
	TOUCH_EXAMPLE_RUNTIME

feature -- Access
	map: TRAFFIC_MAP is
			-- 
		deferred
		end
	
	map_widget: TRAFFIC_MAP_WIDGET is
			-- 
		deferred
		end
	
	console: TOUCH_CONSOLE is
			-- 
		deferred
		end

feature -- Basic operations
	console_out (a_text: STRING) is
			-- 
		deferred
		end

end -- class TOUCH_EXAMPLE_RUNTIME
