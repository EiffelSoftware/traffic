indexing
	description: "Representation for the traffic roads"

class
	TRAFFIC_3D_ROAD_REPRESENTATION

inherit

	TRAFFIC_3D_CONSTANTS
		export {NONE} all end

	DOUBLE_MATH
		export {NONE} all end

	EM_CONSTANTS
		export {NONE} all end

	GL_FUNCTIONS
		export {NONE} all end

	GLU_FUNCTIONS
		export {NONE} all end

	EM_TIME_SINGLETON
		export {NONE} all end

create
	make

feature -- Initialization

	make (a_map: TRAFFIC_MAP) is
			-- Create a new object.
		require
			map_exists: a_map /= void
		do
			map := a_map

			road_factory := create {TRAFFIC_3D_CONNECTION_LINE_REP_FACTORY}
			create road_lookup.make (map.roads.count)
			create road_3d_objects.make (map.roads.count)
			create collision_polygons.make (4)

			add_roads(map)

			map.road_inserted_event.subscribe (agent process_item_inserted)
			map.road_removed_event.subscribe (agent process_item_removed)
		ensure
			road_factory_created: road_factory /= Void
			road_objects_created: road_3d_objects /= Void
		end

feature {TRAFFIC_3D_MAP_WIDGET} -- Interface

	draw is
			-- Draw all roads onto the screen.
		do
			-- draw all the roads in the hashtable.	
			road_3d_objects.start
			from
				road_3d_objects.start
			until
				road_3d_objects.after
			loop
				if road_3d_objects.item_for_iteration /= Void then
					road_3d_objects.item_for_iteration.draw
			end
				road_3d_objects.forth
		end
		end


feature -- Event handling

	process_item_inserted (a_road: TRAFFIC_ROAD) is
			-- Add view for `a_road'.
		require
			a_road: a_road /= Void
		do
			add_road (a_road)
		end

	process_item_removed (a_road: TRAFFIC_ROAD) is
			-- Remove view for `a_road'.
		require
			a_road_exists: a_road /= Void
		do
			remove_road (a_road)
			end

feature {TRAFFIC_3D_MAP_WIDGET} -- Collision detection

	collision_polygons: DS_ARRAYED_LIST[EM_POLYGON_CONVEX_COLLIDABLE]
			-- Collision polygons to check for collisions with traffic roads

feature {TRAFFIC_3D_MAP_WIDGET} -- Interface

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
			road_view: EM_3D_OBJECT
			poly: DS_LINKED_LIST [EM_POLYGON_CONVEX_COLLIDABLE]
		do
			road_factory.set_connection (a_road)
			road_view := road_factory.create_object
			road_3d_objects.force_last (road_view)
			road_lookup.put (road_3d_objects.count, a_road)
			collision_polygons.append_last (road_factory.collision_polygons)
		ensure
		end

	remove_road (a_road: TRAFFIC_ROAD) is
			-- Remove representation of `a_road'.
		require
			a_road_exists: a_road /= Void
		do
			if road_lookup.has (a_road) then
				road_3d_objects.replace (Void, road_lookup.item (a_road))
				road_lookup.remove (a_road)
				end
		ensure
			roads_deleted: not road_lookup.has (a_road)
		end



feature -- Access

	road_factory: TRAFFIC_3D_CONNECTION_FACTORY
			-- Factory for road segments

	map: TRAFFIC_MAP
			-- Map where roads are stored

	road_3d_objects: DS_ARRAYED_LIST [EM_3D_OBJECT]
			-- Container for all line section representations

	road_lookup: DS_HASH_TABLE [INTEGER, TRAFFIC_ROAD]
			--  lookup for line_section_views


		end

