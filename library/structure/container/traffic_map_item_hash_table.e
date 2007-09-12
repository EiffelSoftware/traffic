indexing
	description: "Objects that ..."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_MAP_ITEM_HASH_TABLE [G->TRAFFIC_MAP_ITEM, H->HASHABLE]

inherit

	TRAFFIC_EVENT_CONTAINER [G]


create
	make

feature {NONE} -- Initialization

	make (n: INTEGER_32; a_map: TRAFFIC_MAP)
			-- Create an empty table and allocate
			-- memory space for at least `n' items.
			-- Use `=' as comparison criterion for items.
			-- Use equal as comparison criterion for keys.
		require
			positive_n: n >= 0
			a_map_exists: a_map /= Void
		do
			map := a_map
			create internal_table.make (n)
			create element_inserted_event
			create element_removed_event
		ensure
			empty: is_empty
			internal_table_exists: internal_table /= Void
			element_inserted_event_exists: element_inserted_event /= Void
			element_removed_event_exists: element_removed_event /= Void
			map_set: map = a_map
		end

feature -- Access

	map: TRAFFIC_MAP
			-- Map for current container

	first: G
			-- First item in container
		require -- from DS_LINEAR
			not_empty: not is_empty
		do
			Result := internal_table.first
		ensure
			has_first: has_item (Result)
		end

	item (k: H): G
			-- Item associated with `k'
		require -- from DS_TABLE
			has_k: has (k)
		do
			Result := internal_table.item (k)
		end

	item_for_iteration: G
			-- Item at internal cursor position
		require
			not_after: not after
		do
			Result := internal_table.item_for_iteration
		end

feature -- Measurement

	count: INTEGER_32
			-- Number of items in container
		do
			Result := internal_table.count
		end

feature -- Status report

	after: BOOLEAN
			-- Is there no valid position to right of internal cursor?
		do
			Result := internal_table.after
		end

	has (k: H): BOOLEAN
			-- Is there an item associated with `k'?
		do
			Result := internal_table.has (k)
		ensure
			valid_key: Result implies internal_table.valid_key (k)
		end

	has_item (v: G): BOOLEAN
			-- Does container include `v'?
		do
			Result := internal_table.has_item (v)
		ensure
			not_empty: Result implies not is_empty
		end

	is_empty: BOOLEAN
			-- Is container empty?
		do
			Result := internal_table.is_empty
		end

feature -- Cursor movement

	forth
			-- Move internal cursor to next position.
		require
			not_after: not after
		do
			internal_table.forth
		end

	start
			-- Move internal cursor to first position.
		do
			internal_table.start
		ensure
			empty_behavior: is_empty implies after
		end

feature -- Insertion

	force (v: G; k: H)
			-- Associate `v' with key `k'.
			-- Resize table if necessary.
			-- Do not move cursors.
		do
			internal_table.force (v, k)
			element_inserted_event.publish ([v])
			v.add_to_map (map)
		ensure
			inserted: has (k) and then item (k) = v
			same_count: (old has (k)) implies (count = old count)
			one_more: (not old has (k)) implies (count = old count + 1)
		end

	replace (v: G; k: H)
			-- Replace item associated with `k' by `v'.
			-- Do not move cursors.
			-- (from DS_SPARSE_TABLE)
		require -- from DS_TABLE
			has_k: has (k)
		do
			element_removed_event.publish ([internal_table.item (k)])
			internal_table.item (k).remove_from_map
			internal_table.replace (v, k)
			element_inserted_event.publish ([v])
			v.add_to_map (map)
		ensure -- from DS_TABLE
			replaced: item (k) = v
			same_count: count = old count
		end

feature -- Removal

	remove (k: H)
			-- Remove item associated with `k'.
			-- Move any cursors at this position forth.
		do
			element_removed_event.publish ([internal_table.item (k)])
			internal_table.item (k).remove_from_map
			internal_table.remove (k)
		ensure -- from DS_TABLE
			same_count: (not old has (k)) implies (count = old count)
			one_less: (old has (k)) implies (count = old count - 1)
			removed: not has (k)
		end

	wipe_out
			-- Remove all items from container.
			-- Move all cursors off.
		do
			from
				start
			until
				after
			loop
				element_removed_event.publish ([item_for_iteration])
				item_for_iteration.remove_from_map
				forth
			end
			internal_table.wipe_out
		ensure
			wiped_out: is_empty
		end

feature --

	to_array: ARRAY [G] is
			-- Array containing the same items as current
			-- container in the same order
		do
			Result := internal_table.to_array
		ensure
			to_array_not_void: Result /= Void
			same_count: Result.count = count
		end

feature {NONE} -- Implementation

	internal_table: DS_HASH_TABLE [G, H]

invariant

	internal_table_exists: internal_table /= Void
	map_exists: map /= Void

end
