note
	description: "RGB color."

class
	COLOR

inherit
	ANY
		redefine
			out
		end

create
	make_from_rgb,
	make_from_hex

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
			-- Red component.

	green: NATURAL_8
			-- Green component.

	blue: NATURAL_8
			-- Blue component.

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
end
