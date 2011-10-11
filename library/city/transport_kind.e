note
	description: "Kind of transportation."

class
	TRANSPORT_KIND

inherit
	ANY
		redefine
			out
		end

create {CITY}
	make

feature {NONE} -- Initialization

	make (a_name: STRING; a_default_color: COLOR; a_icon_file: STRING)
			-- Create transportation kind `a_name' with default line color `a_default_color'
			-- and associated icon file `a_icon_file' (Void if no icon associated).
		do
			name := a_name
			default_color := a_default_color
			speed := 20.0 / 3.6 -- 20 km/h
			icon_file := a_icon_file
		ensure
			name_set: name = a_name
			default_color_set: default_color = a_default_color
			icon_set: icon_file = a_icon_file
		end

feature -- Access

	name: STRING
			-- Name.

	speed: REAL_64
			-- Average speed of vehicles of this kind (m/s).

	default_color: COLOR
			-- Default color for lines of this kind.

	icon_file: STRING
			-- File name of an icon associated with this this kind.
			-- (Void if no icon associated).

feature -- Output

	out: STRING
			-- Textual representation.
		do
			Result := name + " (speed: " + (speed * 3.6).rounded.out + " km/h)"
		end

invariant
	name_exists: name /= Void
	default_color_exists: default_color /= Void
	speed_positive: speed > 0.0
end
