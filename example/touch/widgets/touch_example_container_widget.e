indexing
	description: "[
					The Widget that holds the graphical representation of the chapters and its examples. 
					It also has an event that clients can subscribe to get notice of an example being selected.
					]"
	date: "2005/09/06"
	revision: "1.0"

class
	TOUCH_EXAMPLE_CONTAINER_WIDGET

inherit
	EM_DRAWABLE_CONTAINER [EM_DRAWABLE]

	EM_SHARED_STANDARD_FONTS
		export
			{NONE} all
		undefine
			default_create,
			copy,
			is_equal
		end	
create
	make_with_chapter_examples,
	make_with_exercises
	
feature -- Initialisation
	make_with_chapter_examples (chapter_examples: TOUCH_CHAPTER_CONTAINER) is
			-- Build the drawables for the chapters and examples
		require
			chapter_examples_not_void: chapter_examples /= Void
		local 
			i,j: INTEGER
			x_pos,y_pos: INTEGER
			chapter_static: TOUCH_BITMAP_STATIC
			number_static: TOUCH_BITMAP_STATIC
			examples: TOUCH_EXAMPLE_CONTAINER
			example_button: TOUCH_TEXT_BUTTON
			border: INTEGER
			chapter_height: INTEGER
			example_height: INTEGER
			fancy_grey : EM_COLOR_TTF_FONT
			fancy_blue: EM_COLOR_TTF_FONT
			title: TOUCH_TEXT_STATIC
			title_2: TOUCH_TEXT_STATIC
			
			number: TOUCH_TEXT_STATIC
			number_2: TOUCH_TEXT_STATIC
			
			number_string: STRING
		do	
			make_empty
			
			-- Set some default values
			example_height := 30
			chapter_height := 50
			border := 10
			x_pos := border + border // 2
			y_pos := border
			
			-- Iterate over every Chapter
			from
				i := 1
			until
				i > chapter_examples.count
			loop				
				-- Create the chapter background
				chapter_static := create {TOUCH_BITMAP_STATIC}.make_with_image_file_and_width_and_height ("./images/chapter_background.png", 250, chapter_height)
				chapter_static.set_x_y (x_pos, y_pos)

				-- Create the number background
				number_static := create {TOUCH_BITMAP_STATIC}.make_with_image_file_and_width_and_height ("./images/number_background.png", chapter_height, chapter_height)
				number_static.set_x_y (x_pos + 250 + border, y_pos)
				
				-- Create The chapter text drawable
				title := create{TOUCH_TEXT_STATIC}.make_with_title_and_width_and_height ("", chapter_static.width, chapter_static.height)
				title_2 := create{TOUCH_TEXT_STATIC}.make_with_title_and_width_and_height ("", chapter_static.width, chapter_static.height)
				
				create fancy_grey.make_from_ttf_font (standard_ttf_fonts.custom_font ("fancy"))
				fancy_grey.set_color ( create {EM_COLOR}.make_with_rgb (200,200,200))
				title.set_title ("CHAPTER",fancy_grey)
				
				create fancy_blue.make_from_ttf_font (standard_ttf_fonts.custom_font ("fancy"))
				fancy_blue.set_color ( create {EM_COLOR}.make_with_rgb (125,125,255))
				title_2.set_title ("CHAPTER", fancy_blue)
				
				title.set_x_y (x_pos, y_pos)
				title_2.set_x_y (x_pos+1,y_pos+1)

				
				-- Create number text drawable
				create number_string.make_empty
				number_string.append_integer (i)
				number := create{TOUCH_TEXT_STATIC}.make_with_title_and_width_and_height ("", number_static.width, number_static.height)
				number_2 := create{TOUCH_TEXT_STATIC}.make_with_title_and_width_and_height ("", number_static.width, number_static.height)

				number.set_title (number_string, fancy_grey)
				number_2.set_title (number_string, fancy_blue)

				number.set_x_y (number_static.x, number_static.y)
				number_2.set_x_y (number_static.x+1, number_static.y+1)

				
				-- Put the drawables into the container
				extend (chapter_static)
				extend (number_static)
				
				extend (title_2)
				extend (title)

				extend (number_2)
				extend (number)
				
				-- Increase y_pos value
				y_pos := y_pos + chapter_height + border

				-- Iterate over all examples from the current chapter
				examples := chapter_examples.i_th (i)				
				from
					j := 1		
				until
					j > examples.count
				loop
					-- Create the button for the example
					example_button := create {TOUCH_TEXT_BUTTON}.make_with_title_and_width_and_height (examples.i_th (j).name, 350, example_height)
					example_button.set_x_y(x_pos+border,y_pos)
					example_button.subscribe_for_click (agent process_clicked_example_button)
					extend (example_button)
					
					-- Link the example and the button
					hash_from_button_to_example.force (examples.i_th (j), example_button)
					-- Increase y_pos
					y_pos := y_pos + example_height + border
					-- Increase iteration variable value
					j := j + 1
				end
				-- Increase iteration variable value				
				i := i + 1
			end
		end
		
	make_with_exercises (exercises: TOUCH_EXAMPLE_CONTAINER) is
			-- Build the buttons for the exercises
		require
			exercises_not_void: exercises /= Void			
		local 
			i,j: INTEGER
			x_pos,y_pos: INTEGER
			exercise_button: TOUCH_TEXT_BUTTON
			border: INTEGER
			exercise_height, exercise_width: INTEGER
		do	
			make_empty
			
			exercise_height := 30
			exercise_width := 330
			border := 10
			x_pos := border + border // 2
			y_pos := border	
			
			from
				j := 1		
			until
				j > exercises.count
			loop
				exercise_button := create {TOUCH_TEXT_BUTTON}.make_with_title_and_width_and_height (exercises.i_th (j).name, exercise_width, exercise_height)
				exercise_button.set_x_y(x_pos+border,y_pos)
				exercise_button.subscribe_for_click (agent process_clicked_example_button)
				extend (exercise_button)
				
				hash_from_button_to_example.force (exercises.i_th (j), exercise_button)
				y_pos := y_pos + exercise_height + border
				j := j + 1
			end
			i := i + 1
		end		
feature -- Access
	hash_from_button_to_example: DS_HASH_TABLE [TOUCH_EXAMPLE, TOUCH_BUTTON]
	
	example_selected_event:	EM_EVENT_TYPE [TUPLE [TOUCH_EXAMPLE]]
	
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

feature -- Obsolete

feature -- GUI Agents
	process_clicked_example_button (a_button: TOUCH_BUTTON) is
			-- Find example for the button and display information about it
		local
			an_example: TOUCH_EXAMPLE
		do
			-- Search example corresponding to the pressed button
			an_example := hash_from_button_to_example.item (a_button)

			-- Publish the 'example_selected_event'
			example_selected_event.publish ([an_example])
		end
		
feature {NONE} -- Implementation
	make_empty is
			-- Establish the invariant and call base class creation feature
		do
			make
--			if hash_from_button_to_example = Void then
				create hash_from_button_to_example.make (100)
--			end
--			if example_selected_event = Void then
				create example_selected_event
--			end
		end
		
invariant
	events_created: example_selected_event /= Void
	hash_map_created: hash_from_button_to_example /= Void

end -- class TOUCH_EXAMPLE_CONTAINER_WIDGET
