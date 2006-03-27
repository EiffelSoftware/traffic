indexing
	description: "Bus type."
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_TYPE_BUS
	
inherit
	TRAFFIC_TYPE
	
create
	make
	
feature -- Creation

	make is
			-- Create new bus type. 
		do
			name := "bus"
		end
	
end