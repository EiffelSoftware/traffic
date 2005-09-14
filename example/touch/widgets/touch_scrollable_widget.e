indexing
	description: "A simple scroller widget which can enable horizontal and/or vertical scrolling separatly"
	date: "2005/08/31"
	revision: "1.0"
class
	TOUCH_SCROLLABLE_WIDGET
	
inherit
	EM_ZOOMABLE_CONTAINER
		redefine
			make
		end
		
create
	make
	
feature -- Queries
	allow_horizontal_scroll: BOOLEAN

	allow_vertical_scroll: BOOLEAN

feature -- Status Setting

	set_horizontal_scroll (bool: BOOLEAN) is
			-- set false if you don't want to allow horizontal scrolling
		do
			allow_horizontal_scroll := bool
		ensure
			allow_horizontal_scroll_set: allow_horizontal_scroll = bool			
		end

	set_vertical_scroll (bool: BOOLEAN) is
			-- set false if you don't want to allow vertical scrolling
		do
			allow_vertical_scroll := bool
		ensure
			allow_vertical_scroll_set: allow_vertical_scroll = bool
		end
		
feature {NONE} -- Initialization
	make (a_width, a_height: INTEGER) is
			-- Make empty container with size `a_width' and `a_height'.		
		do
			Precursor (a_width, a_height)		
			mouse_motion_event.subscribe (agent process_mouse_move_event)
			
		allow_horizontal_scroll := true;
		allow_vertical_scroll := true;
		ensure then
			no_contained_drawables: is_empty
		end

feature {NONE} -- Implementation

	process_mouse_move_event (a_event: EM_MOUSEMOTION_EVENT) is
			-- Process mouse move event over `Current' to zoom or scroll Current.
		local 
			motion: EM_VECTOR_2D
		do
			if a_event.button_state_right then
				create motion.make (-a_event.motion.x, -a_event.motion.y)
				if not allow_horizontal_scroll then
					motion.set_x (0)
				end
				if not allow_vertical_scroll then
					motion.set_y (0)
				end
				scroll_proportional (motion)	
				-- should be caught, but it errors when caught
--				a_event.set_caught (true)
			end
		end	

end -- class EM_ZOOMABLE_WIDGET
