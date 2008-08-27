indexing
	description: "Part of a TRAFFIC_ROUTE,%
		% goes from `origin' to `destination' using a SINGLE line or walking"
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_LEG

inherit

	ANY
		redefine
			default_create
		end

create
	default_create, make, make_tram, make_bus, make_rail, make_walk_with_road, make_metro, make_walk

feature {NONE} -- Creation

	default_create is
			-- Initialize `Current'.
		do
			create connections.make
		end

	make (a_connection: TRAFFIC_SEGMENT) is
			-- Initialize `current', used if line-type is unknown.
		require
			connections_exists: a_connection /= Void
		local
			ls: TRAFFIC_LINE_SEGMENT
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

	make_tram (a_line_section: TRAFFIC_LINE_SEGMENT) is
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

	make_metro (a_origin, a_destination: TRAFFIC_STATION) is
			-- Make `Current' from `a_origin' to `a_destination' of type tram.
		require
			at_least_one_common_line: not a_origin.lines.disjoint (a_destination.lines)
		local
			lines: LINKED_SET[TRAFFIC_LINE]
			segments: LINKED_LIST[TRAFFIC_LINE_SEGMENT]
		do
			lines := a_origin.lines.twin
			lines.intersect (a_destination.lines)
			line := lines.first -- take an arbritary line
			if connections = Void then
				default_create
			end

			segments := line.get_segments (a_origin, a_destination)
			from
				segments.start
			until
				segments.after
			loop
				extend(segments.item)
				segments.forth
			end

		end


	make_bus (a_line_section: TRAFFIC_LINE_SEGMENT) is
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

	make_rail (a_line_section: TRAFFIC_LINE_SEGMENT) is
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

	make_walk_with_road (a_road: TRAFFIC_ROAD_SEGMENT) is
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

	make_walk (a_origin, a_destination: TRAFFIC_STATION) is
			-- Initialize `Current' of type walk.
		require
			directly_connected_by_one_road: a_origin.is_road_connected (a_destination)
		local
			segment: TRAFFIC_ROAD_SEGMENT
			road: TRAFFIC_ROAD
		do
			road := a_origin.connecting_road (a_destination)
			segment := road.get_connection (a_origin, a_destination)
			if connections = Void then
				default_create
			end
			extend (segment)
		end



feature -- Access

	type: TRAFFIC_TYPE is
			-- Type of the route section
		do
			Result := connections.first.type
		end

	origin: TRAFFIC_STATION is
			-- Origin of the route
		do
			Result := connections.first.origin
		end

	destination: TRAFFIC_STATION is
			-- Destination of the route
		do
			Result := connections.last.destination
		end

	line: TRAFFIC_LINE
			-- Line used

	length: DOUBLE
			-- Length of section

	connections: TRAFFIC_EVENT_LINKED_LIST [TRAFFIC_SEGMENT]
			-- Connections that are used by the route section

	next: TRAFFIC_LEG
			-- Next route section

feature -- Status report

	has_line: BOOLEAN is
			-- Does this route section use a line?
		do
			Result := line /= Void
		end

	is_insertable (a_connection: TRAFFIC_SEGMENT): BOOLEAN is
			-- Can `a_connection' be inserted?
		require
			a_connection_exists: a_connection /= Void
		local
			l: TRAFFIC_LINE_SEGMENT
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

	is_joinable (a_section: TRAFFIC_LEG): BOOLEAN is
			-- Can `a_section' be inserted?
		require
			a_section_exists: a_section /= Void
		do
			Result := a_section.connections = Void or else is_insertable (a_section.connections.first)
		end

	is_valid_next (a_section: TRAFFIC_LEG): BOOLEAN is
			-- Is the origin of `a_section' the same station as the current destination?
		require
			a_section_exists: a_section /= Void
		do
			Result := connections = Void or else destination = a_section.origin

		end

	is_tram (a_line_section: TRAFFIC_LINE_SEGMENT): BOOLEAN is
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

	is_bus (a_line_section: TRAFFIC_LINE_SEGMENT): BOOLEAN is
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

	is_rail (a_line_section: TRAFFIC_LINE_SEGMENT): BOOLEAN is
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

	join (a_section: TRAFFIC_LEG) is
			-- Extend with `a_section'.
		require
			section_exists: a_section /= Void
			section_is_intertable: is_joinable (a_section)
		do
			if not has_line then
				line := a_section.line
			end
			length := length + a_section.length
			from
				a_section.connections.start
			until
				a_section.connections.after
			loop
				connections.force_last (a_section.connections.item_for_iteration)
				a_section.connections.forth
			end
		end

	extend (a_connection: TRAFFIC_SEGMENT) is
			-- Add `a_connection' to the end of the route section.
		require
			a_connection_exists: a_connection /= Void
			a_connection_fits: is_insertable (a_connection)
		local
			l: TRAFFIC_LINE_SEGMENT
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

	set_next (a_section: TRAFFIC_LEG) is
			-- Set pointer to next route section `a_section'.
		require
			a_section_exists: a_section /= Void
			is_realy_next: is_valid_next (a_section)
			is_different_type_of_line: not is_joinable (a_section)
		do
			next := a_section
		ensure
			next_set: next = a_section
		end

end
