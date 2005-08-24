indexing
	description: "[
				A straightforward implementation of the TOUCH_EXAMPLE_RUNTIME
				]"
	author: "Roger Kueng"
	date: "2005/07/12"
	revision: "1.0"
class
	TOUCH_EXAMPLE_RUNTIME_IMPLEMENTATION

inherit
	TOUCH_EXAMPLE_RUNTIME

create
	make_with_map_and_map_widget_and_console

feature -- Initialization

	make_with_map_and_map_widget_and_console (	a_map: TRAFFIC_MAP;
												a_map_widget: TRAFFIC_MAP_WIDGET;
												a_console: TOUCH_CONSOLE) is
														-- 
		require
			a_map_not_void: a_map /= Void
			a_map_widget_not_void: a_map_widget /= Void
			a_console_not_void: a_console /= Void
		do
			intern_map := a_map
			intern_map_widget := a_map_widget
			intern_console := a_console
		ensure
			map_set: intern_map = a_map
			map_widget_set: intern_map_widget = a_map_widget
			console_set: intern_console = a_console
			
		end
													
feature -- Access

	map: TRAFFIC_MAP is
			-- 
		do
			Result := intern_map
		end
		
	map_widget: TRAFFIC_MAP_WIDGET is
			-- 
		do
			Result := intern_map_widget
		end
	
	console: TOUCH_CONSOLE is
			-- 
		do
			Result := intern_console
		end
		
feature -- Basic operations

	console_out (a_text: STRING) is
			-- 
		do
			intern_console.put_line (a_text)
		end


feature {NONE} -- Implementation

	intern_map: TRAFFIC_MAP
	
	intern_map_widget: TRAFFIC_MAP_WIDGET
	
	intern_console: TOUCH_CONSOLE
	
invariant
	map_set: intern_map /= Void
	map_widget_set: intern_map_widget /= Void
	textlist_set: intern_console /= Void
end -- class TOUCH_EXAMPLE_RUNTIME_IMPLEMENTATION
