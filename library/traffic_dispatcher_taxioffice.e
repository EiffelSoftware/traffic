indexing
	description: "Objects that ..."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_DISPATCHER_TAXI_OFFICE
inherit
	TRAFFIC_TAXI_OFFICE

create
		make
		
feature -- Creation procedure

		make(number_of_taxis: INTEGER; a_seed: INTEGER) is
				-- creates a taxi office that clients and taxis communicate with by client call.
				-- add 'number' taxis to the taxi_list of the office.
		local 
			i: INTEGER
		do
				create available_taxi_list.make(1)
				from i:= 1
				until
					i > number_of_taxis 
				loop
					-- add to i to a_seed in each loop to ensure that each taxi will use 
					-- another seed for the random generation
					available_taxi_list.extend( create {TRAFFIC_DISPATCHER_TAXI}.make_random(Current, a_seed+i, number_of_taxis))
					i := i+1
				end		
		end					
		
feature {TRAFFIC_TAXI} -- communication from the taxis to their office
		
		reject(from_location: EM_VECTOR_2D; to_location: EM_VECTOR_2D) is
				-- dispatcher taxi calls the request again. 
			do	
				call(from_location, to_location)
			end

end
