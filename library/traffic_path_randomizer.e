indexing
	description: "Random path generator (used for providing passengers with their paths)"
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_PATH_RANDOMIZER

create
	set_map

feature -- Element change

	set_map (a_map: TRAFFIC_MAP) is
			-- Initialize with `a_map'.
		require
			a_map_exists: a_map /= Void
		local
			t: TIME
		do
			create t.make_now
			create random.set_seed (t.compact_time)
			random.start
			map := a_map
		ensure
			map_set: map = a_map
		end

feature -- Basic operations

	generate_path (n: INTEGER) is
			-- Generate a new path with at most `n' random connections to be taken on `map'.
			-- Result is accessable via `last_path'.
		require
			n_valid: n >= 1
			map_has_line_section: map.line_sections.count >= 1
		local
			i: INTEGER
			pa: ARRAY [TRAFFIC_STATION]
			p: TRAFFIC_STATION
			no: TRAFFIC_NODE
			s,t: TRAFFIC_PATH_SECTION
			finished: BOOLEAN
			c: TRAFFIC_CONNECTION
		do
			create last_path
			random.forth
			pa := map.stations.to_array
			-- The starting station
			p := pa.item (random.item \\ pa.count + 1)
			random.forth
			no := p.nodes.i_th (random.item \\ p.nodes.count + 1)
			from
				i := 1
			until
				i > n or finished
			loop
				random.forth
				if no.connection_list.count <= 0 then
					finished := True
				else
					c := no.connection_list.i_th (random.item \\ no.connection_list.count + 1)
					create t.make (c)
					if s /= void and s.is_joinable (t) then
						s.join (t)
					elseif s /= Void then
						s.set_next (t)
					else
						last_path.set_first (t)
					end
					if not c.is_directed then
						-- Find correct no
						if c.end_node /= no then
							no := c.end_node
						else
							no := c.start_node
						end
					else
						no := c.end_node
					end
				end
				s := t
				i := i + 1
			end
			-- Backup algorithm if the above did not find a path with at least one connection that is visible
			if last_path.first = Void then
				random.forth
				create t.make (map.line_sections.item (random.item \\ map.line_sections.count + 1))
				last_path.set_first (t)
			end
		ensure
			last_path_exists: last_path /= Void
		end

feature -- Access

	map: TRAFFIC_MAP
			-- Map used for finding paths

	last_path: TRAFFIC_PATH
			-- Last path that was generated

feature {NONE} -- Implementation

	random: RANDOM
			-- Random number generator

invariant

	map_exists: map /= Void
	random_exists: random /= Void

end
