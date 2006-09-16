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

			create path_factory.make
			path_factory.add_path_type (agent create_connection, normal_type)
			path_factory.add_path_type (agent create_switch_connection, switch_type)
			path_factory.add_gauger(agent decide_path_type, decision_type)

			create connection_views.make(1)
			create shortest_path.make (2)

		ensure
			path_factory_created: path_factory /= Void
			path_objects_created: connection_views /= Void
		end

feature {TRAFFIC_3D_MAP_WIDGET} -- Interface

	draw is
			-- Draw all paths onto the screen.
		do
			-- draw all the connections in the hashtable.  					
			from connection_views.start	until connection_views.after loop
				connection_views.item_for_iteration.draw
				connection_views.forth
			end

			from shortest_path.start until shortest_path.after loop
				shortest_path.item.draw
				shortest_path.forth
			end
		end

feature {TRAFFIC_3D_MAP_WIDGET} -- Interface

	add_path (a_path: TRAFFIC_PATH) is
			-- Add `a_path'
		require
			path_exists: a_path /= Void
		local
			c: GL_VECTOR_3D [DOUBLE]
			conns: LIST [TRAFFIC_CONNECTION]
		do
			c := create {GL_VECTOR_3D[DOUBLE]}.make_xyz (1,1,1)
			from conns := a_path.connections; conns.start until conns.after loop
				add_connection (conns.item, c)
				conns.forth
			end
		end

	add_shortest_path (a_path: TRAFFIC_PATH) is
			-- Add the shortest path `a_path'
		require
			path_exists: a_path /= Void
		local
			c: GL_VECTOR_3D [DOUBLE]
			conns: LIST [TRAFFIC_CONNECTION]
		do
			shortest_path.wipe_out

			c := create {GL_VECTOR_3D[DOUBLE]}.make_xyz (1,1,1)
			from conns := a_path.connections; conns.start until conns.after loop
				if conns.item.origin = conns.item.destination and
				  then not (conns.index = conns.count or conns.index = 1) then
					is_switch := True
				end
				add_shortest_path_connection (conns.item, c)
				is_switch := False
				conns.forth
			end
		end

	remove_shortest_path is
			-- wipe out the shortest path representation
		do
			shortest_path.wipe_out
		end

feature -- Access

	connection_views: DS_HASH_TABLE [ EM_3D_OBJECT, TRAFFIC_CONNECTION]
			--  Container for all line section representations

	path_factory: TRAFFIC_3D_PATH_FACTORY
			-- Factory for line segments

	map: TRAFFIC_MAP
			-- Map where lines are stored

feature {NONE} -- Implementation

	shortest_path: ARRAYED_LIST[EM_3D_OBJECT]

	connection: TRAFFIC_CONNECTION
			-- Line section for which a representation should  be created

	path_color: GL_VECTOR_3D[DOUBLE]
			-- Vector of RGB values for the line color

	is_switch: BOOLEAN
			-- Is the line section highlighted?

	decision_type: STRING is "line_type"
			-- Name of the decision function

	normal_type: STRING is "normal"
			-- Name of the type for normal line section representations

	switch_type: STRING is "highlighted"
			-- Name of the type for highlighted line section representations

