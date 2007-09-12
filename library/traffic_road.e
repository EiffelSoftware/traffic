indexing
	description: "Objects that ..."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_ROAD

inherit

	TRAFFIC_MAP_ITEM
		redefine
			add_to_map,
			remove_from_map
		end

create
	make, make_one_way

feature {NONE} -- Initialization

	make (a_conn1, a_conn2: TRAFFIC_ROAD_CONNECTION) is
			-- Initialize a two way road with `a_conn1' and `a_conn2'.
		require
			a_conn1_exists: a_conn1 /= Void
			a_conn2_exists: a_conn2 /= Void
			same_type: a_conn1.type.is_equal (a_conn2.type)
			same_start: a_conn1.start_node = a_conn2.end_node
			same_end: a_conn1.end_node = a_conn2.start_node
			same_id: a_conn1.id = a_conn2.id
		do
			one_way := a_conn1
			other_way := a_conn2
			id := a_conn1.id
			is_one_way := False
			create changed_event
		ensure
			one_way_set: one_way = a_conn1
			other_way_set: other_way = a_conn2
			not_one_way_road: not is_one_way
			id_set: id = one_way.id
		end

	make_one_way (a_conn: TRAFFIC_ROAD_CONNECTION) is
			-- Initialize a one way road with `a_conn'.
		require
			a_conn_exists: a_conn /= Void
		do
			one_way := a_conn
			is_one_way := True
			id := a_conn.id
			create changed_event
		ensure
			one_way_set: one_way = a_conn
			other_way_not_set: other_way = Void
			not_one_way_road: is_one_way
			id_set: id = one_way.id
		end

feature -- Access

	type: TRAFFIC_TYPE_ROAD is
			-- Type of the road
		do
			Result := one_way.type
		ensure
			Result_set: Result = one_way.type
		end

	one_way: TRAFFIC_ROAD_CONNECTION
			-- Road connection into one direction

	other_way: TRAFFIC_ROAD_CONNECTION
			-- Road connection into other direction (may be Void if the way is a one way)

	id: INTEGER
			-- Id of the road

feature {TRAFFIC_MAP_ITEM_CONTAINER}-- Basic operations

	add_to_map (a_map: TRAFFIC_MAP) is
			-- Add `Current' and all nodes to `a_map'.
		do
			one_way.add_to_map (a_map)
			if not is_one_way then
				other_way.add_to_map (a_map)
			end
			is_in_map := True
			map := a_map
		end

	remove_from_map is
			-- Remove all nodes from `a_map'.
		do
			is_in_map := False
			map := Void

		end

feature -- Status report

	is_insertable (a_map: TRAFFIC_MAP): BOOLEAN is
			-- Is `Current' insertable into `a_map'?
			-- E.g. are all needed elements already inserted in the map?
		do
			Result := 	one_way.start_node.is_in_map and one_way.end_node.is_in_map and
						one_way.origin.is_in_map and one_way.destination.is_in_map
		end

	is_one_way: BOOLEAN
			-- Is this a one way road?

invariant

	has_connections: is_one_way implies one_way /= Void and other_way = Void
	has_connections: not is_one_way implies one_way /= Void and other_way /= Void
	id_set: id > 0 and id = one_way.id

end
