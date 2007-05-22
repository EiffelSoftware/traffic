indexing
	description: "Randomizer that allows to produce lists of random positions that are on the map "
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_POINT_RANDOMIZER

create
	make

feature -- Initialization

	make (a_center: EM_VECTOR_2D; a_radius: DOUBLE) is
			--
		require
			a_center_exists: a_center /= Void
			a_radius_valid: a_radius > 0
		local
			t: TIME
		do
			create t.make_now
			create random.set_seed (t.compact_time)
			random.start
			center := a_center
			radius := a_radius
		ensure
			random_set: random /= Void
			center_set: center = a_center
			radius_set: radius = a_radius
		end

feature -- Element change

	set_center (a_center: EM_VECTOR_2D) is
			-- Set `center' to `a_center'.
		require
			a_center_exists: a_center /= Void
		do
			center := a_center
		ensure
			center_set: center = a_center
		end

	set_radius (a_radius: DOUBLE) is
			-- Set `radius' to `a_radius'.
		require
			a_radius_valid: a_radius > 0
		do
			radius := a_radius
		ensure
			radius_set: radius = a_radius
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
				x := random.double_item * radius * 2 - radius + center.x
				random.forth
				y := random.double_item * radius * 2 - radius + center.y
				last_array.put_last (create {EM_VECTOR_2D}.make (x, y))
				i := i + 1
			end
		ensure
			last_array_exists: last_array /= Void
			last_array_has_n_points: last_array.count = n
		end

feature -- Access

--	map: TRAFFIC_MAP
			-- Map for which the points are generated

	last_array: DS_ARRAYED_LIST [EM_VECTOR_2D]
			-- Last generated array of points

	radius: DOUBLE

	center: EM_VECTOR_2D

feature {NONE} -- Implementation

	random: RANDOM
			-- Random number generator

invariant

	center_exists: center /= Void
	random_exists: random /= Void

end
