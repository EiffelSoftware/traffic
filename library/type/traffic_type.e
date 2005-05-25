indexing
	description: "Types of objects."
	author: "Sibylle Aregger, ETH Zurich"
	date: "$Date$"
	revision: "$Revision$"

deferred class
	TRAFFIC_TYPE
	
inherit
	ANY
		redefine
			out
		end
	
feature -- Access

	name: STRING
			-- String representation.
			
feature -- Output

	out: STRING is
			-- String representation of class.
		do
			Result := name
		end
		
		
invariant
	name_not_empty: not name.is_empty

end -- class TRAFFIC_TYPE
