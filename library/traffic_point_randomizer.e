indexing
	description: "Randomizer that allows to produce lists of random positions that are on the map "
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_POINT_RANDOMIZER

create
	make

feature -- Initialization

	make (a_center: TRAFFIC_COORDINATE; a_radius: DOUBLE) is
			-- Initialize with `a_center' and `a_radius'.
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

	set_center (a_center: TRAFFIC_COORDINATE) is
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
				last_array.put_last (create {TRAFFIC_COORDINATE}.make (x, y))
				i := i + 1
			end
		ensure
			last_array_exists: last_array /= Void
			last_array_has_n_points: last_array.count = n
		end

feature -- Access

	last_array: DS_ARRAYED_LIST [TRAFFIC_COORDINATE]
			-- Last generated array of points

	radius: DOUBLE
			-- Radius in which points are generated

	center: TRAFFIC_COORDINATE
			-- Center around which points are generated

feature {NONE} -- Implementation

	random: RANDOM
			-- Random number generator

invariant

	center_exists: center /= Void
	random_exists: random /= Void

end
