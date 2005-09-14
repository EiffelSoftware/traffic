indexing
	description: "A simple Button widget"
	date: "2005/08/31"
	revision: "1.0"

class
	TOUCH_BUTTON

inherit
	TOUCH_UI_WIDGET	
		redefine
			make
		end

creation
	make
		
feature -- Initialization
	make is
	do
		Precursor {TOUCH_UI_WIDGET}

		create clicked_event

		-- Subscribe to the mouse events
		Current.mouse_button_down_event.subscribe (agent process_mouse_down)
		Current.mouse_button_up_event.subscribe (agent process_mouse_up)
		Current.mouse_motion_event.subscribe (agent process_mouse_motion)		
	end
	
feature -- Queries
	is_down: BOOLEAN is
		do
			Result := down
		end	
	
feature -- Basic operations
	process_mouse_down (me: EM_MOUSEBUTTON_EVENT) is
		do			
			if not down and then me.button = 1 then
				down := true
				on_button_down(me)			
			end
		end
	process_mouse_up (me: EM_MOUSEBUTTON_EVENT) is
		do			
			if down  and then me.button = 1 then
				down := false
				on_button_up (me)			
				clicked_event.publish ([Current])
			end
			
		end
	process_mouse_motion (me: EM_MOUSE_EVENT) is
		do
			if down then
				down := false
				on_button_up (me)
			end
		end
		
	subscribe_for_click (a_listener: PROCEDURE [ANY, TUPLE [TOUCH_BUTTON]]) is
			-- Add `a_listener' to the subscription list.	
		require
			a_listener_not_void: a_listener /= Void
		do
			if not clicked_event.has (a_listener) then
				clicked_event.subscribe (a_listener)
			end				
		end
		
feature {NONE} -- Implementation
	down: BOOLEAN

	clicked_event: EM_EVENT_TYPE [TUPLE [TOUCH_BUTTON]]
	
	
	on_button_up (me: EM_MOUSE_EVENT)	is
			-- 
		do
		end

	on_button_down (me: EM_MOUSE_EVENT) is
			-- 
		do
		end
		
invariant
	clicked_event_not_void: clicked_event /= void

end -- class TOUCH_BUTTON
