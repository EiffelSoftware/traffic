indexing
	description: "[
	
		Example widget to show the implementation of a widget with custom drawing,
		event handling and internal action.
		
		General Widget implementation:
		
		Drawing:
			Redefine 'draw_body' to draw the content on the surface of the widget.
			Important: call 'set_changed' to trigger redrawing of the widget!
		
		Events:
			See INPUT_SENSITIVE
			Important: per default a widget is not keyboard sensitive, i.e. it will never receive focus or keyboard events!
			                 use 'set_keyboard_sensitive (True)' to receive keyboard events.
		
		Internal action:
			Redefine 'next_frame' to be notified each frame-change.
			

		This example:
		A panel which can be drawn on by dragging the mouse around. A sweep line is regulary
		deleting the drawing. By clicking the right mouse button, the sweep line will be set to the
		mouse position.
		
	]"
	date: "$Date$"
	revision: "$Revision$"

class
	DRAWING_PANEL

inherit
	EM_PANEL
		redefine
			draw_body,
			next_frame
		end
	
	EM_SHARED_BITMAP_FACTORY
		export {NONE} all end
	
	EM_TIME_SINGLETON
		export {NONE} all end

create
	make

feature {NONE} -- Initialisation

	make (panel_width, panel_height: INTEGER) is
			-- Initialise with a drawing panel of size `panel_width' `panel_height'.
		do
			Bitmap_factory.create_empty_bitmap (panel_width, panel_height)
			check
				image_crated: Bitmap_factory.last_bitmap /= Void
				-- TODO: proper error handling
			end
			image := bitmap_factory.last_bitmap
			image.fill (background_color)

			make_from_dimension (panel_width, panel_height)
			set_optimal_dimension (panel_width, panel_height)
			
			set_tooltip ("drag to draw / right click to set sweep line")
			
			mouse_clicked_event.subscribe (agent handle_mouse_clicked)
			mouse_drag_start_event.subscribe (agent handle_mouse_drag_start)
			mouse_dragged_event.subscribe (agent handle_mouse_dragged)
		ensure
			image_created: image /= Void
		end

feature -- Access

	image: EM_BITMAP
			-- Bitmap that holds drawing

	sweep_line_position: INTEGER
			-- Current position of sweep line

	background_color: EM_COLOR is
			-- Background color of panel
		once
			create Result.make_white
		end
		
	sweep_line_color: EM_COLOR is
			-- Sweep line color
		once
			create Result.make_with_rgb (200, 0, 0)
		end

feature -- Miscellaneous
		
	next_frame is
			-- React on frame change.
		do
			-- Advance the sweep line all 100 milliseconds
			if time.ticks > next_sweep_line_tick then
				next_sweep_line_tick := time.ticks +100
				image.put_line_segment (sweep_line_position, 0, sweep_line_position, image.height, background_color)
				sweep_line_position := (sweep_line_position + 1) \\ image.width
				set_changed
			end
		end
	
feature -- Drawing

	draw_body is
			-- Draw the body of the widget.
		do
			surface.blit_surface (image, 0, 0)
			surface.put_line_segment (sweep_line_position, 0, sweep_line_position, image.height, sweep_line_color)
		end
	
	paint_pixel (a_x, a_y: INTEGER) is
			-- Paint the pixel at position 'a_x'6 'a_y'.
		do
			image.put_pixel (a_x, a_y, foreground_color)
			set_changed
		end
			
	paint_line (x1, y1, x2, y2: INTEGER) is
			-- Paint the pixel at position 'x' 'y'.
		do
			image.put_line_segment (x1, y1, x2, y2, foreground_color)
			set_changed
		end
		
	clear_drawing is
			-- Clear the drawing.
		do
			image.fill (background_color)
		end

feature  {NONE} -- Mouse management

	last_x: INTEGER
			-- X coordinate of last mouse event
	
	last_y: INTEGER
			-- Y coordinate of last mouse event
			
	handle_mouse_clicked (event: EM_MOUSEBUTTON_EVENT) is
			-- Handle mouse clicked event.
		do
			if event.is_left_button then
				paint_pixel (event.x, event.y)
			elseif event.is_right_button then
				sweep_line_position := event.x
				set_changed
			end
		end

	handle_mouse_drag_start (event: EM_MOUSE_EVENT) is
			-- Handle mouse drag start event.
		do
			last_x := event.x
			last_y := event.y
		end

	handle_mouse_dragged (event: EM_MOUSEMOTION_EVENT) is
			-- Handle mouse dragged event.
		do
			paint_line (last_x, last_y, event.x, event.y)
			last_x := event.x
			last_y := event.y
		end

feature {NONE} -- Implementation
	
	next_sweep_line_tick: INTEGER
			-- Next tick when the sweep-line will advance

invariant
	image_exists: image /= Void

end
