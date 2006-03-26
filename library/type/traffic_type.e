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
			out, 
			is_equal
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
		
feature -- Comparison
		
		is_equal (other: like Current): BOOLEAN is
				-- Is `other' equal to `Current'?
			do
				Result := name.is_equal (other.name)
			end
			
invariant
	name_not_empty: not name.is_empty

end -- class TRAFFIC_TYPE
