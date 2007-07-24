indexing
	description: "Taxi office objects that clients and passengers communicate with using events."
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_EVENT_TAXI_OFFICE

inherit

	TRAFFIC_TAXI_OFFICE
		rename
			delist as delist_taxi,
			enlist as enlist_taxi
		redefine
			default_create
		end

create
	default_create, make_with_color

feature {NONE} -- Initialization

	default_create is
			-- Initialize event queues.
		do
			Precursor
			create request
			create taxi_available
			create taxi_busy
			create reject_request
			-- Subscribe for Events.
			request.subscribe(agent call(?, ?))
			taxi_available.subscribe(agent enlist(?))
			taxi_busy.subscribe(agent delist(?))
			reject_request.subscribe(agent recall(?,?))
		end

feature -- Basic operations		

	add_taxi (a_taxi: TRAFFIC_EVENT_TAXI) is
			-- Add `a_taxi' to the taxi_list of the office.
		do
			available_taxis.force_last(a_taxi)
			taxis.force_last (available_taxis.last)
			available_taxis.start
		end


feature -- Events

	request: EM_EVENT_CHANNEL[TUPLE[TRAFFIC_COORDINATE, TRAFFIC_COORDINATE]]
			-- Event when a taxi is needed
			-- Containing the from location and the intended destination as em_vector_2d

	taxi_available: EM_EVENT_CHANNEL[TUPLE[TRAFFIC_EVENT_TAXI]]
			-- Event when a taxi gets available

	taxi_busy: EM_EVENT_CHANNEL[TUPLE[TRAFFIC_EVENT_TAXI]]
			-- Event when a taxi gets busy

	reject_request: EM_EVENT_CHANNEL[TUPLE[TRAFFIC_COORDINATE, TRAFFIC_COORDINATE]]
			-- Event when a taxi rejects to take a request
			-- Containing the from location and the intended destination as em_vector_2d

feature {TRAFFIC_EVENT_TAXI} -- communication from the taxis to their office

	recall (from_location: TRAFFIC_COORDINATE; to_location: TRAFFIC_COORDINATE) is
			-- Publish the request again.
		do
			request.publish([from_location, to_location])
		end

	enlist (a_taxi: TRAFFIC_EVENT_TAXI) is
			-- Put 'a_taxi' in the available list.
		require
			a_taxi_exists: a_taxi /= Void
			a_taxi_not_busy: a_taxi.busy = false
		do
			available_taxis.force_last(a_taxi)
		ensure
			a_taxi_added: available_taxis.count = old available_taxis.count + 1
		end

	delist(a_taxi: TRAFFIC_EVENT_TAXI) is
			-- Take a_taxi out of the available_taxi_list
		require
			a_taxi_exists: a_taxi /= Void
			a_taxi_not_available: a_taxi.busy = true
		do
			if available_taxis.has(a_taxi) then
				available_taxis.delete(a_taxi)
			end
		end

invariant

	request_not_void: request /= void
	taxi_available_not_void: taxi_available /= void
	taxi_busy_not_void: taxi_busy /= void

end
