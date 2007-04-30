indexing
	description: "Representation for paths"
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_3D_PATH_REPRESENTATION

create
	make

feature -- Initialization

	make (a_map: TRAFFIC_MAP) is
			-- Initialize the representation and set `map' to `a_map'.
		require
			map_exists: a_map /= void
		do
			create connection_factory.make
			create place_factory.make

			create path_root.make_as_child ((create{TE_3D_SHARED_GLOBALS}).root)

			path_root.transform.set_position (0.0, 0.4, 0.0)

			create connection_color.make_with_rgb (0, 0, 255)
			create place_color.make_with_rgb (255, 0, 0)

			a_map.paths.element_inserted_event.subscribe (agent add_path (?))

		ensure
			connection_factory_created: connection_factory /= Void
			place_factory_created: place_factory /= Void
		end

feature -- Insertion

	add_path (a_path: TRAFFIC_PATH) is
			-- Generate representation for `a_path'.
		require
			a_path_exists: a_path /= Void
		local
			conns: LIST [TRAFFIC_CONNECTION]
			ls: TRAFFIC_LINE_SECTION
			node: TE_3D_NODE
			p: TRAFFIC_3D_RENDERABLE [TRAFFIC_PATH]
			c: TRAFFIC_3D_RENDERABLE [TRAFFIC_CONNECTION]
			pl: TRAFFIC_3D_RENDERABLE [TRAFFIC_PLACE]
		do
			create node.make
			create p.make_with_item (a_path, node)
			path_root.add_child (p)
			from
				conns := a_path.connections
				conns.start
			until
				conns.after
			loop
				c := connection_factory.new_connection (conns.item)
				c.set_color (connection_color)
				c.set_as_child_of (p.graphical)
				pl := place_factory.new_place_member (conns.item.origin)
				pl.set_color (place_color)
				pl.set_as_child_of (p.graphical)
				pl := place_factory.new_place_member (conns.item.destination)
				pl.set_color (place_color)
				pl.set_as_child_of (p.graphical)
				conns.forth
			end
		end

feature -- Removal

	remove_path (a_path: TRAFFIC_PATH) is
			-- Remove representation of `a_path'.
		require
			a_path_exists: a_path /= Void
		local
			n: TRAFFIC_3D_RENDERABLE [TRAFFIC_PATH]
		do
			n := path_root.child_for_item (a_path)
			if n /= Void then
				path_root.remove_child (n)
			end
		end

feature -- Access

	connection_color: EM_COLOR
			-- Color for connections

	place_color: EM_COLOR
			-- Color for places

	path_root: TRAFFIC_3D_RENDERABLE_CONTAINER [TRAFFIC_PATH]
			-- Root node for paths

	connection_factory: TRAFFIC_3D_CONNECTION_FACTORY
			-- Factory for line segments

	place_factory: TRAFFIC_3D_PLACE_FACTORY
			-- Factory for places

end
