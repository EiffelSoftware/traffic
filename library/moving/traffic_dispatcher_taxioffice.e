indexing
	description: "Taxi office objects that taxis communicate with by client relation."
	date: "$Date$"
	revision: "$Revision$"

class TRAFFIC_DISPATCHER_TAXI_OFFICE

inherit
	TRAFFIC_TAXI_OFFICE

create
	default_create, make_with_color

feature -- Basic operations

	add_taxis (a_number: INTEGER) is
			-- Taxi office that clients and taxis communicate with by client call.
			-- Add 'number' taxis to the taxi_list of the office.
		local
			i: INTEGER
		do
			from i:= 1
			until
				i > a_number
			loop
				-- Add to i to a_seed in each loop to ensure that each taxi will use
				-- another seed for the random generation.
				available_taxis.force_last( create {TRAFFIC_DISPATCHER_TAXI}.make_random(Current, a_number))
				taxis.force_last (available_taxis.last)
				i := i+1
			end
		end

feature {TRAFFIC_TAXI} -- Communication from the taxis to their office

	recall(from_location: EM_VECTOR_2D; to_location: EM_VECTOR_2D) is
			-- Recall the request again because a taxi rejected to take it.
		do
			call(from_location, to_location)
		end

end
