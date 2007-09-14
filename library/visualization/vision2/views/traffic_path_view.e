indexing
	description: "View for paths"
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_PATH_VIEW

inherit

	TRAFFIC_VS_VIEW [TRAFFIC_PATH]
		undefine
			copy,
			is_equal,
			show,
			hide,
			draw
		redefine
			highlight,
			unhighlight,
			set_color,
			set_highlight_color
		end

	DRAWABLE_OBJECT_CONTAINER [DRAWABLE_OBJECT]
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
			conns: DS_LINKED_LIST [TRAFFIC_CONNECTION]
			c: DRAWABLE_POLYLINE
			p: DRAWABLE_ROUNDED_RECTANGLE
		do
			make_container
			item := a_item
			from
				conns := item.connections
				conns.start
			until
				conns.after
			loop
				c := new_connection_view (conns.item_for_iteration)
				c.set_color (default_color)
				put_last (c)
				p := new_place_view (conns.item_for_iteration.origin)
				p.set_color (default_color)
				put_last (p)
				p := new_place_view (conns.item_for_iteration.destination)
				p.set_color (default_color)
				put_last (p)
				conns.forth
			end
			is_shown := True
			is_highlighted := False
			item.changed_event.subscribe (agent update)
		end


feature -- Constants

	default_color: EV_COLOR is
			-- Default color
		once
			create Result.make_with_8_bit_rgb (255, 0, 0)
		end

	default_highlight_color: EV_COLOR is
			-- Default highlight color
		once
			create Result.make_with_8_bit_rgb (0, 255, 0)
		end

feature -- Element change

feature -- Basic operations

	update is
			--
		do
			if item.is_highlighted then
				highlight
			else
				unhighlight
			end
		end

	highlight is
			-- Highlight the place view.
		local
			l: DRAWABLE_POLYLINE
			r: DRAWABLE_ROUNDED_RECTANGLE
		do
			if highlight_color /= Void then
				from
					start
				until
					after
				loop
					l ?= item_for_iteration
					r ?= item_for_iteration
					if l /= Void then
						l.set_color (create {EV_COLOR}.make_with_8_bit_rgb (highlight_color.red, highlight_color.green, highlight_color.blue))
					elseif r /= Void then
						r.set_color (create {EV_COLOR}.make_with_8_bit_rgb (highlight_color.red, highlight_color.green, highlight_color.blue))
					end
					forth
				end
			else
				from
					start
				until
					after
				loop
					l ?= item_for_iteration
					r ?= item_for_iteration
					if l /= Void then
						l.set_color (default_highlight_color)
					elseif r /= Void then
						r.set_color (default_highlight_color)
					end
					forth
				end
			end
			is_highlighted := True
		end

	unhighlight is
			-- Unhighlight the place view.
		local
			l: DRAWABLE_POLYLINE
			r: DRAWABLE_ROUNDED_RECTANGLE
		do
			if color /= Void then
				from
					start
				until
					after
				loop
					l ?= item_for_iteration
					r ?= item_for_iteration
					if l /= Void then
						l.set_color (create {EV_COLOR}.make_with_8_bit_rgb (color.red, color.green, color.blue))
					elseif r /= Void then
						r.set_color (create {EV_COLOR}.make_with_8_bit_rgb (color.red, color.green, color.blue))
					end
					forth
				end
			else
				from
					start
				until
					after
				loop
					l ?= item_for_iteration
					r ?= item_for_iteration
					if l /= Void then
						l.set_color (default_color)
					elseif r /= Void then
						r.set_color (default_color)
					end
					forth
				end
			end
			is_highlighted := False
		end

	set_color (a_color: TRAFFIC_COLOR) is
			-- Set the color of the place view to `a_color'.
		local
			l: DRAWABLE_POLYLINE
			r: DRAWABLE_ROUNDED_RECTANGLE
		do
			color := a_color
			if not is_highlighted then
				if color /= Void then
					from
						start
					until
						after
					loop
						l ?= item_for_iteration
						r ?= item_for_iteration
						if l /= Void then
							l.set_color (create {EV_COLOR}.make_with_8_bit_rgb (color.red, color.green, color.blue))
						elseif r /= Void then
							r.set_color (create {EV_COLOR}.make_with_8_bit_rgb (color.red, color.green, color.blue))
						end
						forth
					end
				else
					from
						start
					until
						after
					loop
						l ?= item_for_iteration
						r ?= item_for_iteration
						if l /= Void then
							l.set_color (default_color)
						elseif r /= Void then
							r.set_color (default_color)
						end
						forth
					end
				end
			end
		end

	set_highlight_color (a_color: TRAFFIC_COLOR) is
			-- Set the color of the place view to `a_color'.
		local
			l: DRAWABLE_POLYLINE
			r: DRAWABLE_ROUNDED_RECTANGLE
		do
			highlight_color := a_color
			if is_highlighted then
				if highlight_color /= Void then
					from
						start
					until
						after
					loop
						l ?= item_for_iteration
						r ?= item_for_iteration
						if l /= Void then
							l.set_color (create {EV_COLOR}.make_with_8_bit_rgb (highlight_color.red, highlight_color.green, highlight_color.blue))
						elseif r /= Void then
							r.set_color (create {EV_COLOR}.make_with_8_bit_rgb (highlight_color.red, highlight_color.green, highlight_color.blue))
						end
						forth
					end
				else
					from
						start
					until
						after
					loop
						l ?= item_for_iteration
						r ?= item_for_iteration
						if l /= Void then
							l.set_color (default_highlight_color)
						elseif r /= Void then
							r.set_color (default_highlight_color)
						end
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

	new_place_view (a_item: TRAFFIC_PLACE): DRAWABLE_ROUNDED_RECTANGLE is
			-- Generate place view for `a_item'.
		do
			create Result.make (create {REAL_COORDINATE}.make ((a_item.position.x-(a_item.width/2).max(5)), (-a_item.position.y-(a_item.breadth/2).max(5))),
								create {REAL_COORDINATE}.make ((a_item.position.x+(a_item.width/2).max(5)), (-a_item.position.y+(a_item.breadth/2).max(5))))

		ensure
			Result_exists: Result /= Void
		end

end
