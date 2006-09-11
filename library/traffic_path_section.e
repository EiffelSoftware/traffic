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

--	make (a_origin, a_destination: TRAFFIC_PLACE; a_line: TRAFFIC_LINE) is
--			-- Initialize `Current'
--		require
--			a_origin /= Void
--			a_destination /= Void
--			leaves_origin: a_origin /= a_destination
--		do
--			origin := a_origin
--			destination := a_destination
--			line := a_line
--		end

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
			-- does this path section use a line?
		do
			Result := line /= Void
		end

	is_insertable (a_connection: TRAFFIC_CONNECTION): BOOLEAN is
			-- can `a_connection' be inserted?
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
			-- extend `Current'
		require
			is_insertable (a_connection)
		do
			destination := a_connection.destination
			length := length + a_connection.length
		end

feature -- Status setting

--	set_destination (a_destination: TRAFFIC_PLACE) is
--			-- change destination (extend the section)
--		do
--			destination := a_destination
--		end

end
