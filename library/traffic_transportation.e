indexing
	description: "Objects that can be used to transport cargo or by a passenger to travel."
	date: "$Date: 2006/06/06 12:23:40 $"
	revision: "$Revision$"
deferred class
	TRAFFIC_TRANSPORTATION

inherit
	TRAFFIC_TRAVELER
	
feature --Access
	currentLoad: INTEGER
			--Current load.
			
	capacity:INTEGER is
			-- get the transportation's capacity
		do		
			Result := load_capacity
		end
			
feature{NONE} --Constants			
	load_capacity: INTEGER
			--Load the transportation can carry.

feature -- Basic operations
	load(quantity: INTEGER) is 
			--load cargo or a passenger
		require 
			quantity >= 0 
			capacity >= currentLoad + quantity
    	do 
			currentLoad := currentLoad + quantity
    	ensure 
    		currentLoad = old currentLoad + quantity
    	end
    	
	unload(quantity: INTEGER) is
			--unload cargo or a passenger
		require 
			  quantity >= 0
			  currentLoad >= quantity
		do
			  currentLoad := currentLoad - 1
		ensure
			  currentLoad = old currentLoad - 1
    	end

		
invariant
	load_capacity_non_negative: load_capacity >= 0
	load_smaller_or_equal_than_capacity: currentload <= capacity
end
