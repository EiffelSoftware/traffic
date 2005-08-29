indexing
	description: "Main scene of widget browser"
	date: "$Date$"
	revision: "$Revision$"

class
	WIDGET_BROWSER_SCENE
	
inherit
	EM_COMPONENT_SCENE
	
	EM_SHARED_BITMAP_FACTORY
		export {NONE} all end
	
	EM_SHARED_STANDARD_FONTS
		export {NONE} all end

create
	make
	
feature {NONE} -- Initialisation

	make is
			-- Initialise scene.
		local
			panel: EM_PANEL
			label: EM_LABEL
			index_list: EM_TEXTLIST [EM_NAMED_PANEL]
		do
			make_component_scene
			set_frame_counter_visibility (True)

			create title_label.make_empty
			title_label.set_position (100, 0)
			title_label.set_dimension (width-100, 20)
			title_label.set_font (standard_ttf_fonts.bitstream_vera_sans_bold (16))
			add_component (title_label)
			
			create label.make_from_text ("Select demo")
			label.set_position (0, 0)
			label.set_dimension (100, 20)
			add_component (label)
			
			create index_list.make_empty
			index_list.set_position (0, 20)
			index_list.set_dimension (100, height)
			index_list.set_to_string_agent (agent {EM_NAMED_PANEL}.name)
			add_component (index_list)
			
			index_list.put (create {BACKGROUND_DEMO_PANEL}.make)
			index_list.put (create {BORDER_DEMO_PANEL}.make)
			index_list.put (create {WIDGETS_DEMO_PANEL}.make)
			
			index_list.selection_change_event.subscribe (agent set_demo_panel (?))
			
			create default_panel.make_from_name ("")
			create label.make_from_text ("Select a demo panel from the list")
			label.set_position (10, 10)
			label.set_font (standard_ttf_fonts.bitstream_vera_sans_bold (14))
			label.set_to_optimal_dimension
			default_panel.add_widget (label)
			
			set_demo_panel (default_panel)
			
			create panel.make_from_dimension (100, 20)
			panel.set_background_color (create {EM_COLOR}.make_black)
			add_component (panel)
			
		end

feature -- Access

	title_label: EM_LABEL
			-- Title label
			
	default_panel: EM_NAMED_PANEL
			-- Default panel

	current_panel: EM_NAMED_PANEL
			-- Current demo panel

feature -- Command

	set_demo_panel (a_panel: EM_NAMED_PANEL) is
			-- Set the demo panel to 'a_panel'.
		do
			if current_panel /= Void then
				remove_component (current_panel)
			end
			if a_panel = Void then
				current_panel := default_panel
			else
				current_panel := a_panel
			end
			current_panel.set_position (100, 20)
			current_panel.set_dimension (width-100, height-20)
			add_component (current_panel)
			title_label.set_text (current_panel.name)
		end









feature -- Test 



