indexing
	description: "A simple button, which can either consist of text or an image or both."
	date: "$Date$"
	revision: "$Revision$"

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
	make, make_with_picture, make_with_text
		
feature -- Initialization

	make is
			-- Creation procedure.
		do
			Precursor
			create clicked_event
			
			-- Subscribe to mouse events.
			mouse_button_down_event.subscribe (agent process_mouse_down)
			mouse_button_up_event.subscribe (agent process_mouse_up)
			mouse_motion_event.subscribe (agent process_mouse_motion)
		end
		
	make_with_picture (a_picture: like picture) is
			-- Create a button with picture `a_picture'.
		require
			a_picture_exists: a_picture /= Void
		do
			make
			picture := a_picture
			extend (picture)
		ensure
			picture_set: picture = a_picture
			picture_added: has (picture)
		end
		
	make_with_text (a_text: STRING) is
			-- Create button with text `a_text'.
		require
			a_text_exists: a_text /= Void
		do
			make
			create text.make (a_text, Small_default_font)
			extend (text)
		ensure
			text_exists: text /= Void
			text_added: has (text)
		end	
	
feature -- Queries

	is_down: BOOLEAN is
			-- Is button currently pressed down?
		do
			Result := down
		end	
	
feature -- Event Handling

	process_mouse_down (me: EM_MOUSEBUTTON_EVENT) is
			-- Handle mouse down event.
		require
			me_exists: me /= Void
		do			
			if not down and then me.button = 1 then
				down := True
				on_button_down (me)			
			end
		end
		
	process_mouse_up (me: EM_MOUSEBUTTON_EVENT) is
			-- Handle mouse up event.
		require
			me_exists: me /= Void
		do			
			if down  and then me.button = 1 then
				down := False
				on_button_up (me)			
				clicked_event.publish ([Current])
			end
		end
		
	process_mouse_motion (me: EM_MOUSE_EVENT) is
			-- Handle mouse motion event.
		require
			me_exists: me /= Void			
		do
			if down then
				down := False
				on_button_up (me)
			end
		end
		
	subscribe_for_click (a_listener: PROCEDURE [ANY, TUPLE [BUTTON]]) is
			-- Add `a_listener' to the subscription list.	
		require
			a_listener_exists: a_listener /= Void
		do
			if not clicked_event.has (a_listener) then
				clicked_event.subscribe (a_listener)
			end
		ensure
			a_listener_subscribed: clicked_event.has (a_listener)
		end

feature -- Attributes

	picture: EM_DRAWABLE
			-- Picture to be displayed as button.
	
	text: EM_STRING
			-- Text to be displayed as button.

feature {NONE} -- Implementation

	hash_code: INTEGER
			-- Hash code of this button.
		
	down: BOOLEAN
			-- Is button pressed down?

	clicked_event: EM_EVENT_TYPE [TUPLE [BUTTON]]
			-- Button clicked event.
		
	on_button_down (me: EM_MOUSE_EVENT)	is
			-- What happens when button is pressed.
		do
			if picture /= Void then
				picture.set_x_y (picture.x + 3, picture.y + 3)
			end
			if text /= Void then
				text.set_x_y (text.x + 3, text.y + 3)
			end
		end

	on_button_up (me: EM_MOUSE_EVENT) is
			-- What happens when button is released.
		do
			if picture /= Void then
				picture.set_x_y (picture.x - 3, picture.y - 3)
			end
			if text /= Void then
				text.set_x_y (text.x - 3, text.y - 3)
			end
		end
		
end
