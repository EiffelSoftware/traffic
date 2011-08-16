note
	description: "Summary description for {SPINNER}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	SPINNER

inherit
	MOBILE

create
	make

feature
	make (a_name: STRING; a_position: VECTOR)
		do
			make_with_position (a_name, a_position)
			offset := [50.0, 0.0]
		end

	update_with_dt (dt: INTEGER)
		do
			offset := offset.rotated ( (dt / 1000.0) * rotation_speed)
		end

	position: VECTOR
		do
			Result := initial_position + offset
		end

	rotation_speed: DOUBLE
		do
			Result := 3.14
		end

	offset: VECTOR

end
