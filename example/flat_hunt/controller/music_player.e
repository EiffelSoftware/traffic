indexing

	description: "[
					Music player with some basic features. Just put your music 
					into `directory'. The music player will load all the .ogg and .mp3 files from there.
					]"
	date: "$Date$"
	revision: "$Revision$"

class

	MUSIC_PLAYER

inherit

	EM_SHARED_AUDIO_FACTORY
	
	EM_AUDIO_CONSTANTS
	
	EM_TIME_SINGLETON
	
	THEME

create
	make
	
feature -- Initialization

	make is
			-- Creation procedure
		local
			available_songs_names: ARRAYED_LIST [STRING]
			sound_dir: DIRECTORY
			i: INTEGER
		do
			directory := Sound_directory
			
--			Precursor
--			track.set_music_volume (default_volume)
--			
			-- Initialize random number generator for shuffle mode
			create rng.make
			rng.set_seed (time.ticks)
			rng.start

			shuffle := false
			create played_songs.make (0)
			current_song := 1
			volume := Em_max_volume
			
			-- Load music from `directory' into `available_songs'.
			create sound_dir.make (directory)
			create available_songs.make (0)
			if sound_dir.exists then
				create available_songs_names.make (10)
				available_songs_names := sound_dir.linear_representation
				from
					available_songs_names.start
					i := 1
				until
					available_songs_names.after
				loop
					if available_songs_names.item.has_substring (".ogg") or available_songs_names.item.has_substring (".mp3") then
						audio_factory.create_music_from_file (directory + "/" + available_songs_names.item, "")
						available_songs.extend (audio_factory.last_music)
						available_songs.last.set_volume (volume)
						i := i + 1
					end
					available_songs_names.forth
				end
			end
			
		end


feature -- Access

	play_game_music is
			-- Play the default background music.
		local
			found: BOOLEAN
		do
			from
				available_songs.start
			until
				found or available_songs.after
			loop
				if available_songs.item.filename.has_substring (background_music) then
					current_song := available_songs.index
					found := true
				end
				available_songs.forth
			end
			available_songs.i_th (current_song).set_volume (volume)
			available_songs.i_th (current_song).play (1)
		end
		
	play_next_song is
			-- Get next song from `available_songs' and play
		local
			next_song: INTEGER
		do
			next_song := current_song
			if shuffle then
				if played_songs.count > played_songs.index then -- `play_previous_song' was called in shuffle mode
					played_songs.forth
					next_song := played_songs.item
				else
					played_songs.extend (next_song)
					if played_songs.count = 1 then
						played_songs.start
					end
					played_songs.forth
					next_song := random_song					
				end
			else
				next_song := next_song + 1
				if next_song > available_songs.count then
					next_song := 1
				end
			end
			set_volume (volume)
--			cross_fade (available_songs.i_th (current_song), available_songs.i_th (next_song))
			available_songs.i_th (next_song).play (1)
			current_song := next_song
		end
		
	play_previous_song is
			-- Get previous song from `available_songs' and play
		local
			previous_song: INTEGER
		do
			previous_song := current_song
			if shuffle then
				if played_songs.index > 1 then
					played_songs.back
					previous_song := played_songs.item
				end
			else
				previous_song := previous_song - 1
				if previous_song < 1 then
					previous_song := available_songs.count
				end
			end	
			set_volume (volume)
			available_songs.i_th (previous_song).play (1)
			current_song := previous_song
		end		

	increase_volume is
			-- Increase volume by `increase_step'
		local
			tmp_volume: like volume
		do
			tmp_volume := volume + increase_step
			if tmp_volume > Em_max_volume then
				tmp_volume := Em_max_volume
			end
			set_volume (tmp_volume)
		end

	decrease_volume is
			-- Decrease volume by `decrease_step'
		local
			tmp_volume: like volume
		do
			tmp_volume := volume - decrease_step
			if tmp_volume < 0 then
				tmp_volume := 0
			end
			set_volume (tmp_volume)
		end		

feature -- Settings

	set_volume (a_volume: like volume) is
			-- Set `volume' to `a_volume'
		do
			volume := a_volume
			if available_songs.i_th (current_song).volume /= volume then
				available_songs.i_th (current_song).set_volume (volume)
			end	
		end
		

	set_shuffle (b: like shuffle) is
			-- Enable or disable shuffle mode
		do
			if shuffle /= b then
				if shuffle then
					played_songs.wipe_out
				end
				shuffle := b				
			end
		end
	
	toggle_shuffle is
			-- Toggle shuffle mode
		do
			if shuffle then
				played_songs.wipe_out				
			end
			shuffle := not shuffle
		end

--	toggle_mute is
--		do
--			mute := not mute
--		end
--		
--	toggle_pause is
--		do
--			paused := not paused
--		end
--
--	toggle_fading is
--		do
--			fading := not fading
--		end

feature -- Queries

	is_in_shuffle: BOOLEAN is
			-- Is music player in shuffle mode?
		do
			Result := shuffle
		end
		
	is_music_playing: BOOLEAN is
			-- Is music player currently playing something
		do
			Result := available_songs.i_th (current_song).is_playing
		end
		

feature -- Attributes

	available_songs: ARRAYED_LIST [EM_MUSIC]
		-- All available songs in Sound_directory.

feature {NONE} -- Implementation
	
	current_song: INTEGER
		-- Index of song currently playing.

	played_songs: ARRAYED_LIST [INTEGER]
		-- To keep track of played songs when in shuffle mode.
	
	rng: RANDOM
		-- Random number generator for shuffle mode.
	
	shuffle: BOOLEAN
		-- Is music player in shuffle mode?
	
--	mute: BOOLEAN
--		-- Is music player currently mute?
--	
--	paused: BOOLEAN
--		-- Is music player currently paused?

	fade: BOOLEAN
		-- Is crossfading enabled?

	random_song: INTEGER is
			-- Generate a random number to choose next song to play.
		do
			Result := rng.item \\ available_songs.count + 1
			rng.forth
		end
	
	directory: STRING
		-- Directory where the music player loads its music from.
		
	volume: INTEGER
		-- Current volume.
		
	increase_step: INTEGER is 8
		-- Size of step taken when volume gets increased.

	decrease_step: INTEGER is 8
		-- Size of step taken when volume gets decreased.

	cross_fade (a_song, another_song: EM_MUSIC) is
			-- cross fade `a_song' into `another_song'
		do
			if not a_song.is_fading then
				from
					a_song.stop_with_fade_out (5000)
				until
					not a_song.is_fading_out
				loop
				end
			else
				a_song.stop
			end
			another_song.play_with_fade_in (1, 5000)
		end
		
		
invariant
	available_songs_not_void: available_songs /= Void
	available_songs_not_empty: not available_songs.is_empty
	volume_valid: volume >= 0 and volume <= Em_max_volume
	current_song_valid: current_song > 0 and current_song <= available_songs.count
end
