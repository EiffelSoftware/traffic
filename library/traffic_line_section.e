indexing
	description: "Line section of line from one place to another."
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_LINE_SECTION

inherit

	TRAFFIC_CONNECTION
		redefine
			out,
			origin_impl,
			destination_impl
		end

create
	make,
	make_non_insertable

feature {NONE} -- Initialization

	make (a_origin, a_destination: TRAFFIC_STOP; a_type: TRAFFIC_TYPE_LINE; a_list: ARRAYED_LIST [EM_VECTOR_2D] ) is
			-- Initialize `Current'.
			-- If `a_list' is Void, a list of polypoints with the coordinate of `a_origin' and
			-- `a_destination' are generated.
		require
			a_origin_exists: a_origin /= Void
			a_destination_exists: a_destination /= Void
			a_type_exists: a_type /= Void
			a_list_exists: a_list /= Void and then a_list.count >= 2 and then not a_list.has (Void)
		do
			origin_impl := a_origin
			destination_impl := a_destination
			create state.make
			type := a_type
			create polypoints.make (2)
			set_polypoints (a_list)
			create roads.make (1)

		ensure
			origin_set: origin_impl = a_origin
			destination_set: destination_impl = a_destination
			state_exists: state /= Void
			has_type: type /=Void
			type_set: type = a_type
			polypoints_exists: polypoints /= Void
			roads_created: roads/=Void
		end

	make_non_insertable (a_origin, a_destination: TRAFFIC_PLACE; a_type: TRAFFIC_TYPE_LINE; a_list: ARRAYED_LIST [EM_VECTOR_2D]) is
			-- Make a temporary line_section which shouldn't be inserted into a `TRAFFIC_MAP'.
		require
			a_origin_exists: a_origin /= Void
			a_destination_exists: a_destination /= Void
			a_type_exists: a_type /= Void
			a_list_exists: a_list /= Void and then a_list.count >= 2 and then not a_list.has (Void)
		local
			origin_stop: TRAFFIC_STOP
			destination_stop: TRAFFIC_STOP
		do
			if not a_origin.stops.is_empty then
				origin_stop := a_origin.stops.first
			else
				create origin_stop.make_non_insertable (a_origin, a_type, a_origin.position)
			end

			if not a_destination.stops.is_empty then
				destination_stop := a_destination.stops.first
			else
				create destination_stop.make_non_insertable (a_destination, a_type, a_destination.position)
			end

			origin_impl := origin_stop
			destination_impl := destination_stop
			create state.make
			type := a_type

			create polypoints.make (2)
			create roads.make (1)
			set_polypoints (a_list)
		ensure
			origin_set: origin = a_origin
			destination_set: destination = a_destination
			state_exists: state /= Void
			has_type: type /=Void
			type_set: type = a_type
			polypoints_exists: polypoints /= Void
			roads_created: roads/=Void
		end

feature -- Access

	type: TRAFFIC_TYPE_LINE
			-- Type of the line section

	line: TRAFFIC_LINE
			-- Line this line section belongs to

	state: TRAFFIC_LINE_SECTION_STATE
			-- State of line section

	roads: ARRAYED_LIST [TRAFFIC_ROAD]
			-- Roads on which the line section lies

	hash_code: INTEGER is
			-- Hash code value
		local
			line_name: STRING
		do
			if line = Void then
				line_name := ""
			else
				line_name := line.name
			end
			Result := ([origin, destination, type.name, line_name]).hash_code
		end

feature -- Element change

	set_state (a_state: TRAFFIC_LINE_SECTION_STATE ) is
			-- Change state to `a_state'.
		require
			a_state_exists: a_state /= Void
		do
			state := a_state
		ensure
			state_set: state = a_state
		end

	set_roads (a_roads: ARRAYED_LIST [TRAFFIC_ROAD]) is
			-- Set roads to `a_roads'.
		require
			a_roads_exist: a_roads /= Void
		do
			roads.copy (a_roads)
		ensure
			equal (roads, a_roads)
			roads_exists: roads /= Void
			roads_equal: roads.count > 0 implies equal (roads, a_roads)
		end

feature -- Basic operations

	remove_roads is
			-- Remove roads.
		do
			roads.wipe_out
		end

feature {TRAFFIC_LINE} -- Status setting

	set_line (a_line: TRAFFIC_LINE) is
			-- Set line this line section belongs to.
		require
			a_line_exists: a_line /= Void
			line_not_set: line = Void
		do
			line := a_line
		ensure
			line_set: line = a_line
		end

	remove_line is
			-- Remove line section from line.
		require
			line_set: line /= Void
		do
			line := Void
		ensure
			line_void: line = Void
		end

feature {TRAFFIC_MAP, TRAFFIC_LINE} -- Access

	origin_impl: TRAFFIC_STOP

	destination_impl: TRAFFIC_STOP

feature -- Output

	out: STRING is
			-- Textual representation
		local
			line_name: STRING
		do
			if line /= Void then
				line_name := " belonging to line " + line.name
			else
				line_name := ""
			end
			Result := "Traffic " + type.out + " line section, " +
				state.out +
				", from " + origin.name + " to " + destination.name +
				line_name
		end

invariant
	line_has_same_type: line /= Void implies equal (line.type, type) -- Only line with same type can be assigned.
	origin_set: origin /= Void -- Origin place exists.
	destination_set: origin /= Void -- Destination place exists.
	polypoints_valid: polypoints /= Void and then polypoints.count >= 2
	state_set: state /= Void -- State exists.
	type_set: type /= Void -- Type exists.

end
