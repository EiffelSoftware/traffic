indexing
	description: "Describes types of TRAFFIC_ROADs and TRAFFIC_LINEs"
	date: "$Date: 6/6/2006$"
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
			-- String representation

	speed: REAL_64 is 10.0
			-- Default speed 

feature -- Output

	out: STRING is
			-- String representation of class
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

end
