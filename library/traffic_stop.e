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

create {TRAFFIC_MAP_FACTORY, TRAFFIC_SIMPLE_LINE, TOUCH_PLACE}
	make_stop

create {TRAFFIC_LINE_SECTION}
	make_non_insertable

feature{NONE} -- Creation

	make_stop (a_place: TRAFFIC_PLACE; a_line: TRAFFIC_LINE; a_position: EM_VECTOR_2D) is
			-- Initialize `Current'.
		require
			place_not_void: a_place /= Void
			line_not_void: a_line /= Void
			position_not_void: a_position /= Void
		do
			place := a_place
			line := a_line
			position := a_position
			item := Current
			place.stops.extend (Current)
			create connection_list.make
		ensure
			stop_added: place.stops.has (Current)
		end

	make_non_insertable (a_place: TRAFFIC_PLACE; a_line_type: TRAFFIC_TYPE_LINE; a_position: EM_VECTOR_2D ) is
			-- Initialize `Current'.
		require
			place_not_void: a_place /= Void
			position_not_void: a_position /= Void
		do
			place := a_place
			position := a_position
			item := Current
			create connection_list.make
			create line.make ("dummy", a_line_type)
		end

feature -- Access

	name: STRING is
			-- "Unique" name
		do
			Result := place.name + line.name
		end

	line: TRAFFIC_LINE
			-- Line this stop belongs to

	hash_code: INTEGER is
			-- Hash code value
		do
			Result := ([place.name, line.name]).hash_code
		end

feature -- Output

	out: STRING is
			-- Info about stop
		do
			Result := "Traffic stop:%NPlace: " + place.name + "%NLine: " + line.name
		end

invariant
	line_not_void: line /= Void
	item_is_self: item = Current

end
