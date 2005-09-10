indexing

	description: "Singleton access to all scenes in the application"
	date: "$Date$"
	revision: "$Revision$"

class

	SHARED_SCENES
	
feature -- Singleton access

--	start_menu_scene: START_MENU_SCENE is
--			-- Start menu scene singleton
--		once
--			create Result.make_scene
--		ensure
--			scene_not_void: Result /= Void
--		end
--		
--	game_scene: GAME_SCENE is
--			-- Game scene singleton
--		once
--			create Result.make
--		ensure
--			scene_not_void: Result /= Void
--		end
--		
--	credits_scene: CREDITS_SCENE is
--			-- Credits scene singleton
--		once
--			create Result.make_scene
--		ensure
--			scene_not_void: Result /= Void
--		end

end 
