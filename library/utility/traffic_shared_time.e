indexing
	description: "Singleton that simulates time of the day"
	date: "$Date$"

class
	TRAFFIC_SHARED_TIME

feature -- Access

	time: TRAFFIC_TIME is
			-- Time singleton that simulates a day
		once
			create Result.make
		ensure	
			Result_exists: Result /= Void
		end
	
end
