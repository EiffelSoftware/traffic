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
	
feature -- Basic

	is_allowed_to_use_road(a_traffic_moving: TRAFFIC_MOVING) is
			-- do
			do
				
			end
			
end
