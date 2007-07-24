indexing
	description: "Objects that ..."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	DRAWABLE_OBJECT_CONTAINER

inherit

	LINKED_LIST [DRAWABLE_OBJECT]

	DRAWABLE_OBJECT
		undefine
			is_equal,
			copy
		redefine
			set_color,
			draw
		end

feature --

	draw (a_target: CANVAS) is
			-- Draw `Current' onto `a_target'
		do
			check
				color_not_void: color /= Void
			end
			canvas := a_target
			canvas.set_foreground_color (color)
			if is_shown then
				from
					start
				until
					off
				loop
					item.draw (canvas)
					forth
				end
			end
		end

	draw_object is
			--
		do
		end

	set_color (a_color: like color) is
			-- Set the color of the object to `a_color'
		do
			from
				start
			until
				off
			loop
				item.set_color (a_color)
				forth
			end
			color := a_color
		end

feature --

	bounding_box : REAL_RECTANGLE is
			-- The bounding box of the container
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
					off
				loop
					rect := item.bounding_box
					l := l.min (rect.left_bound)
					r := r.max (rect.right_bound)
					u := u.max (rect.upper_bound)
					d := d.min (rect.lower_bound)
					forth
				end
			end
			create Result.make (create {REAL_COORDINATE}.make (r, u), create {REAL_COORDINATE}.make (l, d))
		end

end
