note
	description: "Output console for traffic applications."

class
	TRAFFIC_CONSOLE

inherit
	ANY
		redefine
			default_create
		end

inherit {NONE}
	EV_STOCK_COLORS
		rename
			Implementation as Colors_implementation
		export {NONE}
			all
		redefine
			default_create
		end

	EV_FONT_CONSTANTS
		export {NONE}
			all
		redefine
			default_create
		end

create
	default_create, make_multiline

feature -- Initialization

	default_create
			-- Create single-line console.
		local
			ta: EV_TEXT_FIELD
		do
			if text_area /= Void then
				text_area.destroy
			end
			create ta
			ta.disable_edit
			ta.set_background_color (Black)
			ta.set_foreground_color (Green)
			ta.set_font (create {EV_FONT}.make_with_values (Family_typewriter, Weight_regular, Shape_regular, 16))
			text_area := ta
		end

	make_multiline (n: INTEGER)
			-- Create console with `n' lines.
		local
			ta: EV_TEXT
		do
			if text_area /= Void then
				text_area.destroy
			end
			is_multiline := True
			create ta
			ta.disable_edit
			ta.set_background_color (Black)
			ta.set_foreground_color (Green)
			ta.set_font (create {EV_FONT}.make_with_values (Family_typewriter, Weight_regular, Shape_regular, 16))
			ta.set_minimum_height (ta.font.line_height * n + 10)
			text_area := ta
		end

feature -- Access

	text_area: EV_TEXT_COMPONENT
			-- Widget where the text is output.

feature -- Status report

	is_multiline: BOOLEAN
			-- Can console output multiple lines?

feature -- Basic operations

	output (object: ANY)
			-- Display information on `object'.
			-- (Replace previously displayed information).
		require
			object_exists: object /= Void
		do
			if is_multiline then
				text_area.set_text (capitalized (object.out))
			else
				text_area.set_text (capitalized (first_line (object.out)))
			end
		end

	clear
			-- Remove all text.
		do
			text_area.remove_text
		end

	append_line (s: STRING)
			-- Display `s' on a new line.
		require
			s_exists: s /= Void
			multiline: is_multiline
		do
			if not text_area.text.is_empty then
				text_area.set_text (text_area.text + "%N" + s)
			else
				text_area.set_text (s)
			end
		end

feature {NONE} -- Implementation

	first_line (s: STRING): STRING
			-- First line of `s'.
		local
			i: INTEGER
		do
			i := s.index_of ('%N', 1)
			if i = 0 then
				Result := s
			else
				Result := s.substring (1, i - 1)
			end
		end

	capitalized (s: STRING): STRING
			-- String `s' with first letter capitalized.
		require
			s_exists: s /= Void
		do
			if s.is_empty or else not s [1].is_lower then
				Result := s
			else
				Result := s.substring (2, s.count)
				Result.precede (s [1].as_upper)
			end
		end

end
