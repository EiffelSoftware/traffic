note
	description: "Kind of transportation."

deferred class
	TRANSPORT_KIND

feature -- Access
	name: STRING
			-- Name.
		deferred
		end

	speed: REAL_64
			-- Average speed of vehicles of this kind (km/h).
		deferred
		end
end
