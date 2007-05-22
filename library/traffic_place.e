indexing
	description: "Place."
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_PLACE

inherit
	HASHABLE
		redefine
			out
		end

	TRAFFIC_MAP_ITEM
		undefine
			out
		end

create
	make, make_with_position

feature {NONE} -- Initialize

	make (a_name: STRING) is
			-- Initilize `Current'.
		require
			a_name_exists: a_name /= Void
			a_name_not_empty: not a_name.is_empty
		do
			name := a_name
			create schedule.make
			create stops.make (5)
			create nodes.make (5)
			create dummy_node.make_with_place (Current, create {EM_VECTOR_2D}.make (0.0, 0.0))
			add_node (dummy_node)
		ensure
			name_set: equal (a_name, name)
			position_exists: position /= Void
		end

	make_with_position (a_name: STRING; a_x, a_y: INTEGER) is
			-- Initialize `Current' with name `a_name' and position `a_x', `a_y'.
		require
			a_name_exists: a_name /= Void
			a_name_not_empty: not a_name.is_empty
		do
			name := a_name
			create dummy_node.make_with_place (Current, create {EM_VECTOR_2D}.make (a_x, a_y))
			create schedule.make
			create stops.make (5)
			create nodes.make (5)
			add_node (dummy_node)
		ensure
			name_set: equal (a_name, name)
			position_exists: position /= Void
			position_set: position.x = a_x and position.y = a_y
		end

