indexing
	description: "Objects that ..."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	DRAWABLE_OBJECT_CONTAINER

inherit

	DRAWABLE_OBJECT
		redefine
			set_color,
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
		end

feature -- Access

	first: DRAWABLE_OBJECT is
			-- First item in list
		do
			Result := internal_list.first
		end

	item_for_iteration: DRAWABLE_OBJECT is
			-- Item at internal cursor position
		require
			not_after: not after
		do
			Result := internal_list.item_for_iteration
		end

	bounding_box : REAL_RECTANGLE is
			-- Bounding box of the container
		local
			i: INTEGER
			upper, lower: REAL_COORDINATE
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

	set_color (a_color: like color) is
			-- Set the color of the object to `a_color'.
		do
			from
				start
			until
				after
			loop
				item_for_iteration.set_color (a_color)
				forth
			end
			color := a_color
			invalidate
		end

	hide is
			-- Highlight the place view.
		do
			from
				start
			until
				after
			loop
				item_for_iteration.hide
				forth
			end
			is_shown := False
			invalidate
		end

	show is
			-- Unhighlight the place view.
		do
			from
				start
			until
				after
			loop
				item_for_iteration.show
				forth
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

	put_last (a_drawable: DRAWABLE_OBJECT) is
			-- Add `a_drawable' to end of list.
			-- Do not move cursors.
		do
			internal_list.force_last (a_drawable)
			invalidate
		ensure
			is_in_list: internal_list.has (a_drawable)
			not_valid: not is_valid
		end

	put_first (a_drawable: DRAWABLE_OBJECT) is
			-- Add `a_drawable' to beginning of list.
			-- Do not move cursors.
		do
			internal_list.force_first (a_drawable)
			invalidate
		ensure
			is_in_list: internal_list.has (a_drawable)
			not_valid: not is_valid
		end

	put_right (a_drawable: DRAWABLE_OBJECT) is
			-- Add `a_drawable' to right of internal cursor position.
			-- Do not move cursors.
		require
			not_after: not after
		do
			internal_list.force_right (a_drawable)
			invalidate
		ensure
			is_in_list: internal_list.has (a_drawable)
			not_valid: not is_valid
		end

feature -- Removal

	wipe_out is
			-- Remove all items from list.
			-- Move all cursors off.
		do
			internal_list.wipe_out
			invalidate
		ensure
			wiped_out: is_empty
			not_valid: not is_valid
		end

	delete (a_drawable: DRAWABLE_OBJECT) is
			-- Remove all occurrences of `v'.
			-- Move all cursors off.
		do
			internal_list.delete (a_drawable)
			invalidate
		ensure
			deleted: not internal_list.has (a_drawable)
			not_valid: not is_valid
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
					forth
				end
				validate
			end
		end

	draw_object is
			-- Draw `Current' (nothing to be done).
		do
		end

feature {NONE} -- Implementation

	internal_list: DS_LINKED_LIST [DRAWABLE_OBJECT]
			-- List of all drawables in the container

invariant

	list_not_void: internal_list /= Void

end
