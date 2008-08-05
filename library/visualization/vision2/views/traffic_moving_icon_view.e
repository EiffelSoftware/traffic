indexing
	description: "View for moving items such as trams, passengers, etc."
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_MOVING_ICON_VIEW [G->TRAFFIC_MOVING]

inherit

	TRAFFIC_MOVING_DEFERRED_VIEW [G]
		redefine
			set_color,
			set_highlight_color,
			highlight,
			unhighlight,
			draw_object, draw
		end

	KL_SHARED_FILE_SYSTEM

create
	make_with_filename

feature -- Initialization

	make_with_filename (a_item: like item; a_filename: STRING) is
			-- Initialize view for `a_item'.
		require
			a_filename_valid: a_filename /= Void and then not a_filename.is_empty
			a_fileexists: file_system.is_file_readable (a_filename)
		local
			pix: EV_PIXMAP
		do
			item := a_item
			make_container
			create pix
			pix.set_with_named_file (a_filename)
			create icon.make (pix, create {REAL_COORDINATE}.make (item.position.x, item.position.y))
			icon.set_position (create {REAL_COORDINATE}.make (item.position.x - icon.bounding_box.width/2, -item.position.y-icon.bounding_box.height/2))
			create rectangle.make  (create {REAL_COORDINATE}.make (icon.bounding_box.point_a.x -5 -5, icon.bounding_box.point_a.y-5),
							create {REAL_COORDINATE}.make (icon.bounding_box.point_b.x +5, icon.bounding_box.point_b.x +5))
			rectangle.set_edge_color (default_color)
			rectangle.set_color (default_color)
--			put_last (rectangle)
			put_last (icon)
			is_shown := True
			is_highlighted := False
			item.changed_event.subscribe (agent update)
		ensure then
			internal_color_exists: internal_color /= Void
		end

	define is
			-- Do nothing.
		do
		end

feature -- Basic operations

	update is
			-- Update view to represent item.
		do
			if item.is_highlighted then
				highlight
			else
				unhighlight
			end
			icon.set_position (create {REAL_COORDINATE}.make (item.position.x - icon.bounding_box.width/2, -item.position.y-icon.bounding_box.height/2))
			rectangle.set_points (    create {REAL_COORDINATE}.make (icon.bounding_box.point_a.x -5 -5, icon.bounding_box.point_a.y-5),
							create {REAL_COORDINATE}.make (icon.bounding_box.point_b.x +5, icon.bounding_box.point_b.x +5))
		end

	set_color (a_color: TRAFFIC_COLOR) is
			-- Set the color of the view to `a_color'.
		do
			color := a_color
			if not item.is_highlighted then
				if color /= Void then
					rectangle.set_edge_color (create {EV_COLOR}.make_with_8_bit_rgb (color.red, color.green, color.blue))
					rectangle.set_color (create {EV_COLOR}.make_with_8_bit_rgb (color.red, color.green, color.blue))
				else
					rectangle.set_edge_color (default_color)
					rectangle.set_color (default_color)
				end
			end
		end

	set_highlight_color (a_color: TRAFFIC_COLOR) is
			-- Set the color of the view to `a_color'.
		do
			highlight_color := a_color
			if item.is_highlighted then
				if highlight_color /= Void then
					rectangle.set_edge_color (create {EV_COLOR}.make_with_8_bit_rgb (highlight_color.red, highlight_color.green, highlight_color.blue))
					rectangle.set_color (create {EV_COLOR}.make_with_8_bit_rgb (highlight_color.red, highlight_color.green, highlight_color.blue))
				else
					rectangle.set_edge_color (default_highlight_color)
					rectangle.set_color (default_highlight_color)
				end
			end
		end

	highlight is
			-- Highlight the view.
		do
			if highlight_color /= Void then
				rectangle.set_edge_color (create {EV_COLOR}.make_with_8_bit_rgb (highlight_color.red, highlight_color.green, highlight_color.blue))
				rectangle.set_color (create {EV_COLOR}.make_with_8_bit_rgb (highlight_color.red, highlight_color.green, highlight_color.blue))
			else
				rectangle.set_edge_color (default_highlight_color)
				rectangle.set_color (default_highlight_color)
			end
			is_highlighted := True
		end

	unhighlight is
			-- Unhighlight the view.
		do
			if color /= Void then
				rectangle.set_edge_color (create {EV_COLOR}.make_with_8_bit_rgb (color.red, color.green, color.blue))
				rectangle.set_color (create {EV_COLOR}.make_with_8_bit_rgb (color.red, color.green, color.blue))
			else
				rectangle.set_edge_color (default_color)
				rectangle.set_color (default_color)
			end
			is_highlighted := False
		end

	draw (a_target: CANVAS) is
			--
		do
			icon.set_position (create {REAL_COORDINATE}.make (item.position.x - icon.bounding_box.width/2, -item.position.y-icon.bounding_box.height/2))
			rectangle.set_points (    create {REAL_COORDINATE}.make (icon.bounding_box.point_a.x -5 -5, icon.bounding_box.point_a.y-5),
							create {REAL_COORDINATE}.make (icon.bounding_box.point_b.x +5, icon.bounding_box.point_b.x +5))
			Precursor (a_target)
		end


feature {NONE} -- Implementation

	draw_object is
			-- Draw the circle.
		do
			Precursor
		end

feature -- Access

	icon: DRAWABLE_PIXMAP

	rectangle: DRAWABLE_RECTANGLE

	default_color: EV_COLOR is
			-- Default color
		once
			create Result.make_with_8_bit_rgb (200, 200, 200)
		end

	default_highlight_color: EV_COLOR is
			-- Default highlight color
		once
			create Result.make_with_8_bit_rgb (255, 0, 0)
		end

end