feature {NONE} -- Implementation

	decide_path_type: STRING is
			-- Line type to be taken
		do
			if is_switch then
				Result := switch_type
			else
				Result := normal_type
			end
		end

	add_connection (a_connection: TRAFFIC_CONNECTION; a_color: GL_VECTOR_3D[DOUBLE]) is
			-- Add view for `a_connection'.
		require
			a_color_exists: a_color /= Void
			a_connection_exists: a_connection /= Void
		local
			connection_view: EM_3D_OBJECT
		do
			path_color := a_color
			connection := a_connection
			path_factory.take_decision (decision_type)
			connection_view := path_factory.create_object
			connection_view.set_origin (0, line_height + 0.01, 0)
			connection_views.force (connection_view, connection)
		end

	add_shortest_path_connection (a_connection: TRAFFIC_CONNECTION; a_color: GL_VECTOR_3D[DOUBLE]) is
			-- Add view for `a_connection'.
		require
			a_color_exists: a_color /= Void
			a_connection_exists: a_connection /= Void
		local
			connection_view: EM_3D_OBJECT
		do
			path_color := a_color
			connection := a_connection
			path_factory.take_decision (decision_type)
			connection_view := path_factory.create_object
			connection_view.set_origin (0, line_height + 0.01, 0)
			shortest_path.extend (connection_view)
		end

	create_connection is
			-- Create a representation for a highlighted `connection'.
		do
			create_connection_rep (connection)
		end

	create_switch_connection is
			-- Create a specially marked connection
		local
			old_color: GL_VECTOR_3D[DOUBLE]
		do
			create old_color.make_xyz (path_color.x, path_color.y, path_color.z)
			path_color.set_xyz (0.6, 0, 0)
			create_connection_rep (connection)
			path_color.set_xyz (old_color.x, old_color.y, old_color.z)
		end


	create_connection_rep (a_connection: TRAFFIC_CONNECTION) is
			-- Create a representation for `a_connection'.
		require
			connection_exists: a_connection /= Void
		local
			i: INTEGER
			org, dst: GL_VECTOR_3D[DOUBLE]
			delta_x, delta_z, norm: DOUBLE
		do
			from
				i := 1
			until
				i >= a_connection.polypoints.count
			loop
				org := create {GL_VECTOR_3D[DOUBLE]}.make_xyz (map_to_gl_coords (a_connection.polypoints.i_th (i)).x, line_height, map_to_gl_coords (a_connection.polypoints.i_th (i)).y)
				dst := create {GL_VECTOR_3D[DOUBLE]}.make_xyz (map_to_gl_coords (a_connection.polypoints.i_th (i+1)).x, line_height, map_to_gl_coords (a_connection.polypoints.i_th (i+1)).y)
				delta_x := dst.x - org.x
				delta_z := dst.z - org.z

				norm := sqrt (delta_x*delta_x + delta_z*delta_z)

				if norm = 0 then
					norm := 1
				end
				create_plane (create {GL_VECTOR_3D[DOUBLE]}.make_xyz (org.x-delta_z*line_width/norm, org.y, org.z+delta_x*line_width/norm), create {GL_VECTOR_3D[DOUBLE]}.make_xyz (org.x+delta_z*line_width/norm, org.y, org.z-delta_x*line_width/norm), create {GL_VECTOR_3D[DOUBLE]}.make_xyz (dst.x+delta_z*line_width/norm, dst.y, dst.z-delta_x*line_width/norm) ,create {GL_VECTOR_3D[DOUBLE]}.make_xyz (dst.x-delta_z*line_width/norm, dst.y, dst.z+delta_x*line_width/norm))
				create_circle (org, path_color, line_width, line_height)

				i := i + 1
			end
		end

	create_circle (p, rgb: GL_VECTOR_3D[DOUBLE]; r, h: DOUBLE) is
			-- Create a circle at point `p' with color `rgb' and radius `r' and height `h'.
		require
			p_exists: p /= Void
			rgb_exists: rgb /= Void and then (rgb.x >= 0 and rgb.x <= 1 and rgb.y >= 0 and rgb.y <= 1 and rgb.z >= 0 and rgb.z <= 1)
			r_greater_than_zero: r > 0
		do
			gl_matrix_mode_external (Em_gl_modelview)
			gl_push_matrix_external
			gl_color3dv_external(rgb.pointer)
			-- a little bit higher than the line
			gl_translated_external (p.x, h, p.z)
			gl_rotated_external (90, 1, 0, 0)
			gl_disable_external (em_gl_lighting)
			glu_disk_external (glu_new_quadric, 0, r, 72, 1)
			gl_pop_matrix_external
			gl_flush_external
		end

	create_plane (p1, p2, p3, p4: GL_VECTOR_3D[DOUBLE]) is
			-- Draw a plane with vertices `p1', `p2', `p3' and `p4'.
		require
			p1_exists: p1 /= Void
			p2_exists: p2 /= Void
			p3_exists: p3 /= Void
			p4_exists: p4 /= Void
		do
			-- Normals all parallel to y axis
			gl_begin_external (em_gl_quads)
				gl_color3dv_external (path_color.pointer)
				gl_normal3d_external (0,1,0)
				gl_vertex3d_external (p1.x, p1.y, p1.z)
				gl_normal3d_external (0,1,0)
				gl_vertex3d_external (p2.x, p2.y, p2.z)
				gl_normal3d_external (0,1,0)
				gl_vertex3d_external (p3.x, p3.y, p3.z)
				gl_normal3d_external (0,1,0)
				gl_vertex3d_external (p4.x, p4.y, p4.z)
			gl_end
			gl_flush_external
		end

end
