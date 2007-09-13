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

	add_taxi (a_taxi: TRAFFIC_DISPATCHER_TAXI) is
			-- Add `a_taxi' to the taxi_list of the office.
		do
			available_taxis.force_last(a_taxi)
			taxis.force_last (available_taxis.last)
		end

	remove_taxi (a_taxi: TRAFFIC_TAXI) is
			-- Remove `a_taxi' from current taxi office.
		do
			available_taxis.delete (a_taxi)
			taxis.delete (a_taxi)
			if a_taxi.is_in_map then
				a_taxi.remove_from_map
			end
		end

feature {TRAFFIC_TAXI} -- Communication from the taxis to their office

	recall(from_location: TRAFFIC_COORDINATE; to_location: TRAFFIC_COORDINATE) is
			-- Recall the request again because a taxi rejected to take it.
		do
			call(from_location, to_location)
		end

end
