indexing
	description: "Where a line can be boarded at a place"
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_STOP

inherit
	TRAFFIC_NODE
	redefine
		hash_code,
		out
	end

create
	make_stop

feature{NONE} -- Creation

	make_stop (a_place: TRAFFIC_PLACE; a_line: TRAFFIC_LINE) is --; a_x, a_y: REAL) is
			-- Initialize `Current' with name `a_name' and position `a_x', `a_y'.
		require
			place_not_void: a_place /= Void
			line_not_void: a_line /= Void
		do
			place := a_place
			line := a_line
			--create position.make (a_x, a_y)

			if not a_line.name.is_equal ("dummy") then
				place.stops.extend (Current)
			end
		end

feature -- Access

	name: STRING is
			-- return name of place
		do
			Result := place.name + line.name
		end

	line: TRAFFIC_LINE

-- remove redundancy	position: EM_VECTOR_2D

feature -- Measurement

	hash_code: INTEGER is
			-- Hash code value.
		do
			Result := ([place.name, line.name]).hash_code
		end

feature -- Status setting

--	set_position (a_position: EM_VECTOR_2D) is
--			-- Set position to `a_position'.
--		require
--			a_position_exists: a_position /= Void
--		do
--			position := a_position
--		ensure
--			position_set: position = a_position
--		end

feature -- Status report

	is_dummy_stop: BOOLEAN is
			-- Is this a dummy stop?
		do
			Result := place.dummy_stop = Current
		end

	out: STRING is
			-- info about the stop
		do
			Result := "Traffic stop:%NPlace: " + place.name + "%NLine: " + line.name --+ "%NPosition: " + position.out
		end

invariant
	place_not_void: place /= Void
	line_not_void: line /= Void

end
