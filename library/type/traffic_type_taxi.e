indexing
	description: "Taxi type."
	author: "Sibylle Aregger, ETH Zurich"
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

end -- class TRAFFIC_TYPE_TAXI
