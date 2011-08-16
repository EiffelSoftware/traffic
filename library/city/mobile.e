note
	description: "A city object that responds to time between updates."

deferred class
	MOBILE

feature
	make_with_position (a_name: STRING; a_position: VECTOR)
		require
			non_void_name: a_name /= Void
		do
			initial_position := a_position
			name := a_name.twin
		end

	name: STRING

	update_with_dt (dt: INTEGER)
		deferred
		end

	position: VECTOR
		deferred
		end

	initial_position: VECTOR

end
