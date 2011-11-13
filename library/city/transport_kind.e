note
	description: "Kind of transportation."

class
	TRANSPORT_KIND

inherit
	ANY
		redefine
			out
		end

create
	make

feature {NONE} -- Initialization

	make (a_name: STRING; a_default_color: COLOR)
			-- Create transportation kind `a_name' with default line color `a_default_color'.
		require
			name_exists: a_name /= Void
			default_color_exists: a_default_color /= Void
		do
			name := a_name
			default_color := a_default_color
			speed := 15.0 / 3.6 -- 15 km/h
		ensure
			name_set: name = a_name
			default_color_set: default_color = a_default_color
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

feature -- Modification

	set_speed (s: REAL_64)
			-- Set `speed' to `s'.
		require
			speed_positive: s > 0.0
		do
			speed := s
		ensure
			speed_set: speed = s
		end

	set_icon_file (a_file_name: STRING)
			-- Set `icon_file' to `a_file_name'.
		do
			icon_file := a_file_name
		ensure
			icon_file_set: icon_file = a_file_name
		end

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
