indexing
	description: "Objects that ..."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_LINE_VIEW

inherit

	TRAFFIC_VS_VIEW [TRAFFIC_LINE]
		undefine
			hide,
			show,
			copy,
			is_equal,
			draw
		redefine
			unhighlight,
			highlight,
			set_color,
			set_highlight_color
		end

	DRAWABLE_OBJECT_CONTAINER [DRAWABLE_POLYLINE]
		rename
			color as internal_color,
			set_color as set_internal_color,
			make as make_container,
			item as container_item
		export {NONE}
			make_container
		end

create
	make

feature -- Initialization

	make (a_item: like item) is
			-- Initialize view for `a_item'.
		local
			c: DRAWABLE_POLYLINE
		do
			make_container
			item := a_item
			from
				item.start
			until
				item.after
			loop
				c := new_connection_view (item.item_for_iteration)
				put_last (c)
				item.forth
			end
			if item.color /= Void  then
				from
					start
				until
					after
				loop
					item_for_iteration.set_color (create {EV_COLOR}.make_with_8_bit_rgb (item.color.red, item.color.green, item.color.blue))
					forth
				end
			else
				from
					start
				until
					after
				loop
					item_for_iteration.set_color (default_color)
					forth
				end
			end
			is_shown := True
			is_highlighted := False
		end

feature -- Constants

	default_color: EV_COLOR is
			-- Default color
		once
			create Result.make_with_8_bit_rgb (100, 100, 100)
		end

	default_highlight_color: EV_COLOR is
			-- Default highlight color
		once
			create Result.make_with_8_bit_rgb (255, 0, 0)
		end

feature -- Element change

feature -- Basic operations

	highlight is
			-- Highlight the place view.
		do
			if highlight_color /= Void then
				from
					start
				until
					after
				loop
					item_for_iteration.set_color (create {EV_COLOR}.make_with_8_bit_rgb (highlight_color.red, highlight_color.green, highlight_color.blue))
					forth
				end
			else
				from
					start
				until
					after
				loop
					item_for_iteration.set_color (default_highlight_color)
					forth
				end
			end
			is_highlighted := True
		end

	unhighlight is
			-- Unhighlight the place view.
		do
			if color /= Void then
				from
					start
				until
					after
				loop
					item_for_iteration.set_color (create {EV_COLOR}.make_with_8_bit_rgb (color.red, color.green, color.blue))
					forth
				end
			else
				from
					start
				until
					after
				loop
					item_for_iteration.set_color (default_color)
					forth
				end
			end
			is_highlighted := False
		end

	set_color (a_color: TRAFFIC_COLOR) is
			-- Set the color of the place view to `a_color'.
		do
			color := a_color
			if not is_highlighted then
				if color /= Void then
					from
						start
					until
						after
					loop
						item_for_iteration.set_color (create {EV_COLOR}.make_with_8_bit_rgb (color.red, color.green, color.blue))
						forth
					end
				else
					from
						start
					until
						after
					loop
						item_for_iteration.set_color (default_color)
						forth
					end
				end
			end
		end

	set_highlight_color (a_color: TRAFFIC_COLOR) is
			-- Set the color of the place view to `a_color'.
		do
			highlight_color := a_color
			if is_highlighted then
				if highlight_color /= Void then
					from
						start
					until
						after
					loop
						item_for_iteration.set_color (create {EV_COLOR}.make_with_8_bit_rgb (highlight_color.red, highlight_color.green, highlight_color.blue))
						forth
					end
				else
					from
						start
					until
						after
					loop
						item_for_iteration.set_color (default_highlight_color)
						forth
					end
				end
			end
		end

feature {NONE} -- Implementation

	new_connection_view (a_item: TRAFFIC_CONNECTION): DRAWABLE_POLYLINE is
			-- Generate connection view for `a_item'.
		local
			pp: ARRAY [REAL_COORDINATE]
			i: INTEGER
		do
			create pp.make (1, a_item.polypoints.count)
			from
				i := 1
			until
				i > a_item.polypoints.count
			loop
				pp.put (create {REAL_COORDINATE}.make (a_item.polypoints.item (i).x, -a_item.polypoints.item (i).y), i)
				i := i + 1
			end
			create Result.make (pp, 634.0)
		ensure
			Result_exists: Result /= Void
		end

end
