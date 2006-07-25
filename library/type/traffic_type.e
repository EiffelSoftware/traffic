indexing
	description: "Describes types of TRAFFIC_ROADs and TRAFFIC_LINEs"

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

feature -- Basic
		
		is_allowed_type(a_moving: TRAFFIC_MOVING): BOOLEAN is
			-- Is 'a_moving' allowed to go on a route?
			deferred
			end
			
invariant
	name_not_empty: not name.is_empty

end
