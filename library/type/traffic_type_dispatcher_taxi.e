indexing
	description: "Taxi type."
	date: "$Date: 2006-03-27 20:01:11 +0200 (Mon, 27 Mar 2006) $"
	revision: "$Revision: 602 $"

class
	TRAFFIC_TYPE_DISPATCHER_TAXI

inherit
	TRAFFIC_TYPE

create
	make

feature -- Creation

	make is
			-- Create new taxi type.
		do
			name := "dispatcher taxi"
		end
end
