indexing
	description: "Create the list of the players"
	date: "$Date$"
	revision: "$Revision$"

class
	PLAYER_FACTORY

inherit 
	EM_TIME_SINGLETON
	
create
	make

feature -- Initialization

	make (a_map: TRAFFIC_MAP) is
			-- Initialize factory to produce players in `a_map'.
		require
			a_map_exists: a_map /= Void
		do
			map := a_map
			create rng.make
			rng.set_seed (time.ticks)
			rng.start
			create occupied_numbers.make
		end

	players: ARRAYED_LIST [PLAYER]
			-- List of all the players
	
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
			create estate_agent.make (map, map.places.item ("Hauptbahnhof"), estate_agent_bot)
			players.extend (estate_agent)
			from
				i := 1
			until
				i > hunter_count
			loop
				calculate_random_place
				if random_place /= Void then
					create flat_hunter.make(map, random_place, estate_agent, flat_hunters_bot, "Hunter " + (i-1).out)
					players.extend (flat_hunter)				
				end
				i := i + 1
			end	
		ensure
			players_count_right: players.count = hunter_count + 1
		end
		
feature {NONE} -- Implementation
		
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
					random_place := map.places.linear_representation @ (random_number)
					if random_place = players.first.location then
						random_place := Void
					end
					occupied_numbers.extend (random_number)
				end				
			end
		end

	random_place: TRAFFIC_PLACE
			-- Free random location choosen by `calculate_random_place'.
	
	map: TRAFFIC_MAP
			-- Map on which to produce players.
		
	rng: RANDOM
			-- Random number generator
			
	occupied_numbers: LINKED_LIST [INTEGER]
			-- Indices of places that have already been occupied.
			
invariant
	map_exists: map /= Void
	
end
