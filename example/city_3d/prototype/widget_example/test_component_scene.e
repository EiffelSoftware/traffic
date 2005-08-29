indexing
	description: "Objects that ..."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TEST_COMPONENT_SCENE

inherit
	EM_COMPONENT_SCENE
	
	EM_SHARED_BITMAP_FACTORY
		export {NONE} all end
	
	EM_SHARED_STANDARD_FONTS
		export {NONE} all end

create
	make

feature {NONE} 

	make is
			-- 
		local
			label: EM_LABEL
			sierpinski: SIERPINSKI_DISPLAY
			drawing_panel: DRAWING_PANEL
			panel: EM_PANEL
			textbox: EM_TEXTBOX
			list: EM_TEXTLIST [STRING]
			button: EM_BUTTON
			dialog: EM_DIALOG
			dialog_background: EM_ALPHA_COLOR_BACKGROUND
			checkbox: EM_CHECKBOX
			slider: EM_SLIDER
			progressbar: EM_PROGRESS_BAR
			combobox: EM_COMBOBOX [STRING]
			color: EM_COLOR
			bitmapbutton: EM_BUTTON
			scrollpanel: EM_SCROLLPANEL
			drawable_panel: EM_DRAWABLE_PANEL
			
			zoomable_container: EM_ZOOMABLE_WIDGET
			never_ending_horizontal: EM_NEVER_ENDING_BACKGROUND_HORIZONTAL
			cow: EM_ANIMATION
			sprite: EM_SPRITE
		do
			make_component_scene
			set_frame_counter_visibility (True)
			
			create label.make_from_text ("drag to rotate / mouse wheel to zoom")
			label.set_position (0, 0)
			label.set_dimension (512, 20)
			label.align_center
			label.set_background_color (theme_colors.window_background)
			add_component (label)
			create label.make_from_text ("left click increase detail / right click decrease detail")
			label.set_position (0, 20)
			label.set_dimension (512, 20)
			label.align_center
			label.set_background_color (theme_colors.window_background)
			add_component (label)
			if video_subsystem.opengl_enabled then
				create sierpinski.make
				sierpinski.set_position (0, 40)
				sierpinski.set_dimension (512, 400)
				add_component (sierpinski)
			else
				io.put_string ("OpenGL disabled: Sierpinski pyramid disabled%N")
			end
			
			create label.make_from_text ("Middle button and dragging to zoom / Right button and dragging to scroll")
			label.set_position (0, 440)
			label.set_dimension (512, 20)
			label.align_center
			label.set_background_color (theme_colors.window_background)
			add_component (label)
			
			create drawable_panel.make_from_dimension (512, 308)
			drawable_panel.set_tooltip ("Middle + Drag = Zoom / Right + Drag = Scroll")
			drawable_panel.set_position (0, 460)
			drawable_panel.set_background (create {EM_VERTICAL_GRADIENT_BACKGROUND}.make_from_colors (create {EM_COLOR}.make_with_rgb (0, 0, 255), create {EM_COLOR}.make_with_rgb (0, 255, 0)))
			drawable_panel.set_border (create {EM_BEVEL_BORDER}.make_down)
			add_component (drawable_panel)
			
			create zoomable_container.make (512, 308)
			drawable_panel.container.put_right (zoomable_container)

			create cow.make_from_file ("image/cow.anim")
			create sprite.make (cow)
			sprite.set_x_y (200,200)
			zoomable_container.put_right (sprite)
			start_animating (sprite)
			
			bitmap_factory.create_bitmap_from_image ("./../drawable/pics/forest_small.gif")
			create never_ending_horizontal.make (Bitmap_factory.last_bitmap)
			never_ending_horizontal.set_y (50)
			never_ending_horizontal.set_speed (100)
			zoomable_container.put_right (never_ending_horizontal)
			start_animating (never_ending_horizontal)
			
			create label.make_from_text ("click or drag to draw")
			label.set_position (512, 0)
			label.set_dimension (512, 20)
			label.align_center
			label.set_background_color (theme_colors.window_background)
			add_component (label)
			create label.make_from_text ("right click to set sweep line")
			label.set_position (512, 20)
			label.set_dimension (512, 20)
			label.align_center
			label.set_background_color (theme_colors.window_background)
			add_component (label)
			create drawing_panel.make (512, 300)
			drawing_panel.set_position (512, 40)
			drawing_panel.set_border (create {EM_BEVEL_BORDER}.make_down)
			add_component (drawing_panel)
			
			create panel.make_from_dimension (512, 768-340)
			panel.set_position (512, 340)
