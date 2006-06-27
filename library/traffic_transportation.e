indexing
	description: "Deferred class for objects that can be used to transport cargo or passengers."
	date: "$Date: 2006/06/06 12:23:40 $"
	revision: "$Revision$"
deferred class
	TRAFFIC_TRANSPORTATION

inherit
	TRAFFIC_TRAVELER
	
feature --Access
	current_load: INTEGER 
			-- Current amount of load.

	capacity:INTEGER is
			-- Maximum possible amount of load.
		do		
			Result := unit_capacity
		end
			
feature -- Basic operations
	load(a_quantity: INTEGER) is 
			-- Load cargo or a passenger.
		require 
			a_quantity_non_negative: a_quantity >= 0 
			valid_quantity: capacity >= current_load + a_quantity
    	do 
			current_load := current_load + a_quantity
    	ensure 
    		loaded: current_load = old current_load + a_quantity
    	end
    	
	unload(a_quantity: INTEGER) is
			-- Unload cargo or a passenger
		require 
			  a_quantity_non_negative: a_quantity >= 0
			  valid_quantity: current_load >= a_quantity
		do
			  current_load := current_load - a_quantity
		ensure
			  unloaded: current_load = old current_load - a_quantity
    	end

feature{NONE} -- Implementation			
	unit_capacity: INTEGER
			-- Maximum load this transportation unit can carry.
invariant
	unit_capacity_non_negative: unit_capacity >= 0
	load_smaller_or_equal_than_capacity: current_load <= capacity
end
