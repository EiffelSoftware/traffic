indexing
	description: "[ 
						Abstract data model that is used by TRAFFIC_DRAWABLE_CONTAINER to visualize the 
						elements of type ELEM_TYPE.
						Inherit from this class to construct a model whoose items can be
						visualized using a TRAFFIC_DRAWABLE_CONTAINER.
					]"
	date: "2005/08/31"
	revision: "1.5"

deferred class
	TRAFFIC_MAP_MODEL [ELEM_TYPE -> HASHABLE]
	
feature -- Access
	events: TRAFFIC_ITEM_EVENTS [ELEM_TYPE]
	
feature -- Initialization
	make_with_events (item_events: TRAFFIC_ITEM_EVENTS [ELEM_TYPE]) is
			-- This would be the creation feature but since this class is deferred
			-- it cannot have a creation feature
		require
			events_not_void: item_events /= Void
		do
			events := item_events
		ensure
			events_set: events = item_events
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


invariant
	events_not_void: events /= Void
end
