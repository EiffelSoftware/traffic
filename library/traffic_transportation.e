indexing
	description: "Objects that can be used to transport cargo or passengers."
	date: "$Date: 2006/06/06 12:23:40 $"
	revision: "$Revision$"
deferred class
	TRAFFIC_TRANSPORTATION

inherit
	TRAFFIC_TRAVELER
	
feature --Access
	current_load: INTEGER 
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
			capacity >= current_load + quantity
    	do 
			current_load := current_load + quantity
    	ensure 
    		current_load = old current_load + quantity
    	end
    	
	unload(quantity: INTEGER) is
			--unload cargo or a passenger
		require 
			  quantity >= 0
			  current_load >= quantity
		do
			  current_load := current_load - quantity
		ensure
			  current_load = old current_load - quantity
    	end

invariant
	load_capacity_non_negative: load_capacity >= 0
	load_smaller_or_equal_than_capacity: current_load <= capacity
end
