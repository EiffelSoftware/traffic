indexing
	description: "[
	
		An EM_PANEL with a name.
		
	]"
	date: "$Date$"
	revision: "$Revision$"

class
	EM_NAMED_PANEL

inherit
	EM_PANEL
	
create
	make_from_name
	
feature {NONE} -- Initialisation

	make_from_name (a_name: like name) is
			-- Initialise panel with `a_name'.
		require
			a_name_not_void: a_name /= Void
		do
			make_void_surface
			internal_name := a_name
		ensure
			name_set: name = a_name
		end
		
feature -- Access

	name: STRING is
			-- Name of panel
		do
			Result := internal_name
		end

feature {NONE} -- Implementation

	internal_name: STRING
			-- Name of the panel		
			
	-- Note: the wrapping of the name as a function is necessary to use the feature 'name' as
	-- an agent, since the ISE compiler doesn't support attributes as agents yet.

end
