indexing
	description: "Objects that ..."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TOUCH_CHAPTER_CONTAINER

create
	make
feature -- Initialization

	make is
			-- 
		do
			create chapters.make (10)
		end
		

feature -- Basic operations

	set_count (n: INTEGER) is
			-- 
		require
			n_not_negative: n >= 0
		do
			if chapters.count < n then
				from
				until
					chapters.count = n
				loop
					chapters.force(create {TOUCH_EXAMPLE_CONTAINER}.make);
				end
			else
				from
				until
					chapters.count = n
				loop
					chapters.remove_right
				end
			end
		end
			
feature -- Queries	

	count : INTEGER is
			-- 
		do
			Result := chapters.count
		end
		
	i_th (n: INTEGER): TOUCH_EXAMPLE_CONTAINER is
		--
		do
			if n <= 0 or n > chapters.count then
				Result := Void
			else
				Result := chapters.i_th (n)
			end
		end

feature -- Obsolete

feature -- Inapplicable

feature {NONE} -- Implementation

	chapters: ARRAYED_LIST [TOUCH_EXAMPLE_CONTAINER]
	
invariant
	invariant_clause: True -- Your invariant here

end -- class TOUCH_CHAPTER_CONTAINER
