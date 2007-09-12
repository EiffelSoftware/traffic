indexing
	description:	"[
		Lists implemented with arrays that throw events whenever an element is added or removed.
		Features for list manipulation are only available to the map items.
		]"
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_EVENT_ARRAYED_LIST [G]

inherit

	DS_ARRAYED_LIST [G]
		export
		{NONE}
			copy, deep_copy, standard_copy
		{TRAFFIC_MAP_ITEM}
			append, append_first, append_last, append_left, append_left_cursor, append_right, append_right_cursor,
			clear_items, delete, extend, extend_first, extend_last, extend_left, extend_left_cursor, extend_right,
			extend_right_cursor, force, force_first, force_last, force_left, force_left_cursor, force_right,
			force_right_cursor, keep_first, keep_last, make_from_array, make_from_linear, prune, prune_first,
			prune_last, prune_left, prune_left_cursor, prune_right, prune_right_cursor, put, put_first, put_last,
			put_left, put_left_cursor, put_right, put_right_cursor, remove, remove_at, remove_at_cursor, remove_first,
			remove_last, remove_left, remove_left_cursor, remove_right, remove_right_cursor, remove_traversing_cursor,
			replace, replace_at, replace_at_cursor, resize, sort, swap, wipe_out
		redefine
			make, make_equal, extend, extend_last, force_last, put, put_last,
			replace, replace_at, replace_at_cursor,	delete, keep_first,
			prune, prune_last, remove, remove_last, wipe_out, out
		end

	TRAFFIC_EVENT_CONTAINER [G]
		undefine
			is_equal, copy, out
		end

create
	make,
	make_equal,
	make_default

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
		ensure then
			inserted_initialized: element_inserted_event /= Void
			removed_initialized: element_removed_event /= Void
		end

	make_equal (n: INTEGER_32)
			-- Create an empty list and allocate
			-- memory space for at least `n' items.
			-- Use equal as comparison criterion.
		do
			Precursor (n)
			create element_inserted_event
			create element_removed_event
		ensure then
			inserted_initialized: element_inserted_event /= Void
			removed_initialized: element_removed_event /= Void
		end

feature {TRAFFIC_MAP_ITEM} -- Element change

	extend (other: DS_LINEAR [G]; i: INTEGER_32)
			-- Add items of `other' at `i'-th position.
			-- Keep items of `other' in the same order.
			-- Do not move cursors.
			-- (Performance: O(count-i+other.count).)
		local
			c: DS_LINEAR_CURSOR [G]
			j: INTEGER
		do
			Precursor (other, i)
			from
				c := other.new_cursor
				c.start
				j := 1
			until
				c.off
			loop
				element_inserted_event.publish ([c.item, i - 1 + j])
				c.forth
				j := j + 1
			end
		end

	extend_last (other: DS_LINEAR [G])
			-- Add items of `other' to end of list.
			-- Keep items of `other' in the same order.
			-- Do not move cursors.
			-- (Performance: O(other.count).)
		local
			c: DS_LINEAR_CURSOR [G]
			j: INTEGER
		do
			j := count + 1
			Precursor (other)
			from
				c := other.new_cursor
				c.start
			until
				c.off
			loop
				element_inserted_event.publish ([c.item, j])
				j := j + 1
				c.forth
			end
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

feature {TRAFFIC_MAP_ITEM} -- Removal

	delete (v: G)
			-- Remove all occurrences of `v'.
			-- (Use equality_tester's comparison criterion
			-- if not void, use `=' criterion otherwise.)
			-- Move all cursors off.
			-- (Performance: O(count).)
		do
			Precursor (v)
			element_removed_event.publish ([v])
		end

	keep_first (n: INTEGER_32)
			-- Keep `n' first items in list.
			-- Move all cursors off.
			-- (Performance: O(1).)
		local
			c: DS_ARRAYED_LIST_CURSOR [G]
		do
			from
				create c.make (Current)
				c.go_i_th (n+1)
			until
				c.off
			loop
				element_removed_event.publish ([c.item])
				c.forth
			end
			Precursor (n)
		end

	prune (n: INTEGER_32; i: INTEGER_32)
			-- Remove `n' items at and after `i'-th position.
			-- Move all cursors off.
			-- (Performance: O(count-i-n).)
		local
			call_to: BOOLEAN
			c: DS_ARRAYED_LIST_CURSOR [G]
			j: INTEGER
		do
			call_to := (i + n) /= (count + 1)
			if not call_to then
				from
					create c.make (Current)
					c.go_i_th (i)
					j := 0
				until
					j >= n
				loop
					element_removed_event.publish ([c.item])
					j := j + 1
					c.forth
				end
			end
			Precursor (n, i)
		end

	prune_last (n: INTEGER_32)
			-- Remove `n' last items from list.
			-- Move all cursors off.
			-- (Performance: O(1).)
		local
			c: DS_ARRAYED_LIST_CURSOR [G]
			i: INTEGER
		do
			from
				create c.make (Current)
				c.go_i_th (count - n + 1)
				i := 1
			until
				c.off
			loop
				element_removed_event.publish ([c.item])
				c.forth
			end
			Precursor (n)
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
		local
			c: DS_ARRAYED_LIST_CURSOR [G]
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

end
