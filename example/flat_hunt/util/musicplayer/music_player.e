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
	EM_SHARED_SUBSYSTEMS
	
	EM_SHARED_AUDIO_FACTORY
	
	EM_AUDIO_CONSTANTS
	
	EM_TIME_SINGLETON
	
	THEME

	MEMORY
		redefine 
			dispose 
		end

create
	make
	
feature -- Initialization

	make is
			-- Creation procedure.
		local
			available_songs_names: ARRAYED_LIST [STRING]
			sound_dir: DIRECTORY
			i: INTEGER
		do
			-- Initialize audio subsystem.
			audio_subsystem.enable
			audio_subsystem.mixer.open (Em_default_frequency, Em_audio_format_s16sys, Em_stereo, Em_default_chunk_size)			

			directory := Sound_directory
			create sound_dir.make (directory)
			create available_songs.make (0)
			create played_songs.make (0)

			-- Initialize random number generator for shuffle mode.
			create rng.make
			rng.set_seed (time.ticks)
			rng.start

			-- Set defaults.
			shuffle := False
			current_song := 1
			volume := Em_max_volume
			
			-- Load music from `directory' into `available_songs'.
			if sound_dir.exists then
				create available_songs_names.make (0)
				available_songs_names := sound_dir.linear_representation
				from
					available_songs_names.start
					i := 1
				until
					available_songs_names.after
				loop
					if available_songs_names.item.has_substring (".ogg") then
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

	available_songs: ARRAYED_LIST [EM_MUSIC]
			-- All available songs in Sound_directory.
	
	current_song: INTEGER
			-- Index of song currently playing.

	volume: INTEGER
			-- Current volume.		

feature -- Status Report

	is_in_shuffle: BOOLEAN is
			-- Is music player in shuffle mode?
		do
			Result := shuffle
		end
		
	is_music_playing: BOOLEAN is
			-- Is music player currently playing something?
		do
			Result := available_songs.i_th (current_song).is_playing
		end

feature -- Status Setting

	set_volume (a_volume: like volume) is
			-- Set `volume' to `a_volume'.
		require
			a_volume_valid: a_volume >= 0 and a_volume <= Em_max_volume
		do
			volume := a_volume
			if available_songs.i_th (current_song).volume /= volume then
				available_songs.i_th (current_song).set_volume (volume)
			end	
		ensure
			volume_set: volume = a_volume and available_songs.i_th (current_song).volume = a_volume
		end

	set_shuffle (b: like shuffle) is
			-- Enable or disable shuffle mode.
		do
			if shuffle /= b then
				if b then
					played_songs.wipe_out
				end
				shuffle := b				
			end
		ensure
			shuffle_set: shuffle = b
			played_songs_wiped: b implies played_songs.is_empty
		end
	
	toggle_shuffle is
			-- Toggle shuffle mode.
		do
			set_shuffle (not shuffle)
		end

feature -- Basic Operations

	play_game_music is
			-- Play the default background music.
		local
			found: BOOLEAN
		do
			found := False
			from
				available_songs.start
			until
				found or available_songs.after
			loop
				if available_songs.item.filename.has_substring (background_music) then
					current_song := available_songs.index
					found := True
				end
				available_songs.forth
			end
			
			-- If `background_music' not found, play first song in list.
			if not found then
				current_song := 1
			end

			available_songs.i_th (current_song).set_volume (volume)
			available_songs.i_th (current_song).play (1)
		end
		
	play_next_song is
			-- Get next song and play it.
		local
			next_song: INTEGER
		do
			if is_in_shuffle then
				if played_songs.count > played_songs.index then 
					-- `play_previous_song' was called in shuffle mode, thus play next song from `played_songs'.
					played_songs.forth
					next_song := played_songs.item
				else 
					-- Choose a song at random and play it.
					played_songs.extend (current_song)
					if played_songs.count = 1 then
						played_songs.start
					end
					played_songs.forth
					next_song := random_song					
				end
			else
				-- Music player is not in shuffle mode, thus play next song from `available_songs'.
				next_song := current_song + 1
				if next_song > available_songs.count then
					next_song := 1
				end
			end
			
			set_volume (volume)
			stop_current_song
			available_songs.i_th (next_song).play (1)
			current_song := next_song
		end
		
	play_previous_song is
			-- Get previous song and play it.
		local
			previous_song: INTEGER
		do
			if is_in_shuffle then
				if played_songs.index > 1 then
					-- There are already played songs in shuffle mode, thus play the last of those.
					played_songs.back
					previous_song := played_songs.item
				else
					previous_song := current_song
				end
			else
				-- Music player is not in shuffle mode, thus play previous song from `available_songs'.
				previous_song := current_song - 1
				if previous_song < 1 then
					previous_song := available_songs.count
				end
			end	
			
			set_volume (volume)
			stop_current_song
			available_songs.i_th (previous_song).play (1)
			current_song := previous_song
		end		

	stop_current_song is
			-- Stop current song.
		do
			available_songs.i_th (current_song).stop
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
		
	dispose is
			-- Disable audio system.
		require else
			subsystem_enabled: audio_subsystem.is_enabled
		do
			stop_current_song
			audio_subsystem.disable	
			Precursor {MEMORY}
		ensure then
			mixer_is_closed: not audio_subsystem.mixer.is_open
			subsystem_disabled: not audio_subsystem.is_enabled			
		end
		

feature {NONE} -- Constants

	Increase_step: INTEGER is 8
			-- Size of step taken when volume gets increased.

	Decrease_step: INTEGER is 8
			-- Size of step taken when volume gets decreased.

feature {NONE} -- Implementation

	played_songs: ARRAYED_LIST [INTEGER]
			-- To keep track of played songs when in shuffle mode.
	
	shuffle: BOOLEAN
			-- Is music player in shuffle mode?
			
	rng: RANDOM
			-- Random number generator for shuffle mode.

	directory: STRING
			-- Directory where the music player loads its music from.

	random_song: INTEGER is
			-- Generate a random number to choose next song to play.
		do
			Result := rng.item \\ available_songs.count + 1
			rng.forth
		end

invariant
	available_songs_exists: available_songs /= Void
	available_songs_not_empty: not available_songs.is_empty
	played_songs_exists: played_songs /= Void
	rng_exists: rng /= Void
	volume_valid: volume >= 0 and volume <= Em_max_volume
	current_song_valid: current_song > 0 and current_song <= available_songs.count
end
