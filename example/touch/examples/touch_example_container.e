indexing
	description: "A Container for examples. Examples can subscribe here."
	date: "2005/06/20"
	revision: "1.0"

class
	TOUCH_EXAMPLE_CONTAINER

create
	make
	
feature -- Initialization
	make is
		do
			create examples.make (10)
		end

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
		
	i_th (n: INTEGER): TOUCH_EXAMPLE is
		-- 
		do
			if n < 1 or n > examples.count then
				Result := Void
			else
				Result := examples.i_th (n)
			end
		end
		
	count: INTEGER is
			-- 
		do
			Result := examples.count
		end

feature {NONE} -- Implementation

	examples: ARRAYED_LIST [TOUCH_EXAMPLE]

invariant
	invariant_clause: True -- Your invariant here

end -- class TOUCH_EXAMPLE_CONTAINER
