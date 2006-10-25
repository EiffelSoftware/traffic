indexing
	description: "Wagon objects can be used to increase the capacity of trams."
	date: "$Date: 6/6/2006$"
	revision: "$Revision$"

class
	TRAFFIC_WAGON

create
	make_default

feature -- Initialization

	make_default is
			-- Set capacity to Default_capacity
		do
			capacity := Default_capacity
		end

feature --Access

	capacity:INTEGER
			-- Load allowed

feature --Constants

	Default_capacity: INTEGER is 100
			-- Default capacity

invariant
	capacity >= 0
end

