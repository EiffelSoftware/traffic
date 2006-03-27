indexing
	description: "Tram type."
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_TYPE_TRAM

inherit
	TRAFFIC_TYPE

create
	make
	
feature -- Creation

	make is
			-- Create new tram type.
		do
			name := "tram"
		end

end
