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
		Current.mouse_button_up_event.subscribe (agent process_mouse_click)
	end
	
feature -- Basic operations
	process_mouse_click (me: ESDL_MOUSEBUTTON_EVENT) is
		do
	 		--title.set_x_y (title.x + 5, title.y)
	 		clicked_event.publish ( [Current])
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

	hash_code: INTEGER
	clicked_event: EVENT_TYPE [TUPLE [TOUCH_BUTTON]]
	
invariant
	invariant_clause: True -- Your invariant here

end -- class TOUCH_BUTTON
