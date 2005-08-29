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
	EM_SCENE
		redefine
			handle_outside_event
		end
	
	EM_SHARED_STANDARD_FONTS
		export
			{NONE} all
		undefine
			default_create
		end
		
	EM_SHARED_COLORS
		export
			{NONE} all
		undefine
			default_create
		end
	

feature {NONE} --Implementation
	
	--contains the run_button
	settings_container: EM_ZOOMABLE_CONTAINER
	
	chapter_examples: TOUCH_CHAPTER_CONTAINER

	hash_from_button_to_example: DS_HASH_TABLE [TOUCH_EXAMPLE, TOUCH_BUTTON]
	
	--Selected and Previewed Example
	current_example: TOUCH_EXAMPLE
	
feature -- Views			
	exit_button: TOUCH_BUTTON
	run_button: TOUCH_BUTTON
	last_chapter: TOUCH_BUTTON
	next_chapter: TOUCH_BUTTON

	scroll_up: TOUCH_BUTTON
	scroll_down: TOUCH_BUTTON
	
	background: TOUCH_BITMAP_STATIC
	
	chapters_container_widget: TOUCH_SCROLLABLE_WIDGET 
	
	console: TOUCH_TEXTLIST

	pictures_container: EM_DRAWABLE_CONTAINER [EM_DRAWABLE]
	
feature -- Scene Initialization
		
	fill_chapter_examples is
			-- 
		local
			example_1, example_2, example_3, example_4, example_5, example_6: TOUCH_EXAMPLE
		do
		
			--Build Chapter-Example-Tree
			example_1 := create {PREVIEW}
			example_2 := create {EXAMPLE_2}
			example_3 := create {TOUCH_CITY_CHANGE_EXAMPLE}
			example_4 := create {LINE_BUILDING}
			example_5 := create {TOUR}
			example_6 := create {COMMANDS}
			
			create chapter_examples.make
			
			chapter_examples.set_count (5)
--			chapter_examples.i_th (1).subscribe (example_1)
			chapter_examples.i_th (2).subscribe (example_1)
			chapter_examples.i_th (3).subscribe (example_5)
			chapter_examples.i_th (3).subscribe (example_6)
			chapter_examples.i_th (4).subscribe (example_2)
			chapter_examples.i_th (4).subscribe (example_1)
			chapter_examples.i_th (5).subscribe (example_2)
			chapter_examples.i_th (5).subscribe (example_3)
			chapter_examples.i_th (5).subscribe (example_4)
		end		

	initialize_scene is
			-- Build 'main_container' containing zoomable map.
		local
			title: TOUCH_TEXT_STATIC
			title_2: TOUCH_TEXT_STATIC

			width, height: INTEGER
			border: INTEGER
			title_offset: INTEGER
			
			left_foreground: TOUCH_BITMAP_STATIC
			left_background: EM_RECTANGLE
			upper_background: TOUCH_BITMAP_STATIC
			settings_background: TOUCH_BITMAP_STATIC
			
