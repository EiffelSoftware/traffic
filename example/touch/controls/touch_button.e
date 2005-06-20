indexing
	description: "Objects that ..."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

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
--		make_with_title_width_height
		
feature -- Initialization
	make is
	do
		Precursor {ESDL_DRAWABLE_CONTAINER}
		default_create

		hash_code := id_generator.new_id

		create clicked_event
		Current.mouse_button_down_event.subscribe (agent process_mouse_click)
	end
		
	set_title_width_height (a_text: STRING; a_width, a_height: INTEGER) is
		require
			a_title_not_void: a_text /= Void
		local			
			tx, ty: INTEGER			
			color_gray: ESDL_COLOR
		do
			create color_gray.make_with_rgb (180, 180, 180)
			-- Build Background.
			create background.make_from_coordinates (0, 0, a_width, a_height)
			background.set_fill_color (color_gray)
			extend (background)

			-- Build Title text.
			create title.make (a_text, standard_fonts.small_font)
			extend (title)
			
			-- Set text centered in box.
			tx := (a_width - title.width) // 2
			ty := (a_height - title.height) // 2
			title.set_x_y (tx, ty)	
			
			--Build border
			create border.make_from_position_and_size (0, 0, a_width, a_height)
			border.set_line_color (white)
			border.set_line_width (3)
			border.set_filled (false)
			extend (border)
		end

feature -- Access

feature -- Measurement

feature -- Status report

feature -- Status setting

feature -- Cursor movement

feature -- Element change

feature -- Removal

feature -- Resizing

feature -- Transformation

feature -- Conversion

feature -- Duplication

feature -- Miscellaneous

feature -- Basic operations
	process_mouse_click (me: ESDL_MOUSEBUTTON_EVENT) is
		do
	 		title.set_x_y (title.x + 5, title.y)
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
		
feature -- Obsolete

feature -- Inapplicable

feature {NONE} -- Implementation
	hash_code: INTEGER

	title: ESDL_STRING
	border: ESDL_RECTANGLE
	background: ESDL_RECTANGLE
	
	clicked_event: EVENT_TYPE [TUPLE [TOUCH_BUTTON]]

invariant
	invariant_clause: True -- Your invariant here

end -- class TOUCH_BUTTON
