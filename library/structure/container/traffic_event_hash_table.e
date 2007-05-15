indexing
	description: 	"[
		Hash tables that throw events whenever an element is added or removed.
		Features for manipulation are only available to the map items.
		]"
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_EVENT_HASH_TABLE [G, K->HASHABLE]

inherit

	DS_HASH_TABLE [G, K]
		export {TRAFFIC_MAP_ITEM}
			force, force_last, force_new, put, put_last, put_new, remove, remove_found_item, replace, replace_found_item,
			swap, wipe_out
		redefine
			make_sparse_container, make_with_equality_testers, wipe_out,
			items_put, out
		end

	TRAFFIC_EVENT_CONTAINER [G]
		undefine
			is_equal, copy, out
		end

create
	make,
	make_equal,
	make_default,
	make_map,
	make_map_equal,
	make_map_default,
	make_with_equality_testers

feature {NONE} -- Intialization

	make_sparse_container (n: INTEGER_32)
			-- Create an empty container and allocate
			-- memory space for at least `n' items.
			-- Use `=' as comparison criterion.
			-- (from DS_SPARSE_CONTAINER)
		do
			Precursor (n)
			-- Create event channels
			create element_inserted_event
			create element_removed_event
		ensure then
			inserted_initialized: element_inserted_event /= Void
			removed_initialized: element_removed_event /= Void
		end

	make_with_equality_testers (n: INTEGER_32; an_item_tester: like equality_tester; a_key_tester: like key_equality_tester)
			-- Create an empty table and allocate
			-- memory space for at least `n' items.
			-- Use `an_item_tester' as comparison criterion for items.
			-- Use `a_key_tester' as comparison criterion for keys.
			-- (from DS_SPARSE_TABLE)
		do
			Precursor (n, an_item_tester, a_key_tester)
			-- Create event channels
			create element_inserted_event
			create element_removed_event
		ensure then
			inserted_initialized: element_inserted_event /= Void
			removed_initialized: element_removed_event /= Void
		end

feature {TRAFFIC_MAP_ITEM} -- Removal

	wipe_out
			-- Remove all items from container.
			-- Move all cursors off.
			-- (from DS_SPARSE_CONTAINER)
		local
			c: DS_HASH_TABLE_CURSOR [G, K]
		do
			from
				create c.make (Current)
				c.start
			until
				c.off
			loop
				element_removed_event.publish ([c.item])
				c.forth
			end
			Precursor
		end

feature {DS_ARRAYED_SPARSE_TABLE_CURSOR} -- Implementation

	items_put (v: G; i: INTEGER_32)
			-- Put `v' at position `i' in items.
			-- (from DS_ARRAYED_SPARSE_TABLE)
		local
			old_el: G
			dead_item: G
		do
			old_el := items_item (i)
			Precursor (v, i)
			if v = dead_item then
				element_removed_event.publish ([old_el])
			else
				element_inserted_event.publish ([v])
			end
		end

feature -- Output

	out: STRING is
			-- Output all elements in the hash table
		local
			c: DS_HASH_TABLE_CURSOR [G, K]
		do
			from
				create c.make (Current)
				c.start
				Result := ""
			until
				c.off
			loop
				Result := Result + "*" + c.item.out + "%N"
				c.forth
			end
		end

end
