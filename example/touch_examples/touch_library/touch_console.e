indexing
	description: "Console to output information on objects"
	date: "$Date$"
	revision: "$Revision$"

class TOUCH_CONSOLE
	
inherit
	
	EM_TEXTAREA
		rename 
			show as display 
		end

create
	make_empty,
	make_from_text
	
feature -- Text changes

	append_text, put_string (a_text: STRING) is
			-- Append `a_text' to the end.
		require
			a_text_exists: a_text /= Void
		do
			set_text (text + a_text)
		end
		
	prepend_text (a_text: STRING) is
			-- Prepend `a_text' at beginning.
		require
			a_text_exists: a_text /= Void
		do
			set_text (a_text + text)
		end
	
	show (an_object: ANY) is
			-- Display information on `an_object'.
		require
			an_object_exists: an_object /= Void
		do
			set_text (text + "%N" + an_object.out)
		end

end
