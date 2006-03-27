indexing
	description: "Taxi type."
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_TYPE_TAXI

inherit
	TRAFFIC_TYPE

create
	make
	
feature -- Creation

	make is
			-- Create new taxi type.
		do
			name := "taxi"
		end

end
