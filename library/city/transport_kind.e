note
	description: "Kind of transportation."

class
	TRANSPORT_KIND

create {CITY}
	make

feature {NONE} -- Initialization

	make (a_name: STRING; a_default_color: COLOR)
			-- Create transportation kind `a_name' with dfeault line color `a_default_color'.
		do
			name := a_name
			default_color := a_default_color
			speed := 50.0
		ensure
			name_set: name = a_name
			default_color_set: default_color = a_default_color
		end

feature -- Access

	name: STRING
			-- Name.

	speed: REAL_64
			-- Average speed of vehicles of this kind (km/h).

	default_color: COLOR
			-- Default color for lines of this kind.

invariant
	name_exists: name /= Void
	default_color_exists: default_color /= Void
	speed_positive: speed > 0.0
end
