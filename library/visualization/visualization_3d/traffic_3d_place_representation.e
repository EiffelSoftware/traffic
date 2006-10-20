indexing
	description: "Representation for places, contains them and puts them on the map"
	date: "$Date: 2005/09/26 11:22:45 $"
	revision: "$Revision: 1.23 $"

class
	TRAFFIC_3D_PLACE_REPRESENTATION

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

create
	make

feature -- Initialization

	make (a_map: TRAFFIC_MAP) is
			-- Initialize the representation for all places.
		require
			a_map_exists: a_map /= void
		do
			map := a_map
			create color.make_with_rgb (0,0,0)
				-- default color black

			create {TRAFFIC_3D_PLACE_SQUARE_REP_FACTORY} place_factory
			place_factory.set_color (color)
			create collision_polygons.make (1)

			create place_lookup.make (map.places.count)
			create place_3d_objects.make (map.places.count)
			add_places

			map.place_inserted_event.subscribe (agent process_item_inserted)
			map.place_removed_event.subscribe (agent process_item_removed)

		ensure
			place_factory_created: place_factory /= Void
			place_3d_objects_created: place_3d_objects /= Void
			place_lookup_created: place_lookup /= Void
		end

feature -- Basic operations

	draw is
			-- Draw all places.
		do
			from
				place_3d_objects.start
			until
				place_3d_objects.off
			loop
				if place_3d_objects.item_for_iteration /= Void then
					place_3d_objects.item_for_iteration.draw
			end
				place_3d_objects.forth
		end
		end

	highlight_place (a_place: TRAFFIC_PLACE; a_color: EM_COLOR) is
			-- Highlight the marked place
		require
			place_valid: a_place /= Void
		local
			old_color: EM_COLOR
			place_view: EM_3D_OBJECT
		do
			old_color := color
			color := a_color

			place_factory.set_place (a_place)
			place_factory.set_color (color)
			place_view := place_factory.create_object
			place_3d_objects.replace (place_view, place_lookup.item (a_place))

			color := old_color
			place_factory.set_color (color)
		end

	unhighlight_place (a_place: TRAFFIC_PLACE) is
			-- Unhighlight the marked place
		require
			place_valid: a_place /= Void
		local
			place_view: EM_3D_OBJECT
		do
			place_factory.set_place (a_place)
			place_view := place_factory.create_object
			place_3d_objects.replace (place_view, place_lookup.item (a_place))
		end

	add_places is
			-- add all places from the map to the places array
		local
			all_places: HASH_TABLE [TRAFFIC_PLACE, STRING]
			place_view: EM_3D_OBJECT
			place: TRAFFIC_PLACE
		do
			all_places := map.places
			from
				all_places.start
			until
				all_places.off
			loop
				place := all_places.item_for_iteration
				place_factory.set_place (place)
				place_view := place_factory.create_object
				place_3d_objects.force_last (place_view)
				place_lookup.force (place_3d_objects.count, place)
				collision_polygons.force (place_factory.collision_polygon, place_3d_objects.count)
				all_places.forth
			end
		end

	add_place (a_place: TRAFFIC_PLACE) is
			-- Add visualization for `a_place'.
		require
			a_place_has_no_view: not place_lookup.has (a_place)
		local
			place_view: EM_3D_OBJECT
		do
			place_factory.set_place (a_place)
			place_view := place_factory.create_object
			place_3d_objects.force_last (place_view)
			place_lookup.force (place_3d_objects.count, a_place)
			collision_polygons.force (place_factory.collision_polygon, place_3d_objects.count)
		ensure
			a_place_has_view: place_lookup.has (a_place)
		end

	remove_place (a_place: TRAFFIC_PLACE) is
			-- Remove visualization for `a_place'.
		require
			a_place_has_view: place_lookup.has (a_place)
		do
			place_3d_objects.put (Void, place_lookup.item (a_place))
			place_lookup.remove (a_place)
			collision_polygons.put (Void, place_lookup.item (a_place))
		ensure
			a_place_has_no_view: not place_lookup.has (a_place)
		end


feature -- Access

	collision_polygons: DS_ARRAYED_LIST[EM_POLYGON_CONVEX_COLLIDABLE]
		-- Collision polygons to check for collisions with traffic lines

	place_3d_objects: DS_ARRAYED_LIST [EM_3D_OBJECT]
			-- Container for all line section representations

	place_lookup: DS_HASH_TABLE [INTEGER, TRAFFIC_PLACE]
			--  lookup for line_section_views

	tolerance: DOUBLE is 2.0
			-- Tolerance `place_at_position'

	place_factory: TRAFFIC_3D_PLACE_FACTORY
		-- Factory for places

feature -- Element change

	set_place_factory (a_factory: TRAFFIC_3D_PLACE_FACTORY) is
			-- Set `place_factory' to `a_factory'.
		require
			a_factory_exists: a_factory /= Void
		do
			place_factory := a_factory
		ensure
			factory_set: place_factory = a_factory
		end

feature -- Status report

	place_at_position (a_point: EM_VECTOR_2D): TRAFFIC_PLACE	is
			-- Place that `a_point' is located on
			-- Returns Void if there is no place at this position
		require
			a_point_exists: a_point /= Void
		local
			places: ARRAYED_LIST [TRAFFIC_PLACE]
		do
			from
				places := map.places.linear_representation
				places.start
			until
				places.after or Result /= Void
			loop
				if a_point.x > places.item.position.x - places.item.width/2 - tolerance and a_point.x < places.item.position.x + places.item.width/2 + tolerance and
					a_point.y > places.item.position.y - places.item.breadth/2 - tolerance and a_point.y < places.item.position.y + places.item.breadth/2 + tolerance then
					Result := places.item
				end
				places.forth
			end
		end


feature -- Event handling

	process_item_inserted (a_place: TRAFFIC_PLACE) is
			-- Update visualization to include new inserted place `a_place'.
		require
			a_place_exists: a_place /= Void
		do
			add_place (a_place)
		end

	process_item_removed (a_place: TRAFFIC_PLACE) is
			-- Update visualization to drop removed place `a_place'.
		require
			a_place_exists: a_place /= Void
		do
			remove_place (a_place)
		end

feature {NONE} -- Implementation

	color: EM_COLOR
		-- Default color for places

	map: TRAFFIC_MAP
		-- Map that is displayed

end
