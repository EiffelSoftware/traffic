indexing
	description: "Line section of line from one place to another."
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_LINE_SECTION
	
inherit
	HASHABLE
		redefine
--			is_equal,
			out
		end
		
create
	make

feature {NONE} -- Initialization

	make (a_origin, a_destination: TRAFFIC_PLACE; a_type: TRAFFIC_TYPE; a_list: ARRAYED_LIST [EM_VECTOR_2D] ) is
			-- Initialize `Current'. 
			-- If `a_list' is Void, a list of polypoints with the coordinate of `a_origin' and
			-- `a_destination' are generated.
		require
			a_origin_exists: a_origin /= Void
			a_destination_exists: a_destination /= Void
			a_type_exists: a_type /= Void
		do
			origin := a_origin
			destination := a_destination
			create state.make
			type := a_type
			if a_list /= Void then
				set_polypoints (a_list)
			else
				create polypoints.make (2)
				polypoints.extend (a_origin.position)
				polypoints.extend (a_destination.position)
			end
			
		ensure
			origin_set: origin = a_origin
			destination_set: destination = a_destination
			state_exists: state /= Void
			type_set: type = a_type
			polypoints_exists: polypoints /= Void
		end

feature -- Access

	line: TRAFFIC_LINE
			-- Line this line section belongs to.
		
	type: TRAFFIC_TYPE
			-- Type of line section.
		
	origin: TRAFFIC_PLACE
			-- Place of origin.
			
	destination: TRAFFIC_PLACE
			-- Place of destination.
	
	state: TRAFFIC_LINE_SECTION_STATE
			-- State of line section.
			
	polypoints: ARRAYED_LIST [EM_VECTOR_2D]
			-- position representation of line section.

	length: DOUBLE is
			-- Length from start of polypoints to end.
			-- If no polypoints exists, distance between origin and destination.
		local
			i: INTEGER
		do
			if polypoints = Void or polypoints.count < 1 then
				Result := origin.position.distance (destination.position)
			else
				Result := 0.0
				from
					i := 1
				until
					i = polypoints.count
				loop
					Result := Result + polypoints.i_th (i).distance (polypoints.i_th (i + 1))
					i := i + 1
				end
			end
		end
		
feature -- Status setting
		
	set_state (a_state: TRAFFIC_LINE_SECTION_STATE ) is
			-- Change state to `a_state'.
		require
			a_state_exists: a_state /= Void
		do
			state := a_state
		ensure
			state_set: state = a_state
		end
		
	set_polypoints (a_polypoints: ARRAYED_LIST [EM_VECTOR_2D]) is
			-- Set polypoints to `a_polypoints'.
		require
			a_polypoints_exist: a_polypoints /= Void
		do
			polypoints.copy (a_polypoints)
		ensure
			equal (polypoints, a_polypoints)
			polypoints_exists: polypoints /= Void
			polypoints_equal: polypoints.count > 0 implies equal (polypoints, a_polypoints)
		end
		
	remove_polypoints is
			-- Remove polypoints.
		do
			polypoints.wipe_out
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
		
feature -- Comparasion

--	is_equal (other: like Current): BOOLEAN is
			-- Is `other' attached to an object considered
			-- equal to current object?
			-- (from ANY)
--		do
--			Result := equal (origin.name, other.origin.name) and
--				equal (destination.name, other.destination.name) and
--				equal (type, other.type) and
--				equal (line, other.line)
--		end
		
feature -- Basic operation

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

	out: STRING is
			-- Textual representation.
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
	polypoints_exist: polypoints /= Void
	polypoints_imply_at_least_two_elements: polypoints /= Void implies polypoints.count >= 2
	state_set: state /= Void -- State exists.
	type_set: type /= Void -- Type exists.

end
