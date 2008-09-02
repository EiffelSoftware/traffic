indexing
	description: "Deferred class for objects that can be used to transport cargo or passengers"
	date: "$Date: 2006/06/06 12:23:40 $"
	revision: "$Revision$"
deferred class
	TRAFFIC_VEHICLE

inherit
	TRAFFIC_MOVING

feature --Access

	count: INTEGER
			-- Current amount of load

	capacity:INTEGER is
			-- Maximum possible load
		do
			Result := unit_capacity
		end

feature -- Basic operations

	load(a_quantity: INTEGER) is
			-- Load cargo or a passenger.
		require
			a_quantity_non_negative: a_quantity >= 0
			valid_quantity: capacity >= count + a_quantity
    	do
			count := count + a_quantity
    	ensure
    		loaded: count = old count + a_quantity
    	end

	unload(a_quantity: INTEGER) is
			-- Unload cargo or a passenger.
		require
			  a_quantity_non_negative: a_quantity >= 0
			  valid_quantity: count >= a_quantity
		do
			  count := count - a_quantity
		ensure
			  unloaded: count = old count - a_quantity
    	end

feature{NONE} -- Implementation			

	unit_capacity: INTEGER
			-- Maximum load this vehicle unit can carry

invariant
	not_too_small: count >= 0
	not_too_large: count <= capacity
	unit_capacity_non_negative: unit_capacity >= 0
end
