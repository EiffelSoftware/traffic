indexing
	description: "A Road of the city."
	date: "$Date: 2006-03-27 19:42:12 +0200 (Mon, 27 Mar 2006) $"
	revision: "$Revision: 601 $"

class
	TRAFFIC_ROAD

inherit
	TRAFFIC_CONNECTION
		redefine
			type
--			add_to_map,
--			remove_from_map,
--			is_insertable
		end

create
	make_visible, make_invisible

feature{NONE} -- Creation

	make_visible (a_origin, a_destination: TRAFFIC_NODE; a_type: TRAFFIC_TYPE_ROAD; an_id: INTEGER; a_direction:STRING) is
			-- Initialize `Current'.
			-- If `a_list' is Void, a list of polypoints with the coordinate of `a_origin' and
			-- `a_destination' are generated.
		require
			a_origin_exists: a_origin /= Void
			a_destination_exists: a_destination /= Void
			a_type_exists: a_type /= Void
			a_direction_exists: a_direction/=Void
		do
			origin_impl := a_origin
			destination_impl := a_destination
			make_directed (origin_impl, destination_impl)
			type := a_type
			if a_direction.is_equal("directed") then
				is_directed:=true
			else
				is_directed:=false
			end
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

	make_invisible (a_origin, a_destination: TRAFFIC_NODE; a_type: TRAFFIC_TYPE_ROAD; an_id: INTEGER; a_direction:STRING) is
			-- Initialize `Current'.
			-- If `a_list' is Void, a list of polypoints with the coordinate of `a_origin' and
			-- `a_destination' are generated.
		require
			a_origin_exists: a_origin /= Void
			a_destination_exists: a_destination /= Void
			a_type_exists: a_type /= Void
			a_direction_exists: a_direction/=Void
		do
			origin_impl := a_origin
			destination_impl := a_destination
			make_directed (origin_impl, destination_impl)
			type := a_type
			if a_direction.is_equal("directed") then
				is_directed:=true
			else
				is_directed:=false
			end
			create polypoints.make (0)
			polypoints.force_last (a_origin.place.position)
			polypoints.force_last (a_destination.place.position)
			id := an_id
			is_invisible := True
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
			a_map.graph.put_road (Current)
			if not is_invisible then
				a_map.roads.force (Current, id)
			end
			is_in_map := True
			map := a_map
		ensure then
			graph_has: a_map.graph.has_edge (Current)
			map_has: not is_invisible implies a_map.roads.has (id)
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

	is_invisible: BOOLEAN
			-- Is the road visible?

end
