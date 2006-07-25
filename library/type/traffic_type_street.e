indexing
	description: "Street type."
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_TYPE_STREET

inherit
	TRAFFIC_TYPE_ROAD
	
create
	make
	
feature -- Creation

	make is
			-- Create new street type. 
		do
			name := "street"
		end
			
end