--			panel.set_background (create {EM_BITMAP_BACKGROUND}.make_from_file ("image/background.png"))
			add_component (panel)
			create textbox.make_from_text ("abc")
			textbox.set_position (10, 10)
			textbox.set_dimension (100, 20)
			panel.add_widget (textbox)
			create list.make_empty
			list.set_position (300, 100)
			list.insert_void_element
			list.put ("1234")
			list.put ("ABCD asdf asdf asdf")
			list.put ("5678")
			list.put ("EFGH")
			list.put ("123467890")
			list.put ("ABCD")
			list.put ("56789012345678901234567890")
			list.put ("EFGH")
			list.put ("")
			list.put ("")
			list.put ("")
			list.put ("5678")
			list.put ("EFGH")
			list.put ("123467890")
			list.put ("5678")
			list.put ("EFGH")
			
			create scrollpanel.make_from_dimension (180, 200)
			scrollpanel.set_position (300, 100)
			panel.add_widget (scrollpanel)
			
			scrollpanel.set_widget (list)
			
			create combobox.make_from_list (list.elements)
			combobox.set_position (300, 70)
			combobox.set_dimension (100, 18)
			combobox.insert_void_element
			panel.add_widget (combobox)
			
			create button.make_from_text ("Clear drawing")
			button.set_position (130, 10)
			button.set_dimension (120, 20)
			button.clicked_event.subscribe (agent drawing_panel.clear_drawing)
			panel.add_widget (button)

			create button.make_from_text ("Increase subdivision")
			button.set_position (10, 100)
			button.set_dimension (230, 20)
			button.clicked_event.subscribe (agent sierpinski.increase_subdivisions)
			panel.add_widget (button)

			create button.make_from_text ("Decrease subdivision")
			button.set_position (10, 125)
			button.set_dimension (230, 20)
			button.clicked_event.subscribe (agent sierpinski.decrease_subdivisions)
			panel.add_widget (button)
			
			create color.make_with_rgb (239, 239, 239)
			if not video_subsystem.opengl_enabled then
				color.set_alpha (200)
			end
			create dialog_background.make_from_color (color)

			create dialog.make_from_title ("Drag title bar")
			dialog.set_background (dialog_background)
			dialog.set_dimension (300, 180)
			dialog.set_position (400, 300)
			
			create label.make_from_text ("Test-label")
			label.set_position (2, 22)
			label.set_font (Standard_ttf_fonts.bitstream_vera_sans_mono_bold (20))
			label.set_to_optimal_dimension
			label.set_transparent
			dialog.add_widget (label)
			
			create checkbox.make_from_text ("a checkbox")
			checkbox.set_position (2, 50)
			checkbox.set_transparent
			dialog.add_widget (checkbox)
			
			create slider.make_horizontal
			slider.set_position (150, 50)
			slider.set_transparent
			dialog.add_widget (slider)
			
			create combobox.make_from_list (list.elements)
			combobox.set_position (150, 130)
			combobox.set_dimension (100, combobox.optimal_height)
			dialog.add_widget (combobox)
			
			create button.make_from_text ("Show dialog")
			button.set_position (10, 200)
			button.set_dimension (230, 20)
			button.clicked_event.subscribe (agent dialog.show)
			panel.add_widget (button)

			create button.make_from_text ("Hide dialog")
			button.set_position (10, 225)
			button.set_dimension (230, 20)
			button.clicked_event.subscribe (agent dialog.hide)
			panel.add_widget (button)
			
			create checkbox.make_from_text ("check me")
			checkbox.set_position (300, 310)
			panel.add_widget (checkbox)
			
			create label.make_from_text ("hover over me")
			label.set_position (300, 340)
			label.set_tooltip ("And you'll see my tooltip")
			panel.add_widget (label)

			create label.make_empty
			label.set_position (180, 310)
			label.set_dimension (50, 20)
			panel.add_widget (label)
			
			create slider.make_horizontal
			slider.set_dimension (150, 20)
			slider.set_position (20, 310)
			slider.set_tooltip ("abc")
			slider.position_changed_event.subscribe (agent set_label_text (label, ?))
			panel.add_widget (slider)
			
			create label.make_empty
			label.set_position (180, 335)
			label.set_dimension (50, 20)
			panel.add_widget (label)
			
			create slider.make_from_range_horizontal (20, 25)
			slider.set_dimension (150, 20)
			slider.set_position (20, 335)
			slider.set_tooltip ("abc")
			slider.position_changed_event.subscribe (agent set_label_text (label, ?))
			panel.add_widget (slider)
			
			create progressbar.make_from_dimension (150, 20)
			progressbar.set_position (20, 360)	
			panel.add_widget (progressbar)
			
			create button.make_from_text ("+progress")
			button.set_position (180, 360)
			button.clicked_event.subscribe (agent progressbar.advance)
			panel.add_widget (button)
			
			create button.make_from_text ("reset")
			button.set_position (270, 360)
			button.clicked_event.subscribe (agent progressbar.reset)
			panel.add_widget (button)

			Bitmap_factory.create_bitmap_from_image ("image/misc.png")
			create bitmapbutton.make_from_text_image ("Test", Bitmap_factory.last_bitmap)
			bitmapbutton.set_position (400, 10)
			panel.add_widget (bitmapbutton)

			
			create slider.make_from_range_vertical (-10, 10)
			slider.set_dimension (20, 150)
			slider.set_position (250, 40)
			slider.set_tooltip ("abc")
			slider.position_changed_event.subscribe (agent set_label_text (label, ?))
			panel.add_widget (slider)

			create panel.make_from_dimension (100, 20)
			panel.set_background_color (create {EM_COLOR}.make_black)
			add_component (panel)
			

		end
	
	set_label_text (label: EM_LABEL; number: INTEGER) is
			-- 
		do
			label.set_text (number.out)
		end
	
end
