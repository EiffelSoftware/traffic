indexing
	description: "Part of a TRAFFIC_PATH,%
		% goes from `origin' to `destination' using a single line or walking"
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_PATH_SECTION

create {TRAFFIC_PATH}
	make

feature {NONE} -- Creation

	make (a_connection: TRAFFIC_CONNECTION) is
			-- Initialize `Current'
		local
			ls: TRAFFIC_LINE_SECTION
		do
			ls ?= a_connection
			if ls /= Void then
				line := ls.line
			end
			origin := a_connection.origin
			destination := a_connection.destination
			length := a_connection.length
		end


feature -- Access

	origin: TRAFFIC_PLACE

	destination: TRAFFIC_PLACE

	line: TRAFFIC_LINE

	length: DOUBLE

feature -- Status report

	has_line: BOOLEAN is
			-- Does this path section use a line?
		do
			Result := line /= Void
		end

	is_insertable (a_connection: TRAFFIC_CONNECTION): BOOLEAN is
			-- Can `a_connection' be inserted?
		local
			ls: TRAFFIC_LINE_SECTION
		do
			ls ?= a_connection
			if has_line then
				Result := ls /= Void and then ls.line = line
			else
				Result := ls = Void
			end
		end


feature -- Basic operations

	extend (a_connection: TRAFFIC_CONNECTION) is
			-- Extend `Current'.
		require
			is_insertable (a_connection)
		do
			destination := a_connection.destination
			length := length + a_connection.length
		end

end
