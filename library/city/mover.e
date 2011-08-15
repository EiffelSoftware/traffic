note
	description: "A city object that responds to time between updates."

class
	MOVER

create
	make

feature
	make (a_name: STRING; a_position: VECTOR)
		require
			non_void_name: a_name /= Void
		do
			initial_position := a_position
			offset := [50.0, 0.0]
			name := a_name.twin
		end

	name: STRING

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
	initial_position: VECTOR

end
