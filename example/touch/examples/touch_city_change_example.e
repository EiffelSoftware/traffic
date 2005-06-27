indexing
	description: "Simple Traffic-Map Example"
	author: "Roger Kueng"
	date: "2005/06/20"
	revision: "alpha"

class
	TOUCH_CITY_CHANGE_EXAMPLE

inherit
	TOUCH_EXAMPLE
		redefine
			name
		end

feature -- Access

	name: STRING is
		once
			Result := Current.generating_type
		end
		
	description: STRING is
		once
			Result := "Run it and watch the result"
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
	run (a_runtime: TOUCH_EXAMPLE_RUNTIME) is
			-- 
		local 
			new_place: TRAFFIC_PLACE
		do
			a_runtime.console_out ("Example Start");
			
			create new_place.make_with_position ("Treasure", 900, 800)

			a_runtime.map.add_place (new_place)
			
			a_runtime.console_out ("Example Done")
		end
		

feature -- Obsolete

feature -- Inapplicable

feature {NONE} -- Implementation

invariant
	invariant_clause: True -- Your invariant here

end -- class TOUCH_CITY_CHANGE_EXAMPLE
