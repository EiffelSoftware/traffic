indexing
	description: "Randomizer that allows to produce lists of random positions that are on the map "
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_POINT_RANDOMIZER

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

	generate_point_array (n: INTEGER) is
			-- Generate a new array with `n' random points on `map'.
			-- Result is accessable via `last_array'.
		require
			n_valid: n > 0
		local
			i: INTEGER
			x, y: DOUBLE
		do
			create last_array.make (n)
			from
				i := 1
			until
				i > n
			loop
				random.forth
				x := random.double_item * map.radius * 2 - map.radius + map.center.x
				random.forth
				y := random.double_item * map.radius * 2 - map.radius + map.center.y
				last_array.put_last (create {EM_VECTOR_2D}.make (x, y))
				i := i + 1
			end
		ensure
			last_array_exists: last_array /= Void
			last_array_has_n_points: last_array.count = n
		end

feature -- Access

	map: TRAFFIC_MAP

	last_array: DS_ARRAYED_LIST [EM_VECTOR_2D]

feature {NONE} -- Implementation

	random: RANDOM

end
