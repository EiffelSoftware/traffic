indexing
	description: "Node in the graph (a node is an endpoint of a connection)"
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
		redefine
			hash_code,
			connection_list,
			referring_connection,
			put_connection
		end

	TRAFFIC_MAP_ITEM
		undefine
			is_equal,
			add_to_map,
			remove_from_map
		end

create
	make_with_place

feature {NONE} -- Initialization

	make_with_place (a_place: TRAFFIC_PLACE; a_position: TRAFFIC_COORDINATE) is
			-- Initialize `Current'.
		require
			place_not_void: a_place /= Void
			position_not_void: a_position /= Void
		do
			create connection_list.make

			item := Current
			place := a_place
			position := a_position
			create connection_list.make
			reset
			if place.dummy_node /= Void then
				place.add_node (Current)
			end
			create changed_event
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

	position: TRAFFIC_COORDINATE
			-- Position of the node in the map

	connection_list: TWO_WAY_CIRCULAR [TRAFFIC_CONNECTION]
			-- List of all connections that this node is an startpoint of

	hash_code: INTEGER is
			-- Hash code value
		do
			Result := ([place, position]).hash_code
		end

feature -- Element change

	set_position (a_position: TRAFFIC_COORDINATE) is
			-- Set position to `a_position'.
		require
			position_exists: a_position /= Void
		do
			position := a_position
			changed_event.publish ([])
		ensure
			position_set: position = a_position
		end

feature -- Status report

	is_insertable (a_map: TRAFFIC_MAP): BOOLEAN is
			-- Is `Current' insertable into `a_map'?
		do
			Result := connection_list.is_empty
		end

	is_removable: BOOLEAN is
			-- Is `Current' removable from `a_map'?
		do
			Result := True
		end

feature {TRAFFIC_PLACE} -- Basic operations (map)

	add_to_map (a_map: TRAFFIC_MAP) is
			-- Add `Current' and all nodes to `a_map'.
		local
			e: TRAFFIC_EXCHANGE_CONNECTION
			p: DS_ARRAYED_LIST [TRAFFIC_COORDINATE]
		do
			a_map.graph.put_node (Current)
			is_in_map := True
			map := a_map
			-- Connect the stop to the dummy_node
			if Current /= place.dummy_node then
				create e.make (Current, place.dummy_node, create {TRAFFIC_TYPE_STREET}.make, a_map.graph.id_manager.next_free_index)
				create p.make (2)
				p.put_first (position)
				p.put_last (place.dummy_node.position)
				e.set_polypoints (p)
				e.add_to_map (a_map)
				create e.make (place.dummy_node, Current, create {TRAFFIC_TYPE_STREET}.make, a_map.graph.id_manager.next_free_index)
				create p.make (2)
				p.put_first (place.dummy_node.position)
				p.put_last (position)
				e.set_polypoints (p)
				e.add_to_map (a_map)
			end
		ensure then
			graph_has: a_map.graph.has_node (Current)
		end

	remove_from_map is
			-- Remove all nodes from `a_map'.
		do
			map.graph.prune_node (Current)
			is_in_map := False
			map := Void
		end

feature {TRAFFIC_GRAPH} -- Element change

	put_connection (a_connection: like referring_connection) is
			-- Insert `a_connection'.
		do
			connection_list.extend (a_connection)
			changed_event.publish ([])
		end

feature {NONE} -- Implementation

	referring_connection: TRAFFIC_CONNECTION
			-- Edge where we came from

invariant

	place_not_void: place /= Void
	position_not_void: position /= Void
	item_is_self: item = Current
	connection_list_exists: connection_list /= Void

end
