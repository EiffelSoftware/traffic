indexing
	description: "[
	
		Widget demo panel.
	
	]"
	date: "$Date$"
	revision: "$Revision$"

class
	WIDGETS_DEMO_PANEL

inherit
	EM_NAMED_PANEL
	
	EM_SHARED_BITMAP_FACTORY
		export {NONE} all end
		
	EM_SHARED_STANDARD_FONTS	
		export {NONE} all end
	
create
	make
	
feature {NONE} -- Initialisation

	make is
			-- Initialise panel.
		local
			panel: EM_PANEL
			label: EM_LABEL
			textbox: EM_TEXTBOX
--			textarea: EM_TEXTAREA
			textbutton: EM_BUTTON
			bitmapbutton: EM_BUTTON
			checkbox: EM_CHECKBOX
			slider: EM_SLIDER
			progressbar: EM_PROGRESS_BAR
			list: EM_TEXTLIST [STRING]
			combobox: EM_COMBOBOX [STRING]
		do
			make_from_name ("Widgets")
			
			-- EM_LABEL
			create panel.make_from_dimension (300, 150)
			panel.set_border (create {EM_NAMED_BORDER}.make_from_text ("Labels"))
			panel.set_position (10, 10)
			add_widget (panel)
			
			create label.make_from_text ("Left aligned")
			label.set_font (Standard_ttf_fonts.bitstream_vera_sans_bold (14))
			label.align_left
			label.set_position (5, 5)
			label.set_dimension (panel.inner_width-10, 20)
			panel.add_widget (label)

			create label.make_from_text ("Center aligned")
			label.set_font (Standard_ttf_fonts.bitstream_vera_sans_bold (14))
			label.align_center
			label.set_position (5, 30)
			label.set_dimension (panel.inner_width-10, 20)
			panel.add_widget (label)

			create label.make_from_text ("Right aligned")
			label.set_font (Standard_ttf_fonts.bitstream_vera_sans_bold (14))
			label.align_right
			label.set_position (5, 55)
			label.set_dimension (panel.inner_width-10, 20)
			panel.add_widget (label)
			
			create label.make_from_text ("Colored + shadow")
			label.set_font (standard_ttf_fonts.bitstream_vera_sans (16))
			label.set_to_optimal_dimension
			label.set_foreground_color (create {EM_COLOR}.make_with_rgb (255, 100, 200))
			label.set_position (5, 80)
			label.enable_shadow
			panel.add_widget (label)

			create label.make_from_text ("Hover for one second over text")
			label.set_tooltip ("and see the tooltip")
			label.set_position (100, 120)
			panel.add_widget (label)

			create label.make_from_text ("Bitmap-font")
			label.set_foreground_color (create {EM_COLOR}.make_with_rgb (255, 100, 200))
			label.set_background_color (create {EM_COLOR}.make_black)
			label.set_position (5, 100)
			label.set_font (standard_bmp_fonts.small_arial_font)
			label.set_to_optimal_dimension
			panel.add_widget (label)
			
			-- EM_TEXTBOX / EM_TEXTAREA
			create panel.make_from_dimension (300, 150)
			panel.set_border (create {EM_NAMED_BORDER}.make_from_text ("Textbox / Textarea"))
			panel.set_position (10, 170)
			add_widget (panel)

			create textbox.make_empty
			textbox.set_position (5, 5)
			textbox.set_dimension (280, 20)
			panel.add_widget (textbox)
			
			-- EM_BUTTON / EM_CHECKBOX / EM_RADIOBUTTON
			create panel.make_from_dimension (300, 150)
			panel.set_border (create {EM_NAMED_BORDER}.make_from_text ("Button / Checkbox / Radiobutton"))
			panel.set_position (10, 330)
			add_widget (panel)
			
			create textbutton.make_from_text ("Textbutton")
			textbutton.set_position (5, 5)
			panel.add_widget (textbutton)
			
			Bitmap_factory.create_bitmap_from_image ("image/misc.png")
			create bitmapbutton.make_from_image (Bitmap_factory.last_bitmap)
			bitmapbutton.set_position (5, 30)
			panel.add_widget (bitmapbutton)
			
			create checkbox.make_from_text ("Check me")
			checkbox.set_position (5, 55)
			panel.add_widget (checkbox)
			
			-- EM_SDLIDER / EM_PROGRESS_BAR
			create panel.make_from_dimension (300, 150)
			panel.set_border (create {EM_NAMED_BORDER}.make_from_text ("Slider / Progressbar"))
			panel.set_position (330, 10)
			add_widget (panel)
			
			create label.make_empty
			label.set_position (220, 5)
			label.set_dimension (50, 20)
			panel.add_widget (label)
			
			create slider.make_horizontal
			slider.set_dimension (200, 20)
			slider.set_position (5, 5)
			slider.position_changed_event.subscribe (agent set_label_text (label, ?))
			panel.add_widget (slider)
			
			create label.make_empty
			label.set_position (220, 30)
			label.set_dimension (50, 20)
			panel.add_widget (label)
			
			create slider.make_from_range_horizontal (20, 25)
			slider.set_dimension (200, 20)
			slider.set_position (5, 30)
			slider.position_changed_event.subscribe (agent set_label_text (label, ?))
			panel.add_widget (slider)

			create progressbar.make_from_dimension (200, 20)
			progressbar.set_position (5, 100)	
			panel.add_widget (progressbar)
			
			create textbutton.make_from_text ("+")
			textbutton.set_position (220, 100)
			textbutton.clicked_event.subscribe (agent progressbar.advance)
			panel.add_widget (textbutton)
			
			create textbutton.make_from_text ("reset")
			textbutton.set_position (240, 100)
			textbutton.clicked_event.subscribe (agent progressbar.reset)
			panel.add_widget (textbutton)
			
			-- EM_LIST / EM_COMBOBOX

			create panel.make_from_dimension (300, 150)
			panel.set_border (create {EM_NAMED_BORDER}.make_from_text ("List / Combobox"))
			panel.set_position (330, 170)
			add_widget (panel)
			
			create list.make_empty
			list.set_position (5, 5)
			list.set_dimension (120, 90)
			list.insert_void_element
			list.put ("with")
			list.put ("empty")
			list.put ("element")
			panel.add_widget (list)
			
			create combobox.make_from_list (list.elements)
			combobox.insert_void_element
			combobox.set_position (5, 100)
			combobox.set_dimension (120, combobox.optimal_height)
			panel.add_widget (combobox)

			create list.make_empty
			list.set_position (140, 5)
			list.set_dimension (120, 90)
			list.put ("without")
			list.put ("empty")
			list.put ("element")
			panel.add_widget (list)

			create combobox.make_from_list (list.elements)
			combobox.set_position (140, 100)
			combobox.set_dimension (120, combobox.optimal_height)
			panel.add_widget (combobox)
			
		end

feature -- Agent wrapper

	set_label_text (label: EM_LABEL; number: INTEGER) is
			-- Set text of 'label' to 'number'.
		do
			label.set_text (number.out)
		end
	
end
