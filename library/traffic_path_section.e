indexing
	description: "Part of a TRAFFIC_PATH,%
		% goes from `origin' to `destination' using a SINGLE line or walking"
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_PATH_SECTION
inherit
	ANY
		redefine default_create
	end

create --{TRAFFIC_ROUTE, TRAFFIC_PATH}
	default_create, make, make_tram, make_bus, make_rail, make_walk

feature --{NONE} -- Creation

	default_create is
			-- Initialize `Current'.
		do
			create connections_impl.make (10)
		end

	make (a_connection: TRAFFIC_CONNECTION) is
			-- Initialize 'current', used if line-type is unknown
		require
			connections_exists: a_connection /= Void
		local
			ls: TRAFFIC_LINE_SECTION
		do
			ls ?= a_connection
			if ls /= Void then
				line := ls.line
			end
			length := a_connection.length
			if connections_impl = Void then
				default_create
			end
			connections_impl.extend (a_connection)
		end

	make_tram (a_line_section: TRAFFIC_LINE_SECTION) is
			-- Initialize 'Current' of type tram
		require
			line_section_exists: a_line_section /= Void
			line_section_is_tram: is_tram (a_line_section)
		do
			line := a_line_section.line
			length := a_line_section.length
			if connections_impl = Void then
				default_create
			end
			connections_impl.extend (a_line_section)
		end

	make_bus (a_line_section: TRAFFIC_LINE_SECTION) is
			-- Initialize 'Current' of type bus
		require
			line_sectin_exists: a_line_section /= Void
			line_section_is_bus: is_bus (a_line_section)
		do
			line := a_line_section.line
			length := a_line_section.length
			if connections_impl = Void then
				default_create
			end
			connections_impl.extend (a_line_section)
		end

	make_rail (a_line_section: TRAFFIC_LINE_SECTION) is
			-- Initialize 'Current' ob type rail
		require
			line_section_exists: a_line_section /= Void
			line_section_is_rail: is_rail (a_line_section)
		do
			line := a_line_section.line
			length := a_line_section.length
			if connections_impl = Void then
				default_create
			end
			connections_impl.extend (a_line_section)
		end

	make_walk (a_road: TRAFFIC_ROAD) is
			-- Initialize 'Current' of type walk
		require
			road_exists: a_road /= Void
			road_is_for_walking: a_road.type.is_allowed_walking
		do
			length := a_road.length
			if connections_impl = Void then
				default_create
			end
			connections_impl.extend (a_road)
		end

feature -- Access

	type: TRAFFIC_TYPE is
			-- Type of the path section
		do
			Result := connections.first.type
		end


	origin: TRAFFIC_PLACE is
			-- Origin of the path
		do
			Result := connections.first.origin
		end

	destination: TRAFFIC_PLACE is
			-- Destination of the path
		do
			Result := connections.last.destination
		end

	line: TRAFFIC_LINE
			-- Line used

	length: DOUBLE
			-- Length of section

	connections: ARRAYED_LIST [TRAFFIC_CONNECTION] is
			-- Connections
		do
			Result := connections_impl
		end

	next: TRAFFIC_PATH_SECTION is
			-- give the next traffic_path_section
		do
			Result := next_impl
		end


feature -- Status report

	has_line: BOOLEAN is
			-- Does this path section use a line?
		do
			Result := line /= Void
		end

	is_insertable (a_path_section: TRAFFIC_PATH_SECTION): BOOLEAN is
			-- Can `a_path_section' be inserted?
		require
			a_path_section_exists: a_path_section /= Void
		do
			if has_line then
				Result := a_path_section.line = line and a_path_section.origin /= a_path_section.destination
			else
				Result := (not a_path_section.has_line or connections_impl.first = Void) and a_path_section.origin /= a_path_section.destination
			end
		end

	is_same_place (a_path_section: TRAFFIC_PATH_SECTION): BOOLEAN is
			-- is the origin of `a_path_section' the same place as the current destination?
		require
			a_path_section_exists: a_path_section /= Void
		do
			Result := destination = a_path_section.origin or
				(not a_path_section.connections.first.is_directed and destination = a_path_section.connections.first.destination) or
				connections_impl = Void
		end


	is_tram (a_line_section: TRAFFIC_LINE_SECTION): BOOLEAN is
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

	is_bus (a_line_section: TRAFFIC_LINE_SECTION): BOOLEAN is
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

	is_rail (a_line_section: TRAFFIC_LINE_SECTION): BOOLEAN is
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

	extend (a_path_section: TRAFFIC_PATH_SECTION) is
			-- Extend with `a_path_section'.
		require
			path_section_exists: a_path_section /= Void
			path_section_is_intertable: is_insertable (a_path_section)
			is_realy_next: is_same_place (a_path_section)
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
				connections_impl.extend(a_path_section.connections.item)
				a_path_section.connections.forth
			end
		end

	set_next (a_path_section: TRAFFIC_PATH_SECTION) is
			-- set pointer to next path section `a_path_section'
		require
			a_path_section_exists: a_path_section /= Void
			is_realy_next: is_same_place (a_path_section)
			is_different_type_of_line: not is_insertable(a_path_section)
		do
			next_impl := a_path_section
		end


feature -- Implementation

	connections_impl: ARRAYED_LIST [TRAFFIC_CONNECTION]
			-- Connections of the path

	next_impl: TRAFFIC_PATH_SECTION
			-- next traffic_path_section

end
