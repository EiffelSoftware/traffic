note
	description: "A city object that changes position with time."

deferred class
	MOBILE

inherit
	CITY_ITEM

feature -- Access

	position: VECTOR
			-- Current position in the city.
		deferred
		end

	speed: REAL_64
			-- Motion speed (meters/second).
		deferred
		end

feature -- Movement

	move (dt: INTEGER)
			-- Update `position' as if `dt' milliseconds passed.
		require
			non_negative: dt >= 0
		do
			move_distance (speed * dt / 1000)
		end

feature {NONE} -- Movement

	move_distance (d: REAL_64)
			-- Move by `d' meters.
		require
			distance_non_negative: d >= 0
		deferred
		end

feature {CITY, CITY_ITEM} -- Implementation	

	hash_code: INTEGER
			-- Hash code value.
		do
			Result := speed.hash_code
		end

invariant
	position_exists: position /= Void
	speed_positive: speed > 0.0
end
