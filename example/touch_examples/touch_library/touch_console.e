indexing
	description: "Objects that ..."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TOUCH_CONSOLE
	
inherit
	
	EM_TEXTAREA
		rename show as display end

create

	make_empty,
	make_from_text
	
feature -- Text changes

	append_text, put_string (a_text: STRING) is
			-- 
		do
			set_text (text + a_text)
		end
		
	prepend_text (a_text: STRING) is
			-- 
		do
			set_text (a_text + text)
		end
	
	show (an_object: ANY) is
			-- 
		do
			set_text (text + "%N" + an_object.out)
		end
		
	

end
