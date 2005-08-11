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
		
	EM_KEY_CONSTANTS
		undefine
			default_create
		end
		
feature -- Colors

	dark_blue: EM_COLOR is
		once
			Result := create {EM_COLOR}.make_with_rgb (0, 0, 200)
		ensure
			color_not_void: Result /= Void
		end

	light_violet: EM_COLOR is
		once
			Result := create {EM_COLOR}.make_with_rgb (100, 0, 150)
		ensure
			color_not_void: Result /= Void
		end

	light_gray: EM_COLOR is
		once
			Result := create {EM_COLOR}.make_with_rgb (200, 200, 200)
		ensure
			color_not_void: Result /= Void
		end	
		
	gray: EM_COLOR is
		once
			Result := create {EM_COLOR}.make_with_rgb (150, 150, 150)
		ensure
			color_not_void: Result /= Void
		end
			
	dark_gray: EM_COLOR is
		once
			Result := create {EM_COLOR}.make_with_rgb (25, 25, 25)
		ensure
			color_not_void: Result /= Void
		end	
	
	dark_red: EM_COLOR is
		once
			Result := create {EM_COLOR}.make_with_rgb (200, 0, 0)
		ensure
			color_not_void: Result /= Void
		end
		
	orange: EM_COLOR is
		once
			Result := create {EM_COLOR}.make_with_rgb (200, 100, 0)
		ensure
			color_not_void: Result /= Void
		end		

feature -- Fonts

	Font_directory: STRING is "./resources/font/"
			-- Path to the font directory

   	create_font (a_name: STRING; a_size: INTEGER; a_color: EM_COLOR): EM_TTF_FONT is
			-- Create new font from `a_name'.ttf with size `a_size' and color `a_color'
		local
		   font: EM_FONT
		   color: EM_COLOR
		   id: STRING
		do
			-- Set default for color to black if a_color void
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
			font := standard_ttf_fonts.custom_font (a_name + id)
			Result ?= font
			if Result /= Void then
				Result.set_color (color)
			end				
		ensure
			font_not_void: Result /= Void
			color_set: Result.color = a_color
		end
		

feature -- Constants (Numbers)

	Left, Right, Centered: INTEGER is unique
			-- Alignment constants

	Window_width: INTEGER is 1024
			-- Initial width for this window

	Window_height: INTEGER is 768
			-- Initial height for this window

	Map_area_width: INTEGER is  650
			-- Width of the area where the map gets displayed
		
	Map_area_height: INTEGER is 580
			-- Height of the area where the map gets displayed
			
	Margin: INTEGER is 30
		
end
