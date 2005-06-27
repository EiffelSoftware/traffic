indexing
	description: "Class managing the display and execution of examples"
	author: "Roger Kueng"
	date: "2005/06/20"
	revision: "alpha"

class
	TOUCH_EXAMPLE_MANAGER

inherit
	TOUCH_EXAMPLE_CONTAINER
		redefine
			subscribe,
			make
		end

creation
	make
feature -- Creation
	make is
			-- 
		do
			Precursor {TOUCH_EXAMPLE_CONTAINER}
			create button_container.make
			create description_container.make
			create hash_button_example.make (10)
			
			button_container.set_x_y (700, 50)

			description_container.set_x_y (10, 550)
		end
		

feature -- Access
	button_container: ESDL_DRAWABLE_CONTAINER [ESDL_DRAWABLE]

	description_container: ESDL_DRAWABLE_CONTAINER [ESDL_DRAWABLE]

	current_description_drawable: ESDL_DRAWABLE
	
	current_example: TOUCH_EXAMPLE
	
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
	subscribe (an_example: TOUCH_EXAMPLE) is
		local
			button: TOUCH_BUTTON
		do
			Precursor {TOUCH_EXAMPLE_CONTAINER} (an_example)
			
			create button.make_with_title_and_width_and_height (an_example.name, 300, 30)
			button.set_x_y (0, hash_button_example.count * 35)

			button.subscribe_for_click (agent process_button_clicked)

			hash_button_example.force (an_example, button)
			
			button_container.extend (button)
			
		end
		
	process_button_clicked( a_button: TOUCH_BUTTON) is
			--show the clicked_button's associated example
		require
			a_button_not_void: a_button /= Void
		local
			example: TOUCH_EXAMPLE
			--debug_button: TOUCH_BUTTON
			description_drawable: TOUCH_TEXTLIST
		do
			example := hash_button_example.item (a_button)
			
--			create debug_button.make
--			debug_button.set_title_width_height (example.description, 600, 30)
--			debug_button.set_x_y (10, 10)
			create description_drawable.make_with_width_and_height (600, 300)
			
			description_drawable.put_text (example.description)
			
			--remove old drawable
			if current_description_drawable /= Void then
				description_container.delete (current_description_drawable)
			end
--			current_description_drawable := debug_button
			
			current_example := example
			current_description_drawable := description_drawable
			
			description_container.extend (current_description_drawable)
			
		ensure
			description_drawable_in_container: description_container.has (current_description_drawable)
		end
		

feature -- Obsolete

feature -- Inapplicable

feature {NONE} -- Implementation

	hash_button_example: DS_HASH_TABLE [TOUCH_EXAMPLE, TOUCH_BUTTON]

invariant
	invariant_clause: True -- Your invariant here

end -- class TOUCH_EXAMPLE_MANAGER
