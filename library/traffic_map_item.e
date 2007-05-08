indexing
	description: "Objects that ..."
	author: ""
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

end
