indexing
	description: "Representation for places, contains them and puts them on the map"
	date: "$Date: 2005/09/26 11:22:45 $"
	revision: "$Revision: 1.23 $"

class
	TRAFFIC_3D_PLACE_REPRESENTATION

create
	make

feature -- Initialization

	make (a_map: TRAFFIC_MAP) is
			-- Initialize the representation for all places.
		require
			a_map_exists: a_map /= void
		do
			create color.make_with_rgb (0,0,0)
				-- default color black

			create place_factory.make
			create place_root.make_as_child((create{TE_3D_SHARED_GLOBALS}).root)
			place_root.set_name ("places")

			add_existing_places (a_map)
			a_map.places.element_inserted_event.subscribe (agent add_place (?))
			a_map.places.element_removed_event.subscribe (agent remove_place (?))

		ensure
			place_factory_created: place_factory /= Void
			place_root_exists: place_root /= Void
			color_exists: color /= Void
		end

feature -- Basic operations

	highlight_place (a_place: TRAFFIC_PLACE; a_color: TRAFFIC_COLOR) is
			-- Highlight the marked place.
		require
			place_valid: a_place /= Void
		local
			node: TRAFFIC_3D_RENDERABLE [TRAFFIC_PLACE]
		do
			node := place_root.child_for_item (a_place)
			if node /= Void then
				node.set_color (a_color)
			end
		end

	unhighlight_place (a_place: TRAFFIC_PLACE) is
			-- Unhighlight the marked place.
		require
			place_valid: a_place /= Void
		local
			node: TRAFFIC_3D_RENDERABLE [TRAFFIC_PLACE]
		do
			node := place_root.child_for_item (a_place)
			if node /= Void then
				node.set_color (color)
			end
		end

feature -- Insertion

	add_existing_places(a_map: TRAFFIC_MAP) is
			-- Add all places from the map to the places array.
		local
			all_places: TRAFFIC_EVENT_HASH_TABLE [TRAFFIC_PLACE, STRING]
		do
			all_places := a_map.places
			from
				all_places.start
			until
				all_places.off
			loop
				add_place (all_places.item_for_iteration)
				all_places.forth
			end
		end

	add_place (a_place: TRAFFIC_PLACE) is
			-- Add visualization for `a_place'.
		require
			a_place_has_no_view: not place_root.has_child (a_place)
		local
			p: TRAFFIC_3D_RENDERABLE [TRAFFIC_PLACE]
		do
			p := place_factory.new_place_member (a_place)
			place_root.add_child (p)
			p.set_color (color)
		end

feature -- Removal

	remove_place (a_place: TRAFFIC_PLACE) is
			-- Remove representation for `a_place'.
		require
			a_place_exists: a_place /= Void
		local
			node: TE_3D_NODE
		do
			node := place_root.child_for_item (a_place)
			if node /= Void then
				place_root.remove_child (node)
			end
		end


feature -- Access

	place_root: TRAFFIC_3D_RENDERABLE_CONTAINER [TRAFFIC_PLACE]
			-- root node for the 3d representations of the places

	place_factory: TRAFFIC_3D_PLACE_FACTORY
			-- Factory for places

	color: TRAFFIC_COLOR
			-- Default color for places

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

	set_color (a_color: TRAFFIC_COLOR) is
			-- Set `color' to `a_color'. May also be Void.
		require
			a_color_exists: a_color /= Void
		do
			color := a_color
		ensure
			color_set: color = a_color
		end

invariant

	place_root_exists: place_root /= Void
	place_factory_exists: place_factory /= Void
	color_exists: color /= Void

end
