note
	description: "Output console for traffic applications."

class
	TRAFFIC_CONSOLE

inherit
	EV_TEXT_FIELD

inherit {NONE}
	EV_STOCK_COLORS
		rename
			Implementation as Colors_implementation
		export {NONE}
			all
		undefine
			default_create,
			copy
		end

	EV_FONT_CONSTANTS
		export {NONE}
			all
		undefine
			default_create,
			copy
		end

create
	make

feature {NONE} -- Initialization

	make
			-- Create with default parameters.
		do
			make_with_text ("Welcome to Traffic!")
			disable_edit
			set_background_color (Black)
			set_foreground_color (Green)
			set_font (create {EV_FONT}.make_with_values (Family_screen, Weight_regular, Shape_regular, 16))
		end

feature -- Basic operations

	output (object: ANY)
			-- Display information on `object'.
		require
			object_exists: object /= Void
		do
			set_text (capitalized (first_line (object.out)))
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
