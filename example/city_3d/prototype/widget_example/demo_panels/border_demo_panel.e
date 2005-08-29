indexing
	description: "[
	
		Border demo.
	
	]"
	date: "$Date$"
	revision: "$Revision$"

class
	BORDER_DEMO_PANEL

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
			line_border: EM_LINE_BORDER
			bevel_border: EM_BEVEL_BORDER
			named_border: EM_NAMED_BORDER
		do
			make_from_name ("Border")
			
			Bitmap_factory.create_bitmap_from_image ("image/background.png")
			set_background (create {EM_BITMAP_BACKGROUND}.make_from_bitmap (Bitmap_factory.last_bitmap))
			
			-- EM_LINE_BORDER
			create line_border.make (create {EM_COLOR}.make_with_rgb (255, 0, 0), 2)
			create panel.make_from_dimension (300, 150)
			panel.set_border (line_border)
			panel.set_position (10, 10)
			add_widget (panel)
			
			create label.make_from_text ("EM_LINE_BORDER")
			label.set_font (Standard_ttf_fonts.bitstream_vera_sans_bold (12))
			label.set_to_optimal_dimension
			label.set_position (5, 5)
			panel.add_widget (label)

			create label.make_from_text ("Width (0-10): ")
			label.set_position (5, 40)
			panel.add_widget (label)

			create slider.make_from_range_horizontal (0, 10)
			slider.set_dimension (panel.width-label.width-30, 20)
			slider.set_position (label.width+10, 40)
			slider.position_changed_event.subscribe (agent line_border.set_width (?))
			slider.position_changed_event.subscribe (agent set_widget_changed_integer (panel, ?))
			slider.set_current_value (line_border.width)
			panel.add_widget (slider)
			
			-- EM_BEVEL_BORDER
			create bevel_border.make_down
			create panel.make_from_dimension (300, 150)
			panel.set_border (bevel_border)
			panel.set_position (10, 170)
			add_widget (panel)
			
			create label.make_from_text ("EM_BEVEL_BORDER (down)")
			label.set_font (Standard_ttf_fonts.bitstream_vera_sans_bold (12))
			label.set_to_optimal_dimension
			label.set_position (5, 5)
			panel.add_widget (label)

			-- EM_BEVEL_BORDER
			create bevel_border.make_up
			create panel.make_from_dimension (300, 150)
			panel.set_border (bevel_border)
			panel.set_position (10, 330)
			add_widget (panel)
			
			create label.make_from_text ("EM_BEVEL_BORDER (up)")
			label.set_font (Standard_ttf_fonts.bitstream_vera_sans_bold (12))
			label.set_to_optimal_dimension
			label.set_position (5, 5)
			panel.add_widget (label)

			-- EM_NAMED_BORDER
			create named_border.make_from_text ("Titled border")
			create panel.make_from_dimension (300, 150)
			panel.set_border (named_border)
			panel.set_position (330, 10)
			add_widget (panel)
			
			create label.make_from_text ("EM_NAMED_BORDER")
			label.set_font (Standard_ttf_fonts.bitstream_vera_sans_bold (12))
			label.set_to_optimal_dimension
			label.set_position (5, 5)
			panel.add_widget (label)

		end

feature {NONE} -- Agent wrapper

	set_widget_changed_integer (a_widget: EM_WIDGET; any: INTEGER) is
			-- Set 'a_widget's changed status.
		do
			a_widget.set_changed
		end

end
