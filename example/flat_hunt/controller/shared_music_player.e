indexing

	description: "Singleton access to music player"
	date: "$Date$"
	revision: "$Revision$"

class

	SHARED_MUSIC_PLAYER
	
feature -- Singleton access

	music_player: MUSIC_PLAYER is
			-- Start menu scene singelton
		once
			create Result.make
		ensure
			music_player_not_void: Result /= Void
		end

end 
