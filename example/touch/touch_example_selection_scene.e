indexing
	description: "[
				The main scene of TOUCH
				]"
	author: "Roger Kueng"
	date: "2005/07/12"
	revision: "1.0"

class
	TOUCH_EXAMPLE_SELECTION_SCENE

inherit
	ESDL_SCENE
	
	ESDL_SHARED_STANDARD_FONTS
		export
			{NONE} all
		undefine
			default_create
		end
		
	ESDL_SHARED_COLORS
		export
			{NONE} all
		undefine
			default_create
		end
	

feature {NONE} --Implementation
	
	--contains the run_button
	settings_container: ESDL_ZOOMABLE_CONTAINER
	
	chapter_examples: TOUCH_CHAPTER_CONTAINER

	hash_from_button_to_example: DS_HASH_TABLE [TOUCH_EXAMPLE, TOUCH_BUTTON]
	
	--Selected and Previewed Example
	current_example: TOUCH_EXAMPLE
	
feature -- Views			
	run_button: TOUCH_BUTTON
	last_chapter: TOUCH_BUTTON
	next_chapter: TOUCH_BUTTON

	background: TOUCH_BITMAP_STATIC
	
	chapters_container_widget: TOUCH_SCROLLABLE_WIDGET 
	
	console: TOUCH_TEXTLIST
	
feature -- Scene Initialization
		
	fill_chapter_examples is
			-- 
		local
			example_1, example_2, example_3: TOUCH_EXAMPLE
		do
		
			--Build Chapter-Example-Tree
			example_1 := create {EXAMPLE_1}
			example_2 := create {TOUCH_CITY_CHANGE_EXAMPLE}
			example_3 := create {TOUCH_CITY_CHANGE_EXAMPLE}
			
			create chapter_examples.make
			
			chapter_examples.set_count (5)
			chapter_examples.i_th (1).subscribe (example_1)
			chapter_examples.i_th (2).subscribe (example_1)
			chapter_examples.i_th (3).subscribe (example_1)
			chapter_examples.i_th (4).subscribe (example_2)
			chapter_examples.i_th (4).subscribe (example_1)
			chapter_examples.i_th (5).subscribe (example_1)
			chapter_examples.i_th (5).subscribe (example_2)
			chapter_examples.i_th (5).subscribe (example_3)
		end		

	initialize_scene is
			-- Build 'main_container' containing zoomable map.
		local
			title: ESDL_DRAWABLE

			width, height: INTEGER
			border: INTEGER
			title_offset: INTEGER
			
			left_foreground: TOUCH_BITMAP_STATIC
			left_background: ESDL_RECTANGLE
			upper_background: TOUCH_BITMAP_STATIC
			settings_background: TOUCH_BITMAP_STATIC
			
			up_button: TOUCH_BUTTON
			down_button: TOUCH_BUTTON

		do			
			width := 1024
			height := 768
			border := 10
			title_offset := 60
			
			if not initialized then
				initialized := true


				fill_chapter_examples
	
				

				-- Build grey background color.
--				create background_color.make_with_rgb (100, 100, 100)	
				create background_color.make_with_rgb (0, 0, 0)
				