feature -- Access

	outgoing_line_connections: DS_ARRAYED_LIST [TRAFFIC_LINE_CONNECTION] is
			-- All outgoing line connections
		local
			l: TWO_WAY_CIRCULAR [TRAFFIC_CONNECTION]
			c: TRAFFIC_LINE_CONNECTION
		do
			create Result.make (5)
			from
				stops.start
			until
				stops.after
			loop
				from
					l := stops.item.connection_list
				until
					l.off
				loop
					c ?= l.item
					if c /= Void and then c.destination /= c.origin then
						Result.force_last (c)
					end
					l.forth
				end
				stops.forth
			end
		end


	name: STRING
			-- Name of place

	position: EM_VECTOR_2D is
			-- Position on map
		do
			Result := dummy_node.position
		end

	information: TRAFFIC_PLACE_INFORMATION
			-- Additional information.

	schedule: LINKED_LIST[TUPLE[TRAFFIC_LINE_VEHICLE, TIME, TRAFFIC_PLACE]]
			-- All departure times [tram, time, direction] of trams visiting this place

	nodes: ARRAYED_LIST [TRAFFIC_NODE]
			-- Nodes that belong to this place

	stops: ARRAYED_LIST[TRAFFIC_STOP]
			-- All stops of lines stoping at this place

	dummy_node: TRAFFIC_NODE
			-- Node used for shortest path calculation

	stop (a_line: TRAFFIC_LINE): TRAFFIC_STOP is
			-- Stop belonging to `a_line'
		do
			from stops.start until stops.after or stops.item.line.name.is_equal (a_line.name) loop
				stops.forth
			end
			if not stops.after then
				Result := stops.item
			end
		end

	width: DOUBLE
			-- Width of the place (enclosing all stops)

	breadth: DOUBLE
			-- Breadth of the place (enclosing all stops)

	hash_code: INTEGER is
			-- Hash code value.
		do
			Result := name.hash_code
		end

feature -- Status report

	has_stop (a_line: TRAFFIC_LINE): BOOLEAN is
			-- Does the place have a stop for `a_line'?
		require
			a_line_exists: a_line /= Void
		do
			Result := stops.there_exists (agent is_stop_of_line (?, a_line))
		end

	is_insertable (a_map: TRAFFIC_MAP): BOOLEAN is
			-- Is `Current' insertable into `a_map'?
			-- (All nodes need to be insertable. See `TRAFFIC_NODE is_insertable' for requirements.)
		do
			Result := True
			from
				nodes.start
			until
				nodes.off or not Result
			loop
				if not nodes.item.is_insertable (a_map) then
					Result := False
				end
				nodes.forth
			end
		end

feature -- Basic operations (map)

	add_to_map (a_map: TRAFFIC_MAP) is
			-- Add `Current' and all nodes to `a_map'.
		do
			a_map.places.force (Current, name)
			is_in_map := True
			map := a_map
			from
				nodes.start
			until
				nodes.after
			loop
				nodes.item.add_to_map (a_map)
				nodes.forth
			end
		ensure then
			map_has: a_map.places.has (name)
		end

	remove_from_map is
			-- Remove all nodes from `a_map'.
		do
			is_in_map := False
			map := Void
		end

feature -- Element change

	set_information (a_information: TRAFFIC_PLACE_INFORMATION) is
			-- Set information to `a_information'.
		require
			a_information_exists: a_information /= Void
		do
			information := a_information
		ensure
			information_set: information = a_information
		end

	set_position (a_position: EM_VECTOR_2D) is
			-- Set position to `a_position'.
		require
			a_position_exists: a_position /= Void
		do
			dummy_node.set_position (a_position)
		ensure
			position_set: position = a_position
		end

feature -- Basic operations

	register_in_schedule (an_object: TRAFFIC_LINE_VEHICLE; time: TIME; target: TRAFFIC_PLACE) is
			-- Register a visiting tram in the schedule.
		require
			valid_object: an_object /= Void
			valid_time: time /= Void
			valid_target: target /= Void
		local
			entry: TUPLE[TRAFFIC_LINE_VEHICLE, TIME, TRAFFIC_PLACE]
		do
			create entry
			entry.put (an_object, 1)
			entry.put (time, 2)
			entry.put (target, 3)
			schedule.extend (entry)
		end

feature {TRAFFIC_NODE} -- Insertion

	add_stop (a_stop: TRAFFIC_STOP) is
			-- add a traffic stop
		require
			is_insertable: a_stop.is_insertable (map)
		do
			stops.extend (a_stop)
			nodes.extend (a_stop)
			update_position
			if is_in_map then
				a_stop.add_to_map (map)
			end
		end

	add_node (a_node: TRAFFIC_NODE) is
			-- Add `a_node' to `Current'.
		local
			s: TRAFFIC_STOP
		do
			s ?= a_node
			if s /= Void then
				add_stop (s)
			else
				nodes.extend (a_node)
				if is_in_map then
					a_node.add_to_map (map)
				end
			end
		end

feature -- Output

	out: STRING is
			-- Textual representation of place.
		local
			information_string: STRING
		do
			if information /= Void then
				information_string := ", "
				if information.pictures.count > 0 then
					information_string := information_string + " pictures: "
					from
						information.pictures.start
					until
						information.pictures.after
					loop
						information_string := information_string + information.pictures.item
						information.pictures.forth
						if not information.pictures.after then
							information_string := information_string + ", "
						end
					end
				end
				if information.description /= Void and information.pictures.count > 0 then
					information_string := information_string + ","
				end
				if information.description /= Void then
					information_string := information_string + " description: " + information.description
				end
			else
				information_string := ""
			end
			Result := "Traffic place " + name + " at position " + position.out + information_string
		end

feature {NONE} -- Implementation

	is_stop_of_line (a_stop: TRAFFIC_STOP; a_line: TRAFFIC_LINE): BOOLEAN is
			-- Does `a_stop' service `a_line'?
		do
			Result := a_stop.line.name.is_equal (a_line.name)
		end

	update_position is
			-- Update the position, breadth, and width of the place using the stops positions.
		do
			if stops.count = 1 then
				width := 0
				breadth := 0
				set_position (stops.first.position)
			else
				if stops.last.position.x > position.x + width/2 then
					set_position (create {EM_VECTOR_2D}.make ((stops.last.position.x + position.x - width/2)/2, position.y))
					width := (stops.last.position.x - position.x)*2
				elseif stops.last.position.x < position.x - width/2 then
					set_position (create {EM_VECTOR_2D}.make ((stops.last.position.x + position.x + width/2)/2, position.y))
					width := (position.x - stops.last.position.x)*2
				end
				if stops.last.position.y > position.y + breadth/2 then
					set_position (create {EM_VECTOR_2D}.make (position.x, (stops.last.position.y + position.y - breadth/2)/2))
					breadth := (stops.last.position.y - position.y)*2
				elseif stops.last.position.y < position.y - breadth/2 then
					set_position (create {EM_VECTOR_2D}.make (position.x, (stops.last.position.y + position.y + breadth/2)/2))
					breadth := (position.y - stops.last.position.y)*2
				end
			end
		end

invariant
	name_valid: name /= Void and then not name.is_empty
	position_not_void: position /= Void
	stops_not_void: stops /= Void
	nodes_not_void: stops /= Void
	dummy_node_not_void: dummy_node /= Void
	place_in_map: is_in_map implies map.places.has (name)

end
