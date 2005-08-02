indexing

	description: "Singleton access to main controller"
	date: "$Date$"
	revision: "$Revision$"

class

	SHARED_MAIN_CONTROLLER
	
feature -- Singleton access

	main_controller: MAIN_CONTROLLER is
			-- Main controller singleton
		once
			create Result.make
		ensure
			main_controller_not_void: Result /= Void
		end

end 