--			up_button: TOUCH_BUTTON
--			down_button: TOUCH_BUTTON

			fancy_white, fancy_red: EM_COLOR_TTF_FONT
			directory: STRING
		do			
			width := 1024
			height := 768
			border := 10
			title_offset := 100
			
			if not initialized then
				
				initialized := true

				fill_chapter_examples

				--Initialize example pictures container
				create pictures_container.make
				pictures_container.set_x_y (width - border*2 - 500, title_offset + border)
				
				
				-- Build black background color.
				create background_color.make_with_rgb (0, 0, 0)
				

				--Build up/down buttons
				scroll_up := create  {TOUCH_BITMAP_BUTTON}.make_with_image_file_and_width_and_height 
					("./images/arrow_up.png", 64, 64)
				scroll_up.set_x_y (border + 400, title_offset + border)

				scroll_down := create  {TOUCH_BITMAP_BUTTON}.make_with_image_file_and_width_and_height 
					("./images/arrow_down.png", 64, 64)
				scroll_down.set_x_y (border + 400, title_offset + border + 600 - scroll_down.height)

				scroll_up.subscribe_for_click (agent process_scroll_up)
				scroll_down.subscribe_for_click (agent process_scroll_down)	
				
				
				--Build Backgrounds
				create left_foreground.make_with_image_file_and_width_and_height 
					("./images/background_with_alpha.png", 400, 600)
				left_foreground.set_x_y (border // 2, title_offset + border)
				
				create left_background.make_from_position_and_size
					(left_foreground.x, left_foreground.y, left_foreground.width-1, left_foreground.height-1)
				left_background.set_fill_color (create {EM_COLOR}.make_with_rgb (240, 240, 240))
				
				create upper_background.make_with_image_file_and_width_and_height 
					("./images/title_background.png", width-border, title_offset-border)
				upper_background.set_x_y (border // 2, border // 2)
				
				create settings_background.make_with_image_file_and_width_and_height 
					("./images/background_filled.png", (0.3*width-2*border).rounded, (0.17*height-2*border).rounded)
				settings_background.set_x_y ((0.7*width+border).rounded, (0.83*height+border).rounded)
				
				
				--Build Settings container
				create settings_container.make ((0.3*width-2*border).rounded, (0.17*height-2*border).rounded)
				settings_container.set_x_y ((0.7*width+border).rounded, (0.83*height+border).rounded)
	
		
				--Build Run Button
				run_button := create {TOUCH_TEXT_BUTTON}.make_with_title_and_width_and_height 
					("Run Example", settings_container.width-2*border, 30)
				run_button.set_x_y (border, border)
				settings_container.extend (run_button)
				run_button.subscribe_for_click (agent process_clicked_run_button)
	
				--Build Exit Button
				exit_button := create {TOUCH_TEXT_BUTTON}.make_with_title_and_width_and_height 
					("Exit Application", settings_container.width-2*border, 30)
				exit_button.set_x_y (border, run_button.y + run_button.height + border*2)
				settings_container.extend (exit_button)
				exit_button.subscribe_for_click (agent process_clicked_exit_button)				
				
				--Load Custom Font
	 			if not standard_ttf_fonts.has_custom_font ("fancy_big") then
					directory := standard_ttf_fonts.font_dirname
	 				standard_ttf_fonts.set_font_dirname ("font")
					standard_ttf_fonts.load_custom_font("fancy.ttf", 78, "fancy_big")
		 			if not standard_ttf_fonts.has_custom_font ("fancy") then				
						standard_ttf_fonts.load_custom_font("fancy.ttf", 32, "fancy")
					end
					standard_ttf_fonts.set_font_dirname(directory)
				end

				-- Build title
				title := create{TOUCH_TEXT_STATIC}.make_with_title_and_width_and_height ("Hooray", width-2*border, title_offset-2*border)
				title_2 := create{TOUCH_TEXT_STATIC}.make_with_title_and_width_and_height ("Hooray", width-2*border, title_offset-2*border)


				create fancy_white.make_from_ttf_font (standard_ttf_fonts.custom_font ("fancy_big"))
				fancy_white.set_color (white)
				title.set_title ("TOUCH", fancy_white)
				
				create fancy_red.make_from_ttf_font (standard_ttf_fonts.custom_font ("fancy_big"))
				fancy_red.set_color (red)
				title_2.set_title ("TOUCH", fancy_red)

				title.set_x_y (border, border)
				title_2.set_x_y (border+3, border+3)
				
				--Build Console
				create console.make_with_width_and_height (500, 200)
				console.set_x_y (width - border*2 - console.width, 400);
				
				--Create Chapters_Container_widget
				create chapters_container_widget.make (400 - 2*border, 600 - 3*border)
				chapters_container_widget.set_x_y (border, title_offset + border + border)
				
				--Build The Visual Chapter Tree
				chapters_container_widget.set_horizontal_scroll (false)
				build_chapter_examples_drawables (chapters_container_widget)

				chapters_container_widget.calculate_object_area
				
				
				--Put Drawables to main_container
				make_scene
				main_container.extend (scroll_up)
				main_container.extend (scroll_down)
				main_container.extend (upper_background)
				main_container.extend (left_background)
				main_container.extend (settings_background)
				main_container.extend (title_2)
				main_container.extend (title)
				main_container.extend (settings_container)
				main_container.extend (pictures_container)
				main_container.extend (console)
			
				main_container.extend (chapters_container_widget)

				main_container.extend (left_foreground)

			end

		end
		
	
feature {NONE} -- Implementation

	initialized: BOOLEAN

	text_box (a_text: STRING; a_width, a_height: INTEGER): EM_DRAWABLE is
			-- A new black box of size `a_width' and `a_height'
			-- with `a_text' in it (centered).
		require
			a_title_not_void: a_text /= Void
			correct_size: a_width > 0 and a_height > 0
		do
			Result := create{TOUCH_TEXT_STATIC}.make_with_title_and_width_and_height (a_text, a_width, a_height)
		end
		
	build_chapter_examples_drawables (container: EM_DRAWABLE_CONTAINER [EM_DRAWABLE]) is
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
--			number_filename: STRING
			fancy_grey : EM_COLOR_TTF_FONT
			fancy_blue: EM_COLOR_TTF_FONT
			title: TOUCH_TEXT_STATIC
			title_2: TOUCH_TEXT_STATIC
			
			number: TOUCH_TEXT_STATIC
			number_2: TOUCH_TEXT_STATIC
			
			number_string: STRING
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
				chapter_static := create {TOUCH_BITMAP_STATIC}.make_with_image_file_and_width_and_height ("./images/chapter_background.png", 250, chapter_height)
				chapter_static.set_x_y (x, y)
--				create number_filename.make_from_string ("./images/number_")
--				number_filename.append_integer (i \\ 10)
--				number_filename.append_string (".png")
				number_static := create {TOUCH_BITMAP_STATIC}.make_with_image_file_and_width_and_height ("./images/number_background.png", chapter_height, chapter_height)
				number_static.set_x_y (x + 250 + border, y)
				
				
				title := create{TOUCH_TEXT_STATIC}.make_with_title_and_width_and_height ("Hooray", chapter_static.width, chapter_static.height)
				title_2 := create{TOUCH_TEXT_STATIC}.make_with_title_and_width_and_height ("Hooray", chapter_static.width, chapter_static.height)
				
				create fancy_grey.make_from_ttf_font (standard_ttf_fonts.custom_font ("fancy"))
				fancy_grey.set_color ( create {EM_COLOR}.make_with_rgb (200,200,200))
				title.set_title ("CHAPTER",fancy_grey)
				
				create fancy_blue.make_from_ttf_font (standard_ttf_fonts.custom_font ("fancy"))
				fancy_blue.set_color ( create {EM_COLOR}.make_with_rgb (125,125,255))
				title_2.set_title ("CHAPTER", fancy_blue)
				
				title.set_x_y (x, y)
				title_2.set_x_y (x+1,y+1)


				create number_string.make_empty
				number_string.append_integer (i)
				number := create{TOUCH_TEXT_STATIC}.make_with_title_and_width_and_height ("Hooray", number_static.width, number_static.height)
				number_2 := create{TOUCH_TEXT_STATIC}.make_with_title_and_width_and_height ("Hooray", number_static.width, number_static.height)

				number.set_title (number_string, fancy_grey)

				number_2.set_title (number_string, fancy_blue)


				number.set_x_y (number_static.x, number_static.y)
				number_2.set_x_y (number_static.x+1, number_static.y+1)

				
				container.extend (chapter_static)
				container.extend (number_static)
				
				container.extend (title_2)
				container.extend (title)

				container.extend (number_2)
				container.extend (number)
				
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

	handle_outside_event is
			-- 
		do
			if scroll_down.is_down then
				chapters_container_widget.scroll (create {EM_VECTOR_2D}.make (0, +16))			
			end
			
			if scroll_up.is_down then
				chapters_container_widget.scroll (create {EM_VECTOR_2D}.make (0, -16))			
			end
			
		end
		
	process_clicked_example_button (a_button: TOUCH_BUTTON) is
			-- 
		local
			an_example: TOUCH_EXAMPLE
			a_bitmap: EM_BITMAP
			x, y: INTEGER
		do
				an_example := hash_from_button_to_example.item (a_button)
				if an_example /= Void then
					
					pictures_container.wipe_out
					
					current_example := an_example
					
					console.wipe_out_text
					console.put_text (an_example.description)
					
					x := 10
					y := 10
					from
						current_example.pictures.start
					until
						current_example.pictures.off
					loop
						a_bitmap := current_example.pictures.item_for_iteration
						a_bitmap.set_x_y (x, y)
						x := x + a_bitmap.width + 10
						pictures_container.extend (a_bitmap)
						current_example.pictures.forth
					end
				end			
		end
		
	process_clicked_run_button (a_button: TOUCH_BUTTON) is
			-- User clicked the run example button
		local
--			runtime: TOUCH_EXAMPLE_RUNTIME_IMPLEMENTATION
			example_scene: EM_SCENE
			example: TOUCH_EXAMPLE
		do
			example := current_example

			--If example not Void then run it
			if example /= Void then
				
				example_scene := example.run_with_scene (create {TOUCH_EXAMPLE_SELECTION_SCENE})
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
		
	process_clicked_exit_button (a_button: TOUCH_BUTTON) is
		do
			event_loop.stop
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
			chapters_container_widget.scroll (create {EM_VECTOR_2D}.make (0, -12))
		end
		
	process_scroll_down (a_button: TOUCH_BUTTON) is
			-- 
		do
			chapters_container_widget.scroll (create {EM_VECTOR_2D}.make (0, +12))			
		end
		
invariant
	invariant_clause: True -- Your invariant here

end -- class TOUCH_EXAMPLE_SELECTION_SCENE
