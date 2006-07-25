indexing
	description: "Lightrail road type."

class
	TRAFFIC_TYPE_LIGHTRAIL

inherit
	TRAFFIC_TYPE_STREET
		redefine make end
	
create
	make

	
feature -- Creation

	make is
			-- Create new street type. 
		do
			name := "lightrail"
		end
		
feature -- Basic


		

end
