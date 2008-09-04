indexing
	description: "Shared object to access the theme used."
	date: "$Date$"
	revision: "$Revision$"

class SHARED_THEME
	
feature -- Access

	theme: THEME is
			-- Current theme
		do
			create {BEAMER_THEME} Result 
		end	
		
end
