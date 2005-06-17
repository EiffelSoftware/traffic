indexing
	description: "[ 
						Abstract data model that TRAFFIC_DRAWABLE_CONTAINER can visualize.
						Inherit from this class to construct a model that can be
						visualized using a TRAFFIC_DRAWABLE_CONTAINER.
					]"
	author: "Rolf Bruderer, Roger Kueng"
	date: "2005/06/09"
	revision: "1.4"

deferred class
	TRAFFIC_MAP_MODEL [ELEM_TYPE -> HASHABLE]
	
feature -- Initialization

feature -- Access
	events: TRAFFIC_ITEM_EVENTS [ELEM_TYPE]
	
feature -- Creation
	make_with_events (item_events: TRAFFIC_ITEM_EVENTS [ELEM_TYPE]) is
			-- 
		require
			events_not_void: item_events /= Void
		do
			events := item_events
		ensure
			events_not_void: events /= Void
		end
		
feature -- Queries

	item (i: INTEGER): ELEM_TYPE is
			-- The `i'-th item to be visualized inside the map,
			-- ordered by z-coordinates from bottom to top.
		require
			i_is_valid_index: 1 <= i and then i <= count
		deferred
		ensure
			result_not_void: Result /= Void
		end
		
	count: INTEGER is
			-- Number of items in `Current'.
		deferred
		ensure
			result_not_negative: Result >= 0
		end
		
feature -- Event publishing		
		
	publish_changed_event is
			-- Publish `changed_event' to re-render all views
			-- visualizing `Current'.
		do
			events.changed_event.publish ([])
		end
		
	publish_item_changed_event (i: INTEGER) is
			-- Publish `item_changed_event' to inform all views
			-- about changed item at index `i'.
		do
			events.item_changed_event.publish ([i])	
		end
			
	publish_item_inserted_event (i: INTEGER) is
			-- Publish `item_inserted_event' to inform all views
			-- about inserted item at index `i'.
		do
			events.item_inserted_event.publish ([i])			
		end
			
	publish_item_removed_event (i: INTEGER; an_item: ELEM_TYPE) is
			-- Publish `item_removed_event' to inform all views
			-- about removed item `an_item'at index `i'.
		do
			events.item_removed_event.publish ([i, an_item])
		end		

feature -- Events

	changed_event: EVENT_TYPE [TUPLE []]
			-- Event to inform views of `Current'
			-- when `Current' changed such that
			-- views need to re-render
	
	item_changed_event: EVENT_TYPE [TUPLE [INTEGER]]
			-- Event to inform views of `Current' 
			-- when item has been changed
			-- at index passed as argument
			
	item_inserted_event: EVENT_TYPE [TUPLE [INTEGER]]
			-- Event to inform views of `Current' 
			-- when item has been inserted
			-- at index passed as argument
			
	item_removed_event: EVENT_TYPE [TUPLE [INTEGER, ELEM_TYPE]]
			-- Event to inform views of `Current' 
			-- when item has been removed 
			-- at index passed as argument

invariant
	changed_event_initialized: changed_event /= Void
	item_changed_event_initialized: item_changed_event /= Void
	item_inserted_event_initialized: item_inserted_event /= Void
	item_removed_event_intialized: item_removed_event /= Void

end
