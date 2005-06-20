indexing
	description: "Objects that ..."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TOUCH_CONSOLE_TEST

inherit
	TOUCH_EXAMPLE

feature -- Access
--	name: STRING is
--		once
--			Result := Current.generating_type
--		end
		
	description: STRING is
		once
			Result := "This example will emit a short text on the console"
		end
	
--	scene: ESDL_SCENE is
--			-- 
--		do
--			Result := Void
--		end
		
		

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
	run (a_runtime: TOUCH_EXAMPLE_RUNTIME) is
			-- 
		do
			a_runtime.console_out ("Example Running");
			a_runtime.console_out ("Example Done");
		end
		

feature -- Obsolete

feature -- Inapplicable

feature {NONE} -- Implementation

invariant
	invariant_clause: True -- Your invariant here

end -- class TOUCH_CONSOLE_TEST
