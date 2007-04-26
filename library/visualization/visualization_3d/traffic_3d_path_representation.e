indexing
	description: "Representation for paths"
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_3D_PATH_REPRESENTATION
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
			-- Initialize the representation and set `map' to `a_map'.
		require
			map_exists: a_map /= void
		do
			map := a_map

			create path_factory.make

			create connections_lookup.make (5)
			create connection_views.make(5)
			create connection_root.make_as_child ((create{TE_3D_SHARED_GLOBALS}).root)
			connection_root.transform.set_position (0.0, 0.004, 0.0)

		ensure
			path_factory_created: path_factory /= Void
			path_objects_created: connection_views /= Void
			map_set: map = a_map
		end

feature -- Basic operations

--	draw is
--			-- Draw all paths onto the screen
--		do
--			from
--				connection_views.start
--			until
--				connection_views.after
--			loop
--				if connection_views.item /= Void then
--					connection_views.item.draw
--				end
--				connection_views.forth
--			end
--		end

	add_path (a_path: TRAFFIC_PATH) is
			-- Generate representation for `a_path'.
		require
			a_path_exists: a_path /= Void
		local
			c1, c2: EM_COLOR
			conns: LIST [TRAFFIC_CONNECTION]
			ls: TRAFFIC_LINE_SECTION
		do
			from
				conns := a_path.connections
				conns.start
			until
				conns.after
			loop
	--			ls ?= conns.item
	--			if ls /= Void then
	--				if conns.item.origin = conns.item.destination and then not (conns.index = conns.count or conns.index = 1) then
	--					c2 := create {EM_COLOR}.make_with_rgb (120, 0, 0)
	--					add_connection (conns.item, c2)
	--				elseif not (conns.index = conns.count or conns.index = 1) then
						c1 := create {EM_COLOR}.make_with_rgb (255, 255, 255)
						add_connection (conns.item, c1)
	--				end
	--			end
				conns.forth
			end
		end

	add_connection (a_connection: TRAFFIC_CONNECTION; a_color: EM_COLOR) is
			-- Add view for `a_connection'.
		require
			a_color_exists: a_color /= Void
			a_connection_exists: a_connection /= Void
		local
			connection_view: TE_3D_NODE
		do
			path_factory.set_color (a_color.red, a_color.green, a_color.blue)
			path_factory.set_connection (a_connection)
			path_factory.create_connection
			connection_view := path_factory.last_3d_member
			connection_view.set_as_child_of(connection_root)
			connection_views.extend (connection_view)
			connections_lookup.force(connection_views.count, a_connection)
		end

	remove_all is
			-- Remove all connections.
		do
			connection_views.wipe_out
			connections_lookup.wipe_out
		end

	remove_path (a_path: TRAFFIC_PATH) is
			-- Remove all connections of `a_path' from the representation.
		require
			a_path_exists: a_path /= Void
		local
			conns: LIST [TRAFFIC_CONNECTION]
		do
			from
				conns := a_path.connections
				conns.start
			until
				conns.off
			loop
				remove_connection (conns.item)
				conns.forth
			end
		end

	remove_connection (a_connection: TRAFFIC_CONNECTION) is
			-- Remove `a_connection' from the representation.
		require
			a_connection_exists: a_connection /= Void
		do
--			if connections_lookup.has (a_connection) then
--				--connection_views.replace (Void, connections_lookup.item (a_connection))
--				connection_views.replace (a_connection)
--				connections_lookup.remove (a_connection)
--			end
--		ensure
--			connection_deleted: not connections_lookup.has (a_connection)
		end



feature -- Access

	connection_views: ARRAYED_LIST [TE_3D_NODE]
			-- Container for all connection representations

	connections_lookup: DS_HASH_TABLE [INTEGER, TRAFFIC_CONNECTION]
			-- Lookup for connection views

	connection_root: TE_3D_NODE
			-- root node for the connections

	path_factory: TRAFFIC_3D_CONNECTION_FACTORY
			-- Factory for line segments

	map: TRAFFIC_MAP
			-- Map where lines are stored

end
