indexing
	description: "[
	
		Background demo.
	
	]"
	date: "$Date$"
	revision: "$Revision$"

class
	BACKGROUND_DEMO_PANEL

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
			label: EM_LABEL
			panel: EM_PANEL
			slider: EM_SLIDER
			color_background: EM_COLOR_BACKGROUND
			alpha_color_background: EM_ALPHA_COLOR_BACKGROUND
			bitmap_background: EM_BITMAP_BACKGROUND
			shifted_background: EM_SHIFTED_BITMAP_BACKGROUND
			stretched_background: EM_STRETCHED_BITMAP_BACKGROUND
			vertical_gradient_background: EM_VERTICAL_GRADIENT_BACKGROUND
		do
			make_from_name ("Background")
			
			Bitmap_factory.create_bitmap_from_image ("image/background.png")
			set_background (create {EM_BITMAP_BACKGROUND}.make_from_bitmap (Bitmap_factory.last_bitmap))
			
			-- EM_COLOR_BACKGROUND
			create color_background.make_from_color (create {EM_COLOR}.make_with_rgb (255, 0, 0))
			create panel.make_from_dimension (300, 150)
			panel.set_background (color_background)
			panel.set_position (10, 10)
			add_widget (panel)
			
			create label.make_from_text ("EM_COLOR_BACKGROUND")
			label.set_font (Standard_ttf_fonts.bitstream_vera_sans_bold (12))
			label.set_to_optimal_dimension
			label.set_transparent
			panel.add_widget (label)
			
			-- EM_ALPHA_COLOR_BACKGROUND
			create alpha_color_background.make_from_color (create {EM_COLOR}.make_with_rgb (255, 0, 0))
			alpha_color_background.set_alpha_value (128)
			create panel.make_from_dimension (300, 150)
			panel.set_background (alpha_color_background)
			panel.set_position (10, 170)
			add_widget (panel)

			create slider.make_from_range_horizontal (0, 255)
			slider.set_dimension (panel.width-label.width-5, 20)
			slider.set_position (label.width+5, 30)
			slider.set_transparent
			slider.position_changed_event.subscribe (agent alpha_color_background.set_alpha_value (?))
			slider.position_changed_event.subscribe (agent set_widget_changed_integer (panel, ?))
			slider.set_current_value (alpha_color_background.color.alpha)
			panel.add_widget (slider)

			create label.make_from_text ("EM_ALPHA_COLOR_BACKGROUND")
			label.set_font (Standard_ttf_fonts.bitstream_vera_sans_bold (12))
			label.set_to_optimal_dimension
			label.set_transparent
			panel.add_widget (label)

			slider.position_changed_event.subscribe (agent set_widget_changed_integer (label, ?))
			
			create label.make_from_text ("Alpha (0-255): ")
			label.set_position (0, 30)
			label.set_transparent
			panel.add_widget (label)

			slider.position_changed_event.subscribe (agent set_widget_changed_integer (label, ?))
			
			create label.make_from_text ("Note: Transparency can be slow")
			label.set_position (0, 50)
			label.set_transparent
			panel.add_widget (label)
			
			slider.position_changed_event.subscribe (agent set_widget_changed_integer (label, ?))
			
			-- EM_TRANSPARENT_BACKGROUND
			create panel.make_from_dimension (300, 150)
			panel.set_transparent
			panel.set_position (10, 350)
			add_widget (panel)

			create label.make_from_text ("EM_TRANSPARENT_BACKGROUND")
			label.set_font (Standard_ttf_fonts.bitstream_vera_sans_bold (12))
			label.set_to_optimal_dimension
			label.set_transparent
			panel.add_widget (label)
			
			-- EM_BITMAP_BACKGROUND
			Bitmap_factory.create_bitmap_from_image ("image/camouflage.png")
			create bitmap_background.make_from_bitmap (Bitmap_factory.last_bitmap)
			
			create panel.make_from_dimension (300, 150)
			panel.set_background (bitmap_background)
			panel.set_position (330, 10)
			add_widget (panel)

			create label.make_from_text ("EM_BITMAP_BACKGROUND")
			label.set_font (Standard_ttf_fonts.bitstream_vera_sans_bold (12))
			label.set_to_optimal_dimension
			label.set_transparent
			label.set_foreground_color (create {EM_COLOR}.make_white)
			panel.add_widget (label)
			
			-- EM_SHIFTED_BITMAP_BACKGROUND
			Bitmap_factory.create_bitmap_from_image ("image/camouflage.png")
			create shifted_background.make_from_bitmap (Bitmap_factory.last_bitmap)
			shifted_background.set_offset (50, 40)
			
			create panel.make_from_dimension (300, 150)
			panel.set_background (shifted_background)
			panel.set_position (330, 170)
			add_widget (panel)

			create label.make_from_text ("EM_SHIFTED_BITMAP_BACKGROUND")
			label.set_font (Standard_ttf_fonts.bitstream_vera_sans_bold (12))
			label.set_to_optimal_dimension
			label.set_transparent
			label.set_foreground_color (create {EM_COLOR}.make_white)
			panel.add_widget (label)

			create label.make_from_text ("Offset is (50, 40)")
			label.set_position (0, 30)
			label.set_transparent
			label.set_foreground_color (create {EM_COLOR}.make_white)
			panel.add_widget (label)
			
			-- EM_STRETCHED_BITMAP_BACKGROUND
			Bitmap_factory.create_bitmap_from_image ("image/camouflage.png")
			create stretched_background.make_from_bitmap_stretched (Bitmap_factory.last_bitmap, 300, 150)
			
			create panel.make_from_dimension (300, 150)
			panel.set_background (stretched_background)
			panel.set_position (330, 350)
			add_widget (panel)

			create label.make_from_text ("EM_STRETCHED_BITMAP_BACKGROUND")
			label.set_font (Standard_ttf_fonts.bitstream_vera_sans_bold (12))
			label.set_to_optimal_dimension
			label.set_transparent
			label.set_foreground_color (create {EM_COLOR}.make_white)
			panel.add_widget (label)

			-- EM_VERTICAL_GRADIENT_BACKGROUND
			create vertical_gradient_background.make_from_colors (create {EM_COLOR}.make_with_rgb (255, 0, 0), create {EM_COLOR}.make_with_rgb (0, 255, 0))
			create panel.make_from_dimension (300, 150)
			panel.set_background (vertical_gradient_background)
			panel.set_position (330, 510)
			add_widget (panel)
			
			create label.make_from_text ("EM_VERTICAL_GRADIENT_BACKGROUND")
			label.set_font (Standard_ttf_fonts.bitstream_vera_sans_bold (12))
			label.set_to_optimal_dimension
			label.set_transparent
			panel.add_widget (label)
			
			slider.position_changed_event.subscribe (agent set_widget_changed_integer (panel, ?))

			
		end

feature {NONE} -- Agent wrapper

	set_widget_changed_integer (a_widget: EM_WIDGET; any: INTEGER) is
			-- Set 'a_widget's changed status.
		do
			a_widget.set_changed
		end

end
