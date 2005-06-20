indexing
	description: "Objects that ..."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

deferred class
	TOUCH_EXAMPLE_RUNTIME


feature -- Creation
	make_with_map_and_map_widget (a_map: TRAFFIC_MAP; a_map_widget: TRAFFIC_MAP_WIDGET) is
			-- 
		require
			a_map_not_void: a_map /= Void
			a_map_widget_not_void: a_map_widget /= Void
		do
			map := a_map
			map_widget := a_map_widget
		end
		
feature -- Access
	map: TRAFFIC_MAP
	
	map_widget: TRAFFIC_MAP_WIDGET

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
		deferred
		end

feature -- Obsolete

feature -- Inapplicable

feature {NONE} -- Implementation

invariant
	invariant_clause: True -- Your invariant here

end -- class TOUCH_EXAMPLE_RUNNER
