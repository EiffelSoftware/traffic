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
			-- Create a new object.
		require
			map_exists: a_map /= void
		do
			map := a_map

			create {TRAFFIC_3D_CONNECTION_LINE_REP_FACTORY} path_factory
			create connection_views.make(0)
			create connections_lookup.make (0)

		ensure
			path_factory_created: path_factory /= Void
			path_objects_created: connection_views /= Void
		end

feature {TRAFFIC_3D_MAP_WIDGET} -- Interface

	draw is
			-- Draw all paths onto the screen.
		do
			from
				connection_views.start
			until
				connection_views.after
			loop
				if connection_views.item_for_iteration /= Void then
				connection_views.item_for_iteration.draw
				end
				connection_views.forth
			end
		end

feature {TRAFFIC_3D_MAP_WIDGET} -- Interface

	add_path (a_path: TRAFFIC_PATH) is
			-- Add `a_path'
		require
			path_exists: a_path /= Void
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
				ls ?= conns.item
				if ls /= Void then
					if conns.item.origin = conns.item.destination and then not (conns.index = conns.count or conns.index = 1) then
						c2 := create {EM_COLOR}.make_with_rgb (120, 0, 0)
						add_connection (conns.item, c2)
					elseif not (conns.index = conns.count or conns.index = 1) then
						c1 := create {EM_COLOR}.make_with_rgb (255, 255, 255)
						add_connection (conns.item, c1)
					end
				end
				conns.forth
			end
		end

	add_connection (a_connection: TRAFFIC_CONNECTION; a_color: EM_COLOR) is
			-- Add view for `a_connection'.
		require
			a_color_exists: a_color /= Void
			a_connection_exists: a_connection /= Void
		local
			connection_view: EM_3D_OBJECT
		do
			path_factory.set_color (a_color)
			path_factory.set_connection (a_connection)
			connection_view := path_factory.create_object
			connection_view.set_origin (0, line_height + 0.01, 0)
			connection_views.force_last (connection_view)
			connections_lookup.force (connection_views.count, a_connection)
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
			if connections_lookup.has (a_connection) then
				connection_views.replace (Void, connections_lookup.item (a_connection))
				connections_lookup.remove (a_connection)
		end
		ensure
			connection_deleted: not connections_lookup.has (a_connection)
		end

feature -- Access

	connection_views: DS_ARRAYED_LIST [EM_3D_OBJECT]
			-- Container for all connection representations

	connections_lookup: DS_HASH_TABLE [INTEGER, TRAFFIC_CONNECTION]
			-- Lookup for connection views

	path_factory: TRAFFIC_3D_CONNECTION_FACTORY
			-- Factory for line segments

	map: TRAFFIC_MAP
			-- Map where lines are stored

end
