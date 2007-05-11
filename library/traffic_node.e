indexing
	description: "Basic Node in Traffic"
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_NODE

inherit
	LINKED_GRAPH_NODE [TRAFFIC_NODE, REAL]
		rename
			referring_edge as referring_connection,
			put_edge as put_connection,
			edge_list as connection_list
		export {NONE}
--			edge_list
			--			put_edge --,
--			turn_to
		redefine
--			turn_to,
			hash_code,
			connection_list,
			referring_connection,
			put_connection
		end

	TRAFFIC_MAP_ITEM
		undefine
			is_equal
		end
--inherit
--	COMPARABLE

--	HASHABLE
--		undefine
--			is_equal
--		end

create
	make_with_place

feature {NONE} -- Create

	make_with_place (a_place: TRAFFIC_PLACE; a_position: EM_VECTOR_2D) is
			-- Initialize `Current'.
		require
			place_not_void: a_place /= Void
			position_not_void: a_position /= Void
		do
--			make (a_place.name) -- todo distinguish between different nodes!!!
			create connection_list.make

			item := Current
			place := a_place
			position := a_position
			create connection_list.make
			reset
			if place.dummy_node /= Void then
				place.add_node (Current)
			end
		ensure
			no_referrer: (referring_node = Void) and (referring_connection = Void)
			distance_positive: distance >= 0
			fresh: not processed
			place_set: place = a_place
			position_set: position = a_position
			no_neighbors: connection_list.is_empty
		end

feature -- Access

	place: TRAFFIC_PLACE
			-- Place that it belongs to

	position: EM_VECTOR_2D
			-- Position of the node in the map

	connection_list: TWO_WAY_CIRCULAR [TRAFFIC_CONNECTION]

	hash_code: INTEGER is
			-- Hash code value
		do
			Result := ([place, position]).hash_code
		end

--	distance: REAL
			-- Length of the shortest path to `item' until now

feature -- Element change

	set_position (a_position: EM_VECTOR_2D) is
			-- Set position to `a_position'.
		require
			position_exists: a_position /= Void
		do
			position := a_position
		ensure
			position_set: position = a_position
		end

feature {TRAFFIC_PLACE} -- Basic operations (map)

	add_to_map (a_map: TRAFFIC_MAP) is
			-- Add `Current' and all nodes to `a_map'.
		local
			e: TRAFFIC_ROAD_CONNECTION
			p: DS_ARRAYED_LIST [EM_VECTOR_2D]
		do
			a_map.graph.put_node (Current)
			is_in_map := True
			map := a_map
			-- Connect the stop to the dummy_node
			if Current /= place.dummy_node then
				create e.make_invisible (Current, place.dummy_node, create {TRAFFIC_TYPE_STREET}.make, a_map.graph.id_manager.next_free_index, "undirected")
				create p.make (2)
				p.put_first (position)
				p.put_last (place.dummy_node.position)
				e.set_polypoints (p)
				e.add_to_map (a_map)
			end
		ensure then
			graph_has: a_map.graph.has_node (Current)
		end

	remove_from_map is
			-- Remove all nodes from `a_map'.
		do
			is_in_map := False
			map := Void
		end

feature {TRAFFIC_GRAPH} -- Element change

	put_connection (a_connection: like referring_connection) is
			-- Insert `a_connection'.
--		require
--			incident_node: Current = a_connection.origin_impl or Current = a_connection.destination_impl
		do
			connection_list.extend (a_connection)
--		ensure
--			connection_inserted: connection_list.has (a_connection)
--			increased_degree: out_degree = old out_degree + 1
		end

--	set_referrer (a_node: like Current; a_edge: like referring_connection; a_distance: like distance) is
--			-- Set the referring connection to `a_edge' and the referring node to `a_node'.
--		require
--			positive_distance: a_distance >= 0
--			less_than_previous: a_distance < distance
--		do
--			referring_node := a_node
--			referring_connection := a_edge
--			distance := a_distance
--		ensure
--			referring_node_set: referring_node = a_node
--			referring_edge_set: referring_connection = a_edge
--			distance_set: distance = a_distance
--			smaller_than_before: distance < old distance
--		end

feature -- Status report

--	infix "<" (other: like Current): BOOLEAN is
--			-- Is current path shorter than the one of `other'?
--		do
--			Result := distance < other.distance
--		end

	is_insertable (a_map: TRAFFIC_MAP): BOOLEAN is
			-- Is `Current' insertable into `a_map'?
		do
			Result := connection_list.is_empty
		end

feature {NONE} -- Implementation

	referring_connection: TRAFFIC_CONNECTION
			-- Edge where we came from

--	referring_node: like Current
--			-- Node where we came from

--	processed: BOOLEAN
--			-- Has the node already been processed by the algorithm?


invariant
	place_not_void: place /= Void
	position_not_void: position /= Void
	item_is_self: item = Current
	connection_list_exists: connection_list /= Void
	node_in_map: is_in_map implies map.graph.has_node (Current)
--	node_not_in_map: not is_in_map implies not map.graph.has_node (Current)
--	place_in_map: place.is_in_map implies is_in_map
end
