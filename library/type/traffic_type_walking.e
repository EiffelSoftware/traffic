indexing
	description: "Walking type."
	author: "Sibylle Aregger, ETH Zurich"
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_TYPE_WALKING

inherit
	TRAFFIC_TYPE

create
	make
	
feature -- Creation

	make is
			-- Create new walking type.
		do
			name := "walking"
		end

end -- class TRAFFIC_TYPE_WALKING
