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
			subscribe
--			make
		end

creation
	make_with_containers
	
feature -- Initialisation

	make_with_containers (a_button_container, a_description_container: ESDL_DRAWABLE_CONTAINER [ESDL_DRAWABLE]) is
			-- 
		require
			input_containers_not_void: a_button_container /= Void and then a_description_container /= Void
		do
			make
			create hash_button_example.make (10)
			
			button_container := a_button_container
			description_container := a_description_container
		ensure
			containers_not_void: button_container /= Void and then description_container /= Void			
			hash_button_example_not_void: hash_button_example /= Void
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
			width: INTEGER
		do
			Precursor {TOUCH_EXAMPLE_CONTAINER} (an_example)

			width := button_container.width
			
			if width = 0 then
				width := 300
			end
			width := width - 2 * border

			button := create {TOUCH_TEXT_BUTTON}.make_with_title_and_width_and_height (an_example.name, width, 30)
			button.set_x_y (5, hash_button_example.count * 35)

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
			width, height: INTEGER
		do
			example := hash_button_example.item (a_button)
			
			--remove old drawable
			if current_description_drawable /= Void then
				description_container.delete (current_description_drawable)
			end

			width := description_container.width
			height := description_container.height
			if width = 0 then
				width := 300
			end
			if height = 0 then
				height := 100
			end
			create description_drawable.make_with_width_and_height (width-2*border, height-2*border)
			description_drawable.set_x_y (border, border)
			
			description_drawable.put_text (example.description)
			
			
			current_example := example
			current_description_drawable := description_drawable
			
			description_container.extend (current_description_drawable)
			
		ensure
			description_drawable_in_container: description_container.has (current_description_drawable)
		end
		

feature -- Obsolete

feature -- Inapplicable

feature {NONE} -- Implementation

	border: INTEGER is 3
	hash_button_example: DS_HASH_TABLE [TOUCH_EXAMPLE, TOUCH_BUTTON]

invariant
	invariant_clause: True -- Your invariant here

end -- class TOUCH_EXAMPLE_MANAGER
