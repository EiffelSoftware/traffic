indexing
	description: "Objects that ..."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_EVENT_LINKED_LIST [G]

inherit

	DS_LINKED_LIST [G]
		export {NONE}
			copy, deep_copy, standard_copy
		redefine
			make, make_equal, append, append_first, append_last, append_left_cursor, append_right_cursor, extend,
			extend_first, extend_last, extend_left_cursor, extend_right_cursor, force, force_first,
			force_last, force_left_cursor, force_right_cursor, replace, replace_at, replace_at_cursor,
			swap, put, put_first, put_last, put_left_cursor, put_right_cursor, delete, keep_first,
			prune, prune_first, prune_left_cursor, prune_right_cursor, remove, remove_at_cursor,
			remove_first, remove_last, remove_left_cursor, remove_right_cursor, wipe_out
		end

create
	make,
	make_equal,
	make_default,
	make_from_linear,
	make_from_array

feature {NONE} -- Initialization

	make
			-- Create an empty list.
			-- Use `=' as comparison criterion.
		do
			Precursor
			-- Create event channels
			create element_inserted_event
			create element_removed_event
			create changed_event
		ensure then
			inserted_initialized: element_inserted_event /= Void
			removed_initialized: element_removed_event /= Void
			changed_initialized: changed_event /= Void
		end

	make_equal
			-- Create an empty list.
			-- Use equal as comparison criterion.
		do
			Precursor
			-- Create event channels
			create element_inserted_event
			create element_removed_event
			create changed_event
		ensure then
			inserted_initialized: element_inserted_event /= Void
			removed_initialized: element_removed_event /= Void
			changed_initialized: changed_event /= Void
		end

feature -- Element change

	append (other: DS_LINEAR [G]; i: INTEGER_32)
			-- Add items of `other' at `i'-th position.
			-- Keep items of `other' in the same order.
			-- Do not move cursors.
			-- (Performance: O(i+other.count).)
			-- Was declared in DS_LINKED_LIST as synonym of extend.
		do
			if (i = 1 or i = count + 1 or other.is_empty) then
				Precursor (other, i)
			else
				Precursor (other, i)
				changed_event.publish ([])
			end
		end

	append_first (other: DS_LINEAR [G])
			-- Add items of `other' to beginning of list.
			-- Keep items of `other' in the same order.
			-- Do not move cursors.
			-- (Performance: O(other.count).)
			-- Was declared in DS_LINKED_LIST as synonym of extend_first.
		do
			if not other.is_empty then
				Precursor (other)
				changed_event.publish ([])
			end
		end

	append_last (other: DS_LINEAR [G])
			-- Add items of `other' to end of list.
			-- Keep items of `other' in the same order.
			-- Do not move cursors.
			-- (Performance: O(other.count).)
			-- Was declared in DS_LINKED_LIST as synonym of extend_last.
		do
			if not other.is_empty then
				Precursor (other)
				changed_event.publish ([])
			end
		end

	append_left_cursor (other: DS_LINEAR [G]; a_cursor: like new_cursor)
			-- Add items of `other' to left of `a_cursor' position.
			-- Keep items of `other' in the same order.
			-- Do not move cursors.
			-- (Synonym of `a_cursor.extend_left (other)'.)
			-- (Performance: O(other.count).)
			-- Was declared in DS_LINKED_LIST as synonym of extend_left_cursor.
		do
			if a_cursor.after or a_cursor.is_first or other.is_empty then
				Precursor (other, a_cursor)
			else
				Precursor (other, a_cursor)
				changed_event.publish ([])
			end
		end

	append_right_cursor (other: DS_LINEAR [G]; a_cursor: like new_cursor)
			-- Add items of `other' to right of `a_cursor' position.
			-- Keep items of `other' in the same order.
			-- Do not move cursors.
			-- (Synonym of `a_cursor.extend_right (other)'.)
			-- (Performance: O(other.count).)
			-- Was declared in DS_LINKED_LIST as synonym of extend_right_cursor.
		do
			if not other.is_empty then
				Precursor (other, a_cursor)
				changed_event.publish ([])
			end
		end

	extend (other: DS_LINEAR [G]; i: INTEGER_32)
			-- Add items of `other' at `i'-th position.
			-- Keep items of `other' in the same order.
			-- Do not move cursors.
			-- (Performance: O(i+other.count).)
			-- Was declared in DS_LINKED_LIST as synonym of append.
		do
			if i = 1 or i = count + 1 or other.is_empty then
				Precursor (other, i)
			else
				Precursor (other, i)
				changed_event.publish ([])
			end
		end

	extend_first (other: DS_LINEAR [G])
			-- Add items of `other' to beginning of list.
			-- Keep items of `other' in the same order.
			-- Do not move cursors.
			-- (Performance: O(other.count).)
			-- Was declared in DS_LINKED_LIST as synonym of append_first.
		do
			if not other.is_empty then
				Precursor (other)
				changed_event.publish ([])
			end
		end

	extend_last (other: DS_LINEAR [G])
			-- Add items of `other' to end of list.
			-- Keep items of `other' in the same order.
			-- Do not move cursors.
			-- (Performance: O(other.count).)
			-- Was declared in DS_LINKED_LIST as synonym of append_last.
		do
			if not other.is_empty then
				Precursor (other)
				changed_event.publish ([])
			end
		end

	extend_left_cursor (other: DS_LINEAR [G]; a_cursor: like new_cursor)
			-- Add items of `other' to left of `a_cursor' position.
			-- Keep items of `other' in the same order.
			-- Do not move cursors.
			-- (Synonym of `a_cursor.extend_left (other)'.)
			-- (Performance: O(other.count).)
			-- Was declared in DS_LINKED_LIST as synonym of append_left_cursor.
		do
			if a_cursor.after or a_cursor.is_first or other.is_empty then
				Precursor (other, a_cursor)
			else
				Precursor (other, a_cursor)
				changed_event.publish ([])
			end
		end

	extend_right_cursor (other: DS_LINEAR [G]; a_cursor: like new_cursor)
			-- Add items of `other' to right of `a_cursor' position.
			-- Keep items of `other' in the same order.
			-- Do not move cursors.
			-- (Synonym of `a_cursor.extend_right (other)'.)
			-- (Performance: O(other.count).)
			-- Was declared in DS_LINKED_LIST as synonym of append_right_cursor.
		do
			if not other.is_empty then
				Precursor (other, a_cursor)
				changed_event.publish ([])
			end
		end

	put (v: G; i: INTEGER_32)
			-- Add `v' at `i'-th position.
			-- Do not move cursors.
			-- (Performance: O(i).)
			-- Was declared in DS_LINKED_LIST as synonym of put.
		do
			if i = 1 or i = count + 1 then
				Precursor (v, i)
			else
				Precursor (v, i)
				element_inserted_event.publish ([v])
			end
		end

	put_first (v: G)
			-- Add `v' to beginning of list.
			-- Do not move cursors.
			-- (Performance: O(1).)
			-- Was declared in DS_LINKED_LIST as synonym of put_first.
		do
			Precursor (v)
			element_inserted_event.publish ([v])
		end

	put_last (v: G)
			-- Add `v' to end of list.
			-- Do not move cursors.
			-- (Performance: O(1).)
			-- Was declared in DS_LINKED_LIST as synonym of put_last.
		do
			Precursor (v)
			element_inserted_event.publish ([v])
		end

	put_left_cursor (v: G; a_cursor: like new_cursor)
			-- Add `v' to left of `a_cursor' position.
			-- Do not move cursors.
			-- (Synonym of `a_cursor.put_left (v)'.)
			-- (Performance: O(1).)
			-- Was declared in DS_LINKED_LIST as synonym of put_left_cursor.
		do
			if a_cursor.after or a_cursor.is_first then
				Precursor (v, a_cursor)
			else
				Precursor (v, a_cursor)
				element_inserted_event.publish ([v])
			end
		end

	put_right_cursor (v: G; a_cursor: like new_cursor)
			-- Add `v' to right of `a_cursor' position.
			-- Do not move cursors.
			-- (Synonym of `a_cursor.put_right (v)'.)
			-- (Performance: O(1).)
			-- Was declared in DS_LINKED_LIST as synonym of put_right_cursor.
		do
			if a_cursor.before or a_cursor.is_last then
				Precursor (v, a_cursor)
			else
				Precursor (v, a_cursor)
				element_inserted_event.publish ([v])
			end
		end

	force (v: G; i: INTEGER_32)
			-- Add `v' at `i'-th position.
			-- Do not move cursors.
			-- (Performance: O(i).)
			-- Was declared in DS_LINKED_LIST as synonym of put.
		do
			if i = 1 or i = count + 1 then
				Precursor (v, i)
			else
				Precursor (v, i)
				element_inserted_event.publish ([v])
			end
		end

	force_first (v: G)
			-- Add `v' to beginning of list.
			-- Do not move cursors.
			-- (Performance: O(1).)
			-- Was declared in DS_LINKED_LIST as synonym of put_first.
		do
			Precursor (v)
			element_inserted_event.publish ([v])
		end

	force_last (v: G)
			-- Add `v' to end of list.
			-- Do not move cursors.
			-- (Performance: O(1).)
			-- Was declared in DS_LINKED_LIST as synonym of put_last.
		do
			Precursor (v)
			element_inserted_event.publish ([v])
		end

	force_left_cursor (v: G; a_cursor: like new_cursor)
			-- Add `v' to left of `a_cursor' position.
			-- Do not move cursors.
			-- (Synonym of `a_cursor.put_left (v)'.)
			-- (Performance: O(1).)
			-- Was declared in DS_LINKED_LIST as synonym of put_left_cursor.
		do
			if a_cursor.after or a_cursor.is_first then
				Precursor (v, a_cursor)
			else
				Precursor (v, a_cursor)
				element_inserted_event.publish ([v])
			end
		end

	force_right_cursor (v: G; a_cursor: like new_cursor)
			-- Add `v' to right of `a_cursor' position.
			-- Do not move cursors.
			-- (Synonym of `a_cursor.put_right (v)'.)
			-- (Performance: O(1).)
			-- Was declared in DS_LINKED_LIST as synonym of put_right_cursor.
		do
			if a_cursor.before or a_cursor.is_last then
				Precursor (v, a_cursor)
			else
				Precursor (v, a_cursor)
				element_inserted_event.publish ([v])
			end
		end


	replace (v: G; i: INTEGER_32)
			-- Replace item at index `i' by `v'.
			-- Do not move cursors.
			-- (Performance: O(i).)
		local
			old_el: G
		do
			old_el := item (i)
			Precursor (v, i)
			element_inserted_event.publish ([v])
			element_removed_event.publish ([old_el])
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
			element_inserted_event.publish ([v])
			element_removed_event.publish ([old_el])
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
			element_inserted_event.publish ([v])
			element_removed_event.publish ([old_el])
		end

	swap (i, j: INTEGER_32)
			-- Exchange items at indexes i and j.
			-- Do not move cursors.
			-- (Performance: O(max(i,j)).)
		do
			Precursor (i, j)
			changed_event.publish ([])
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
			-- (Performance: O(n).)
		do
			if n = 0 then
				Precursor (n)
			else
				Precursor (n)
				changed_event.publish ([])
			end
		end

	prune (n: INTEGER_32; i: INTEGER_32)
			-- Remove `n' items at and after `i'-th position.
			-- Move all cursors off.
			-- (Performance: O(i+n).)
		do
			if n /= 0 and i /= 1 then
				Precursor (n, i)
				changed_event.publish ([])
			else
				Precursor (n, i)
			end
		end

	prune_first (n: INTEGER_32)
			-- Remove `n' first items from list.
			-- Move all cursors off.
			-- (Performance: O(n).)
		do
			if n /= 0 and count /= n then
				Precursor (n)
				changed_event.publish ([])
			else
				Precursor (n)
			end
		end

	prune_left_cursor (n: INTEGER_32; a_cursor: like new_cursor)
			-- Remove `n' items to left of `a_cursor' position.
			-- Move all cursors off.
			-- (Synonym of `a_cursor.prune_left (n)'.)
			-- (Performance: O(2*a_cursor.index-n).)
		do
			if n /= 0 and not a_cursor.after then
				Precursor (n, a_cursor)
				changed_event.publish ([])
			else
				Precursor (n, a_cursor)
			end
		end

	prune_right_cursor (n: INTEGER_32; a_cursor: like new_cursor)
			-- Remove `n' items to right of `a_cursor' position.
			-- Move all cursors off.
			-- (Synonym of `a_cursor.prune_right (n)'.)
			-- (Performance: O(n).)
		do
			if n /= 0 and not a_cursor.before then
				Precursor (n, a_cursor)
				changed_event.publish ([])
			else
				Precursor (n, a_cursor)
			end
		end

	remove (i: INTEGER_32)
			-- Remove item at `i'-th position.
			-- Move any cursors at this position forth.
			-- (Performance: O(i).)
		local
			old_el: G
		do
			if i = 1 or i = count then
				Precursor (i)
			else
				old_el := item (i)
				Precursor (i)
				element_removed_event.publish ([old_el])
			end
		end

	remove_at_cursor (a_cursor: like new_cursor)
			-- Remove item at `a_cursor' position.
			-- Move any cursors at this position forth.
			-- (Synonym of `a_cursor.remove'.)
			-- (Performance: O(count) if `a_cursor.is_last', O(1) otherwise.)
		local
			old_el: G
		do
			if a_cursor.is_first or a_cursor.is_last then
				Precursor (a_cursor)
			else
				old_el := a_cursor.item
				Precursor (a_cursor)
				element_removed_event.publish ([old_el])
			end
		end

	remove_first
			-- Remove item at beginning of list.
			-- Move any cursors at this position forth.
			-- (Performance: O(1).)
		local
			old_el: G
		do
			if count = 1 then
				Precursor
			else
				old_el := first
				Precursor
				element_removed_event.publish ([old_el])
			end
		end

	remove_last
			-- Remove item at end of list.
			-- Move any cursors at this position forth.
			-- (Performance: O(count).)
		local
			old_el: G
		do
			if count = 1 then
				Precursor
			else
				old_el := last
				Precursor
				element_removed_event.publish ([old_el])
			end
		end

	remove_left_cursor (a_cursor: like new_cursor)
			-- Remove item to left of `a_cusor' position.
			-- Move any cursors at this position forth.
			-- (Synonym of `a_cursor.remove_left'.)
			-- (Performance: O(a_cursor.index).)
		local
			new_left, old_left, current_cell: like first_cell
		do
			if a_cursor.after then
				Precursor (a_cursor)
			else
				current_cell := a_cursor.current_cell
				new_left := first_cell
				old_left := new_left.right
				if old_left = current_cell then
					move_all_cursors (new_left, current_cell)
					set_first_cell (current_cell)
					element_removed_event.publish ([new_left.item])
				else
					from
					until
						old_left.right = current_cell
					loop
						new_left := old_left
						old_left := new_left.right
					end
					move_all_cursors (old_left, current_cell)
					new_left.put_right (current_cell)
					element_removed_event.publish ([old_left.item])
				end
				count := count - 1
			end
		end

	remove_right_cursor (a_cursor: like new_cursor)
			-- Remove item to right of `a_cursor' position.
			-- Move any cursors at this position forth.
			-- (Synonym of `a_cursor.remove_right'.)
			-- (Performance: O(1).)
		local
			current_cell, new_right, old_right: like first_cell
		do
			if a_cursor.before then
				Precursor (a_cursor)
			else
				current_cell := a_cursor.current_cell
				old_right := current_cell.right
				new_right := old_right.right
				if new_right = Void then
					move_last_cursors_after
					set_last_cell (current_cell)
					element_removed_event.publish ([old_right.item])
				else
					move_all_cursors (old_right, new_right)
					current_cell.put_right (new_right)
					element_removed_event.publish ([old_right.item])
				end
				count := count - 1
			end
		end

	wipe_out
			-- Remove all items from list.
			-- Move all cursors off.
			-- (Performance: O(1).)
		do
			Precursor
		end

feature -- Access

	element_inserted_event: EM_EVENT_CHANNEL [TUPLE [G]]
			-- Insertion event (1: New element, 2: Position)

	element_removed_event: EM_EVENT_CHANNEL [TUPLE [G]]
			-- Deletion event (Removed element)

	changed_event: EM_EVENT_CHANNEL [TUPLE []]
			-- Unspecified list change event


end
