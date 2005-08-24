indexing
	description: "The Access-Interface for a running example"
	author: "Roger Kueng"
	date: "2005/06/20"
	revision: "alpha"

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
