note
	description: "RGB color."

class
	COLOR

inherit
	ANY
		redefine
			out
		end

inherit {NONE}
	DOUBLE_COMPARISON
		redefine
			out
		end

create
	make_from_rgb,
	make_from_real_rgb,
	make_from_hex

convert
	make_from_hex ({STRING})

feature {NONE} -- Initialization

	make_from_rgb (r, g, b: NATURAL_8)
			-- Create a color with red component `r', green component `g' and blue component `b'.
		do
			red := r
			green := g
			blue := b
		ensure
			red_set: red = r
			green_set: green = g
			blue_set: blue = b
		end

	make_from_real_rgb (r, g, b: REAL_64)
			-- Create a color with red component `r', green component `g' and blue component `b'.
		require
			r_in_range: 0.0 <= r and r <= 1.0
			g_in_range: 0.0 <= g and g <= 1.0
			b_in_range: 0.0 <= b and b <= 1.0
		do
			red := ({NATURAL_8}.max_value * r).rounded.to_natural_8
			green := ({NATURAL_8}.max_value * g).rounded.to_natural_8
			blue := ({NATURAL_8}.max_value * b).rounded.to_natural_8
		ensure
			red_set: (real_red - r).abs <= 1 / {NATURAL_8}.max_value
			green_set: (real_green - g).abs <= 1 / {NATURAL_8}.max_value
			blue_set: (real_blue - b).abs <= 1 / {NATURAL_8}.max_value
		end

	make_from_hex (s: STRING)
			-- Create a color with hexadecimal representation `s'.
		require
			valid_length: s.count = Hex_format_length
			valid_characters: across s as i all i.item.is_hexa_digit end
		local
			converter: HEXADECIMAL_STRING_TO_INTEGER_CONVERTER
		do
			create converter.make
			converter.parse_string_with_type (s.substring (1, 2), converter.type_natural_8)
			red := converter.parsed_natural_8
			converter.parse_string_with_type (s.substring (3, 4), converter.type_natural_8)
			green := converter.parsed_natural_8
			converter.parse_string_with_type (s.substring (5, 6), converter.type_natural_8)
			blue := converter.parsed_natural_8
		ensure
			valid_hex_format: out.is_case_insensitive_equal (s)
		end

feature -- Access

	red: NATURAL_8
			-- Red component in [0, 255].

	green: NATURAL_8
			-- Green component in [0, 255].

	blue: NATURAL_8
			-- Blue component in [0, 255].

	real_red: REAL_64
			-- Red component in [0.0, 1.0]
		do
			Result := red / {NATURAL_8}.max_value
		end

	real_green: REAL_64
			-- Green component in [0.0, 1.0]
		do
			Result := green / {NATURAL_8}.max_value
		end

	real_blue: REAL_64
			-- Blue component in [0.0, 1.0]
		do
			Result := blue / {NATURAL_8}.max_value
		end

	brightness: REAL_64
			-- Brightness (HSB scale).
		do
			Result := (real_red + real_green + real_blue) / 3
		end

feature -- Output

	Hex_format_length: INTEGER = 6
			-- Number of characters in the hexadecimal string representation.

	out: STRING
			-- Hexadecimal string representation of the color.
		do
			Result := red.to_hex_string + green.to_hex_string + blue.to_hex_string
		ensure then
			valid_length: Result.count = Hex_format_length
		end

invariant
	real_red_in_bounds: 0.0 <= real_red and real_red <= 1.0
	real_green_in_bounds: 0.0 <= real_green and real_green <= 1.0
	real_blue_in_bounds: 0.0 <= real_blue and real_blue <= 1.0
	brightness_in_bounds: 0.0 <= brightness and brightness <= 1.0
end
