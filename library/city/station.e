note
	description: "Public transportation station."

class
	STATION

inherit
	HASHABLE
		redefine
			out
		end

	COMPARABLE
		undefine
			is_equal
		redefine
			out
		end

create {CITY}
	make

feature {NONE} -- Initialization
	make (a_name: STRING; a_position: VECTOR)
			-- Create a station with name `a_name' and position `a_position'.
		require
			a_name_exists: a_name /= Void
			a_position_exists: a_position /= Void
		do
			name := a_name
			position := a_position
			create {V_ARRAYED_LIST [LINE]} internal_lines
		ensure
			name_set: name = a_name
			position_set: position = a_position
			no_incident_lines: lines.is_empty
		end

feature -- Access

	name: STRING
			-- Name (unique within city).

	position: VECTOR
			-- Position in the city.

	lines: V_LIST [LINE]
			-- A list of incident lines (lines that go through the station).
		do
			Result := internal_lines.twin
		ensure
			result_exists: Result /= Void
			all_lines_exist: Result.for_all (agent (l: LINE): BOOLEAN do Result := l /= Void end)
			all_lines_contain_current: Result.for_all (agent (l: LINE): BOOLEAN do Result := l.stations.has (Current) end)
			equals_internal_lines: Result ~ internal_lines
		end

	hash_code: INTEGER
			-- Hash code value.
		do
			Result := name.hash_code
		end

feature -- Comparison

	is_less alias "<" (other: like Current): BOOLEAN
			-- Is name of this station lexicografically less than the name of `other'?
		do
			Result := name < other.name
		end

feature -- Output

	out: STRING
			-- Textual representation.
		do
			Result := name + " " + position.out
		end


feature {CITY} -- Implementation

	internal_lines: V_LIST [LINE]
			-- Incident lines.

invariant
	name_exists: name /= Void
	position_exists: position /= Void
	internal_lines_exists: internal_lines /= Void
	all_lines_exist: internal_lines.for_all (agent (l: LINE): BOOLEAN do Result := l /= Void end)
	all_lines_contain_current: internal_lines.for_all (agent (l: LINE): BOOLEAN do Result := l.stations.has (Current) end)
end
