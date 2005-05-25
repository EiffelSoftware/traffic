indexing
	description: "[ 
						Abstract data model that TRAFFIC_WIDGET can visualize.
						Inherit from this class to construct a model that can be
						visualized using a TRAFFIC_WIDGET.
					]"
	author: "Rolf Bruderer"
	date: "2005/03/03"
	revision: "1.3"

deferred class
	TRAFFIC_MAP_MODEL [ELEM_TYPE -> HASHABLE]
	
feature -- Initialization

	initialize_events is
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
		
	category (i: INTEGER): STRING is
			-- Unique string representing category of i-th item,
			-- all items with same category are rendered in the same way.
			-- (Per default `generating_type' is used as category,
			--  can be redefined).
		require
			i_is_valid_index: 1 <= i and i <= count
		do
			Result := item (i).generating_type
		ensure
			result_not_empty: Result /= Void and then not Result.is_empty
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
			
	publish_item_removed_event (i: INTEGER) is
			-- Publish `item_removed_event' to inform all views
			-- about removed item at index `i'.
		do
			item_removed_event.publish ([i])
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
			
	item_removed_event: EVENT_TYPE [TUPLE [INTEGER]]
			-- Event to inform views of `Current' 
			-- when item has been removed 
			-- at index passed as argument

invariant
	changed_event_initialized: changed_event /= Void
	item_changed_event_initialized: item_changed_event /= Void
	item_inserted_event_initialized: item_inserted_event /= Void
	item_removed_event_intialized: item_removed_event /= Void

end
