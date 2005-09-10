indexing
	description: "Widget to connect two zoomable containers as one controlling the other."
	date: "$Date$"
	revision: "$Revision$"

class
	NAVIGATOR
	
create
	make
	
feature	-- Initialization

	make (a_navigation_container: like navigation_container; a_view_container: like view_container) is
			-- Initialize widget to use `a_navigation_container' for controlling `visible_area' of `a_view_container'.
		require
			a_navigation_container_exists: a_navigation_container /= Void
			a_view_container_exists: a_view_container /= Void
		local
			navigation_color: EM_COLOR		
		do
			navigation_container := a_navigation_container
			view_container := a_view_container
			
			-- Subscribe to events.
			navigation_container.mouse_button_down_event.subscribe (agent process_navigation_start)
			navigation_container.mouse_button_up_event.subscribe (agent process_navigation_stop)
			navigation_container.mouse_motion_event.subscribe (agent process_navigation_motion)		
			view_container.visible_area_changed_event.subscribe (agent process_view_area_changed)

			-- Create and display new navigation rectangle.
			create navigation_color.make_with_rgb (255, 0, 0)
			create new_navigation_rectangle.make_from_coordinates (0, 0, 0, 0)
			new_navigation_rectangle.set_line_color (navigation_color)
			new_navigation_rectangle.set_filled (False)
			new_navigation_rectangle.set_line_width (0.01)
			navigation_container.extend (new_navigation_rectangle)
			
			-- Create and display current navigation rectangle.
			create navigation_color.make_with_rgb (0, 255, 0)
			create navigation_rectangle.make_from_rectangle (view_container.visible_area)
			navigation_rectangle.set_line_color (navigation_color)
			navigation_rectangle.set_filled (False)
			navigation_rectangle.set_line_width (0.01)
			navigation_container.extend (navigation_rectangle)
		ensure
			nav_container_set: navigation_container = a_navigation_container
			view_container_set: view_container = a_view_container
			new_nav_rect_added: navigation_container.has (new_navigation_rectangle)
			nav_rect_added: navigation_container.has (navigation_rectangle)
		end
		
feature -- Access
		
	navigation_container: EM_ZOOMABLE_CONTAINER
			-- Container that controls `view_container'.
	
	view_container: EM_ZOOMABLE_CONTAINER
			-- Container that is controlled by `navigation_container'.
			
feature {NONE} -- Implementation
		
	navigation_rectangle: EM_RECTANGLE
			-- Rectangle in `navigation_container' showing current `visible_area'
			-- that is visible in `view_container'.
	
	new_navigation_rectangle: EM_RECTANGLE
			-- Rectangle in `navigation_container' for choosing the new `navigation_rectangle'.
	
	process_view_area_changed is
			-- Adopt `navigation_rectangle' when `visible_area' of `view_container' changed.
		do
			navigation_rectangle.point_a.make_from_other (view_container.visible_area.upper_left)
			navigation_rectangle.point_b.make_from_other (view_container.visible_area.lower_right)	
			navigation_rectangle.update_bounding_box
		end		
		
	process_navigation_start (me: EM_MOUSEBUTTON_EVENT) is
			-- Start choosing a `new_navigation_rectangle'.
		require
			me_exists: me /= Void
		do
			if me.is_left_button then
				new_navigation_rectangle.point_a.make (me.proportional_position.x, me.proportional_position.y)
				new_navigation_rectangle.point_b.make (me.proportional_position.x, me.proportional_position.y)
				new_navigation_rectangle.update_bounding_box
			end
		end	
			
	process_navigation_motion (me: EM_MOUSEMOTION_EVENT) is
			-- Adopt `new_navigation_rectangle'.
		require
			me_exists: me /= Void
		do
			if me.button_state_left then
				new_navigation_rectangle.point_b.make_from_other (me.proportional_position)
			else
				new_navigation_rectangle.point_a.make (0, 0)
				new_navigation_rectangle.point_b.make (0, 0)
			end
			new_navigation_rectangle.update_bounding_box
		end		
		
	process_navigation_stop (me: EM_MOUSEBUTTON_EVENT) is
			-- Finish choosing a `new_navigation_rectangle'.
		require
			me_exists: me /= Void
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

invariant
	navigation_container_exists: navigation_container /= Void
	view_container_exists: view_container /= Void
	
end
