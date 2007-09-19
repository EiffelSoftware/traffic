indexing
	description: "Objects that ..."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	DRAWABLE_OBJECT_CONTAINER [G->DRAWABLE_OBJECT]

inherit

	DRAWABLE_OBJECT
		redefine
			show,
			hide,
			draw
		end

create
	make

feature {NONE} -- Initialization

	make is
			-- Initialize.
		do
			create internal_list.make
			create color.make_with_8_bit_rgb (255, 255, 255)
		ensure
			internal_list_exists: internal_list /= Void
			color_exists: color /= Void
		end

feature -- Access

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

	bounding_box : REAL_RECTANGLE is
			-- Bounding box of the container
		local
			rect: REAL_RECTANGLE
			l, r, u, d: REAL
		do
			if not is_empty then
				rect := first.bounding_box
				l := rect.left_bound
				r := rect.right_bound
				u := rect.upper_bound
				d := rect.lower_bound
				from
					start
				until
					after
				loop
					rect := item_for_iteration.bounding_box
					l := l.min (rect.left_bound)
					r := r.max (rect.right_bound)
					u := u.max (rect.upper_bound)
					d := d.min (rect.lower_bound)
					forth
				end
			end
			create Result.make (create {REAL_COORDINATE}.make (r, u), create {REAL_COORDINATE}.make (l, d))
		end

feature -- Element change

	hide is
			-- Highlight the place view.
		local
			i: INTEGER
		do
			from
				i := 1
			until
				i > count
			loop
				item (i).hide
				i := i + 1
			end
			is_shown := False
			invalidate
		end

	show is
			-- Unhighlight the place view.
		local
			i: INTEGER
		do
			from
				i := 1
			until
				i > count
			loop
				item (i).show
				i := i + 1
			end
			is_shown := True
			invalidate
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

	put_last (a_drawable: like item_for_iteration) is
			-- Add `a_drawable' to end of list.
			-- Do not move cursors.
		do
			internal_list.force_last (a_drawable)
			invalidate
		ensure
			is_in_list: internal_list.has (a_drawable)
		end

	put_first (a_drawable: like item_for_iteration) is
			-- Add `a_drawable' to beginning of list.
			-- Do not move cursors.
		do
			internal_list.force_first (a_drawable)
			invalidate
		ensure
			is_in_list: internal_list.has (a_drawable)
		end

	replace (v: G; i: INTEGER) is
			-- Replace item at index `i' by `v'.
			-- Do not move cursors.
		require
			valid_index: 1 <= i and i <= count
		do
			internal_list.replace (v, i)
			invalidate
		ensure
			same_count: count = old count
			replaced: item (i) = v
		end

	put (v: G; i: INTEGER) is
			-- Add `v' at `i'-th position.
			-- Do not move cursors.
		require
			valid_index: 1 <= i and i <= (count + 1)
		do
			internal_list.put (v, i)
			invalidate
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
		do
			internal_list.remove_first
			invalidate
		ensure -- from DS_INDEXABLE
			one_less: count = old count - 1
		end

	remove_last
			-- Remove item at end of list.
			-- Move any cursors at this position forth.
		require
			not_empty: not is_empty
		do
			internal_list.remove_last
			invalidate
		ensure
			one_less: count = old count - 1
		end

	remove (i: INTEGER_32)
			-- Remove item at `i'-th position.
			-- Move any cursors at this position forth.
		require
			not_empty: not is_empty
			valid_index: 1 <= i and i <= count
		do
			internal_list.remove (i)
			invalidate
		ensure
			one_less: count = old count - 1
		end

	wipe_out is
			-- Remove all items from list.
			-- Move all cursors off.
		do
			internal_list.wipe_out
			invalidate
		ensure
			wiped_out: is_empty
		end

	delete (a_drawable: like item_for_iteration) is
			-- Remove all occurrences of `v'.
			-- Move all cursors off.
		do
			internal_list.delete (a_drawable)
			invalidate
		ensure
			deleted: not internal_list.has (a_drawable)
		end

feature {CANVAS} -- Basic operations

	draw (a_target: CANVAS) is
			-- Draw `Current' onto `a_target'
		do
			canvas := a_target
			if is_shown then
				from
					start
				until
					after
				loop
					item_for_iteration.draw (canvas)
					if not after then
						forth
					end
				end
				validate
			end
		end

	draw_object is
			-- Draw `Current' (nothing to be done).
		do
		end

feature {NONE} -- Implementation

	internal_list: DS_LINKED_LIST [like item_for_iteration]
			-- List of all drawables in the container

invariant

	list_not_void: internal_list /= Void

end
