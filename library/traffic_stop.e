indexing
	description: "Stops that belong to a line and are nodes of the graph"
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

feature {NONE} -- Creation

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
			create connection_list.make
			place.add_stop (Current)
		ensure
			stop_added: place.stops.has (Current)
			place_set: place = a_place
			line_set: line = a_line
			connection_list_exists: connection_list /= Void
			item_set: item = Current
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
	connection_list_exists: connection_list /= Void
	place_not_void: place /= Void
	stop_is_in_place: place.stops.has (Current)

end
