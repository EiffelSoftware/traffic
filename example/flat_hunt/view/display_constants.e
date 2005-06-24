indexing
	description: "Constants used in scenes"
	author: "Ursina Caluori, ucaluori@student.ethz.ch"
	date: "$Date$"
	revision: "$Revision$"

class
	DISPLAY_CONSTANTS	

inherit
	ESDL_SHARED_BITMAP_FACTORY	
	
feature -- Colors

	status_background_color : ESDL_COLOR is
			-- The background color of the status bar
		once
			Result := create {ESDL_COLOR}.make_with_rgb (100, 0, 150)
		end
			
	light_gray : ESDL_COLOR is
		once
			Result := create {ESDL_COLOR}.make_with_rgb (200, 200, 200)
		end	
		
	gray : ESDL_COLOR is
		once
			Result := create {ESDL_COLOR}.make_with_rgb (150, 150, 150)
		end
			
	dark_gray : ESDL_COLOR is
		once
			Result := create {ESDL_COLOR}.make_with_rgb (25, 25, 25)
		end	

feature -- Fonts

	small_font: ESDL_BITMAPFONT is
			-- Create a standard font
		local
			font: ESDL_DRAWABLE
		do
			bitmap_factory.create_bitmap_from_image (Font_directory + "verdana256.tga")
			font := bitmap_factory.last_bitmap		
			create Result.make (font)
		end
		
	big_font: ESDL_BITMAPFONT is
			-- Create a standard font
		local
			font: ESDL_DRAWABLE
		do
			bitmap_factory.create_bitmap_from_image (Font_directory + "verdana512.tga")
			font := bitmap_factory.last_bitmap		
			create Result.make (font)
		end

feature -- Constants (Numbers)

	Window_width: INTEGER is 1024
			-- Initial width for this window

	Window_height: INTEGER is 768
			-- Initial height for this window

feature -- Constants (Strings)

	Image_directory: STRING is "./resources/pic/"
		-- Path to the image directory

	Font_directory: STRING is "./resources/font/"
		-- Path to the image directory
		
	My_application_name: STRING is "Flat Hunt v2"
		-- Name of the application
	
	Application_icon: STRING is "flat_hunt_icon.png"
		-- Name of the application icon

feature -- Constants (Images)

	Flathunt_logo: ESDL_DRAWABLE is
			-- Creates the logo which is to be displayed on every scene
		do
			bitmap_factory.create_bitmap_from_image (Image_directory + "flat_hunt_logo.png")
			Result := bitmap_factory.last_bitmap
			Result.set_x_y ((Window_width - Result.width) //2, 0)
		end			
		
end
