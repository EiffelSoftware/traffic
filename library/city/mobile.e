note
	description: "A city object that changes position with time."

deferred class
	MOBILE

feature -- Access

	position: VECTOR
			-- Current position in the city.			
		deferred
		end

feature -- Movement

	move (dt: INTEGER)
			-- Update `position' as if `dt' milliseconds passed.
		require
			non_negative: dt >= 0
		deferred
		end

invariant
	position_exists: position /= Void
end
