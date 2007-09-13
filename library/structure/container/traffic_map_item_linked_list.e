indexing
	description: "Linked list that contains map items, calls add_to_map and remove_from_map on insertion and deletion, and throws events when a new item is added/removed"
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_MAP_ITEM_LINKED_LIST [G->TRAFFIC_MAP_ITEM]

inherit

	TRAFFIC_EVENT_CONTAINER [G]

create
	make

feature {NONE} -- Initialization

	make (a_map: TRAFFIC_MAP) is
			-- Initialize.
		do
			map := a_map
			create internal_list.make
			create element_inserted_event
			create element_removed_event
		ensure
			internal_list_exists: internal_list /= Void
			inserted_initialized: element_inserted_event /= Void
			removed_initialized: element_removed_event /= Void
			map_set: map = a_map
		end

feature -- Access

	map: TRAFFIC_MAP
			-- Container contains elements of this map

	count: INTEGER is
			-- Number of items in list
		do
			Result := internal_list.count
		end

	first: like item_for_iteration is
			-- First item in list
		require
			not_empty: not is_empty
		do
			Result := internal_list.first
		ensure
			has_first: has (Result)
		end

	item_for_iteration: G is
			-- Item at internal cursor position
		require
			not_after: not after
		do
			Result := internal_list.item_for_iteration
		end

	item (i: INTEGER_32): G
			-- Item at index `i'
		require
			valid_index: 1 <= i and i <= count
		do
			Result := internal_list.item (i)
		end

	last: G
			-- Last item in list
		require
			not_empty: not is_empty
		do
			Result := internal_list.last
		ensure
			definition: Result = item (count)
			has_last: has (Result)
		end

feature -- Cursor movement

	start is
			-- Move internal cursor to first position.
		do
			internal_list.start
		end

	forth is
			-- Move internal cursor to next position.
		require
			not_after: not after
		do
			internal_list.forth
		end

feature -- Status report

	has (v: G): BOOLEAN
			-- Does list include `v'?
		do
			Result := internal_list.has (v)
		ensure
			not_empty: Result implies not is_empty
		end

	is_empty: BOOLEAN is
			-- Is container empty?
		do
			Result := internal_list.is_empty
		end

	after: BOOLEAN is
			-- Is there no valid position to right of internal cursor?
		do
			Result := internal_list.after
		end

feature -- Insertion

	append (other: DS_LINEAR [G]; i: INTEGER_32)
			-- Add items of `other' at `i'-th position.
			-- Keep items of `other' in the same order.
			-- Do not move cursors.
		require
			other_not_void: other /= Void
			valid_index: 1 <= i and i <= (count + 1)
		local
			c: DS_LINEAR_CURSOR [G]
		do
			internal_list.append (other, i)
			from
				c := other.new_cursor
				c.start
			until
				c.off
			loop
				element_inserted_event.publish ([c.item])
				c.item.add_to_map (map)
				c.forth
			end
		ensure
			new_count: count = old count + other.count
			same_order: (not other.is_empty) implies (item (i) = other.first)
		end

	put_last (v: like item_for_iteration) is
			-- Add `v' to end of list.
			-- Do not move cursors.
		require
			is_insertable: v.is_insertable (map)
			not_in_map: not v.is_in_map
		do
			internal_list.force_last (v)
			element_inserted_event.publish ([v])
			v.add_to_map (map)
		ensure
			is_in_list: internal_list.has (v)
		end

	put_first (v: like item_for_iteration) is
			-- Add `v' to beginning of list.
			-- Do not move cursors.
		require
			is_insertable: v.is_insertable (map)
			not_in_map: not v.is_in_map
		do
			internal_list.force_first (v)
			element_inserted_event.publish ([v])
			v.add_to_map (map)
		ensure
			is_in_list: internal_list.has (v)
		end

	replace (v: G; i: INTEGER) is
			-- Replace item at index `i' by `v'.
			-- Do not move cursors.
		require
			is_insertable: v.is_insertable (map)
			not_in_map: not v.is_in_map
			is_removable: item (i).is_removable
			valid_index: 1 <= i and i <= count
		do
			element_removed_event.publish ([internal_list.item (i)])
			internal_list.item (i).remove_from_map
			internal_list.replace (v, i)
			element_inserted_event.publish ([v])
			v.add_to_map (map)
		ensure
			same_count: count = old count
			replaced: item (i) = v
		end

	put (v: G; i: INTEGER) is
			-- Add `v' at `i'-th position.
			-- Do not move cursors.
		require
			is_insertable: v.is_insertable (map)
			valid_index: 1 <= i and i <= (count + 1)
			not_in_map: not v.is_in_map
		do
			internal_list.put (v, i)
			v.add_to_map (map)
		ensure
			one_more: count = old count + 1
			inserted: item (i) = v
		end

feature -- Removal

	remove_first
			-- Remove item at beginning of list.
			-- Move any cursors at this position forth.
		require
			not_empty: not is_empty
			is_removable: item (1).is_removable
		do
			element_removed_event.publish ([internal_list.first])
			internal_list.first.remove_from_map
			internal_list.remove_first
		ensure
			one_less: count = old count - 1
		end

	remove_last
			-- Remove item at end of list.
			-- Move any cursors at this position forth.
		require
			not_empty: not is_empty
			is_removable: item (count).is_removable
		do
			element_removed_event.publish ([internal_list.last])
			internal_list.last.remove_from_map
			internal_list.remove_last
		ensure
			one_less: count = old count - 1
		end

	remove (i: INTEGER_32)
			-- Remove item at `i'-th position.
			-- Move any cursors at this position forth.
		require
			not_empty: not is_empty
			valid_index: 1 <= i and i <= count
			is_removable: item (i).is_removable
		do
			element_removed_event.publish ([internal_list.item (i)])
			internal_list.item (i).remove_from_map
			internal_list.remove (i)
		ensure
			one_less: count = old count - 1
		end

	prune_last (n: INTEGER_32)
			-- Remove `n' last items from list.
			-- Move all cursors off.
			-- (Performance: O(count-n).)
		require
			valid_n: 0 <= n and n <= count
			-- all items need to be removable...
		local
			c: DS_LINKED_LIST_CURSOR [G]
		do
			from
				create c.make (internal_list)
				c.go_i_th (count - n)
				c.forth
			until
				c.after
			loop
				element_removed_event.publish ([c.item])
				c.item.remove_from_map
				c.forth
			end
			internal_list.prune_last (n)
		ensure -- from DS_INDEXABLE
			new_count: count = old count - n
		end

	wipe_out is
			-- Remove all items from list.
			-- Move all cursors off.
		require
			-- All items need to be removable
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
			internal_list.wipe_out
		ensure
			wiped_out: is_empty
		end

	delete (v: like item_for_iteration) is
			-- Remove all occurrences of `v'.
			-- Move all cursors off.
		require
			is_removable: v.is_removable
		do
			internal_list.delete (v)
			v.remove_from_map
			element_removed_event.publish ([v])
		ensure
			deleted: not internal_list.has (v)
		end

feature {NONE} -- Implementation

	internal_list: DS_LINKED_LIST [like item_for_iteration]
			-- List of all drawables in the container

invariant

	list_not_void: internal_list /= Void
	map_set: map /= Void

end
