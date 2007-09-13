indexing
	description: "Elements that belong to the map"
	date: "$Date$"
	revision: "$Revision$"

deferred class
	TRAFFIC_MAP_ITEM

feature -- Status report

	is_in_map: BOOLEAN
		-- Is `Current' a member of the map?

feature {TRAFFIC_EVENT_CONTAINER} -- Basic operations (map)

	add_to_map (a_map: TRAFFIC_MAP) is
			-- Add `Current' to `a_map'.
		require
			a_map_exists: a_map /= Void
			not_in_map: not is_in_map
			insertable: is_insertable (a_map)
		do
			is_in_map := True
			map := a_map
		ensure
			is_in_map: is_in_map
			map_set: map = a_map
		end

	remove_from_map is
			-- Remove `Current' from `map'.
		require
			is_in_map: is_in_map
			is_removable: is_removable
		do
			is_in_map := False
			map := Void
		ensure
			not_in_map: not is_in_map
			map_unset: map = Void
		end

feature -- Status setting

	highlight is
			-- Highlight.
		do
			is_highlighted := True
			changed_event.publish ([])
		ensure
			highlighted: is_highlighted
		end

	unhighlight is
			-- Unhighlight.
		do
			is_highlighted := False
			changed_event.publish ([])
		ensure
			unhighlighted: not is_highlighted
		end

feature -- Access

	map: TRAFFIC_MAP
			-- Map to which the item belongs (may be void)

	changed_event: TRAFFIC_EVENT_CHANNEL [TUPLE []]
			-- Event to publish when `Current' is changed

feature -- Status report

	is_insertable (a_map: TRAFFIC_MAP): BOOLEAN is
			-- Is `Current' insertable into `a_map'?
			-- E.g. are all needed elements already inserted in the map?
		deferred
		end

	is_removable: BOOLEAN is
			-- Is `Current' removable from `a_map'?
			-- E.g. no other elements need it any more?
		deferred
		end

	is_highlighted: BOOLEAN
			-- Is `Current' highlighted?

invariant

	changed_event_exists: changed_event /= Void

end
