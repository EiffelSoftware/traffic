indexing
	description: "Connections that represent the changing from one means of transportation to the other. Will most probably be invisible."
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_EXCHANGE_CONNECTION

inherit
	TRAFFIC_CONNECTION
		redefine
			type
		end

create
	make_exchange

feature {NONE} -- Initialization

	make_exchange (a_origin, a_destination: TRAFFIC_NODE; a_type: TRAFFIC_TYPE_ROAD; an_id: INTEGER) is
			-- Initialize `Current'.
			-- If `a_list' is Void, a list of polypoints with the coordinate of `a_origin' and
			-- `a_destination' are generated.
		require
			a_origin_exists: a_origin /= Void
			a_destination_exists: a_destination /= Void
			a_type_exists: a_type /= Void
		do
			origin_impl := a_origin
			destination_impl := a_destination
			make_directed (origin_impl, destination_impl)
			type := a_type
			create polypoints.make (0)
			polypoints.force_last (a_origin.place.position)
			polypoints.force_last (a_destination.place.position)
			id := an_id
		ensure
			origin_set: origin_impl = a_origin
			destination_set: destination_impl = a_destination
			type_set: type = a_type
			polypoints_exists: polypoints /= Void
			id_set: id = an_id
		end

feature -- Access

	hash_code: INTEGER is
			-- Hash code value
		do
			Result := ([origin, destination, id]).hash_code
		end

	type: TRAFFIC_TYPE_ROAD
			-- Road type

	id: INTEGER
			-- Id of road


feature -- Basic operations

	add_to_map (a_map: TRAFFIC_MAP) is
			-- Add `Current' and all nodes to `a_map'.
		do
			a_map.graph.put_connection (Current)
			is_in_map := True
			map := a_map
		ensure then
			graph_has: a_map.graph.has_edge (Current)
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
			Result := 	origin_impl.is_in_map and destination_impl.is_in_map and
						origin.is_in_map and destination.is_in_map
		end


end
