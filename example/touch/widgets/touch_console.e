indexing
	description: "The Interface for a Console"
	author: "Roger Kueng"
	date: "$Date$"
	revision: "1.0"

deferred class
	TOUCH_CONSOLE

feature -- Basic operations
	put_line (a_text: STRING) is
			-- Output the text as a new line
		require 
			a_text_not_void: a_text /= Void			
		deferred
		end
		
	put_text (a_text: STRING) is
			-- Multi-Line Output
		require 
			a_text_not_void: a_text /= Void			
		deferred
		end
		
	show (an_object: ANY) is
			-- 
		require
			an_object_not_void: an_object /= Void
		deferred
		end
		
invariant
	invariant_clause: True -- Your invariant here

end -- class TOUCH_CONSOLE
