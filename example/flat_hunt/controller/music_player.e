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
			available_songs.i_th (current_song).play (1)
		end
		
	play_next_song is
			-- Get next song from `available_songs' and play
		do
			if shuffle then
				if played_songs.count > played_songs.index then -- `play_previous_song' was called in shuffle mode
					played_songs.forth
					current_song := played_songs.item
				else
					played_songs.extend (current_song)
					if played_songs.count = 1 then
						played_songs.start
					end
					played_songs.forth
					current_song := random_song					
				end
			else
				current_song := current_song + 1
				if current_song > available_songs.count then
					current_song := 1
				end
			end
			available_songs.i_th (current_song).play (1)
		end
		
	play_previous_song is
			-- Get previous song from `available_songs' and play
		do
			if shuffle then
				if played_songs.index > 1 then
					played_songs.back
					current_song := played_songs.item
				end
			else
				current_song := current_song - 1
				if current_song < 1 then
					current_song := available_songs.count
				end
			end	
			available_songs.i_th (current_song).play (1)
		end		

feature -- Settings

	set_shuffle (b: BOOLEAN) is
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

	random_song: INTEGER is
			-- Generate a random number to choose next song to play
		do
			Result := rng.item \\ available_songs.count + 1
			rng.forth
		end
	
	directory: STRING
		-- The directory where the music player loads its music from
		
invariant
	available_songs_not_void: available_songs /= Void
	available_songs_not_empty: not available_songs.is_empty
end
