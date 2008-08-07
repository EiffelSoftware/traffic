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
			out,
			put_connection
		end

create
	set_station, make_with_position

feature {NONE} -- Creation

	set_station (s: TRAFFIC_STATION; l: TRAFFIC_LINE) is
			-- Associate this stop with station `s' and line `l'.
		require
			station_exists: s /= Void
			line_exists: l /= Void
		do
			make_with_station (s, s.position.twin)
			line := l
			station.add_stop (Current)
		ensure
			station_set: station = s
		end

	make_with_position (a_station: TRAFFIC_STATION; a_line: TRAFFIC_LINE; a_position: TRAFFIC_COORDINATE) is
			-- Initialize `Current'.
		require
			station_not_void: a_station /= Void
			line_not_void: a_line /= Void
			position_not_void: a_position /= Void
		do
			make_with_station (a_station, a_position)
			line := a_line
			station.add_stop (Current)
		ensure
			stop_added: station.stops.has (Current)
			station_set: station = a_station
			line_set: line = a_line
			connection_list_exists: connection_list /= Void
			item_set: item = Current
		end

feature -- Access

	name: STRING is
			-- "Unique" name
		do
			Result := station.name + line.name
		end

	line: TRAFFIC_LINE
			-- Line this stop belongs to

	hash_code: INTEGER is
			-- Hash code value
		do
			Result := ([station.name, line.name]).hash_code
		end

	next: TRAFFIC_STOP
			-- Next stop on same line

feature -- Basic operations

	put_connection (a_connection: TRAFFIC_CONNECTION) is
			-- Insert `a_connection'.
		local
			c: TRAFFIC_LINE_CONNECTION
		do
			connection_list.extend (a_connection)
			changed_event.publish ([])
			c ?= a_connection
			if c /= Void then
				next := c.end_node
			end
		end

	link (s: TRAFFIC_STOP) is
			-- Make `s' the next stop on the line.
		require
			s_exists: s /= Void
		local
			l1, l2: TRAFFIC_LINE_CONNECTION
			pp: DS_ARRAYED_LIST [TRAFFIC_COORDINATE]
		do
			create pp.make (2)
			pp.put_last (position.twin)
			pp.put_last (s.position.twin)
			create l1.make (Current, s, line.type, pp)
			create pp.make (2)
			pp.put_last (s.position.twin)
			pp.put_last (position.twin)
			create l2.make (s, Current, line.type, pp)
			line.put_last (l1, l2)
			next := s
		ensure
			next_set: next = s
		end


feature -- Output

	out: STRING is
			-- Info about stop
		do
			Result := "Traffic stop:%NStation: " + station.name + "%NLine: " + line.name
		end

invariant

	line_not_void: line /= Void
	item_is_self: item = Current
	connection_list_exists: connection_list /= Void
	station_not_void: station /= Void
	stop_is_in_station: station.stops.has (Current)

end
