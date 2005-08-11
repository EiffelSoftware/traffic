indexing
	description: "A Button Control"
	date: "$Date $"
	revision: "$Revision $"

class
	BUTTON

inherit
	EM_DRAWABLE_CONTAINER [EM_DRAWABLE]	
		redefine
			make
		end
	
	HASHABLE
		undefine
			default_create, copy, is_equal
		end
	
	THEME
		undefine
			copy, is_equal
		end

creation
	make,
	make_with_picture,
	make_with_text
		
feature -- Initialization
	make is
			-- Creation procedure.
		do
			Precursor

			create clicked_event
			
			Current.mouse_button_down_event.subscribe (agent process_mouse_down)
			Current.mouse_button_up_event.subscribe (agent process_mouse_up)
			Current.mouse_motion_event.subscribe (agent process_mouse_motion)		
		end
		
	make_with_picture (a_picture: EM_DRAWABLE) is
			-- Create a button with picture `a_picture'
		do
			make
			pic := a_picture
			extend (pic)
		end
		
	make_with_text (a_text: STRING) is
			-- Create button with text `a_text'
		do
			make
			text := create {EM_STRING}.make (a_text, small_default_font)
			extend (text)
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
				on_button_down (me)			
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
		
	subscribe_for_click (a_listener: PROCEDURE [ANY, TUPLE [BUTTON]]) is
			-- Add `a_listener' to the subscription list.	
		require
			a_listener_not_void: a_listener /= Void
		do
			if not clicked_event.has (a_listener) then
				clicked_event.subscribe (a_listener)
			end				
		end

feature -- Attributes

	pic: EM_DRAWABLE
	
	text: EM_STRING

feature {NONE} -- Implementation

	hash_code: INTEGER
	
	down: BOOLEAN

	clicked_event: EVENT_TYPE [TUPLE [BUTTON]]
	
	
	on_button_down (me: EM_MOUSE_EVENT)	is
			-- 
		do
			if pic /= Void then
				pic.set_x_y (pic.x + 3, pic.y + 3)
			end
			if text /= Void then
				text.set_x_y (text.x + 3, text.y + 3)
			end
		end

	on_button_up (me: EM_MOUSE_EVENT) is
			-- 
		do
			if pic /= Void then
				pic.set_x_y (pic.x - 3, pic.y - 3)
			end
			if text /= Void then
				text.set_x_y (text.x - 3, text.y - 3)
			end
		end
end
