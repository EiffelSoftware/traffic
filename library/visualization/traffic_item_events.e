indexing
	description: "[ 
					All the events that have to do with elements changing
					]"
	date: "2005/08/31"
	revision: "1.0"

class
	TRAFFIC_ITEM_EVENTS [ELEM_TYPE -> HASHABLE]

create
	make

feature -- Initialization

		make is
			-- Create all events.
			-- Needs to be called in the creation feature
			-- of effective descendants.
		do
			create changed_event
			create item_changed_event
			create item_inserted_event
			create item_removed_event
		ensure
			changed_event_initialized: changed_event /= Void
			item_changed_event_initialized: item_changed_event /= Void
			item_inserted_event_initialized: item_inserted_event /= Void
			item_removed_event_intialized: item_removed_event /= Void
		end

feature -- Event publishing		

	publish_changed_event is
			-- Publish `changed_event' to re-render all views
			-- visualizing `Current'.
		do
			changed_event.publish ([])
		end

	publish_item_changed_event (i: INTEGER) is
			-- Publish `item_changed_event' to inform all views
			-- about changed item at index `i'.
		do
			item_changed_event.publish ([i])
		end

	publish_item_inserted_event (i: INTEGER) is
			-- Publish `item_inserted_event' to inform all views
			-- about inserted item at index `i'.
		do
			item_inserted_event.publish ([i])
		end

	publish_item_removed_event (i: INTEGER; an_item: ELEM_TYPE) is
			-- Publish `item_removed_event' to inform all views
			-- about removed item at index `i'.
		do
			item_removed_event.publish ([i, an_item])
		end

feature -- Events

	changed_event: TRAFFIC_EVENT_CHANNEL [TUPLE []]
			-- Event to inform views of `Current'
			-- when `Current' changed such that
			-- views need to re-render

	item_changed_event: TRAFFIC_EVENT_CHANNEL [TUPLE [INTEGER]]
			-- Event to inform views of `Current'
			-- when item has been changed
			-- at index passed as argument

	item_inserted_event: TRAFFIC_EVENT_CHANNEL [TUPLE [INTEGER]]
			-- Event to inform views of `Current'
			-- when item has been inserted
			-- at index passed as argument

	item_removed_event: TRAFFIC_EVENT_CHANNEL [TUPLE [INTEGER, ELEM_TYPE]]
			-- Event to inform views of `Current'
			-- when item has been removed
			-- at index passed as argument

invariant
	changed_event_initialized: changed_event /= Void
	item_changed_event_initialized: item_changed_event /= Void
	item_inserted_event_initialized: item_inserted_event /= Void
	item_removed_event_intialized: item_removed_event /= Void

end