--	rotation_test is
--			-- 
--		local
--			label: EM_LABEL
--			bitmap_panel: EM_BITMAP_PANEL
--		do
--			
--			-- Original
--			create label.make_from_text ("Original")
--			label.set_position (0, 0)
--			add_widget (label)
--
--			Bitmap_factory.create_bitmap_from_image ("image/rotation_test.png")
--
--			create bitmap_panel.make_from_bitmap (Bitmap_factory.last_bitmap)
--			bitmap_panel.set_position (0, 20)
--			add_widget (bitmap_panel)
--
--			-- 45 Grad
--			create label.make_from_text ("45 Grad")
--			label.set_position (120, 0)
--			add_widget (label)
--
--			Bitmap_factory.create_bitmap_from_image ("image/rotation_test.png")
--			bitmap_factory.last_bitmap.disable_anti_aliasing
--			bitmap_factory.last_bitmap.rotate (45)
--
--			create bitmap_panel.make_from_bitmap (Bitmap_factory.last_bitmap)
--			bitmap_panel.set_position (120, 20)
--			add_widget (bitmap_panel)
--			
--			-- 90 Grad
--			create label.make_from_text ("90 Grad")
--			label.set_position (240, 0)
--			add_widget (label)
--
--			Bitmap_factory.create_bitmap_from_image ("image/rotation_test.png")
--			bitmap_factory.last_bitmap.disable_anti_aliasing
--			bitmap_factory.last_bitmap.rotate (90)
--
--			create bitmap_panel.make_from_bitmap (Bitmap_factory.last_bitmap)
--			bitmap_panel.set_position (240, 20)
--			add_widget (bitmap_panel)
--			
--			-- -27 Grad
--			create label.make_from_text ("-27 Grad")
--			label.set_position (360, 0)
--			add_widget (label)
--
--			Bitmap_factory.create_bitmap_from_image ("image/rotation_test.png")
--			bitmap_factory.last_bitmap.disable_anti_aliasing
--			bitmap_factory.last_bitmap.rotate (-27)
--
--			create bitmap_panel.make_from_bitmap (Bitmap_factory.last_bitmap)
--			bitmap_panel.set_position (360, 20)
--			add_widget (bitmap_panel)
--			
--			-- ANTIALIASING
--
--			-- 45 Grad
--			create label.make_from_text ("45 Grad (AA)")
--			label.set_position (120, 150)
--			add_widget (label)
--
--			Bitmap_factory.create_bitmap_from_image ("image/rotation_test.png")
--			bitmap_factory.last_bitmap.enable_anti_aliasing
--			bitmap_factory.last_bitmap.rotate (45)
--
--			create bitmap_panel.make_from_bitmap (Bitmap_factory.last_bitmap)
--			bitmap_panel.set_position (120, 170)
--			add_widget (bitmap_panel)
--			
--			-- 90 Grad
--			create label.make_from_text ("90 Grad (AA)")
--			label.set_position (240, 150)
--			add_widget (label)
--
--			Bitmap_factory.create_bitmap_from_image ("image/rotation_test.png")
--			bitmap_factory.last_bitmap.enable_anti_aliasing
--			bitmap_factory.last_bitmap.rotate (90)
--
--			create bitmap_panel.make_from_bitmap (Bitmap_factory.last_bitmap)
--			bitmap_panel.set_position (240, 170)
--			add_widget (bitmap_panel)
--			
--			-- -27 Grad
--			create label.make_from_text ("-27 Grad (AA)")
--			label.set_position (360, 150)
--			add_widget (label)
--
--			Bitmap_factory.create_bitmap_from_image ("image/rotation_test.png")
--			bitmap_factory.last_bitmap.enable_anti_aliasing
--			bitmap_factory.last_bitmap.rotate (-27)
--
--			create bitmap_panel.make_from_bitmap (Bitmap_factory.last_bitmap)
--			bitmap_panel.set_position (360, 170)
--			add_widget (bitmap_panel)
--
--			-- Multi rotation
--
--			-- 2x45 Grad
--			create label.make_from_text ("2x45 Grad (AA)")
--			label.set_position (0, 300)
--			add_widget (label)
--
--			Bitmap_factory.create_bitmap_from_image ("image/rotation_test.png")
--			bitmap_factory.last_bitmap.enable_anti_aliasing
--			bitmap_factory.last_bitmap.rotate (45)
--			bitmap_factory.last_bitmap.rotate (45)
--
--			create bitmap_panel.make_from_bitmap (Bitmap_factory.last_bitmap)
--			bitmap_panel.set_position (0, 320)
--			add_widget (bitmap_panel)
--			
--			-- 3x30 Grad
--			create label.make_from_text ("3x30 Grad (AA)")
--			label.set_position (300, 300)
--			add_widget (label)
--
--			Bitmap_factory.create_bitmap_from_image ("image/rotation_test.png")
--			bitmap_factory.last_bitmap.enable_anti_aliasing
--			bitmap_factory.last_bitmap.rotate (30)
--			bitmap_factory.last_bitmap.rotate (30)
--			bitmap_factory.last_bitmap.rotate (30)
--
--			create bitmap_panel.make_from_bitmap (Bitmap_factory.last_bitmap)
--			bitmap_panel.set_position (300, 320)
--			add_widget (bitmap_panel)
--			
--			-- -27 / -76 / 25 Grad
--			create label.make_from_text ("-27 /- 76 / 25 Grad (AA)")
--			label.set_position (600, 300)
--			add_widget (label)
--
--			Bitmap_factory.create_bitmap_from_image ("image/rotation_test.png")
--			bitmap_factory.last_bitmap.enable_anti_aliasing
--			bitmap_factory.last_bitmap.rotate (-27)
--			bitmap_factory.last_bitmap.rotate (-76)
--			bitmap_factory.last_bitmap.rotate (25)
--
--			create bitmap_panel.make_from_bitmap (Bitmap_factory.last_bitmap)
--			bitmap_panel.set_position (600, 320)
--			add_widget (bitmap_panel)
--			
--			-- Zooming
--
--			-- 0.5
--			create label.make_from_text ("z0.5 (AA)")
--			label.set_position (0, 450)
--			add_widget (label)
--
--			Bitmap_factory.create_bitmap_from_image ("image/rotation_test.png")
--			bitmap_factory.last_bitmap.enable_anti_aliasing
--			bitmap_factory.last_bitmap.zoom (0.5)
--
--			create bitmap_panel.make_from_bitmap (Bitmap_factory.last_bitmap)
--			bitmap_panel.set_position (0, 470)
--			add_widget (bitmap_panel)
--
--			-- 1.2
--			create label.make_from_text ("z1.2 (AA)")
--			label.set_position (200, 450)
--			add_widget (label)
--
--			Bitmap_factory.create_bitmap_from_image ("image/rotation_test.png")
--			bitmap_factory.last_bitmap.enable_anti_aliasing
--			bitmap_factory.last_bitmap.zoom (1.2)
--
--			create bitmap_panel.make_from_bitmap (Bitmap_factory.last_bitmap)
--			bitmap_panel.set_position (200, 470)
--			add_widget (bitmap_panel)
--
--			-- 0.5 / 214
--			create label.make_from_text ("z0.5 / r214 (AA)")
--			label.set_position (400, 450)
--			add_widget (label)
--
--			Bitmap_factory.create_bitmap_from_image ("image/rotation_test.png")
--			bitmap_factory.last_bitmap.enable_anti_aliasing
--			bitmap_factory.last_bitmap.zoom (0.5)
--			bitmap_factory.last_bitmap.rotate (214)
--
--			create bitmap_panel.make_from_bitmap (Bitmap_factory.last_bitmap)
--			bitmap_panel.set_position (400, 470)
--			add_widget (bitmap_panel)
--
--			-- 0.25 / 36 / -50 / 4.0 / 14
--			create label.make_from_text ("z0.25 / r36 / r-50 / z4.0 / r14 (AA)")
--			label.set_position (600, 450)
--			add_widget (label)
--
--			Bitmap_factory.create_bitmap_from_image ("image/rotation_test.png")
--			bitmap_factory.last_bitmap.enable_anti_aliasing
--			bitmap_factory.last_bitmap.zoom (0.25)
--			bitmap_factory.last_bitmap.rotate (36)
--			bitmap_factory.last_bitmap.rotate (-50)
--			bitmap_factory.last_bitmap.zoom (4)
--			bitmap_factory.last_bitmap.rotate (14)
--
--			create bitmap_panel.make_from_bitmap (Bitmap_factory.last_bitmap)
--			bitmap_panel.set_position (600, 470)
--			add_widget (bitmap_panel)
--			
--		end
		

end
