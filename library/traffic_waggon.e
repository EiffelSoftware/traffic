indexing
	description: "waggon"
	date: "$Date: 6/6/2006$"
	revision: "$Revision$"

class
	TRAFFIC_WAGGON
create
	make
	
feature --Creation
	make is
			-- creation procedure
			do
				capacity := 50
			end
	
feature --Access
	capacity:INTEGER	

invariant
	capacity >= 0
	capacity <= 50
end
