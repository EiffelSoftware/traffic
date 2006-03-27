indexing
	description: "Color."
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_COLOR
	
inherit
	ANY
		redefine
			out
		end

create 
	make
	
feature {NONE} -- Initialisation

	make (a_red, a_green, a_blue: INTEGER) is
			-- Create a rgb-color.
		require
			a_red_valid: is_valid_rgb_part (a_red)
			a_green_valid: is_valid_rgb_part (a_green)
			a_blue_valid: is_valid_rgb_part (a_blue)
		do
			red := a_red
			green := a_green
			blue := a_blue
		ensure
			red_set: red = a_red
			green_set: green = a_green
			blue_set: blue = a_blue
		end

feature -- Access

	red: INTEGER
		-- Red part of rgb-color.
		
	green: INTEGER
		-- Green part of rgb-color.
		
	blue: INTEGER
		-- Blue part of rgb-color.

feature -- Element change

	set_red (a_red: INTEGER) is
			-- Set red to `a_red'.
		require
			a_red_valid: is_valid_rgb_part (a_red)
		do
			red := a_red
		ensure
			red_set: red = a_red
		end
	
	set_green (a_green: INTEGER) is
			-- Set green to `a_green'.
		require
			a_green_valid: is_valid_rgb_part (a_green)
		do
			green := a_green
		ensure
			green_set: green = a_green
		end
		
	set_blue (a_blue: INTEGER) is
			-- Set blue to `a_blue'.
		require
			a_blue_valid: is_valid_rgb_part (a_blue)
		do
			blue := a_blue
		ensure
			blue_set: blue = a_blue
		end
		

feature -- Status report

	is_valid_rgb_part (a_part: INTEGER): BOOLEAN is
			-- Is `a_part' a valid part of rgb-color?
		do
			Result := a_part >= 0 and a_part < 256
		end

feature -- Basic operation.

	out: STRING is
			-- Textual representation.
		do
			Result := "RGB(" + red.out + ", " + green.out + ", " + blue.out + ")"
		end
		
invariant
	red_valid: is_valid_rgb_part (red)
	green_valid: is_valid_rgb_part (green)
	blue_valid: is_valid_rgb_part (blue)

end
