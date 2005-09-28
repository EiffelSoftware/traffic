indexing
	description: "Constants used for visualization."
	date: "$Date$"
	revision: "$Revision$"

deferred class
	DISPLAY_CONSTANTS	

inherit
	EM_SHARED_STANDARD_FONTS

	EM_SHARED_COLORS
		undefine
			default_create
		end
		
feature -- Colors

	Light_blue: EM_COLOR is
		once
			Result := create {EM_COLOR}.make_with_rgb (100, 90, 255)
		ensure
			color_exists: Result /= Void
		end

	Light_violet: EM_COLOR is
		once
			Result := create {EM_COLOR}.make_with_rgb (200, 110, 210)
		ensure
			color_exists: Result /= Void
		end

	Light_gray: EM_COLOR is
		once
			Result := create {EM_COLOR}.make_with_rgb (200, 200, 200)
		ensure
			color_exists: Result /= Void
		end	
		
	Gray: EM_COLOR is
		once
			Result := create {EM_COLOR}.make_with_rgb (150, 150, 150)
		ensure
			color_exists: Result /= Void
		end
			
	Dark_gray: EM_COLOR is
		once
			Result := create {EM_COLOR}.make_with_rgb (25, 25, 25)
		ensure
			color_exists: Result /= Void
		end	
	
	Dark_red: EM_COLOR is
		once
			Result := create {EM_COLOR}.make_with_rgb (200, 0, 0)
		ensure
			color_exists: Result /= Void
		end
		
	Orange: EM_COLOR is
		once
			Result := create {EM_COLOR}.make_with_rgb (200, 100, 0)
		ensure
			color_exists: Result /= Void
		end		

feature -- Fonts

	Font_directory: STRING is "./resources/font/"
			-- Path to the font directory.

   	create_font (a_name: STRING; a_size: INTEGER; a_color: EM_COLOR): EM_COLOR_TTF_FONT is
			-- Create new font from `a_name'.ttf with size `a_size' and color `a_color'.
		require
			a_name_exists: a_name /= Void
			a_name_not_empty: not a_name.is_empty
		local
		   font: EM_COLOR_TTF_FONT
		   color: EM_COLOR
		   id: STRING
		do
			-- Set default for color to black if `a_color' void.
			if a_color = Void then
				create color.make_with_rgb (0, 0, 0)
			else
				color := a_color
			end
			
			-- Create new font with size `a_size' and color `a_color'
			id := (standard_ttf_fonts.custom_fonts.count + 1).to_hex_string
 			if not standard_ttf_fonts.has_custom_font (a_name + id) then
 				standard_ttf_fonts.set_font_dirname (Font_directory)
				standard_ttf_fonts.load_custom_font(a_name + ".ttf", a_size, a_name + id)
			end
			create font.make_from_ttf_font (standard_ttf_fonts.custom_font (a_name + id))
			font.set_color (color)
			Result := font
		ensure
			font_exists: Result /= Void
			color_set: Result.color = a_color
		end

feature -- Constants (Numbers)

	Left, Right, Centered: INTEGER is unique
			-- Alignment constants.

	Window_width: INTEGER is 1024
			-- Initial width for this window.

	Window_height: INTEGER is 768
			-- Initial height for this window.

	Map_area_width: INTEGER is  650
			-- Width of the area where the map gets displayed.
		
	Map_area_height: INTEGER is 580
			-- Height of the area where the map gets displayed.
			
	Margin: INTEGER is 30
			-- Margin between game widgets and window border.
			
end
