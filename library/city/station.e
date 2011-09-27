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

	make (a_name: STRING; a_position: VECTOR; a_city: CITY)
			-- Create a station with name `a_name' and position `a_position'.
		require
			a_name_exists: a_name /= Void
			a_position_exists: a_position /= Void
			a_city_exists: a_city /= Void
		do
			name := a_name
			position := a_position
			city := a_city
			create {V_ARRAYED_LIST [LINE]} internal_lines
		ensure
			name_set: name = a_name
			position_set: position = a_position
			city_set: city /= Void
			no_incident_lines: lines.is_empty
		end

feature -- Access

	name: STRING
			-- Name (unique within city).

	position: VECTOR
			-- Position in the city.

	city: CITY
			-- City the station belongs to.

	lines: V_SEQUENCE [LINE]
			-- Incident lines (lines that go through the station).
		do
			Result := internal_lines
		end

feature -- Status report

	is_exchange: BOOLEAN
			-- Are there multiple lines going through this station?
		do
			Result := lines.count > 1
		end

feature -- Modification

	set_position (a_position: VECTOR)
			-- Set `position' to `a_position'.
		require
			a_position_exists: a_position /= Void
		do
			position := a_position
		ensure
			position_set: position = a_position
		end

	change_name (a_new_name: STRING)
			-- Set `name' to `a_new_name' and notify `city'.
		require
			a_new_name_exists: a_new_name /= Void
			unique_name: not city.stations.has_key (a_new_name)
		do
			city.internal_stations.remove (name)
			name := a_new_name
			city.internal_stations.extend (Current, a_new_name)
		ensure
			renamed: name = a_new_name
			city_updated: city.stations [a_new_name] = Current
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
			Result := "station " + name + " " + position.out
		end

feature {CITY, STATION, LINE} -- Implementation

	internal_lines: V_LIST [LINE]
			-- Incident lines.

	hash_code: INTEGER
			-- Hash code value.
		do
			Result := name.hash_code
		end

invariant
	name_exists: name /= Void
	position_exists: position /= Void
	city_exists: city /= Void
	lines_exists: lines /= Void
	all_lines_exist: across lines as i all i.item /= Void end
	all_lines_contain_current: across lines as i all i.item.stations.has (Current) end
	internal_lines_equal: internal_lines ~ lines
end
