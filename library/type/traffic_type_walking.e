indexing
	description: "Walking type."
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_TYPE_WALKING

inherit
	TRAFFIC_TYPE_ROAD

create
	make
	
feature -- Creation

	make is
			-- Create new walking type.
		do
			name := "walking"
		end

end
