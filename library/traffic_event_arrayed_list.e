indexing
	description: "Objects that ..."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_EVENT_ARRAYED_LIST [G]

inherit

	DS_ARRAYED_LIST [G]
		export {NONE}
			copy, deep_copy, standard_copy
		redefine
			make, make_equal, extend, extend_last, force_last, put, put_last,
			replace, replace_at, replace_at_cursor,	delete, keep_first,
			prune, prune_last, remove, remove_last, wipe_out, out
		end

create
	make,
	make_equal,
	make_default,
	make_from_linear,
	make_from_array

feature {NONE} -- Initialization

	make (n: INTEGER_32)
			-- Create an empty list and allocate
			-- memory space for at least `n' items.
			-- Use `=' as comparison criterion.
		do
			Precursor (n)
			-- Create event channels
			create element_inserted_event
			create element_removed_event
			create changed_event
		ensure then
			inserted_initialized: element_inserted_event /= Void
			removed_initialized: element_removed_event /= Void
			changed_initialized: changed_event /= Void
		end

	make_equal (n: INTEGER_32)
			-- Create an empty list and allocate
			-- memory space for at least `n' items.
			-- Use equal as comparison criterion.
		do
			Precursor (n)
			create element_inserted_event
			create element_removed_event
			create changed_event
		ensure then
			inserted_initialized: element_inserted_event /= Void
			removed_initialized: element_removed_event /= Void
			changed_initialized: changed_event /= Void
		end

feature -- Element change

	extend (other: DS_LINEAR [G]; i: INTEGER_32)
			-- Add items of `other' at `i'-th position.
			-- Keep items of `other' in the same order.
			-- Do not move cursors.
			-- (Performance: O(count-i+other.count).)
		do
			Precursor (other, i)
			changed_event.publish ([])
		end

	extend_last (other: DS_LINEAR [G])
			-- Add items of `other' to end of list.
			-- Keep items of `other' in the same order.
			-- Do not move cursors.
			-- (Performance: O(other.count).)
		do
			Precursor (other)
			changed_event.publish ([])
		end

	force_last (v: G)
			-- Add `v' to end of list.
			-- Resize container if needed.
			-- Do not move cursors.
			-- (Performance: O(1)[+resizing].)
		do
			Precursor (v)
			element_inserted_event.publish ([v, count + 1])
		end

	put (v: G; i: INTEGER_32)
			-- Add `v' at `i'-th position.
			-- Do not move cursors.
			-- (Performance: O(count-i).)
		do
			Precursor (v, i)
			element_inserted_event.publish ([v, i])
		end

	put_last (v: G)
			-- Add `v' to end of list.
			-- Do not move cursors.
			-- (Performance: O(1).)
		do
			Precursor (v)
			element_inserted_event.publish ([v, count + 1])
		end

	replace (v: G; i: INTEGER_32)
			-- Replace item at `i'-th position by `v'.
			-- Do not move cursors.
			-- (Performance: O(1).)
		local
			old_el: G
		do
			old_el := item (i)
			Precursor (v, i)
			element_removed_event.publish ([old_el])
			element_inserted_event.publish ([v, i])
		end

	replace_at (v: G)
			-- Replace item at internal cursor position by `v'.
			-- Do not move cursors.
			-- (from DS_LIST)
		local
			old_el: G
		do
			old_el := internal_cursor.item
			Precursor (v)
			element_removed_event.publish ([old_el])
			element_inserted_event.publish ([v, internal_cursor.index])
		end

	replace_at_cursor (v: G; a_cursor: like new_cursor)
			-- Replace item at `a_cursor' position by `v'.
			-- Do not move cursors.
			-- (Synonym of `a_cursor.replace (v)'.)
			-- (from DS_LIST)
		local
			old_el: G
		do
			old_el := a_cursor.item
			Precursor (v, a_cursor)
			element_removed_event.publish ([old_el])
			element_inserted_event.publish ([v, a_cursor.index])
		end

feature -- Removal

	delete (v: G)
			-- Remove all occurrences of `v'.
			-- (Use equality_tester's comparison criterion
			-- if not void, use `=' criterion otherwise.)
			-- Move all cursors off.
			-- (Performance: O(count).)
		do
			Precursor (v)
			changed_event.publish ([])
		end

	keep_first (n: INTEGER_32)
			-- Keep `n' first items in list.
			-- Move all cursors off.
			-- (Performance: O(1).)
		do
			Precursor (n)
			changed_event.publish ([])
		end

	prune (n: INTEGER_32; i: INTEGER_32)
			-- Remove `n' items at and after `i'-th position.
			-- Move all cursors off.
			-- (Performance: O(count-i-n).)
		local
			call_to: BOOLEAN
		do
			call_to := (i + n) /= (count + 1)
			Precursor (n, i)
			if not call_to then
				changed_event.publish ([])
			end
		end

	prune_last (n: INTEGER_32)
			-- Remove `n' last items from list.
			-- Move all cursors off.
			-- (Performance: O(1).)
		do
			Precursor (n)
			changed_event.publish ([])
		end

	remove (i: INTEGER_32)
			-- Remove item at `i'-th position.
			-- Move any cursors at this position forth.
			-- (Performance: O(count-i).)
		local
			old_el: G
			call_to: BOOLEAN
		do
			call_to := i = count
			old_el := item (i)
			Precursor (i)
			if not call_to then
				element_removed_event.publish ([old_el])
			end
		end

	remove_last
			-- Remove item at end of list.
			-- Move any cursors at this position forth.
			-- (Performance: O(1).)
		local
			old_el: G
		do
			old_el := last
			Precursor
			element_removed_event.publish ([old_el])
		end

	wipe_out
			-- Remove all items from list.
			-- Move all cursors off.
			-- (Performance: O(1).)
		do
			Precursor
			changed_event.publish ([])
		end

feature -- Access

	element_inserted_event: EM_EVENT_CHANNEL [TUPLE [G, INTEGER]]
			-- Insertion event (1: New element, 2: Position)

	element_removed_event: EM_EVENT_CHANNEL [TUPLE [G]]
			-- Deletion event (Removed element)

	changed_event: EM_EVENT_CHANNEL [TUPLE []]
			-- Unspecified list change event

feature -- Output

	out: STRING is
			-- Output all elements in the hash table
		local
			c: DS_ARRAYED_LIST_CURSOR [G]
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

invariant

	inserted_initialized: element_inserted_event /= Void
	removed_initialized: element_removed_event /= Void
	changed_initialized: changed_event /= Void

end
