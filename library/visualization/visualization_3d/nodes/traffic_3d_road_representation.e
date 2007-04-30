indexing
	description: "Representation for the traffic roads"
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_3D_ROAD_REPRESENTATION

create
	make

feature -- Initialization

	make (a_map: TRAFFIC_MAP) is
			-- Initialize to use road_factory for generating 3d objects for roads of the map `a_map'.
		require
			map_exists: a_map /= void
		do
			map := a_map

			create road_factory.make
			road_factory.set_width (4.5)

			create road_root.make_as_child ((create {TE_3D_SHARED_GLOBALS}).root)
			road_root.set_name("roads")
			road_root.transform.set_position(0.0, 0.02, 0.0)

			add_roads (map)

			map.roads.element_inserted_event.subscribe (agent add_road)
			map.roads.element_removed_event.subscribe (agent remove_road)

			visible := true
		ensure
			road_factory_created: road_factory /= Void
			map_set: a_map = map
		end

feature -- Status setting

	hide is
			-- sets visibility to false
		do
			visible := false
			road_root.disable_hierarchy_renderable
		end

	unhide is
			-- sets visibility to true
		do
			visible := true
			road_root.enable_hierarchy_renderable
		end

feature -- Status report

	visible: BOOLEAN
		-- Are the places visible?

feature -- Insertion

	add_roads(a_map: TRAFFIC_MAP) is
			-- Add views for all roads of `a_map'.
		require
			map_valid: a_map /= Void
		local
			all_roads: DS_HASH_TABLE [TRAFFIC_ROAD, INTEGER]
		do

			all_roads := map.roads
			from
				all_roads.start
			until
				all_roads.after
			loop
				add_road(all_roads.item_for_iteration)
				all_roads.forth
			end
		end

	add_road (a_road: TRAFFIC_ROAD) is
			-- Add view for `a_road'.
		require
			a_road_exists: a_road /= Void
			road_factory_set: road_factory /= Void
		local
			r: TRAFFIC_3D_RENDERABLE [TRAFFIC_CONNECTION]
		do
			r := road_factory.new_connection (a_road)
			r.set_color (color)
			r.set_as_child_of (road_root)
		end

feature -- Removal

	remove_road (a_road: TRAFFIC_ROAD) is
			-- Remove representation of `a_road'.
		require
			a_road_exists: a_road /= Void
		local
			n: TRAFFIC_3D_RENDERABLE [TRAFFIC_CONNECTION]
		do
			n := road_root.child_for_item (a_road)
			if n /= Void then
				road_root.remove_child (n)
			end
		end

feature -- Access

	color: EM_COLOR
			-- Color for drawing the roads

	road_factory: TRAFFIC_3D_CONNECTION_FACTORY
			-- Factory for road segments

	map: TRAFFIC_MAP
			-- Map where roads are stored

	road_root: TRAFFIC_3D_RENDERABLE_CONTAINER [TRAFFIC_ROAD]
			-- Root node for the line sections

end

