indexing

	description: "Singleton access to all scenes in the application"
	date: "$Date$"
	revision: "$Revision$"

class

	SHARED_SCENES
	
feature -- Singleton access

	start_menu_scene: START_MENU_SCENE is
			-- Start menu scene singelton
		once
			create Result
		ensure
			scene_not_void: Result /= Void
		end
		
	game_scene: GAME_SCENE is
			-- Game scene singelton
		once
			create Result
		ensure
			scene_not_void: Result /= Void
		end
		
	credits_scene: CREDITS_SCENE is
			-- Credits scene singelton
		once
			create Result
		ensure
			scene_not_void: Result /= Void
		end

end 
