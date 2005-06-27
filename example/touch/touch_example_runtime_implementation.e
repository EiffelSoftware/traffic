indexing
	description: "Objects that ..."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TOUCH_EXAMPLE_RUNTIME_IMPLEMENTATION

inherit
	TOUCH_EXAMPLE_RUNTIME

create
	make_with_map_and_map_widget_and_textlist

feature --Creation
	make_with_map_and_map_widget_and_textlist (	a_map: TRAFFIC_MAP;
												a_map_widget: TRAFFIC_MAP_WIDGET;
												a_console: TOUCH_TEXTLIST) is
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
			textlist_set: intern_console = a_console
			
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
	console_out (a_text: STRING) is
			-- 
		do
			intern_console.put_line (a_text)
		end
		

feature -- Obsolete

feature -- Inapplicable

feature {NONE} -- Implementation
	intern_map: TRAFFIC_MAP
	intern_map_widget: TRAFFIC_MAP_WIDGET
	intern_console: TOUCH_TEXTLIST
invariant
	invariant_clause: True -- Your invariant here

end -- class TOUCH_EXAMPLE_RUNTIME_IMPLEMENTATION
