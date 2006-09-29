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

create {TRAFFIC_MAP_FACTORY, TRAFFIC_SIMPLE_LINE}
	make_stop

create {TRAFFIC_LINE_SECTION}
	make_non_insertable

feature{NONE} -- Creation

	make_stop (a_place: TRAFFIC_PLACE; a_line: TRAFFIC_LINE) is
			-- Initialize `Current'
		require
			place_not_void: a_place /= Void
			line_not_void: a_line /= Void
		do
			place := a_place
			line := a_line

			place.stops.extend (Current)
		end

	make_non_insertable (a_place: TRAFFIC_PLACE; a_line_type: TRAFFIC_TYPE_LINE ) is
			-- Initialize `Current'
		require
			place_not_void: a_place /= Void
		do
			place := a_place
			create line.make ("dummy", a_line_type)
		end

feature -- Access

	name: STRING is
			-- return name of place
		do
			Result := place.name + line.name
		end

	line: TRAFFIC_LINE

feature -- Measurement

	hash_code: INTEGER is
			-- Hash code value.
		do
			Result := ([place.name, line.name]).hash_code
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
