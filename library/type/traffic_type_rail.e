indexing
	description: "Rail type."
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_TYPE_RAIL

inherit
	TRAFFIC_TYPE
	
create
	make
	
feature -- Creation

	make is
			-- Create new rail type. 
		do
			name := "rail"
		end
		
end
