indexing
	description: "Widget to connect two zoomable containers as one controlling the other."
	author: "Rolf Bruderer"
	date: "2005/03/10"
	revision: "0.2"

class
	MAP_WIDGET_NAVIGATOR
	
create
	make
	
feature	-- Initialization

	make (a_navigation_container: ESDL_ZOOMABLE_CONTAINER; a_view_container: ESDL_ZOOMABLE_CONTAINER) is
			-- Initialize widget to use `a_navigation_container' for controlling `visible_area' of `a_view_container'.
		local
			nav_color: ESDL_COLOR		
		do
			navigation_container := a_navigation_container
			view_container := a_view_container
			
			navigation_container.mouse_button_down_event.subscribe (agent process_navigation_start)
			navigation_container.mouse_button_up_event.subscribe (agent process_navigation_stop)
			navigation_container.mouse_motion_event.subscribe (agent process_navigation_motion)		
			
			view_container.visible_area_changed_event.subscribe (agent process_view_area_changed)
			
			create nav_color.make_with_rgb (255, 0, 0)
			create new_navigation_rectangle.make_from_coordinates (0, 0, 0, 0)
			new_navigation_rectangle.set_line_color (nav_color)
			new_navigation_rectangle.set_filled (False)
			new_navigation_rectangle.set_line_width (0.01)
			navigation_container.extend (new_navigation_rectangle)
			
			create nav_color.make_with_rgb (0, 255, 0)
			create navigation_rectangle.make_from_rectangle (view_container.visible_area)
			navigation_rectangle.set_line_color (nav_color)
			navigation_rectangle.set_filled (False)
			navigation_rectangle.set_line_width (0.01)
			navigation_container.extend (navigation_rectangle)
			
		end
		
feature -- Access
		
	navigation_container: ESDL_ZOOMABLE_CONTAINER
			-- Container that controls `view_container'
	
	view_container: ESDL_ZOOMABLE_CONTAINER
			-- Container that is controlled by `navigation_container'
			
feature {NONE} -- Implementation
		
	navigation_rectangle: ESDL_RECTANGLE
			-- Rectangle in `navigation_container'
			-- showing current `visible_area'
			-- that is visible in `view_container'
	
	new_navigation_rectangle: ESDL_RECTANGLE
			-- Rectangle in `navigation_container'
			-- for choosing the new `navigation_rectangle'	
	
	process_view_area_changed is
			-- Adopt `navigation_rectangle' when `visible_area' of
			-- `view_container' changed.
		do
			navigation_rectangle.point_a.make_from_other (view_container.visible_area.upper_left)
			navigation_rectangle.point_b.make_from_other (view_container.visible_area.lower_right)	
			navigation_rectangle.update_bounding_box
		end		
		
	process_navigation_start (me: ESDL_MOUSEBUTTON_EVENT) is
			-- Start choosing a `new_navigation_rectangle'.
		do
			if me.is_left_button then
				new_navigation_rectangle.point_a.make (me.proportional_position.x, me.proportional_position.y)
				new_navigation_rectangle.point_b.make (me.proportional_position.x, me.proportional_position.y)
				new_navigation_rectangle.update_bounding_box
			end
		end	
			
	process_navigation_motion (me: ESDL_MOUSEMOTION_EVENT) is
			-- Adopt `new_navigation_rectangle'.
		do
			if me.button_state_left then
				new_navigation_rectangle.point_b.make_from_other (me.proportional_position)
			else
				new_navigation_rectangle.point_a.make (0, 0)
				new_navigation_rectangle.point_b.make (0, 0)
			end
			new_navigation_rectangle.update_bounding_box
		end		
		
	process_navigation_stop (me: ESDL_MOUSEBUTTON_EVENT) is
			-- Finish choosing a `new_navigation_rectangle'.
		do
			if me.is_left_button then
				if new_navigation_rectangle.size > 1000 then
					view_container.scroll_and_zoom_to_rectangle (new_navigation_rectangle)
				else
					view_container.center_on (new_navigation_rectangle.center)
				end
			end
			new_navigation_rectangle.point_a.make (0, 0)
			new_navigation_rectangle.point_b.make (0, 0)
			new_navigation_rectangle.update_bounding_box
		end	

end