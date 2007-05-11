indexing
	description: "Objects that ..."
	author: ""
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
			-- Generate a new path with at most `n' random connections to be taken (not counting the invisible connections) on `map'.
			-- Result is accessable via `last_path'.
		require
			n_valid: n >= 1
			map_has_line_section: map.line_sections.count >= 1
		local
			i: INTEGER
			pa: ARRAY [TRAFFIC_PLACE]
			p: TRAFFIC_PLACE
			no: TRAFFIC_NODE
			s,t: TRAFFIC_PATH_SECTION
			finished: BOOLEAN
			c: TRAFFIC_CONNECTION
		do
			create last_path.make
			random.forth
			pa := map.places.to_array
			-- The starting place
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
					if s /= void and s.is_insertable (t) and s.is_same_place (t) then
						s.extend (t)
					elseif s /= Void then
						s.set_next (t)
					else
						last_path.set_first (t)
					end
					if not c.is_directed then
						-- Find correct no
						if c.destination_impl /= no then
							no := c.destination_impl
						else
							no := c.origin_impl
						end
					else
						no := c.destination_impl
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

	last_path: TRAFFIC_PATH

feature {NONE} -- Implementation

	random: RANDOM

end
