indexing
	description: "Street type."
	author: "Sibylle Aregger, ETH Zurich"
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_TYPE_STREET

inherit
	TRAFFIC_TYPE
	
create
	make
	
feature -- Creation

	make is
			-- Create new street type. 
		do
			name := "street"
		end

end -- class TRAFFIC_TYPE_STREET
