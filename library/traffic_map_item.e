indexing
	description: "Elements that belong to the map"
	date: "$Date$"
	revision: "$Revision$"

deferred class
	TRAFFIC_MAP_ITEM

feature -- Status report

	is_in_map: BOOLEAN
		-- Is `Current' a member of the map?

feature -- Element change

	add_to_map (a_map: TRAFFIC_MAP) is
			-- Add `Current' to `a_map'.
		require
			a_map_exists: a_map /= Void
			not_in_map: not is_in_map
			insertable: is_insertable (a_map)
		deferred
		ensure
			is_in_map: is_in_map
			map_set: map = a_map
		end

	remove_from_map is
			-- Remove `Current' from `map'.
		require
			is_in_map: is_in_map
		deferred
		ensure
			not_in_map: not is_in_map
			map_unset: map = Void
		end

feature -- Access

	map: TRAFFIC_MAP
			-- Map to which the item belongs (may be void)

feature -- Status report

	is_insertable (a_map: TRAFFIC_MAP): BOOLEAN is
			-- Is `Current' insertable into `a_map'?
			-- E.g. are all needed elements already inserted in the map?
		deferred
		end

end
