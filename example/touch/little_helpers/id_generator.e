indexing
	description: "Objects that ..."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ID_GENERATOR

feature -- Access

        new_id: INTEGER is
                do
                		internal_counter := internal_counter + 1
                        Result := internal_counter
                end

feature {NONE} -- Implementation

        internal_counter: INTEGER

end
