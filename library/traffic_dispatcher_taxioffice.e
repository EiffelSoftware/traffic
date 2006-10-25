indexing
	description: "Taxi office objects that taxis communicate with by client relation."
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_DISPATCHER_TAXI_OFFICE inherit
		TRAFFIC_TAXI_OFFICE
create
		make

feature -- Initialization

	make (number_of_taxis: INTEGER; a_seed: INTEGER) is
			-- Taxi office that clients and taxis communicate with by client call.
			-- Add 'number' taxis to the taxi_list of the office.
			-- Use 'a_seed' to create random taxis.
		require
			number_of_taxis_valid: number_of_taxis > 0
		local
			i: INTEGER
		do
			create available_taxi_list.make(1)
			from i:= 1
			until
				i > number_of_taxis
			loop
				-- Add to i to a_seed in each loop to ensure that each taxi will use
				-- another seed for the random generation.
				available_taxi_list.extend( create {TRAFFIC_DISPATCHER_TAXI}.make_random(Current, a_seed+i, number_of_taxis))
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
