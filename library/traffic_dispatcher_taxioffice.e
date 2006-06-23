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
		make is
				-- creates a taxi office that clients and taxis communicate with by client call.
		do
				create available_taxi_list.make(1)
					
		end
						
		
feature {TRAFFIC_TAXI} -- communication from the taxis to their office
		
		reject(taxi: TRAFFIC_DISPATCHER_TAXI; from_location: EM_VECTOR_2D; to_location: EM_VECTOR_2D) is
				-- for taxis to reject a request because they got busy. 
			do	
				delist(taxi)
				call(from_location, to_location)
			end

end
