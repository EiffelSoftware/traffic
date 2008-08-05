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
			out
		end

create
	make_stop

feature {NONE} -- Creation

	make_stop (a_station: TRAFFIC_STATION; a_line: TRAFFIC_LINE; a_position: TRAFFIC_COORDINATE) is
			-- Initialize `Current'.
		require
			station_not_void: a_station /= Void
			line_not_void: a_line /= Void
			position_not_void: a_position /= Void
		do
			station := a_station
			line := a_line
			position := a_position
			item := Current
			create connection_list.make
			create changed_event
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
