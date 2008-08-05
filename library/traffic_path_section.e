indexing
	description: "Part of a TRAFFIC_PATH,%
		% goes from `origin' to `destination' using a SINGLE line or walking"
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_PATH_SECTION

inherit

	ANY
		redefine
			default_create
		end

create
	default_create, make, make_tram, make_bus, make_rail, make_walk

feature {NONE} -- Creation

	default_create is
			-- Initialize `Current'.
		do
			create connections.make
		end

	make (a_connection: TRAFFIC_CONNECTION) is
			-- Initialize `current', used if line-type is unknown.
		require
			connections_exists: a_connection /= Void
		local
			ls: TRAFFIC_LINE_CONNECTION
		do
			ls ?= a_connection
			if ls /= Void then
				line := ls.line
			end
			length := a_connection.length
			if connections = Void then
				default_create
			end
			extend (a_connection)
		end

	make_tram (a_line_section: TRAFFIC_LINE_CONNECTION) is
			-- Initialize `Current' of type tram.
		require
			line_section_exists: a_line_section /= Void
			line_section_is_tram: is_tram (a_line_section)
		do
			line := a_line_section.line
			length := a_line_section.length
			if connections = Void then
				default_create
			end
			extend (a_line_section)
		end

	make_bus (a_line_section: TRAFFIC_LINE_CONNECTION) is
			-- Initialize `Current' of type bus.
		require
			line_sectin_exists: a_line_section /= Void
			line_section_is_bus: is_bus (a_line_section)
		do
			line := a_line_section.line
			length := a_line_section.length
			if connections = Void then
				default_create
			end
			extend (a_line_section)
		end

	make_rail (a_line_section: TRAFFIC_LINE_CONNECTION) is
			-- Initialize `Current' ob type rail.
		require
			line_section_exists: a_line_section /= Void
			line_section_is_rail: is_rail (a_line_section)
		do
			line := a_line_section.line
			length := a_line_section.length
			if connections = Void then
				default_create
			end
			extend (a_line_section)
		end

	make_walk (a_road: TRAFFIC_ROAD_CONNECTION) is
			-- Initialize `Current' of type walk.
		require
			road_exists: a_road /= Void
			road_is_for_walking: a_road.type.is_allowed_walking
		do
			length := a_road.length
			if connections = Void then
				default_create
			end
			extend (a_road)
		end


feature -- Access

	type: TRAFFIC_TYPE is
			-- Type of the path section
		do
			Result := connections.first.type
		end

	origin: TRAFFIC_STATION is
			-- Origin of the path
		do
			Result := connections.first.origin
		end

	destination: TRAFFIC_STATION is
			-- Destination of the path
		do
			Result := connections.last.destination
		end

	line: TRAFFIC_LINE
			-- Line used

	length: DOUBLE
			-- Length of section

	connections: TRAFFIC_EVENT_LINKED_LIST [TRAFFIC_CONNECTION]
			-- Connections that are used by the path section

	next: TRAFFIC_PATH_SECTION
			-- Next path section

feature -- Status report

	has_line: BOOLEAN is
			-- Does this path section use a line?
		do
			Result := line /= Void
		end

	is_insertable (a_connection: TRAFFIC_CONNECTION): BOOLEAN is
			-- Can `a_path_section' be inserted?
		require
			a_connection_exists: a_connection /= Void
		local
			l: TRAFFIC_LINE_CONNECTION
		do
			Result := True
			if not connections.is_empty then
				if has_line then
					l ?= a_connection
					if l /= Void then
						Result := (l.line = line)
					else
						Result := False
					end
				end
				Result := Result and (a_connection.origin = connections.last.destination) and a_connection.type.is_equal (connections.last.type)
			end
		end

	is_joinable (a_section: TRAFFIC_PATH_SECTION): BOOLEAN is
			-- Can `a_path_section' be inserted?
		require
			a_section_exists: a_section /= Void
		do
			Result := a_section.connections = Void or else is_insertable (a_section.connections.first)
		end

	is_valid_next (a_path_section: TRAFFIC_PATH_SECTION): BOOLEAN is
			-- Is the origin of `a_path_section' the same station as the current destination?
		require
			a_path_section_exists: a_path_section /= Void
		do
			Result := connections = Void or else destination = a_path_section.origin

		end

	is_tram (a_line_section: TRAFFIC_LINE_CONNECTION): BOOLEAN is
			-- is `a_line_section' of type tram?
		require
			a_line_section_exists: a_line_section /= Void
		local
			tram_type: STRING
		do
			tram_type := (create {TRAFFIC_TYPE_TRAM}.make).name
			-- is ls.line realy of type traffic_type_tram
			Result := a_line_section.line.type.name.is_equal (tram_type)
		end

	is_bus (a_line_section: TRAFFIC_LINE_CONNECTION): BOOLEAN is
			-- is `a_line_section' of type tram?
		require
			a_line_section_exists: a_line_section /= Void
		local
			bus_type: STRING
		do
			bus_type := (create {TRAFFIC_TYPE_BUS}.make).name
			-- is ls.line realy of type traffic_type_bus
			Result := a_line_section.line.type.name.is_equal (bus_type)
		end

	is_rail (a_line_section: TRAFFIC_LINE_CONNECTION): BOOLEAN is
			-- is `a_line_section' of type tram?
		require
			a_line_section_exists: a_line_section /= Void
		local
			train_type: STRING
		do
			train_type := (create {TRAFFIC_TYPE_RAIL}.make).name
			-- is ls.line realy of type traffic_type_train
			Result := a_line_section.line.type.name.is_equal (train_type)
		end

feature -- Basic operations

	join (a_path_section: TRAFFIC_PATH_SECTION) is
			-- Extend with `a_path_section'.
		require
			path_section_exists: a_path_section /= Void
			path_section_is_intertable: is_joinable (a_path_section)
		do
			if not has_line then
				line := a_path_section.line
			end
			length := length + a_path_section.length
			from
				a_path_section.connections.start
			until
				a_path_section.connections.after
			loop
				connections.force_last (a_path_section.connections.item_for_iteration)
				a_path_section.connections.forth
			end
		end

	extend (a_connection: TRAFFIC_CONNECTION) is
			-- Add `a_connection' to the end of the path section.
		require
			a_connection_exists: a_connection /= Void
			a_connection_fits: is_insertable (a_connection)
		local
			l: TRAFFIC_LINE_CONNECTION
		do
			l ?= a_connection
			if (l /= Void and connections.is_empty) and then l.line /= Void then
				line := l.line
			end
			connections.force_last (a_connection)
			length := length + a_connection.length
		ensure
			one_more: connections.count = old connections.count + 1
		end

	set_next (a_path_section: TRAFFIC_PATH_SECTION) is
			-- Set pointer to next path section `a_path_section'.
		require
			a_path_section_exists: a_path_section /= Void
			is_realy_next: is_valid_next (a_path_section)
			is_different_type_of_line: not is_joinable (a_path_section)
		do
			next := a_path_section
		ensure
			next_set: next = a_path_section
		end

end
