indexing
	description: "A Button Control"
	author: "Roger Kueng"
	date: "2005/06/20"
	revision: "1.0"

class
	TOUCH_BUTTON

inherit
		ESDL_DRAWABLE_CONTAINER [ESDL_DRAWABLE]
			redefine
				make
			end
	--	ESDL_SCENE
				
		ESDL_SHARED_STANDARD_FONTS
			export
				{NONE} all
			undefine
				copy,
				is_equal,
				default_create
			end
			
		ESDL_SHARED_COLORS
			export
				{NONE} all
			undefine
				copy,
				is_equal,
				default_create
			end	
			
		HASHABLE
			undefine
				--default_create,
				copy,
				is_equal
			redefine
				hash_code
			end
			
		SHARED_ID_GENERATOR
			undefine
				copy,
				is_equal,
				default_create
			end
			
	creation
		make
		
feature -- Initialization
	make is
	do
		Precursor {ESDL_DRAWABLE_CONTAINER}
		default_create
		hash_code := id_generator.new_id

		create clicked_event

		Current.mouse_button_down_event.subscribe (agent process_mouse_down)
		Current.mouse_button_up_event.subscribe (agent process_mouse_up)
		Current.mouse_motion_event.subscribe (agent process_mouse_motion)		
	end
	
feature -- Basic operations
	process_mouse_down (me: ESDL_MOUSEBUTTON_EVENT) is
		do			
			if not is_down and then me.button = 1 then
				is_down := true
				on_button_down(me)			
			end
		end
	process_mouse_up (me: ESDL_MOUSEBUTTON_EVENT) is
		do			
			if is_down  and then me.button = 1 then
				is_down := false
				on_button_up (me)			
				clicked_event.publish ([Current])
			end
			
		end
	process_mouse_motion (me: ESDL_MOUSE_EVENT) is
		do
			if is_down then
				is_down := false
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
		
feature {NONE} --implementation
	is_down: BOOLEAN

	hash_code: INTEGER
	clicked_event: EVENT_TYPE [TUPLE [TOUCH_BUTTON]]
	
	
	on_button_up (me: ESDL_MOUSE_EVENT)	is
			-- 
		do
		end

	on_button_down (me: ESDL_MOUSE_EVENT) is
			-- 
		do
		end
		
invariant
	invariant_clause: True -- Your invariant here

end -- class TOUCH_BUTTON
