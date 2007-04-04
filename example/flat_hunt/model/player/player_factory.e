indexing
	description: "Create the list of players."
	date: "$Date$"
	revision: "$Revision$"

class
	PLAYER_FACTORY

inherit
	EM_TIME_SINGLETON

create
	make

feature -- Initialization

	make (a_map: like map) is
			-- Initialize factory to produce players in `a_map'.
		require
			a_map_exists: a_map /= Void
		do
			map := a_map
			create rng.make
			rng.set_seed (time.ticks)
			rng.start
			create occupied_numbers.make
		ensure
			map_set: map = a_map
		end

feature -- Access

	players: ARRAYED_LIST [PLAYER]
			-- List of all the players.

feature -- Basic Operations

	build_players (estate_agent_bot, flat_hunters_bot: BOOLEAN; hunter_count: INTEGER) is
			-- Build players and add to list.
		require
			correct_number_of_hunters: 1 <= hunter_count and hunter_count <= 8
		local
			estate_agent: ESTATE_AGENT
			flat_hunter: FLAT_HUNTER
			i: INTEGER
		do
			create players.make (hunter_count + 1)

			-- Create estate agent.
			calculate_random_place
			create estate_agent.make (map, random_place, estate_agent_bot)
			players.extend (estate_agent)

			-- Create flat hunters.
			from
				i := 1
			until
				i > hunter_count
			loop
				calculate_random_place
				if random_place /= Void then
					create flat_hunter.make (map, random_place, estate_agent, flat_hunters_bot, "Hunter " + i.out)
					players.extend (flat_hunter)
				end
				i := i + 1
			end
		ensure
			players_count_correct: players.count = hunter_count + 1
		end

feature {NONE} -- Implementation

	map: TRAFFIC_MAP
			-- Map on which to produce players.		

	random_place: TRAFFIC_PLACE
			-- Free random location choosen by `calculate_random_place'.

	rng: RANDOM
			-- Random number generator

	occupied_numbers: LINKED_LIST [INTEGER]
			-- Indices of places that have already been occupied.

	calculate_random_place is
			-- Find a free location randomly.
		local
			random_number: INTEGER
		do
			from
				random_place := Void
			until
				random_place /= Void or occupied_numbers.count = map.places.count
			loop
				random_number := rng.item
				random_number := random_number \\ map.places.count + 1
				rng.forth
				if not occupied_numbers.has (random_number) then
					random_place := map.places.to_array @ (random_number)
					if not players.is_empty and then random_place = players.first.location then
						random_place := Void
					end
					occupied_numbers.extend (random_number)
				end
			end
		end

invariant
	map_exists: map /= Void
	rng_exists: rng /= Void
	occupied_numbers_exists: occupied_numbers /= Void

end
