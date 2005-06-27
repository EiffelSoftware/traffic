indexing
	description: "A Container for examples. Examples can subscribe here."
	author: "Roger Kueng"
	date: "2005/06/20"
	revision: "alpha"

class
	TOUCH_EXAMPLE_CONTAINER


feature -- Creation
	make is
		do
			create examples.make (10)
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
	subscribe (example: TOUCH_EXAMPLE) is
			-- 
		require
			example_not_void: example /= Void
			--example_not_yet_registered: not examples.has (example)
		do
			examples.extend (example)
		ensure
			example_added: examples.has (example)
		end
		
feature -- Obsolete

feature -- Inapplicable

feature {NONE} -- Implementation

	examples: ARRAYED_LIST [TOUCH_EXAMPLE]

invariant
	invariant_clause: True -- Your invariant here

end -- class TOUCH_EXAMPLE_CONTAINER