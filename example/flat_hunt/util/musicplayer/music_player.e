indexing

	description: "[
					Music player with some basic features. Just put your music into `directory'. 
					The music player will load all the .ogg files from there.
				]"
	date: "$Date$"
	revision: "$Revision$"

class
	MUSIC_PLAYER

inherit
	EM_MUSIC_PLAYER
	
	THEME

	KL_SHARED_FILE_SYSTEM
		export {NONE} all
		undefine default_create end

	KL_SHARED_EXECUTION_ENVIRONMENT
		export {NONE} all
		undefine default_create end

create
	make
	
feature -- Initialization

	make is
			-- Creation procedure.
		local
			extensions: DS_LINKED_LIST [STRING]
		do
			create extensions.make
			extensions.put_first (".ogg")
			make_with_path (Sound_directory, extensions, True, True)
			
			-- Set defaults.
			set_shuffle (False)
			set_volume (em_max_volume)
			set_repeat (True)
		end
		
feature -- Basic Operations

	play_game_music is
			-- Play the default background music.
		local
			found: BOOLEAN
			i: INTEGER
		do
			if not is_playing then
				from 
					i := 1
				until
					i > playlist.count or found
				loop
					if playlist.get_i_th (i).has_substring (background_music) then
						play_i_th (i)
						found := True
					else
						i := i + 1
					end
				end
				if not found then
					play_i_th (1)
				end
			end
		end
		

	increase_volume is
			-- Increase volume by `Increase_step'.
		local
			tmp_volume: like volume
		do
			tmp_volume := volume + Increase_step
			
			-- Clip `tmp_volume' to `Em_max_volume' if it gets too high.
			if tmp_volume > Em_max_volume then
				tmp_volume := Em_max_volume
			end
			
			set_volume (tmp_volume)
		end

	decrease_volume is
			-- Decrease volume by `Decrease_step'.
		local
			tmp_volume: like volume
		do
			tmp_volume := volume - Decrease_step
			
			-- Clip `tmp_volume' to 0 if it gets negative.
			if tmp_volume < 0 then
				tmp_volume := 0
			end
			
			set_volume (tmp_volume)
		end	

feature {NONE} -- Constants

	Increase_step: INTEGER is 8
			-- Size of step taken when volume gets increased.

	Decrease_step: INTEGER is 8
			-- Size of step taken when volume gets decreased.

invariant
	volume_valid: volume >= 0 and volume <= Em_max_volume

end