--				create background.make_with_image_file_and_width_and_height ("./images/background.png", width, height)
				
				--Build up/down buttons
				up_button := create  {TOUCH_BITMAP_BUTTON}.make_with_image_file_and_width_and_height 
					("./images/arrow_up.png", 64, 64)
				up_button.set_x_y (border + 400, title_offset + border)

				down_button := create  {TOUCH_BITMAP_BUTTON}.make_with_image_file_and_width_and_height 
					("./images/arrow_down.png", 64, 64)
				down_button.set_x_y (border + 400, title_offset + border + 600 - down_button.height)

				up_button.subscribe_for_click (agent process_scroll_up)
				down_button.subscribe_for_click (agent process_scroll_down)	
				
				
				--Build Backgrounds
				create left_foreground.make_with_image_file_and_width_and_height 
					("./images/background_with_alpha.png", 400, 600)
				left_foreground.set_x_y (border // 2, title_offset + border)
				
				create left_background.make_from_position_and_size
					(left_foreground.x, left_foreground.y, left_foreground.width-1, left_foreground.height-1)
				left_background.set_fill_color (create {ESDL_COLOR}.make_with_rgb (240, 240, 240))
				
				create upper_background.make_with_image_file_and_width_and_height 
					("./images/background_filled.png", width-border, title_offset-border)
				upper_background.set_x_y (border // 2, border // 2)
				
				create settings_background.make_with_image_file_and_width_and_height 
					("./images/background_filled.png", (0.3*width-2*border).rounded, (0.2*height-2*border).rounded)
				settings_background.set_x_y ((0.7*width+border).rounded, (0.8*height+border).rounded)
				
				
				-- Build title
				title := text_box ("ESDL TOUCH", width-2*border, title_offset-2*border)
				title.set_x_y (border, border)
				
				
				--Build Settings container
				create settings_container.make ((0.3*width-2*border).rounded, (0.2*height-2*border).rounded)
				settings_container.set_x_y ((0.7*width+border).rounded, (0.8*height+border).rounded)
	
		
				--Build Run Button
				run_button := create {TOUCH_TEXT_BUTTON}.make_with_title_and_width_and_height 
					("RUN EXAMPLE", settings_container.width-2*border, 30)
				run_button.set_x_y (border, border)
				settings_container.extend (run_button)
				run_button.subscribe_for_click (agent process_clicked_run_button)
	
				
				--Build Console
				create console.make_with_width_and_height (500, 200)
				console.set_x_y (width - border*2 - console.width, 400);
	
				--Build Chapter Buttons
--				last_chapter := create {TOUCH_BITMAP_BUTTON}.make_with_image_file_and_width_and_height ("images\\last_chapter.png", 250, 50)
--				last_chapter.set_x_y (border, title_offset + border)
--				last_chapter.subscribe_for_click (agent process_clicked_last_chapter_button)
				
--				next_chapter := create {TOUCH_BITMAP_BUTTON}.make_with_image_file_and_width_and_height ("images\\next_chapter.png", 250, 50)
--				next_chapter.set_x_y (width - border - next_chapter.width, title_offset + border)
--				next_chapter.subscribe_for_click (agent process_clicked_next_chapter_button)
				
				
				--Create Chapters_Container_widget
				create chapters_container_widget.make (400 - 2*border, 600 - 3*border)
				chapters_container_widget.set_x_y (border, title_offset + border + border)
				--Build The Visual Chapter Tree
				chapters_container_widget.set_horizontal_scroll (false)
				build_chapter_examples_drawables (chapters_container_widget)

				chapters_container_widget.calculate_object_area
				
				
				--Put Drawables to main_container
				main_container.extend (up_button)
				main_container.extend (down_button)
				main_container.extend (upper_background)
				main_container.extend (left_background)
				main_container.extend (settings_background)
				main_container.extend (title)
				main_container.extend (settings_container)
				main_container.extend (console)

--				main_container.extend (last_chapter)
--				main_container.extend (next_chapter)
				
				main_container.extend (chapters_container_widget)

				main_container.extend (left_foreground)

			end

		end
		
	
feature {NONE} -- Implementation

	initialized: BOOLEAN

	text_box (a_text: STRING; a_width, a_height: INTEGER): ESDL_DRAWABLE is
			-- A new black box of size `a_width' and `a_height'
			-- with `a_text' in it (centered).
		require
			a_title_not_void: a_text /= Void
		local
			box: ESDL_DRAWABLE_CONTAINER [ESDL_DRAWABLE]
			background_rectangle: ESDL_RECTANGLE
			text: ESDL_STRING
			tx, ty: INTEGER			
		do
			-- Build text box container.
			create box.make
			Result := box
					
			-- Build Background.
			create background_rectangle.make_from_coordinates (0, 0, a_width, a_height)
			background_rectangle.set_fill_color (black)
			box.extend (background_rectangle)
			
			-- Build Title text.
			create text.make (a_text, standard_bmp_fonts.medium_font)
			box.extend (text)			
			
			-- Set text centered in box.
			tx := (a_width - text.width) // 2
			ty := (a_height - text.height) // 2
			text.set_x_y (tx, ty)	
		end
		
	build_chapter_examples_drawables (container: ESDL_DRAWABLE_CONTAINER [ESDL_DRAWABLE]) is
			-- 
		require
			container_not_void: container /= Void
		local 
			i,j: INTEGER
			x,y: INTEGER
			chapter_static: TOUCH_BITMAP_STATIC
			number_static: TOUCH_BITMAP_STATIC
			examples: TOUCH_EXAMPLE_CONTAINER
			example_button: TOUCH_TEXT_BUTTON
			border: INTEGER
			chapter_height: INTEGER
			example_height: INTEGER
			number_filename: STRING
		do
			
			create hash_from_button_to_example.make (20)
			
			example_height := 30
			chapter_height := 50
			border := 10
			x := border + border // 2
			y := border
			from
				i := 1
			until
				i > chapter_examples.count
			loop				
				chapter_static := create {TOUCH_BITMAP_STATIC}.make_with_image_file_and_width_and_height ("./images/chapter.png", 250, chapter_height)
				chapter_static.set_x_y (x, y)
				create number_filename.make_from_string ("./images/number_")
				number_filename.append_integer (i \\ 10)
				number_filename.append_string (".png")
				number_static := create {TOUCH_BITMAP_STATIC}.make_with_image_file_and_width_and_height (number_filename, chapter_height, chapter_height)
				number_static.set_x_y (x + 250 + border, y)
				container.extend (chapter_static)
				container.extend (number_static)
				y := y + chapter_height + border

				examples := chapter_examples.i_th (i)				
				from
					j := 1		
				until
					j > examples.count
				loop
					example_button := create {TOUCH_TEXT_BUTTON}.make_with_title_and_width_and_height (examples.i_th (j).name, 350, example_height)
					example_button.set_x_y(x+border,y)
					example_button.subscribe_for_click (agent process_clicked_example_button)
					container.extend (example_button)
					
					hash_from_button_to_example.force (examples.i_th (j), example_button)
					y := y + example_height + border
					j := j + 1
				end
				i := i + 1
			end
		end
		
feature {NONE} -- Agents, GUI events		

	process_clicked_example_button (a_button: TOUCH_BUTTON) is
			-- 
		local
			an_example: TOUCH_EXAMPLE
		do
				an_example := hash_from_button_to_example.item (a_button)
				if an_example /= Void then
					current_example := an_example
					
					console.put_text (an_example.description)
				end			
		end
		
	process_clicked_run_button (a_button: TOUCH_BUTTON) is
			-- User clicked the run example button
		local
--			runtime: TOUCH_EXAMPLE_RUNTIME_IMPLEMENTATION
			example_scene: ESDL_SCENE
			example: TOUCH_EXAMPLE
		do
			example := current_example

			--If example not Void then run it
			if example /= Void then
				
				example_scene := example.run_with_scene (Void)
				--Does not work with Current
--				example_scene := example.run_with_scene (Current)
				
				if example_scene /= Void then		
					next_scene := example_scene
					event_loop.stop
				else
					--Switch View
--					switch_view_to_example_running
					
					--Create runtime
--					create runtime.make_with_map_and_map_widget_and_textlist (traffic_map, map_widget, console)

					--Run example
--					example.run (runtime)	
				end
			end			
		end

	process_clicked_last_chapter_button (a_button: TOUCH_BUTTON) is		
		do
			
		end
		
	process_clicked_next_chapter_button (a_button: TOUCH_BUTTON) is		
		do
			
		end

	process_scroll_up (a_button: TOUCH_BUTTON) is
			-- 
		do
			chapters_container_widget.scroll (create {ESDL_VECTOR_2D}.make (0, -24))
		end
		
	process_scroll_down (a_button: TOUCH_BUTTON) is
			-- 
		do
			chapters_container_widget.scroll (create {ESDL_VECTOR_2D}.make (0, +24))			
		end
		
invariant
	invariant_clause: True -- Your invariant here

end -- class TOUCH_EXAMPLE_SELECTION_SCENE
