indexing
	description: "Representation for the traffic roads"
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_3D_ROAD_REPRESENTATION

inherit

	TRAFFIC_3D_CONSTANTS
		export {NONE} all end

	DOUBLE_MATH
		export {NONE} all end

	EM_CONSTANTS
		export {NONE} all end

	EM_TIME_SINGLETON
		export {NONE} all end

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
			create road_lookup.make (map.roads.count)
			create road_views.make (map.roads.count)
			create road_root.make_as_child ((create {TE_3D_SHARED_GLOBALS}).root)
			road_root.set_name("roads")
			road_root.transform.set_position(0.0, 0.002, 0.0)
			create collision_polygons.make (4)

			add_roads(map)

			map.road_inserted_event.subscribe (agent process_item_inserted)
--			map.road_removed_event.subscribe (agent process_item_removed)

			visible := true
		ensure
			road_factory_created: road_factory /= Void
			road_views: road_views /= Void
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
		-- are the places visible?

feature -- Basic operations

	add_roads(a_map: TRAFFIC_MAP) is
			-- Add views for all roads of `a_map'.
		require
			map_valid: a_map /= Void
		local
			all_roads: HASH_TABLE [TRAFFIC_ROAD, INTEGER]
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
			road_view: TE_3D_NODE
		do
			road_factory.set_connection (a_road)
			road_factory.set_color (0.4,0.4,0.4)
			road_factory.create_connection
			road_view := road_factory.last_3d_member
			road_view.make_child_of (road_root)
			road_views.extend (road_view)
			road_lookup.put (road_views.count, a_road)
			collision_polygons.append_last (road_factory.collision_polygons)
		ensure
		end

--	remove_road (a_road: TRAFFIC_ROAD) is
--			-- Remove representation of `a_road'.
--		require
--			a_road_exists: a_road /= Void
--		do
--			if road_lookup.has (a_road) then
--				
--				road_views.replace (Void, road_lookup.item (a_road))
--				road_lookup.remove (a_road)
--				end
--		ensure
--			roads_deleted: not road_lookup.has (a_road)
--		end

feature -- Event handling

	process_item_inserted (a_road: TRAFFIC_ROAD) is
			-- Add view for `a_road'.
		require
			a_road: a_road /= Void
		do
			add_road (a_road)
		end

--	process_item_removed (a_road: TRAFFIC_ROAD) is
--			-- Remove view for `a_road'.
--		require
--			a_road_exists: a_road /= Void
--		do
--			remove_road (a_road)
--			end

feature -- Access

	collision_polygons: DS_ARRAYED_LIST[EM_POLYGON_CONVEX_COLLIDABLE]
			-- Collision polygons to check for collisions with traffic roads

	road_factory: TRAFFIC_3D_CONNECTION_FACTORY
			-- Factory for road segments

	map: TRAFFIC_MAP
			-- Map where roads are stored

	road_views: ARRAYED_LIST [TE_3D_NODE]
			-- Container for all line section representations

	road_root: TE_3D_NODE
			-- root node for the line sections

	road_lookup: DS_HASH_TABLE [INTEGER, TRAFFIC_ROAD]
			-- Lookup for line_section_views

end

